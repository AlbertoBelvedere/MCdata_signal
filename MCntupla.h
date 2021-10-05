//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue May 18 13:01:34 2021 by ROOT version 6.14/02
// from TTree fitter_tree/reduced tree for T&P
// found on file: Formatted_March21_BuToKJpsi_Toee_v2___noBcutApplied__noPFIdApplied__probeLowPt.root
//////////////////////////////////////////////////////////

#ifndef MCntupla_h
#define MCntupla_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class MCntupla {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxhlt8ip3 = 1;

   // Declaration of leaf types
   Int_t           hlt_12ip6;
   Int_t           hlt_9ip6;
   Int_t           hlt_9ip5;
   Int_t           hlt_9ip4;
   Int_t           hlt_7ip4;
   Int_t           hlt_8ip6;
   Int_t           hlt_8ip5;
   Int_t           hlt_8ip3;
   Int_t           hlt_8d5ip3d5;
   Int_t           hlt_10d5ip3d5;
   Int_t           numvtx;
   Int_t           tagMatchMc;
   Int_t           tagMatchMcFromJPsi;
   Float_t         tagPt;
   Float_t         tagEta;
   Float_t         tagRelIso;
   Float_t         tagPfmvaId;
   Float_t         probePt;
   Float_t         probeAbsEta;
   Float_t         probeEta;
   Int_t           probeIsPF;
   Int_t           probeIsPFOverlap;
   Int_t           probeIsLowPt;
   Float_t         probeMvaId;
   Float_t         probePfmvaId;
   Float_t         probeUnBiased;
   Float_t         probePtBiased;
   Int_t           probeConvVeto;
   Int_t           probeMatchMc;
   Int_t           probeMatchMcFromJPsi;
   Float_t         probeTrkRelIso;
   Float_t         probePFRelIso;
   Float_t         probeFBrem;
   Float_t         probeDxySig;
   Float_t         probeDzSig;
   Float_t         elesDr;
   Float_t         K_pt;
   Float_t         B_mass;
   Float_t         B_pt;
   Float_t         B_cos2d;
   Float_t         B_svprob;
   Float_t         B_xysig;
   Int_t           B_matchMC;
   Float_t         pair_mass;
   Float_t         weight;

   // List of branches
   TBranch        *b_hlt_12ip6;   //!
   TBranch        *b_hlt_9ip6;   //!
   TBranch        *b_hlt_9ip5;   //!
   TBranch        *b_hlt_9ip4;   //!
   TBranch        *b_hlt_7ip4;   //!
   TBranch        *b_hlt_8ip6;   //!
   TBranch        *b_hlt_8ip5;   //!
   TBranch        *b_hlt8ip3_;   //!
   TBranch        *b_hlt_8d5ip3d5;   //!
   TBranch        *b_hlt_10d5ip3d5;   //!
   TBranch        *b_numvtx;   //!
   TBranch        *b_tagMatchMc;   //!
   TBranch        *b_tagMatchMcFromJPsi;   //!
   TBranch        *b_tagPt;   //!
   TBranch        *b_tagEta;   //!
   TBranch        *b_tagRelIso;   //!
   TBranch        *b_tagPfmvaId;   //!
   TBranch        *b_probePt;   //!
   TBranch        *b_probeAbsEta;   //!
   TBranch        *b_probeEta;   //!
   TBranch        *b_probeIsPF;   //!
   TBranch        *b_probeIsPFOverlap;   //!
   TBranch        *b_probeIsLowPt;   //!
   TBranch        *b_probeMvaId;   //!
   TBranch        *b_probePfmvaId;   //!
   TBranch        *b_probeUnBiased;   //!
   TBranch        *b_probePtBiased;   //!
   TBranch        *b_probeConvVeto;   //!
   TBranch        *b_probeMatchMc;   //!
   TBranch        *b_probeMatchMcFromJPsi;   //!
   TBranch        *b_probeTrkRelIso;   //!
   TBranch        *b_probePFRelIso;   //!
   TBranch        *b_probeFBrem;   //!
   TBranch        *b_probeDxySig;   //!
   TBranch        *b_probeDzSig;   //!
   TBranch        *b_elesDr;   //!
   TBranch        *b_K_pt;   //!
   TBranch        *b_B_mass;   //!
   TBranch        *b_B_pt;   //!
   TBranch        *b_B_cos2d;   //!
   TBranch        *b_B_svprob;   //!
   TBranch        *b_B_xysig;   //!
   TBranch        *b_B_matchMC;   //!
   TBranch        *b_pair_mass;   //!
   TBranch        *b_weight;   //!

   MCntupla(TTree *tree=0);
   virtual ~MCntupla();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef MCntupla_cxx
MCntupla::MCntupla(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Formatted_March21_BuToKJpsi_Toee_v2___noBcutApplied__noPFIdApplied__probeLowPt.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("Formatted_March21_BuToKJpsi_Toee_v2___noBcutApplied__noPFIdApplied__probeLowPt.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("Formatted_March21_BuToKJpsi_Toee_v2___noBcutApplied__noPFIdApplied__probeLowPt.root:/tnpAna");
      dir->GetObject("fitter_tree",tree);

   }
   Init(tree);
}

MCntupla::~MCntupla()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t MCntupla::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t MCntupla::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void MCntupla::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("hlt_12ip6", &hlt_12ip6, &b_hlt_12ip6);
   fChain->SetBranchAddress("hlt_9ip6", &hlt_9ip6, &b_hlt_9ip6);
   fChain->SetBranchAddress("hlt_9ip5", &hlt_9ip5, &b_hlt_9ip5);
   fChain->SetBranchAddress("hlt_9ip4", &hlt_9ip4, &b_hlt_9ip4);
   fChain->SetBranchAddress("hlt_7ip4", &hlt_7ip4, &b_hlt_7ip4);
   fChain->SetBranchAddress("hlt_8ip6", &hlt_8ip6, &b_hlt_8ip6);
   fChain->SetBranchAddress("hlt_8ip5", &hlt_8ip5, &b_hlt_8ip5);
   fChain->SetBranchAddress("hlt_8ip3", &hlt_8ip3, &b_hlt8ip3_);
   fChain->SetBranchAddress("hlt_8d5ip3d5", &hlt_8d5ip3d5, &b_hlt_8d5ip3d5);
   fChain->SetBranchAddress("hlt_10d5ip3d5", &hlt_10d5ip3d5, &b_hlt_10d5ip3d5);
   fChain->SetBranchAddress("numvtx", &numvtx, &b_numvtx);
   fChain->SetBranchAddress("tagMatchMc", &tagMatchMc, &b_tagMatchMc);
   fChain->SetBranchAddress("tagMatchMcFromJPsi", &tagMatchMcFromJPsi, &b_tagMatchMcFromJPsi);
   fChain->SetBranchAddress("tagPt", &tagPt, &b_tagPt);
   fChain->SetBranchAddress("tagEta", &tagEta, &b_tagEta);
   fChain->SetBranchAddress("tagRelIso", &tagRelIso, &b_tagRelIso);
   fChain->SetBranchAddress("tagPfmvaId", &tagPfmvaId, &b_tagPfmvaId);
   fChain->SetBranchAddress("probePt", &probePt, &b_probePt);
   fChain->SetBranchAddress("probeAbsEta", &probeAbsEta, &b_probeAbsEta);
   fChain->SetBranchAddress("probeEta", &probeEta, &b_probeEta);
   fChain->SetBranchAddress("probeIsPF", &probeIsPF, &b_probeIsPF);
   fChain->SetBranchAddress("probeIsPFOverlap", &probeIsPFOverlap, &b_probeIsPFOverlap);
   fChain->SetBranchAddress("probeIsLowPt", &probeIsLowPt, &b_probeIsLowPt);
   fChain->SetBranchAddress("probeMvaId", &probeMvaId, &b_probeMvaId);
   fChain->SetBranchAddress("probePfmvaId", &probePfmvaId, &b_probePfmvaId);
   fChain->SetBranchAddress("probeUnBiased", &probeUnBiased, &b_probeUnBiased);
   fChain->SetBranchAddress("probePtBiased", &probePtBiased, &b_probePtBiased);
   fChain->SetBranchAddress("probeConvVeto", &probeConvVeto, &b_probeConvVeto);
   fChain->SetBranchAddress("probeMatchMc", &probeMatchMc, &b_probeMatchMc);
   fChain->SetBranchAddress("probeMatchMcFromJPsi", &probeMatchMcFromJPsi, &b_probeMatchMcFromJPsi);
   fChain->SetBranchAddress("probeTrkRelIso", &probeTrkRelIso, &b_probeTrkRelIso);
   fChain->SetBranchAddress("probePFRelIso", &probePFRelIso, &b_probePFRelIso);
   fChain->SetBranchAddress("probeFBrem", &probeFBrem, &b_probeFBrem);
   fChain->SetBranchAddress("probeDxySig", &probeDxySig, &b_probeDxySig);
   fChain->SetBranchAddress("probeDzSig", &probeDzSig, &b_probeDzSig);
   fChain->SetBranchAddress("elesDr", &elesDr, &b_elesDr);
   fChain->SetBranchAddress("K_pt", &K_pt, &b_K_pt);
   fChain->SetBranchAddress("B_mass", &B_mass, &b_B_mass);
   fChain->SetBranchAddress("B_pt", &B_pt, &b_B_pt);
   fChain->SetBranchAddress("B_cos2d", &B_cos2d, &b_B_cos2d);
   fChain->SetBranchAddress("B_svprob", &B_svprob, &b_B_svprob);
   fChain->SetBranchAddress("B_xysig", &B_xysig, &b_B_xysig);
   fChain->SetBranchAddress("B_matchMC", &B_matchMC, &b_B_matchMC);
   fChain->SetBranchAddress("pair_mass", &pair_mass, &b_pair_mass);
   fChain->SetBranchAddress("weight", &weight, &b_weight);
   Notify();
}

Bool_t MCntupla::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void MCntupla::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t MCntupla::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef MCntupla_cxx
