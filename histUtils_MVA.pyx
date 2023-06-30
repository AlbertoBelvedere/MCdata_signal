include "ROOT.pxi"
import math
#from fitUtils import *

##################
# Helper functions
##################

# Check if a string can be a number
def is_number(s):
    try:
        float(s)
        return True
    except ValueError:
        return False

cdef void removeNegativeBins(TH1D* h):
    for i in xrange(h.GetNbinsX()):
        if (h.GetBinContent(i) < 0):
            h.SetBinContent(i, 0)

##################################
# To Fill Tag and Probe histograms
##################################

def makePassFailHistograms( sample, flag, bindef, var ):

    #####################
    # C++ Initializations
    #####################

    # For tree branches
    cdef float pair_mass
    cdef float el_IsoMVA94XV2

    # For the loop
    cdef int nbins = 0
    cdef int nevts
    cdef int frac_of_nevts
    cdef int index
    cdef int bnidx
    cdef int outcount = 0
    cdef double weight

    cdef TChain* tree

    cdef TTreeFormula* flag_formula
    cdef vector[TTreeFormula*] bin_formulas

    cdef vector[TH1D*] hMVA
    cdef vector[TH1D*] hPair

    cdef TList formulas_list

    cdef double epass = -1.0
    cdef double efail = -1.0

    ###############################
    # Read in Tag and Probe Ntuples
    ###############################

    tree = new TChain(sample.tree)

    for p in sample.path:
        print ' adding rootfile: ', p
        tree.Add(str.encode(p))

    if not sample.puTree is None:
        print ' - Adding weight tree: %s from file %s ' % (sample.weight.split('.')[0], sample.puTree)
        tree.AddFriend(sample.weight.split('.')[0],sample.puTree)

    #################################
    # Prepare hists, cuts and outfile
    #################################

    cdef TFile* outfile = new TFile(str.encode(sample.histFile),'recreate')

    cutBinList = []

    #flag_formula = new TTreeFormula('Flag_Selection', str.encode(flag), tree)

    for ib in range(len(bindef['bins'])):
        hMVA.push_back(new TH1D('%s_MVA' % bindef['bins'][ib]['name'],bindef['bins'][ib]['title'],var['11'],var['-10'],var['1']))
        hPair.push_back(new TH1D('%s_Pair' % bindef['bins'][ib]['name'],bindef['bins'][ib]['title'],var['nbins'],var['min'],var['max']))
	hMVA[ib].Sumw2()
        hPair[ib].Sumw2()

        cuts = bindef['bins'][ib]['cut']
        if sample.mcTruth :
            cuts = '%s && mcTrue==1' % cuts
        if not sample.cut is None :
            cuts = '%s && %s' % (cuts,sample.cut)

        if sample.isMC and not sample.weight is None:
            cutBin = '( %s ) * %s ' % (cuts, sample.weight)
            if sample.maxWeight < 999:
                cutBin = '( %s ) * (%s < %f ? %s : 1.0 )' % (cuts, sample.weight,sample.maxWeight,sample.weight)
        else:
            cutBin = '%s' % cuts

        cutBinList.append(cutBin)

        bin_formulas.push_back(new TTreeFormula('%s_Selection' % bindef['bins'][ib]['name'], str.encode(cutBin), tree))

        formulas_list.Add(<TObject*>bin_formulas[nbins])

        nbins = nbins + 1

    #formulas_list.Add(<TObject*>flag_formula)
    tree.SetNotify(<TObject*> &formulas_list)

    ######################################
    # Deactivate branches and set adresses
    ######################################

    # Find out with variables are used to activate the corresponding branches
    replace_patterns = ['&', '|', '-', 'cos(', 'sqrt(', 'fabs(', 'abs(', '(', ')', '>', '<', '=', '!', '*', '/', '[', ']']
    branches = " ".join(cutBinList) + " pair_mass "
    branches2 = " ".join(cutBinList) + " el_IsoMVA94XV2 "
    for p in replace_patterns:
        branches = branches.replace(p, ' ')

    for p in replace_patterns:
        branches2 = branches2.replace(p, ' ')

    # Note: with str.encode we convert a string to bytes, which is needed for C++ functions
    branches = set([str.encode(x) for x in branches.split(" ") if x != '' and not is_number(x)])
    branches2 = set([str.encode(x) for x in branches2.split(" ") if x != '' and not is_number(x)])

    # Activate only branches which matter for the tag selection
    tree.SetBranchStatus("*", 0)

    for br in branches:
        tree.SetBranchStatus(br, 1)

    for br in branches2:
        tree.SetBranchStatus(br, 1)
    # Set adress of pair mass
    tree.SetBranchAddress("pair_mass", <void*>&pair_mass)
    tree.SetBranchAddress("el_IsoMVA94XV2", <void*>&el_IsoMVA94XV2)

    ################
    # Loop over Tree
    ################

    nevts = tree.GetEntries()
    frac_of_nevts = nevts/20

    print("Starting event loop to fill histograms..")

    for index in range(nevts):
        if index % frac_of_nevts == 0:
            print outcount, "%", sample.name
            outcount = outcount + 5

        tree.GetEntry(index)

        for bnidx in range(nbins):
            weight = bin_formulas[bnidx].EvalInstance(0)
            if weight:
                hPair[bnidx].Fill(pair_mass, weight)
                hMVA[bnidx].Fill(el_IsoMVA94XV2, weight)
                break

    #####################
    # Deal with the Hists
    #####################

    for ib in range(len(bindef['bins'])):
        removeNegativeBins(hPair[ib])
        removeNegativeBins(hMVA[ib])

        hMVA[ib].Write(hMVA[ib].GetName())
        hPair[ib].Write(hPair[ib].GetName())

    ##########
    # Clean up
    ##########

    outfile.Close()
    tree.Delete()
