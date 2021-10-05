#define MCntupla_cxx
#include "MCntupla2.h"
#include "TVector3.h"
#include "TLorentzVector.h"
#include <TROOT.h>
#include <TStyle.h>
#include <TH1.h>
#include <TH2.h>
#include <TProfile.h>
#include <TLegend.h>
#include <TCanvas.h>
#include <iostream>

using namespace std;

void MCntupla::Loop()
{
//   In a ROOT session, you can do:
//      root> .L MCntupla.h.C
//      root> MCntupla.h t
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

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   
   int nbins = 50;
   TH1F* mvaSignalMc;
   TH1F* ptSignalMcBarrel;
   TH1F* ptSignalMcEndcap;
   TH1F* etaSignalMc;
   TH1F* RebinptSignalMcB;
   TH1F* RebinptSignalMcE;
   int nbinpt = 7;
   double binpt[nbinpt] = {0,2.5,5,7.5,10,15,30};
	  
	
   RebinptSignalMcB = new TH1F("RebintransverseB","", nbinpt-1, binpt);
   RebinptSignalMcE = new TH1F("RebintransverseE","", nbinpt-1, binpt);  
   mvaSignalMc = new TH1F("mva","", nbins, -3, 14);
   etaSignalMc = new TH1F("pseudorapidity","", nbins, -3, 3);
   ptSignalMcBarrel = new TH1F("transverseB","", nbins, 0, 30);
   ptSignalMcEndcap = new TH1F("transverseE","", nbins, 0, 30);
	    
	   
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      
       // Look for mc truth e-/e+
	int mcPos = -999;
    int mcEle = -999;
    for (int iGen=0; iGen<nGenPart; iGen++) {
      if ( GenPart_pdgId[iGen]==11 && GenPart_status[iGen]==1 )  mcPos = iGen;
      if ( GenPart_pdgId[iGen]==-11 && GenPart_status[iGen]==1 ) mcEle = iGen;
    } 
    TVector3 mcEleTV3(0,0,0);
    if (mcEle>=0) mcEleTV3.SetPtEtaPhi(GenPart_pt[mcEle], GenPart_eta[mcEle], GenPart_phi[mcEle]);
    TVector3 mcPosTV3(0,0,0);
    if (mcPos>=0) mcPosTV3.SetPtEtaPhi(GenPart_pt[mcPos], GenPart_eta[mcPos], GenPart_phi[mcPos]);
    if (mcEle<0 || mcPos<0) cout << "Error: mc-truth not found" << endl;

	int countPF = 0;
	int countLowPt = 0;
	int overlap = 0;

    // Loop over electrons
    for (int i=0; i<nElectron; i++){
	if(Electron_isLowPt[i]==1){
		countLowPt++;
		overlap = i;
	}
	if(Electron_isPF[i]==1 && overlap!=i){
		countPF++;
	}
	}
		
	if(countLowPt!=0 && countPF!=0){
    for (int iEle=0; iEle<nElectron; iEle++) {

      // HLT 
      int iHLT_Mu9_IP6 = (int)HLT_Mu9_IP6;
      if (iHLT_Mu9_IP6==0) continue;

      // LowPt or PF only    
      if (Electron_isLowPt[iEle]==0) continue;

      // Acceptance
      if (fabs(Electron_eta[iEle])>2.4) continue;
      if (Electron_pt[iEle]<0.5)        continue;

      // Electron candidate
      TVector3 recoEleTV3(0,0,0); 
      recoEleTV3.SetPtEtaPhi(Electron_pt[iEle], Electron_eta[iEle], Electron_phi[iEle]);
      
      float minDR = 999.;
      float deltaPtOverPt = 999.;
      if (mcEle>=0 && (mcEleTV3.DeltaR(recoEleTV3))<minDR) { 
		minDR = mcEleTV3.DeltaR(recoEleTV3);
		deltaPtOverPt = fabs(Electron_pt[iEle]-GenPart_pt[mcEle])/GenPart_pt[mcEle];
      }
      if (mcPos>=0 && (mcPosTV3.DeltaR(recoEleTV3))<minDR) { 
		minDR = mcPosTV3.DeltaR(recoEleTV3);
		deltaPtOverPt = fabs(Electron_pt[iEle]-GenPart_pt[mcPos])/GenPart_pt[mcPos];
      }
      
      int trueEle = -1;
      if (minDR<0.03 && deltaPtOverPt<0.5) trueEle=1;

      // Full eta/pT range
      if (trueEle==1) { 
		  mvaSignalMc->Fill(Electron_mvaId[iEle]);     
		  if(Electron_eta[iEle]<1.479 && Electron_eta[iEle]>-1.479){
		  ptSignalMcBarrel->Fill(Electron_pt[iEle]);
		  RebinptSignalMcB->Fill(Electron_pt[iEle]);
		  }
		  if(Electron_eta[iEle]>1.479 || Electron_eta[iEle]<-1.479){	
		  ptSignalMcEndcap->Fill(Electron_pt[iEle]);		  
		  RebinptSignalMcE->Fill(Electron_pt[iEle]);		  
	      }
		  etaSignalMc->Fill(Electron_eta[iEle]);
	  }
	}
	}
	}
	
	/*TCanvas canv1("canv", "canvas for plotting", 1280, 950);
	
	mvaSignalMc->Draw("");
	//gPad->SetLogy();
	mvaSignalMc->GetYaxis()->SetMaxDigits(4);
	//mvaSignalMc->GetXaxis()->SetLimits(-1.1, 1.1);
	mvaSignalMc->GetXaxis()->SetTitle("mvaID");
	mvaSignalMc->GetYaxis()->SetTitle("Events/0.34");
	//canv1.SaveAs("grafici/mva.pdf");
		
	
	TCanvas canv2("canv", "canvas for plotting", 1280, 950);
		
	ptSignalMc->Draw("");
	//gPad->SetLogy();
	ptSignalMc->GetYaxis()->SetMaxDigits(4);
	//ptSignalMc->GetXaxis()->SetLimits(-1.1, 1.1);
	ptSignalMc->GetXaxis()->SetTitle("p_{t} GeV");
	ptSignalMc->GetYaxis()->SetTitle("Events/0.6");
	//canv2.SaveAs("grafici/pt.pdf");

	
	TCanvas canv3("canv", "canvas for plotting", 1280, 950);
		
	etaSignalMc->Draw("");
	//gPad->SetLogy();
	etaSignalMc->GetYaxis()->SetMaxDigits(4);
	//etaSignalMc->GetXaxis()->SetLimits(-1.1, 1.1);
	etaSignalMc->GetXaxis()->SetTitle("#eta");
	etaSignalMc->GetYaxis()->SetTitle("Events/0.12");
	//canv3.SaveAs("grafici/eta.pdf");
	*/
	TFile* fout = new TFile("grafMC.root","RECREATE");

	fout->cd();
	mvaSignalMc->Write();
    ptSignalMcBarrel->Write();
    ptSignalMcEndcap->Write();
    RebinptSignalMcB->Write();
    RebinptSignalMcE->Write();
    etaSignalMc->Write();
	fout->Write();
	fout->Close();
	
	
}
