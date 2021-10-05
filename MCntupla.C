#define MCntupla_cxx
#include "MCntupla.h"

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
#include "math.h"


void MCntupla::Loop()
{
//   In a ROOT session, you can do:
//      root> .L MCntupla.C
//      root> MCntupla t
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
    
    int a=0;
    int b=0;
    int i=0;
    int j=0;
    int c;
    int nbins = 50;
    int pt = 10;
    float efficienza, mistag_rate;
    float min = 4.7; 
    float max = 5.6;
	TH1F* h;
	    
    for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		if(hlt_9ip6==1){
			a += B_matchMC;
			i ++;
		}
		b += B_matchMC;
	} 
    
    c = i-a;
    
    std::cout << "Numero di eventi di fondo  = " << nentries - b << "\n";
    std::cout << "Numero di B corretti totali  = " << b << "\n\n\n";
    
    std::cout << "Trigger" << "\n";
    std::cout << "Numero di eventi di fondo dopo trigger  = " << c << "\n";
    std::cout << "Numero di eventi di segnale dopo trigger  = " << a << "\n\n\n";
    
    a=0;
    i=0;
    b=0;
    
    for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		if(hlt_9ip6==1){
			b += B_matchMC;
			if(B_mass < 5.5 && B_mass > 4.9){
				a += B_matchMC;
				i ++;
			}
		}
	}
    
    std::cout << "pt(B) > 5 GeV" << "\n";
    std::cout << "Numero di eventi di fondo dopo 4.9 GeV < m(B) < 5.5 GeV  = " << i-a << "\n";
    std::cout << "Numero di eventi di segnale dopo 4.9 GeV < m(B) < 5.5 GeV  = " << a << "\n";
	efficienza =float(a)/b;
	mistag_rate = float(i-a)/c;
	std::cout << "Efficienza = " << efficienza << "\n";
	std::cout << "Mistag rate = " << mistag_rate << "\n\n\n";
    
    a=0;
    i=0;
    b=0;
    
    for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		if(hlt_9ip6==1){
			b += B_matchMC;
			if(B_pt>5){
				a += B_matchMC;
				i ++;
			}
		}
	}
    
    std::cout << "pt(B) > 5 GeV" << "\n";
    std::cout << "Numero di eventi di fondo dopo pt(B) > 5 GeV  = " << i-a << "\n";
    std::cout << "Numero di eventi di segnale dopo pt(B) > 5 GeV  = " << a << "\n";
	efficienza =float(a)/b;
	mistag_rate = float(i-a)/c;
	std::cout << "Efficienza = " << efficienza << "\n";
	std::cout << "Mistag rate = " << mistag_rate << "\n\n\n";
    
    a=0;
    i=0;
    
    for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		if(hlt_9ip6==1){
			if(B_svprob>0.1){
				a += B_matchMC;
				i ++;
			}
		}
	}
 
    std::cout << "Secondary vertex probability > 0.1" << "\n";
    std::cout << "Numero di eventi di fondo dopo secondary vertex probability > 0.1  = " << i-a << "\n";
	std::cout << "Numero di eventi di segnale dopo secondary vertex probability > 0.1  = " << a << "\n";
	efficienza =float(a)/b;
	mistag_rate = float(i-a)/c;
	std::cout << "Efficienza = " << efficienza << "\n";
	std::cout << "Mistag rate = " << mistag_rate << "\n\n\n";
    
    a=0;
    i=0;    
    
	for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		if(hlt_9ip6==1){
			if(B_cos2d>0.99){
				a += B_matchMC;
				i ++;
			}
		}
	}

    std::cout << "cos 2D > 0.99" << "\n";
    std::cout << "Numero di eventi di fondo dopo cos 2D > 0.99  = " << i-a << "\n";
	std::cout << "Numero di eventi di segnale dopo cos 2D > 0.99  = " << a << "\n";
	efficienza =float(a)/b;
	mistag_rate = float(i-a)/c;
	std::cout << "Efficienza = " << efficienza << "\n";
	std::cout << "Mistag rate = " << mistag_rate << "\n\n\n";
    
    a=0;
    i=0;    
        
	for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		if(hlt_9ip6==1){
			if(B_mass<5.6 && B_mass>4.7){
				a += B_matchMC;
				i ++;
			}
		}
	}

	std::cout << "GeV 4.5 < m_B < 6.5 GeV  = \n";
	std::cout << "Numero di eventi di fondo dopo GeV 4.5 < m_B < 6.5 GeV  = " << i-a << "\n";
	std::cout << "Numero di eventi di segnale dopo GeV 4.5 < m_B < 6.5 GeV  = " << a << "\n";
	efficienza =float(a)/b;
	mistag_rate = float(i-a)/c;
	std::cout << "Efficienza = " << efficienza << "\n";
	std::cout << "Mistag rate = " << mistag_rate << "\n\n\n";
	
	 
    a=0;
    i=0;    
        
	for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		if(hlt_9ip6==1){
			if(tagPfmvaId > 0){
				a += B_matchMC;
				i ++;
			}
		}
	}

	std::cout << "tagPfmvaId > -1= \n";
	std::cout << "Numero di eventi di fondo dopo tagPfmvaId > -1  = " << i-a << "\n";
	std::cout << "Numero di eventi di segnale dopo tagPfmvaId > -1  = " << a << "\n";
	efficienza =float(a)/b;
	mistag_rate = float(i-a)/c;
	std::cout << "Efficienza = " << efficienza << "\n";
	std::cout << "Mistag rate = " << mistag_rate << "\n\n\n";
	
	a=0;
    i=0;    
	
	for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		if(hlt_9ip6==1){
			if(B_mass < 5.6 && B_mass > 4.7){
				if(B_pt>5){
					if(B_svprob>0.1){
						if(B_cos2d>0.99){
							//if(tagPfmvaId>0){							
								a += B_matchMC;
								i ++;
							//}
						}
					}
				}
			}
		}
	}


	std::cout << "Tutti i tagli" << "\n";
	std::cout << "Numero di eventi di fondo dopo tutti i tagli  = " << i-a << "\n";
	std::cout << "Numero di eventi di segnale dopo tutti i tagli  = " << a << "\n";
	efficienza = float(a)/b;
	mistag_rate = float(i-a)/c;
	std::cout << "Efficienza = " << efficienza << "\n";
	std::cout << "Mistag rate = " << mistag_rate << "\n\n\n";
		
	a=0;
    i=0;  
    b=0;
    c=0; 
    int x = 0;

	for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		if(hlt_9ip6==1){
			x++;
			if(tagPt <30 && tagPt >25){
				//if(tagEta > 2 || tagEta < -2){
					if(tagMatchMcFromJPsi == 0){
						c++;
					}
					else{
						b++;
					}
					if(tagPfmvaId>0){
						a += tagMatchMcFromJPsi;
						i ++;
					}
				//}
			}
		}
	}
	
	std::cout << "tagpf \n";
	std::cout << "Numero di eventi di fondo per pt " << pt << " GeV = " << i-a << "\n";
	std::cout << "Numero di eventi di segnale per pt " << pt << " GeV = " << a << "\n";
	efficienza =float(a)/b*100;
	mistag_rate = float(i-a)/c*100;
	std::cout << "Efficienza = " << efficienza << "\n";
	std::cout << "Mistag rate = " << mistag_rate << "\n\n\n";

	
	h = new TH1F("histogram","", nbins, min, max);
	
	for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		h->Fill(B_pt);
	}
	
	TCanvas canv("canv", "canvas for plotting", 1080, 850);
	//gPad->SetLogy();
	h->Draw();
	gPad->Update();
	h->GetYaxis()->SetMaxDigits(4);
	h->GetXaxis()->SetLimits(4.4, 6.2);
	h->GetXaxis()->SetTitle("pt(B) [GeV]");
	h->GetYaxis()->SetTitle("Events/0.34");
	//TPaveStats *st = (TPaveStats*)h->FindObject("stats");
	//st->SetX1NDC(0.65); //new x start position
	//st->SetX2NDC(0.85); //new x end position
	//canv3.SaveAs("pt_B.pdf");
	
	
	
	TH1F* h1;
	TH1F* h2;
	TH1F* h3;
	THStack* hs;
	
	h1 = new TH1F("histogram1","", nbins, min, max);
	h2 = new TH1F("histogram2","", nbins, min, max);
	h3 = new TH1F("histogram3","", nbins, min, max);
	hs = new THStack("hs","");
	
	h1->SetLineColor(kBlack);
	h1->SetFillColor(kBlack);
	h1->SetFillStyle(0);
	h1->SetLineWidth(2);
	
	h2->SetLineColor(kBlue);	 
	h2->SetFillColor(kBlue);	 
	h2->SetFillStyle(3004);
	h2->SetLineWidth(2);
	
	h3->SetLineColor(kRed);
	h3->SetFillColor(kRed);
	h3->SetFillStyle(3004);
	h3->SetLineWidth(2);
	
	/*for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		if(tagEta > 1.479 || tagEta < -1.479){
			//h1->Fill(B_cos2d);
			if(tagMatchMcFromJPsi == 0){
				h2->Fill(tagPfmvaId);
			}
			else{
				h3->Fill(tagPfmvaId);
			}
		}
	}*/
	//h2->SetBinContent(h2->GetNbinsX(), h2->GetBinContent(h2->GetNbinsX()) + h2->GetBinContent(0));
	/*h2->SetBinContent(1, h2->GetBinContent(1) + h2->GetBinContent(0));*/
	for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		if(hlt_9ip6==1){
			if(B_pt>5){
				if(B_svprob>0.1){
					if(B_cos2d>0.99){
						if(B_mass<5.6 && B_mass>4.7){
							a += B_matchMC;
							i ++;
							if(tagPfmvaId>-1){
								if(B_matchMC == 0){
									h2->Fill(B_mass);
								}	
								else{
									h3->Fill(B_mass);
								}
							}
						}			
					}
				}
			}
		}
	}
	
	
	/*for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		//if(hlt_9ip6==1){
			if(B_svprob>0.1){
				//if(B_cos2d>0.99){
					h1->Fill(B_cos2d);
					if(B_matchMC==0){
						h2->Fill(B_cos2d);
					}
					else{
						h3->Fill(B_cos2d);
					}
				//}
			//}
		}
	}*/
		
	
	//hs->Add(h1, "HIST");
	hs->Add(h3, "HIST");
	hs->Add(h2, "HIST");
	
	
	
	TCanvas canv1("canv", "canvas for plotting", 1280, 950);
	auto legend1 = new TLegend(0.1,0.7,0.3,0.9);
	//legend1 -> AddEntry(h1, "Candidates", "f");
	legend1 -> AddEntry(h2, "Background", "f");
	legend1 -> AddEntry(h3, "B->J/#psi(e^{+}e^{-})K", "f");
	
	hs->Draw("NOSTACK");
	//gPad->SetLogy();
	hs->GetYaxis()->SetMaxDigits(4);
	hs->GetXaxis()->SetLimits(4.6, 5.7);
	hs->GetXaxis()->SetTitle("Reconstructed mass [GeV]");
	hs->GetYaxis()->SetTitle("Events/0.022");
	legend1->Draw();
	canv1.SaveAs("grafici/m_b_aftercut.pdf");
	
	
	//grafici bias
	
	TH1F* mvaSignalMc;
	TH1F* ptSignalMcB;
	TH1F* ptSignalMcE;
	TH1F* etaSignalMc;
	TH1F* RebinptSignalMcB;
	TH1F* RebinptSignalMcE;
	int nbinpt = 7;
	double binpt[nbinpt] = {0,2.5,5,7.5,10,15,30};
	  
	mvaSignalMc = new TH1F("mva","", nbins, -3, 14);
	etaSignalMc = new TH1F("pseudorapidity","", nbins, -3, 3);
	ptSignalMcB = new TH1F("transverse momentumB","", nbins, 0, 30);
	ptSignalMcE = new TH1F("transverse momentumE","", nbins, 0, 30);
	RebinptSignalMcB = new TH1F("rebin transverse momentumB","", nbinpt-1, binpt);
	RebinptSignalMcE = new TH1F("rebin transverse momentumE","", nbinpt-1, binpt);
	
	
	for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		if(probeMatchMcFromJPsi == 1){
			if(hlt_9ip6==1){
			if(B_pt>5){
			if(B_svprob>0.1){
			if(B_cos2d>0.99){
			if(B_mass<5.6 && B_mass>4.7){
			if(tagPfmvaId>-1){
    	    if(probeEta<1.479 && probeEta>-1.479){
				ptSignalMcB->Fill(probePt);
				RebinptSignalMcB->Fill(probePt);
			}
			if(probeEta>1.479 || probeEta<-1.479){
				ptSignalMcE->Fill(probePt);
				RebinptSignalMcE->Fill(probePt);
			}
			etaSignalMc->Fill(probeEta);
			mvaSignalMc->Fill(probeMvaId);
		}
		}
		}
		}
		}
		}
		}
	}
	
	
	TCanvas canv10("canv", "canvas for plotting", 1280, 950);
	
	mvaSignalMc->Draw("");
	//gPad->SetLogy();
	mvaSignalMc->GetYaxis()->SetMaxDigits(4);
	//mvaSignalMc->GetXaxis()->SetLimits(-1.1, 1.1);
	mvaSignalMc->GetXaxis()->SetTitle("mvaID");
	mvaSignalMc->GetYaxis()->SetTitle("Events/0.34");
	//canv10.SaveAs("graficibias2/mva2.pdf");
		
	
	/*TCanvas canv11("canv", "canvas for plotting", 1280, 950);
		
	ptSignalMc->Draw("");
	//gPad->SetLogy();
	ptSignalMc->GetYaxis()->SetMaxDigits(4);
	//ptSignalMc->GetXaxis()->SetLimits(-1.1, 1.1);
	ptSignalMc->GetXaxis()->SetTitle("p_{t} GeV");
	ptSignalMc->GetYaxis()->SetTitle("Events/0.6");
	//canv11.SaveAs("graficibias2/pt2.pdf");*/

	
	TCanvas canv12("canv", "canvas for plotting", 1280, 950);
		
	etaSignalMc->Draw("");
	//gPad->SetLogy();
	etaSignalMc->GetYaxis()->SetMaxDigits(4);
	//etaSignalMc->GetXaxis()->SetLimits(-1.1, 1.1);
	etaSignalMc->GetXaxis()->SetTitle("#eta");
	etaSignalMc->GetYaxis()->SetTitle("Events/0.12");
	//canv12.SaveAs("graficibias2/eta2.pdf");
		
	
	nbins = 50;
	double factor = 1.;
	double dx = 0;
	THStack* mvastack;
	THStack* transversestackB;
	THStack* transversestackE;
	THStack* pseudorapiditystack;
	THStack* weightedstackptB;
	THStack* weightedstackptE;
	THStack* RebinstackB;
	THStack* RebinstackE;
	THStack* mvaweightedstack;
	
	
	mvastack = new THStack("hs1","");
	transversestackB = new THStack("hs2","");
	transversestackE = new THStack("hs3","");
	pseudorapiditystack = new THStack("hs4","");
	weightedstackptB = new THStack("hs5","");
	weightedstackptE = new THStack("hs6","");
	RebinstackB = new THStack("hs7","");
	RebinstackE = new THStack("hs8","");
	mvaweightedstack = new THStack("hs9",""); 
		
	TFile* f = TFile::Open("grafMC.root");
	
			
	TH1F* mva = (TH1F*)f->Get("mva");
    
    TH1F* transverseB = (TH1F*)f->Get("transverseB");
    
    TH1F* transverseE = (TH1F*)f->Get("transverseE");
    
    TH1F* RebintransverseB = (TH1F*)f->Get("RebintransverseB");
    RebintransverseB->Scale(factor/RebintransverseB->Integral("width"));
    
    TH1F* RebintransverseE = (TH1F*)f->Get("RebintransverseE");
    RebintransverseE->Scale(factor/RebintransverseE->Integral("width"));
    
    TH1F* pseudorapidity = (TH1F*)f->Get("pseudorapidity");
    
    for(i=1; i<51; i++){
		mva->SetBinError(i,sqrt(mva->GetBinContent(i)));
		transverseB->SetBinError(i,sqrt(transverseB->GetBinContent(i)));
		transverseE->SetBinError(i,sqrt(transverseE->GetBinContent(i)));
		pseudorapidity->SetBinError(i,sqrt(pseudorapidity->GetBinContent(i)));
		ptSignalMcB->SetBinError(i,sqrt(ptSignalMcB->GetBinContent(i)));
		ptSignalMcE->SetBinError(i,sqrt(ptSignalMcE->GetBinContent(i)));
		mvaSignalMc->SetBinError(i,sqrt(mvaSignalMc->GetBinContent(i)));
		etaSignalMc->SetBinError(i,sqrt(etaSignalMc->GetBinContent(i)));
	}
	
	mva->Scale(factor/mva->Integral("width"));
	transverseB->Scale(factor/transverseB->Integral("width"));
    transverseE->Scale(factor/transverseE->Integral("width"));
    pseudorapidity->Scale(factor/pseudorapidity->Integral("width"));

	mvaSignalMc->Scale(factor/mvaSignalMc->Integral("width"));
	ptSignalMcB->Scale(factor/ptSignalMcB->Integral("width"));
	ptSignalMcE->Scale(factor/ptSignalMcE->Integral("width"));
	etaSignalMc->Scale(factor/etaSignalMc->Integral("width"));
	RebinptSignalMcB->Scale(factor/RebinptSignalMcB->Integral("width"));
	RebinptSignalMcE->Scale(factor/RebinptSignalMcE->Integral("width"));

		
	mvaSignalMc->SetLineColor(kRed);	 
	mvaSignalMc->SetMarkerColor(kRed);	 
	mvaSignalMc->SetMarkerStyle(8);
	mvaSignalMc->SetLineWidth(2);
	
	ptSignalMcB->SetLineColor(kRed);	 
	ptSignalMcB->SetMarkerColor(kRed);	 
	ptSignalMcB->SetMarkerStyle(8);
	ptSignalMcB->SetLineWidth(1);	
	
	ptSignalMcE->SetLineColor(kRed);	 
	ptSignalMcE->SetMarkerColor(kRed);	 
	ptSignalMcE->SetMarkerStyle(8);
	ptSignalMcE->SetLineWidth(1);
	
	etaSignalMc->SetLineColor(kRed);	 
	etaSignalMc->SetMarkerColor(kRed);	 
	etaSignalMc->SetMarkerStyle(8);
	etaSignalMc->SetLineWidth(1);
	
	mva->SetLineColor(kBlue);	 
	mva->SetMarkerColor(kBlue);	 
	mva->SetMarkerStyle(8);
	mva->SetLineWidth(1);
	
	transverseB->SetLineColor(kBlue);	 
	transverseB->SetMarkerColor(kBlue);	 
	transverseB->SetMarkerStyle(8);
	transverseB->SetLineWidth(1);
	
	transverseE->SetLineColor(kBlue);	 
	transverseE->SetMarkerColor(kBlue);	 
	transverseE->SetMarkerStyle(8);
	transverseE->SetLineWidth(1);
	
	pseudorapidity->SetLineColor(kBlue);	 
	pseudorapidity->SetMarkerColor(kBlue);	 
	pseudorapidity->SetMarkerStyle(8);
	pseudorapidity->SetLineWidth(1);
		
	RebintransverseB->SetLineColor(kBlue);	 
	RebintransverseB->SetFillColor(kBlue);	 
	RebintransverseB->SetFillStyle(0);
	RebintransverseB->SetLineWidth(2);
	
	RebintransverseE->SetLineColor(kBlue);	 
	RebintransverseE->SetFillColor(kBlue);	 
	RebintransverseE->SetFillStyle(0);
	RebintransverseE->SetLineWidth(2);
	
	RebinptSignalMcB->SetLineColor(kRed);	 
	RebinptSignalMcB->SetFillColor(kRed);	 
	RebinptSignalMcB->SetFillStyle(0);
	RebinptSignalMcB->SetLineWidth(2);
	
	RebinptSignalMcE->SetLineColor(kRed);	 
	RebinptSignalMcE->SetFillColor(kRed);	 
	RebinptSignalMcE->SetFillStyle(0);
	RebinptSignalMcE->SetLineWidth(2);
	
	
		
	mvastack->Add(mva, "E1");
	mvastack->Add(mvaSignalMc, "E1");
	
	transversestackB->Add(transverseB, "E1");
	transversestackB->Add(ptSignalMcB, "E1");
	
	transversestackE->Add(transverseE, "E1");
	transversestackE->Add(ptSignalMcE, "E1");
	
	pseudorapiditystack->Add(pseudorapidity, "E1");
	pseudorapiditystack->Add(etaSignalMc, "E1");
	
	RebinstackB->Add(RebintransverseB, "HIST");
	RebinstackB->Add(RebinptSignalMcB, "HIST");
	
	RebinstackE->Add(RebintransverseE, "HIST");
	RebinstackE->Add(RebinptSignalMcE, "HIST");

	
	/*Double_t mvaTest = mva->Chi2Test(mvaSignalMc, "WW");
	Double_t ptTestB = transverseB->Chi2Test(ptSignalMcB, "WW");
	Double_t ptTestE = transverseE->Chi2Test(ptSignalMcE, "WW");
	Double_t etaTest = pseudorapidity->Chi2Test(etaSignalMc, "WW");
	
	std::cout << "Test di Kolmogorov mva: " << mvaTest << "\n";
	std::cout << "Test di Kolmogorov ptB: " << ptTestB << "\n";
	std::cout << "Test di Kolmogorov ptE: " << ptTestE << "\n";
	std::cout << "Test di Kolmogorov eta: " << etaTest << "\n";*/
	

	TCanvas canv13("canv", "canvas for plotting", 1280, 950);
	auto legend10 = new TLegend(0.1,0.7,0.4,0.9);
	legend10 -> AddEntry(mva, "MC matched", "ep");
	legend10 -> AddEntry(mvaSignalMc, "Tag & probe", "ep");
	gStyle->SetErrorX(dx);
	mvastack->Draw("NOSTACK");
	//gPad->SetLogy();
	mvastack->GetYaxis()->SetMaxDigits(4);
	//mvastack->GetXaxis()->SetLimits(-1.1, 1.1);
	mvastack->GetXaxis()->SetTitle("probeMvaID");
	mvastack->GetYaxis()->SetTitle("A.U.");
	mvastack->GetXaxis()->SetTitleSize(0.037);
	mvastack->GetYaxis()->SetTitleSize(0.037);
	mvastack->GetXaxis()->SetLabelSize(0.037);
	mvastack->GetYaxis()->SetLabelSize(0.037);
	legend10->Draw();
	canv13.SaveAs("graficibias2/mvastackerr.pdf");
	
	
	TCanvas canv14("canv", "canvas for plotting", 1280, 950);
	auto legend2 = new TLegend(0.6,0.7,0.9,0.9);
	legend2 -> AddEntry(transverseB, "MC matched", "ep");
	legend2 -> AddEntry(ptSignalMcB, "Tag & probe", "ep");
	gStyle->SetErrorX(dx);
	transversestackB->Draw("NOSTACK");
	//gPad->SetLogy();
	transversestackB->GetYaxis()->SetMaxDigits(4);
	//transversestack->GetXaxis()->SetLimits(-1.1, 1.1);
	transversestackB->GetXaxis()->SetTitle("p_{t} [GeV]");
	transversestackB->GetYaxis()->SetTitle("A.U.");
	transversestackB->GetXaxis()->SetTitleSize(0.037);
	transversestackB->GetYaxis()->SetTitleSize(0.037);
	transversestackB->GetXaxis()->SetLabelSize(0.037);
	transversestackB->GetYaxis()->SetLabelSize(0.037);
	legend2->Draw();
	canv14.SaveAs("graficibias2/ptstackBerr.pdf");
	
	TCanvas canv140("canv", "canvas for plotting", 1280, 950);
	auto legend210 = new TLegend(0.6,0.7,0.9,0.9);
	legend210 -> AddEntry(transverseE, "MC matched", "ep");
	legend210 -> AddEntry(ptSignalMcE, "Tag & probe", "ep");
	gStyle->SetErrorX(dx);
	transversestackE->SetMaximum(0.14);
	transversestackE->Draw("NOSTACK");
	//gPad->SetLogy();
	transversestackE->GetYaxis()->SetMaxDigits(4);
	//transversestack->GetXaxis()->SetLimits(-1.1, 1.1);
	transversestackE->GetXaxis()->SetTitle("p_{t} [GeV]");
	transversestackE->GetYaxis()->SetTitle("A.U.");
	transversestackE->GetXaxis()->SetTitleSize(0.037);
	transversestackE->GetYaxis()->SetTitleSize(0.037);
	transversestackE->GetXaxis()->SetLabelSize(0.037);
	transversestackE->GetYaxis()->SetLabelSize(0.037);
	legend210->Draw();
	canv140.SaveAs("graficibias2/ptstackEerr.pdf");
	
	
	TCanvas canv15("canv", "canvas for plotting", 1280, 950);	
	auto legend3 = new TLegend(0.1,0.7,0.5,0.9);
	legend3 -> AddEntry(pseudorapidity, "MC matched", "ep");
	legend3 -> AddEntry(etaSignalMc, "Tag & probe", "ep");
	gStyle->SetErrorX(dx);
	pseudorapiditystack->Draw("NOSTACK");
	//gPad->SetLogy();
	pseudorapiditystack->GetYaxis()->SetMaxDigits(4);
	//pseudorapiditystack->GetXaxis()->SetLimits(-1.1, 1.1);
	pseudorapiditystack->GetXaxis()->SetTitle("#eta");
	pseudorapiditystack->GetYaxis()->SetTitle("A.U.");
	pseudorapiditystack->GetXaxis()->SetTitleSize(0.037);
	pseudorapiditystack->GetYaxis()->SetTitleSize(0.037);
	pseudorapiditystack->GetXaxis()->SetLabelSize(0.037);
	pseudorapiditystack->GetYaxis()->SetLabelSize(0.037);
	legend3->Draw();
	canv15.SaveAs("graficibias2/etastackerr.pdf");
	
	TCanvas canv150("canv", "canvas for plotting", 1280, 950);	
	auto legend30 = new TLegend(0.7,0.7,0.9,0.9);
	legend30 -> AddEntry(RebintransverseB, "MC matched", "f");
	legend30 -> AddEntry(RebinptSignalMcB, "Tag & probe", "f");
	RebinstackB->Draw("NOSTACK");
	//gPad->SetLogy();
	RebinstackB->GetYaxis()->SetMaxDigits(4);
	//RebinstackB->GetXaxis()->SetLimits(-1.1, 1.1);
	RebinstackB->GetXaxis()->SetTitle("p_{t} [GeV]");
	RebinstackB->GetYaxis()->SetTitle("A.U.");
	legend30->Draw();
	//canv150.SaveAs("graficibias2/rebinstackB.pdf");
	
	TCanvas canv151("canv", "canvas for plotting", 1280, 950);	
	auto legend31 = new TLegend(0.7,0.7,0.9,0.9);
	legend31 -> AddEntry(RebintransverseE, "MC matched", "f");
	legend31 -> AddEntry(RebinptSignalMcE, "Tag & probe", "f");
	RebinstackE->Draw("NOSTACK");
	//gPad->SetLogy();
	RebinstackE->GetYaxis()->SetMaxDigits(4);
	//RebinstackE->GetXaxis()->SetLimits(-1.1, 1.1);
	RebinstackE->GetXaxis()->SetTitle("p_{t} [GeV]");
	RebinstackE->GetYaxis()->SetTitle("A.U.");
	legend31->Draw();
	//canv151.SaveAs("graficibias2/rebinstackE.pdf");
	
	
	std::cout << "I'm here3" << "\n";
	
	double weightsB[6];
	double weightsE[6];
	double contB;
	TH1F* mvaweighted;
	TH1F* ptweightedB;
	TH1F* ptweightedE;
	//int nbinpt = 7;
	//double binpt[nbinpt] = {0,2.5,5,7.5,10,15,30};
	
	  
	mvaweighted = new TH1F("2","", nbins, -3, 14);
	ptweightedB = new TH1F("transverse momentum2B","", nbins, 0, 30);
	ptweightedE = new TH1F("transverse momentum2E","", nbins, 0, 30);
	
	int index = 0;
	
	for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		if(hlt_9ip6==1){
		if(B_pt>5){
		if(B_svprob>0.1){
		if(B_cos2d>0.99){
		if(B_mass<5.6 && B_mass>4.7){
		if(tagPfmvaId>-1){
		if(probeEta<1.479 && probeEta>-1.479){	//barrel
			for(j=1; j<(nbinpt); j++){
				if(probePt>binpt[j-1] && probePt<binpt[j]){
					weightsB[j-1] = RebintransverseB->GetBinContent(j)/RebinptSignalMcB->GetBinContent(j);
					index = j-1;
					if(probeMatchMcFromJPsi == 1){
						ptweightedB->Fill(probePt, weightsB[j-1]);
						mvaweighted->Fill(probeMvaId, weightsB[j-1]);
					}
				}
			}
		}
		}
		}
		}
		}
		}
		}	
		if(hlt_9ip6==1){
		if(B_pt>5){
		if(B_svprob>0.1){
		if(B_cos2d>0.99){
		if(B_mass<5.6 && B_mass>4.7){
		if(tagPfmvaId>-1){
		if(probeEta>1.479 || probeEta<-1.479){	//endcap	
			for(j=1; j<(nbinpt); j++){
				if(probePt>binpt[j-1] && probePt<binpt[j]){
					weightsE[j-1] = RebintransverseE->GetBinContent(j)/RebinptSignalMcE->GetBinContent(j);
					if(probeMatchMcFromJPsi == 1){
						ptweightedE->Fill(probePt, weightsB[j-1]);
						mvaweighted->Fill(probeMvaId, weightsB[j-1]);
					}
				}
			}
		}
		}
		}
		}
		}
		}
		}	
	}
	
	for(i=1; i<51; i++){
		mvaweighted->SetBinError(i,sqrt(mvaweighted->GetBinContent(i)));
		ptweightedB->SetBinError(i,sqrt(ptweightedB->GetBinContent(i)));
		ptweightedE->SetBinError(i,sqrt(ptweightedB->GetBinContent(i)));		
	}
	
	
	mvaweighted->SetLineColor(kRed);	 
	mvaweighted->SetMarkerColor(kRed);	 
	mvaweighted->SetFillColor(kRed);	 
	mvaweighted->SetFillStyle(0);
	mvaweighted->SetMarkerStyle(8);
	mvaweighted->SetLineWidth(1);
	

	ptweightedB->SetLineColor(kRed);	 
	ptweightedB->SetMarkerColor(kRed);	 
	ptweightedB->SetFillColor(kRed);	 
	ptweightedB->SetFillStyle(0);
	ptweightedB->SetMarkerStyle(8);
	ptweightedB->SetLineWidth(1);
	
	ptweightedE->SetLineColor(kRed);	 
	ptweightedE->SetMarkerColor(kRed);	 
	ptweightedE->SetFillColor(kRed);	 
	ptweightedE->SetFillStyle(0);
	ptweightedE->SetMarkerStyle(8);
	ptweightedE->SetLineWidth(1);	
	
	
	ptweightedB->Scale(factor/ptweightedB->Integral("width"));
	ptweightedE->Scale(factor/ptweightedE->Integral("width"));
	mvaweighted->Scale(factor/mvaweighted->Integral("width"));
	
	weightedstackptB->Add(transverseB, "E1");
	weightedstackptB->Add(ptweightedB, "E1");
	weightedstackptE->Add(transverseE, "E1");
	weightedstackptE->Add(ptweightedE, "E1");
	
	mvaweightedstack->Add(mva, "E1");
	mvaweightedstack->Add(mvaweighted, "E1");

	TCanvas canv16("canv", "canvas for plotting", 1280, 950);
	auto legend20 = new TLegend(0.55,0.7,0.9,0.9);
	legend20 -> AddEntry(transverseB, "MC matched", "ep");
	legend20 -> AddEntry(ptweightedB, "Tag & probe (weighted)", "ep");
	legend20 -> SetTextSize(0.035);
	gStyle->SetErrorX(dx);	
	weightedstackptB->Draw("NOSTACK");
	//gPad->SetLogy();
	weightedstackptB->GetYaxis()->SetMaxDigits(4);
	//transversestackweighted->GetXaxis()->SetLimits(-1.1, 1.1);
	weightedstackptB->GetXaxis()->SetTitle("p_{t} GeV");
	weightedstackptB->GetYaxis()->SetTitle("A.U.");
	weightedstackptB->GetXaxis()->SetTitleSize(0.037);
	weightedstackptB->GetYaxis()->SetTitleSize(0.037);
	weightedstackptB->GetXaxis()->SetLabelSize(0.037);
	weightedstackptB->GetYaxis()->SetLabelSize(0.037);
	legend20->Draw();
	canv16.SaveAs("graficibias2/ptstackweightedBerr.pdf");
	
	TCanvas canv17("canv", "canvas for plotting", 1280, 950);
	auto legend21 = new TLegend(0.55,0.7,0.9,0.9);
	legend21 -> AddEntry(transverseE, "MC matched", "ep");
	legend21 -> AddEntry(ptweightedE, "Tag & probe (weighted)", "ep");
	legend21 -> SetTextSize(0.035);
	gStyle->SetErrorX(dx);
	weightedstackptE->SetMaximum(0.16);
	weightedstackptE->Draw("NOSTACK");
	//gPad->SetLogy();
	weightedstackptE->GetYaxis()->SetMaxDigits(4);
	//weightedstackptE->GetYaxis()->SetLimits(0, 0.16);
	weightedstackptE->GetXaxis()->SetTitle("p_{t} GeV");
	weightedstackptE->GetYaxis()->SetTitle("A.U.");
	weightedstackptE->GetXaxis()->SetTitleSize(0.037);
	weightedstackptE->GetYaxis()->SetTitleSize(0.037);
	weightedstackptE->GetXaxis()->SetLabelSize(0.037);
	weightedstackptE->GetYaxis()->SetLabelSize(0.037);
	legend21->Draw();
	canv17.SaveAs("graficibias2/ptstackweightedEerr.pdf");
	
	TCanvas canv18("canv", "canvas for plotting", 1280, 950);
	auto legend22 = new TLegend(0.1,0.7,0.45,0.9);
	legend22 -> AddEntry(mva, "MC matched", "ep");
	legend22 -> AddEntry(mvaweighted, "Tag & probe (weighted)", "ep");
	legend22 -> SetTextSize(0.035);
	gStyle->SetErrorX(dx);
	mvaweightedstack->Draw("NOSTACK");
	//gPad->SetLogy();
	mvaweightedstack->GetYaxis()->SetMaxDigits(4);
	//transversestackweighted->GetXaxis()->SetLimits(-1.1, 1.1);
	mvaweightedstack->GetXaxis()->SetTitle("probeMvaID");
	mvaweightedstack->GetYaxis()->SetTitle("A.U.");
	mvaweightedstack->GetXaxis()->SetTitleSize(0.037);
	mvaweightedstack->GetYaxis()->SetTitleSize(0.037);
	mvaweightedstack->GetXaxis()->SetLabelSize(0.037);
	mvaweightedstack->GetYaxis()->SetLabelSize(0.037);
	legend22->Draw();
	canv18.SaveAs("graficibias2/mvaweightedstackerr.pdf");
	
	
	Double_t mvaKolTest = mva->Chi2Test(mvaweighted, "WW");
	Double_t mvaChiTest = mva->KolmogorovTest(mvaweighted, "D");
	
	std::cout << "Test chi quadro mva: " << mvaChiTest << "\n";
	std::cout << "Test Kolmogorov mva: " << mvaKolTest << "\n";
	
	//stack di probemvaid per dfferenti range di numero di vertici
	
	double min3 = -4;
	double max3 = 16;
	double nbins3 = 50;
	TH1F* vtx0;
	TH1F* vtx15;
	TH1F* vtx20;
	THStack* vertex_stack;
		
	vertex_stack = new THStack("vertex_stack","");
	
	vtx0 = new TH1F("vtx0MC","", nbins3, min3, max3); 
	vtx15 = new TH1F("vtx15MC","", nbins3, min3, max3); 
	vtx20 = new TH1F("vtx20MC","", nbins3, min3, max3); 
	
	for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		if(hlt_9ip6==1){
		if(B_pt>5){
		if(B_svprob>0.1){
		if(B_cos2d>0.99){
		if(B_mass<5.6 && B_mass>4.7){
		if(tagPfmvaId>-1){
			if(probeMatchMcFromJPsi == 1){
				if(numvtx < 15 ){
					vtx0->Fill(probeMvaId);
				}
				if(numvtx > 15 && numvtx < 20){
					vtx15->Fill(probeMvaId);
				}
				if(numvtx > 20){
					vtx20->Fill(probeMvaId);
				}
			}
		}
		}
		}
		}
		}
		}
		}
		
	//gStyle->SetOptStat(0);
	vtx0->Scale(1/vtx0->Integral("width"));
	vtx15->Scale(1/vtx15->Integral("width"));
	vtx20->Scale(1/vtx20->Integral("width"));	
	
	
	vtx0->SetLineColor(kRed);	 
	vtx0->SetMarkerColor(kRed);	 
	vtx0->SetFillColor(kRed);	 
	vtx0->SetFillStyle(0);
	vtx0->SetMarkerStyle(8);
	vtx0->SetLineWidth(2);
	
	
	vtx15->SetLineColor(kBlue);	 
	vtx15->SetMarkerColor(kBlue);	 
	vtx15->SetFillColor(kBlue);	 
	vtx15->SetFillStyle(0);
	vtx15->SetMarkerStyle(8);
	vtx15->SetLineWidth(2);
	
	
	vtx20->SetLineColor(kBlack);	 
	vtx20->SetMarkerColor(kBlack);	 
	vtx20->SetFillColor(kBlack);	 
	vtx20->SetFillStyle(0);
	vtx20->SetMarkerStyle(8);
	vtx20->SetLineWidth(2);
	
	vertex_stack->Add(vtx0, "HIST");
	vertex_stack->Add(vtx15, "HIST");
	vertex_stack->Add(vtx20, "HIST");
	
	TCanvas canv180("canv", "canvas for plotting", 1280, 950);
	auto legend220 = new TLegend(0.1,0.7,0.3,0.9);
	legend220 -> AddEntry(vtx0, "Verteces < 15", "f");
	legend220 -> AddEntry(vtx15, "15 < Verteces < 20", "f");
	legend220 -> AddEntry(vtx20, "20 > Verteces", "f");
	legend220->SetTextSize(.025);
		//gStyle->SetErrorX(dx);
	vertex_stack->Draw("NOSTACK");
	//gPad->SetLogy();
	//sig->GetYaxis()->SetMaxDigits(4);
	//transversestackweighted->GetXaxis()->SetLimits(-1.1, 1.1);
	vertex_stack->GetXaxis()->SetTitle("ProbeMvaId");
	vertex_stack->GetYaxis()->SetTitle("Events/0.4");
	legend220->Draw();
	//canv180.SaveAs("graficinew/probemva_vtx_compare.pdf");
	
	
	//grafici splot
	double min2 = 0;
	double max2 = 35;
	double nbins2 = 35;
	double my_weights = 0;
	TH1F* sigMC;
	TH1F* sigMC_weighted;
	THStack* vert_compare;
	THStack* vert_compare_weighted;
	//float edges[28] = { 0, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 50 };

	
	vert_compare = new THStack("hs1","");
	vert_compare_weighted = new THStack("hs2","");
	
	sigMC = new TH1F("sigMC","", nbins2, min2, max2); 
	//sigMC_weighted = new TH1F("sigMCweighted","", 27, edges); 
	sigMC_weighted = new TH1F("sigMC_weighted","", nbins2, min2, max2); 
	
	
	
	TFile* f2 = TFile::Open("num_verteces.root");
    
	TH1F* sig = (TH1F*)f2->Get("sig");
	sig->Scale(1/sig->Integral("width"));
	
	TFile* f5 = TFile::Open("num_verteces_35.root");
    
	TH1F* sig35 = (TH1F*)f5->Get("sig");
	sig35->Scale(1/sig35->Integral("width"));


	
	for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		if(hlt_9ip6==1){
		if(B_pt>5){
		if(B_svprob>0.1){
		if(B_cos2d>0.99){
		if(B_mass<5.6 && B_mass>4.7){
		if(tagPfmvaId>0 && numvtx<35){
			sigMC->Fill(numvtx);
		}
		}
		}
		}
		}
		}
	}
		
	sigMC->Scale(1/sigMC->Integral("width"));	
	
	sigMC->SetLineColor(kRed);	 
	sigMC->SetMarkerColor(kRed);	 
	sigMC->SetFillColor(kRed);	 
	sigMC->SetFillStyle(0);
	sigMC->SetMarkerStyle(8);
	sigMC->SetLineWidth(2);
	
	sig->SetLineColor(kBlue);	 
	sig->SetMarkerColor(kBlue);	 
	sig->SetFillColor(kBlue);	 
	sig->SetFillStyle(0);
	sig->SetMarkerStyle(8);
	sig->SetLineWidth(2);
	//gStyle->SetOptStat(0);
	
	sig35->SetLineColor(kBlue);	 
	sig35->SetMarkerColor(kBlue);	 
	sig35->SetFillColor(kBlue);	 
	sig35->SetFillStyle(0);
	sig35->SetMarkerStyle(8);
	sig35->SetLineWidth(5);
	
	vert_compare->Add(sig, "HIST");
	//vert_compare->Add(sig35, "HIST");
	vert_compare->Add(sigMC, "HIST");
	
	TCanvas canv181("canv", "canvas for plotting", 1280, 950);
	auto legend221 = new TLegend(0.7,0.7,0.9,0.9);
	legend221 -> AddEntry(sigMC, "MC", "f");
	legend221 -> AddEntry(sig, "Data", "f");
	vert_compare->Draw("NOSTACK");
	vert_compare->GetXaxis()->SetTitle("Number of verteces");
	vert_compare->GetYaxis()->SetTitle("Events/1.0");
	//gPad->SetLogy();
	//sig->GetYaxis()->SetMaxDigits(4);
	//transversestackweighted->GetXaxis()->SetLimits(-1.1, 1.1);
	//sig->GetXaxis()->SetTitle("Number of verteces");
	//sig->GetYaxis()->SetTitle("Events/1.0");
	legend221->Draw();
	//canv181.SaveAs("graficinew/num_vtx_compare.pdf");
	
	
	
	//isto per file
	
	TH1F* sig_tot;
	TH1F* bkg_tot;
	TH1F* sig_1_15B;
	TH1F* sig_15_2B;
	TH1F* sig_2_5B;
	TH1F* sig_5B;
	TH1F* sig_2_5E;
	TH1F* sig_5E;
	int max30 = 15;
	int nbins4 = 20;
			
	sig_tot = new TH1F("sig_totMC","", nbins4, min3, max30); 
	sig_tot->Sumw2();
	bkg_tot = new TH1F("bkg_totMC","", nbins4, min3, max30); 
	bkg_tot->Sumw2();
	sig_1_15B = new TH1F("sig_1_15BMC","", nbins4, min3, max30); 
	sig_1_15B->Sumw2();
	sig_15_2B = new TH1F("sig_15_2BMC","", nbins4, min3, max30); 
	sig_15_2B->Sumw2();
	sig_2_5B = new TH1F("sig_2_5BMC","", nbins4, min3, max30); 
	sig_2_5B->Sumw2();
	sig_5B = new TH1F("sig_5BMC","", nbins4, min3, max30); 
	sig_5B->Sumw2();
	sig_2_5E = new TH1F("sig_2_5EMC","", nbins4, min3, max30); 
	sig_2_5E->Sumw2();
	sig_5E = new TH1F("sig_5EMC","", nbins4, min3, max30); 
	sig_5E->Sumw2();

	
	sig_tot->SetLineColor(kRed);
	sig_tot->SetLineWidth(2);
	
	bkg_tot->SetLineColor(kRed);
	bkg_tot->SetLineWidth(2);
	
	sig_1_15B->SetLineColor(kRed);
	sig_1_15B->SetLineWidth(2);
	
	sig_15_2B->SetLineColor(kRed);
	sig_15_2B->SetLineWidth(2);
	
	sig_2_5B->SetLineColor(kRed);
	sig_2_5B->SetLineWidth(2);
	
	sig_5B->SetLineColor(kRed);
	sig_5B->SetLineWidth(2);
	
	sig_2_5E->SetLineColor(kRed);
	sig_2_5E->SetLineWidth(2);
	
	sig_5E->SetLineColor(kRed);
	sig_5E->SetLineWidth(2);
	
	gStyle->SetOptStat(000001111);
	
	for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		if(numvtx < 35){
		for(int j=1; j<(nbins2+1); j++){
				if(numvtx>=j-1 && numvtx<=j){
					if((sigMC->GetBinContent(j))==0){
						my_weights=1;
					}
					else{
					//my_weights = sig->GetBinContent(j)/sigMC->GetBinContent(j);
					my_weights = sig35->GetBinContent(j)/sigMC->GetBinContent(j);
					}
				}
			}
		}	
		else{
			my_weights = 1;
		}
		if(hlt_9ip6==1){
		if(B_pt>5){
		if(B_svprob>0.1){
		if(B_cos2d>0.99){
		if(B_mass<5.6 && B_mass>4.7){
		if(tagPfmvaId>0){
			sigMC_weighted->Fill(numvtx, my_weights);
		if(tagMatchMcFromJPsi==1){
			sig_tot->Fill(probeMvaId, my_weights);
		}
		else{
			bkg_tot->Fill(probeMvaId, my_weights);
		}
		if(probeEta<1.479 && probeEta>-1.479){	//barrel
			if(probePt>1 && probePt<1.5){
				sig_1_15B->Fill(probeMvaId, my_weights);
			}
			if(probePt>1.5 && probePt<2){
				sig_15_2B->Fill(probeMvaId, my_weights);
			}
			if(probePt>2 && probePt<5){
				sig_2_5B->Fill(probeMvaId, my_weights);
			}
			if(probePt>5){
				sig_5B->Fill(probeMvaId, my_weights);
			}	
		}
		if(probeEta>1.479 || probeEta<-1.479){	//endcap	
			if(probePt>2 && probePt<5){
				sig_2_5E->Fill(probeMvaId, my_weights);
			}
			if(probePt>5){
				sig_5E->Fill(probeMvaId, my_weights);
			}	
		}
		/*if(numvtx < 15 ){
			vtx0->Fill(probeMvaId);
		}
		if(numvtx > 15 && numvtx < 20){
			vtx15->Fill(probeMvaId);
		}
		if(numvtx > 20){
			vtx20->Fill(probeMvaId);
		}*/	
		}
		}
		}
		}
		}
		}
	}
	
	/*for(i=1; i<31; i++){
		sig_tot->SetBinError(i,sqrt(sig_tot->GetBinContent(i)));
		bkg_tot->SetBinError(i,sqrt(bkg_tot->GetBinContent(i)));
		sig_1_15B->SetBinError(i,sqrt(sig_1_15B->GetBinContent(i)));
		sig_15_2B->SetBinError(i,sqrt(sig_15_2B->GetBinContent(i)));
		sig_2_5B->SetBinError(i,sqrt(sig_2_5B->GetBinContent(i)));
		sig_5B->SetBinError(i,sqrt(sig_5B->GetBinContent(i)));
		sig_2_5E->SetBinError(i,sqrt(sig_2_5E->GetBinContent(i)));
		sig_5E->SetBinError(i,sqrt(sig_5E->GetBinContent(i)));
	}*/

	sigMC_weighted->SetLineColor(kRed);	 
	sigMC_weighted->SetMarkerColor(kRed);	 
	sigMC_weighted->SetFillColor(kRed);	 
	sigMC_weighted->SetFillStyle(0);
	sigMC_weighted->SetMarkerStyle(8);
	sigMC_weighted->SetLineWidth(2);
		
	sigMC_weighted->Scale(1/sigMC_weighted->Integral("width"));	
	//sig35->Scale(1/sig35->Integral("width"));	
	//sig->Scale(1/sig->Integral("width"));	

	
	//vert_compare_weighted->Add(sig, "HIST");
	vert_compare_weighted->Add(sig35, "HIST");
	vert_compare_weighted->Add(sigMC_weighted, "HIST");
	
	TCanvas canv182("canv", "canvas for plotting", 1280, 950);
	auto legend222 = new TLegend(0.7,0.7,0.9,0.9);
	legend222 -> AddEntry(sigMC_weighted, "MC", "f");
	legend222 -> AddEntry(sig, "Data", "f");
	vert_compare_weighted->Draw("NOSTACK");
	vert_compare_weighted->GetXaxis()->SetLimits(0, 50);
	vert_compare_weighted->GetXaxis()->SetTitle("Number of verteces");
	vert_compare_weighted->GetYaxis()->SetTitle("Events/1.0");
	//gPad->SetLogy();
	//sig->GetYaxis()->SetMaxDigits(4);
	//transversestackweighted->GetXaxis()->SetLimits(-1.1, 1.1);
	//sig->GetXaxis()->SetTitle("Number of verteces");
	//sig->GetYaxis()->SetTitle("Events/1.0");
	legend222->Draw();
	//canv182.SaveAs("graficinew/num_vtx_compare_weighted_35.pdf");
	
	/*TFile* fout2 = new TFile("isto_fit.root","RECREATE");
	fout2->cd();
	//bckg->Write();
    sig_tot->Write();
    bkg_tot->Write();
    sig_1_15B->Write();
    sig_15_2B->Write();
    sig_2_5B->Write();
    sig_5B->Write();
    sig_2_5E->Write();
    sig_5E->Write();
	fout2->Write();
	fout2->Close();*/
	
	
	float c1 = -3;
	float d1 = 14;
	int nbins10 = 50;
	TH1F* h1000;
	TH1F* h2000;
	THStack* hs1000;
	//float binwidth = float((d - c))/nbins;


	hs1000 = new THStack("hs1000","");
	h1000 = new TH1F("histo1","", nbins10, c1, d1);
	h2000 = new TH1F("histo2","", nbins10, c1, d1);
	
	for (int jEntry=0; jEntry < nentries; ++jEntry) {
		fChain->GetEntry(jEntry);
		if(probeMatchMc==1){
			h1000->Fill(probeMvaId);
		}
		else{
			h2000->Fill(probeMvaId);
		}
	}
		
	
	hs1000->Add(h2000, "HIST");
	hs1000->Add(h1000, "HIST");
	
	h1000->Scale(factor/h1000->Integral("width"));
	h2000->Scale(factor/h2000->Integral("width"));
	
	h2000->SetLineColor(kBlue);	 
	h2000->SetFillColor(kBlue);	 
	h2000->SetFillStyle(3004);
	h2000->SetLineWidth(2);
	
	h1000->SetLineColor(kRed);
	h1000->SetFillColor(kRed);
	h1000->SetFillStyle(3004);
	h1000->SetLineWidth(2);
	
	hs1000->Add(h1000, "HIST");
	hs1000->Add(h2000, "HIST");
	
	TCanvas canv120("canv", "canvas for plotting", 1280, 1024);
	auto legend120 = new TLegend(0.7,0.7,0.9,0.9);
	legend120 -> AddEntry(h1000, "electrons" ,"f");
	legend120 -> AddEntry(h2000, "fakes", "f");
	hs1000->Draw("NOSTACK");
	hs1000->GetXaxis()->SetLimits(-3, 14);
	hs1000->GetXaxis()->SetTitle("probeMvaId");
	hs1000->GetYaxis()->SetTitle("A.U.");
	legend120->Draw();
	//canv120.SaveAs("mvaID.pdf");
	
	
		
	
	
	
	outfile.Close();
}
