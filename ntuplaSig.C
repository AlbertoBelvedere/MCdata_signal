#define ntuplaSig_cxx
#include "ntuplaSig.h"

#include <iostream>
#include <fstream>

#include "TH1F.h"
#include "TPaveStats.h"
#include "TH2F.h"
#include "THStack.h"
#include "TCanvas.h"
#include "TTree.h"
#include "TFile.h"
#include "TString.h"
#include "TStyle.h"
#include "TLegend.h"

void ntuplaSig::Loop()
{
//   In a ROOT session, you can do:
//      root> .L ntuplaSig.C
//      root> ntuplaSig t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
	if (fChain == 0) return;

	TFile outfile("analysis.root","RECREATE"); 

	Long64_t nentries = fChain->GetEntriesFast();
		 
	Long64_t nbytes = 0, nb = 0;
	for (Long64_t jentry=0; jentry<nentries;jentry++) {
		Long64_t ientry = LoadTree(jentry);
		if (ientry < 0) break;
			nb = fChain->GetEntry(jentry);   nbytes += nb;
			// if (Cut(ientry) < 0) continue;
	}
	
	
    int nbins = 50;
    float min = 4.7; 
    float max = 5.6;
	TH1F* h1;
	TH1F* h2;
	TH1F* h3;
	THStack* hs;
	
	h1 = new TH1F("Reconstructed p_{t}","", nbins, min, max);
	h2 = new TH1F("histogram2","", nbins, min, max);
	h3 = new TH1F("histogram3","", nbins, min, max);
	hs = new THStack("hs","");
	
	h1->SetLineColor(kBlue);
	h1->SetFillColor(kBlue);
	h1->SetFillStyle(0);
	h1->SetLineWidth(1);
	
	h2->SetLineColor(kBlack);	 
	h2->SetFillColor(kBlack);	 
	h2->SetFillStyle(3004);
	h2->SetLineWidth(2);
	
	h3->SetLineColor(kRed);
	h3->SetFillColor(kRed);
	h3->SetFillStyle(3004);
	h3->SetLineWidth(2);
	
	   
	for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		if(hlt_9ip6==1){
			if(B_mass>4.7 && B_mass<5.6){
				h1->Fill(B_mass);
			}
		}
	}	
	   
	hs->Add(h1, "HIST");
	
	TCanvas canv1("canv", "canvas for plotting", 1280, 950);
	/*auto legend1 = new TLegend(0.1,0.7,0.3,0.9);
	legend1 -> AddEntry(hs, "Candidates", "f");
	legend1 -> AddEntry(h2, "Background", "f");
	legend1 -> AddEntry(h3, "B->J/#psi(e^{+}e^{-})K", "f");*/
	
	hs->Draw();
	//gPad->SetLogy();
	hs->GetYaxis()->SetMaxDigits(4);
	hs->GetXaxis()->SetLimits(4.6, 5.7);
	hs->GetXaxis()->SetTitle("Reconstructed mass [GeV]");
	hs->GetYaxis()->SetTitle("Events/0.018");
	//legend1->Draw();
	canv1.SaveAs("grafici/Bmass_cut.pdf");
	
	
	double min2 = 0;
	double max2 = 50;
	double nbins2 = 50;
	TH1F* sig;
	TH1F* sigMCweighted;
	THStack* vert_compare;
	
	
	vert_compare = new THStack("hs1","");

	sig = new TH1F("sig","", nbins2, min2, max2);
	sigMCweighted = new TH1F("sigMCweighted","", nbins2, min2, max2);

	
	for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		if(hlt_9ip6==1){
		if(B_pt>5){
		if(B_svprob>0.1){
		if(B_cos2d>0.99){
		if(B_mass<5.6 && B_mass>4.7){
		if(tagPfmvaId>0){
			sig->Fill(numvtx);
		}
		}
		}
		}
		}
		}
		}
		
	TFile* fout = new TFile("num_verteces.root","RECREATE");
	fout->cd();
	//bckg->Write();
    sig->Write();
	fout->Write();
	fout->Close();
	
				
	outfile.Close();
}
