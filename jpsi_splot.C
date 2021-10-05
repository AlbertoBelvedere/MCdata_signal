// Based on ROOT/tutorials/roostats/rs301_splot.C

// To be run on data tnp formatted ntuples 
// - Fit mee invariant mass as a reference distribution
// - Extract electron-related distributions for signal and background with the sPlots technique

#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooDataHist.h"
#include "RooExponential.h"
#include "RooAddPdf.h"
#include "RooAddition.h"
#include "RooAbsPdf.h"
#include "RooFit.h"
#include "RooFitResult.h"
#include "RooWorkspace.h"
#include "RooDoubleCB.h"
#include "RooStats/SPlot.h"

#include "TFile.h"
#include "TTree.h"
#include "TCanvas.h"
#include "TStyle.h"
#include "TH1.h"
#include "THStack.h"
#include "TLegend.h"
#include "TRatioPlot.h"



#include <iostream>

// use this order for safety on library loading
using namespace RooFit;
using namespace RooStats;
using namespace std;

// see below for implementation
void AddModel(RooWorkspace*, float, float);
void DoSPlot(RooWorkspace*);
void MakePlots(RooWorkspace*);
void MakeHistos(RooWorkspace*);
void getDataSet(const char *, RooWorkspace*, float, float);

void jpsi_splot()
{
  // set range of observable
  Float_t lowRange  = 2.6;   
  Float_t highRange = 3.4;   

  // Create a new workspace to manage the project.
  RooWorkspace* wspace = new RooWorkspace("myWS");
  
  // add the signal and background models to the workspace.
  // Inside this function you will find a description our model.
  AddModel(wspace, lowRange, highRange);
  
  // add dataset from converted root tree
  getDataSet("/cmshome/rovelch/dataB/analisi/Formatted_March21_NoRegr_ParkingALL__probeLowPtWithTightCuts.root", wspace, lowRange, highRange);
  
  // inspect the workspace if you wish
  wspace->Print();
  
  // make a new dataset with sWeights added for every event.
  DoSPlot(wspace);

  // Make some plots showing the discriminating variable and
  // the control variable after unfolding.
  MakePlots(wspace);
  
  // Save variables in histos
  MakeHistos(wspace);

  // cleanup
  delete wspace;
}

// Signal and background fit models
void AddModel(RooWorkspace* ws, float lowRange, float highRange){
  
  // make a RooRealVar for the observables
  RooRealVar pair_mass("pair_mass", "M_{inv}", lowRange, highRange,"GeV");

  // --------------------------------------
  // signal model
  std::cout << "make JPsi model" << std::endl;
  //tot

  RooRealVar m0("m0", "JPsi Mass", 3.085, 3.075, 3.095);                  
  RooRealVar alphaL("alphaL", "alpha left",  0.7, 0.4, 0.9);          
  RooRealVar alphaR("alphaR", "alpha right", 1.2, 0.6, 1.6);         
  RooRealVar sigma("sigma", "sigma",  0.04, 0.03, 0.07);  
  RooRealVar nL("nL", "N left",  3, 1, 6);  
  RooRealVar nR("nR", "N right", 3, 1, 12);
    
  //5B
  /*RooRealVar m0("m0", "JPsi Mass", 3.085, 3.08, 3.095);                  
  RooRealVar alphaL("alphaL", "alpha left",  0.7, 0.4, 1);          
  RooRealVar alphaR("alphaR", "alpha right", 1.3, 1.0, 1.6);         
  RooRealVar sigma("sigma", "sigma",  0.05, 0.045, 0.065);  
  RooRealVar nL("nL", "N left",  4, 4, 4);  
  RooRealVar nR("nR", "N right", 5, 1, 8);*/
 
  //2_5B
  /*RooRealVar m0("m0", "JPsi Mass", 3.085, 3.08, 3.095);                  
  RooRealVar alphaL("alphaL", "alpha left",  0.9, 0.5, 1.6);          
  RooRealVar alphaR("alphaR", "alpha right", 1.45, 1.2, 1.8);         
  RooRealVar sigma("sigma", "sigma",  0.055, 0.04, 0.08);  
  RooRealVar nL("nL", "N left",  2.5, 1, 4);  
  RooRealVar nR("nR", "N right", 2.5, 1, 4);*/
  
  //15_2B
  /*RooRealVar m0("m0", "JPsi Mass", 3.085, 3.08, 3.095);                  
  RooRealVar alphaL("alphaL", "alpha left",  0.8, 0.3, 1.2);          
  RooRealVar alphaR("alphaR", "alpha right", 1.0, 0.6, 1.2);         
  RooRealVar sigma("sigma", "sigma",  0.055, 0.04, 0.08);  
  RooRealVar nL("nL", "N left",  2.5, 1, 4);  
  RooRealVar nR("nR", "N right", 2.5, 1, 4);*/
  
  //1_15B
  /*RooRealVar m0("m0", "JPsi Mass", 3.085, 3.08, 3.095);                  
  RooRealVar alphaL("alphaL", "alpha left",  0.518263, 0.518263, 0.518263);          
  RooRealVar alphaR("alphaR", "alpha right", 0.4, 0, 0.8);         
  RooRealVar sigma("sigma", "sigma",  0.06, 0.04, 0.08);  
  RooRealVar nL("nL", "N left",  2.5, 1, 4);  
  RooRealVar nR("nR", "N right", 3.20793, 3.20793, 3.20793);*/
  
  //2_5E
  
  /*RooRealVar m0("m0", "JPsi Mass", 3.085, 3.07, 3.095);                  
  RooRealVar alphaL("alphaL", "alpha left",   0.25, 0.1, 0.3);          
  RooRealVar alphaR("alphaR", "alpha right", 0.35, 0.1, 0.5);         
  RooRealVar sigma("sigma", "sigma",  0.06, 0.03, 0.07);  
  RooRealVar nL("nL", "N left",  3.5, 1.5, 6);  
  RooRealVar nR("nR", "N right", 10, 7, 15);*/
  //4368
  
  //5E
    
  /*RooRealVar m0("m0", "JPsi Mass", 3.085, 3.08, 3.095);                  
  RooRealVar alphaL("alphaL", "alpha left",  0.7, 0.4, 1);          
  RooRealVar alphaR("alphaR", "alpha right", 1.3, 1.0, 1.6);         
  RooRealVar sigma("sigma", "sigma",  0.05, 0.045, 0.065);  
  RooRealVar nL("nL", "N left",  7, 4, 8);  
  RooRealVar nR("nR", "N right", 5, 1, 8);*/
  
  
  RooDoubleCB jpsiModel("jpsiModel", "JPsi Model", pair_mass, m0, sigma, alphaL, alphaR, nL, nR);

  // -------------------------------------- 
  // background model
  std::cout << "make Bkg model" << std::endl;
  //tot 
  RooRealVar alpha("alpha", "Decay const for background mass spectrum", 0.3, 0., 0.6,"1/GeV");      
  //tot2
  //RooRealVar alpha("alpha", "Decay const for background mass spectrum", -0.4, -0.7, 0.5,"1/GeV");      
  //5B
  //RooRealVar alpha("alpha", "Decay const for background mass spectrum", -0.8, -2.5, 0,"1/GeV");      
  //2_5B
  //RooRealVar alpha("alpha", "Decay const for background mass spectrum", 0, -2, 2,"1/GeV");      
  //15_2B
  //RooRealVar alpha("alpha", "Decay const for background mass spectrum", 0, -1, 1,"1/GeV");      
  //1_15B
  //RooRealVar alpha("alpha", "Decay const for background mass spectrum", 0.5, 0, 2,"1/GeV");     
  //2_5E
  //RooRealVar alpha("alpha", "Decay const for background mass spectrum", 0.4, 0, 1,"1/GeV");      
  //
  //5E
  //RooRealVar alpha("alpha", "Decay const for background mass spectrum", 1, 0, 2,"1/GeV");      

  RooExponential bkgModel("bkgModel", "bkg Mass Model", pair_mass, alpha);


  // yieldstot
  RooRealVar jpsiYield("jpsiYield","fitted yield for JPsi",      430000 , 1., 150000);              
  RooRealVar bkgYield("bkgYield","fitted yield for background", 1600000 , 1., 500000);
  //tot2
  //RooRealVar jpsiYield("jpsiYield","fitted yield for JPsi",      43000 , 1., 50000);              
  //RooRealVar bkgYield("bkgYield","fitted yield for background", 16000 , 1., 50000);
  
  //yields 5B
  //RooRealVar jpsiYield("jpsiYield","fitted yield for JPsi",      40000 , 1., 100000);              
  //RooRealVar bkgYield("bkgYield","fitted yield for background", 35000 , 1., 100000);             
  
  //yields 2_5B
  //RooRealVar jpsiYield("jpsiYield","fitted yield for JPsi",      40000 , 1., 150000);              
  //RooRealVar bkgYield("bkgYield","fitted yield for background", 95000 , 1., 150000);             
  
  //yields 15_2B
  //RooRealVar jpsiYield("jpsiYield","fitted yield for JPsi",      10000 , 1., 100000);              
  //RooRealVar bkgYield("bkgYield","fitted yield for background", 75000 , 1., 100000);            
  
  //yields 1_15B
  //RooRealVar jpsiYield("jpsiYield","fitted yield for JPsi",      90000 , 1., 100000);              
  //RooRealVar bkgYield("bkgYield","fitted yield for background", 100000 , 1., 1000000); 

  //yields 2_5E
  //RooRealVar jpsiYield("jpsiYield","fitted yield for JPsi",      3000 , 1., 100000);              
  //RooRealVar bkgYield("bkgYield","fitted yield for background", 18000 , 1., 1000000); 

  //yields 5E
  //RooRealVar jpsiYield("jpsiYield","fitted yield for JPsi",      2000 , 1., 100000);              
  //RooRealVar bkgYield("bkgYield","fitted yield for background", 8000 , 1., 1000000); 


  // combined model
  std::cout << "make full model" << std::endl; 
  RooAddPdf model("model","jpsi+background models",
		  RooArgList(jpsiModel, bkgModel),
		  RooArgList(jpsiYield,bkgYield)); 

  std::cout << "import model" << std::endl;
  ws->import(model);
}

// Add s-weights to the dataset
void DoSPlot(RooWorkspace* ws){
  
  std::cout << "Calculate sWeights" << std::endl;
  
  // get what we need out of the workspace to do the fit
  RooAbsPdf* model = ws->pdf("model");
  RooRealVar* jpsiYield = ws->var("jpsiYield");
  RooRealVar* bkgYield = ws->var("bkgYield");
  RooDataSet* data = (RooDataSet*) ws->data("data");

  // fit the model to the data.
  model->fitTo(*data, Extended() );
 
  // The sPlot technique requires that we fix the parameters
  RooRealVar* m0  = ws->var("m0");
  RooRealVar* sigma = ws->var("sigma");
  RooRealVar* alphaL = ws->var("alphaL");
  RooRealVar* alphaR = ws->var("alphaR");
  RooRealVar* nL = ws->var("nL");
  RooRealVar* nR = ws->var("nR");
  RooRealVar* alpha  = ws->var("alpha");
  m0->setConstant();   
  sigma->setConstant();   
  alphaL->setConstant();   
  alphaR->setConstant();   
  nL->setConstant();   
  nR->setConstant();   
  alpha->setConstant();   

  RooMsgService::instance().setSilentMode(false);

  // Now we use the SPlot class to add SWeights to our data set
  // based on our model and our yield variables
  RooStats::SPlot* sData = new RooStats::SPlot("sData","An SPlot",
					       *data, model, RooArgList(*jpsiYield,*bkgYield) );


  // Check that our weights have the desired properties
  std::cout << "Check SWeights:" << std::endl;

  std::cout << std::endl <<  "Yield of JPsi is "
	    << jpsiYield->getVal() << ".  From sWeights it is "
	    << sData->GetYieldFromSWeight("jpsiYield") << std::endl;
  
  std::cout << "Yield of background is "
	    << bkgYield->getVal() << ".  From sWeights it is "
	    << sData->GetYieldFromSWeight("bkgYield") << std::endl
	    << std::endl;
  
  for(Int_t i=0; i < 10; i++) {
    std::cout << "jpsi Weight = " << sData->GetSWeight(i,"jpsiYield")
	      << ", bkg Weight = " << sData->GetSWeight(i,"bkgYield")
	      << ", Total Weight = " << sData->GetSumOfEventSWeight(i)
	      << std::endl;
  }
  
  std::cout << std::endl;

  // import this new dataset with sWeights
  std::cout << "import new dataset with sWeights" << std::endl;
  ws->import(*data, Rename("dataWithSWeights"));
}

// Control plots
void MakePlots(RooWorkspace* ws){
  
  // Here we make plots of the discriminating variable (pair_mass) after the fit
  // and of the control variable (ID, or whatever) after unfolding with sPlot.
  std::cout << std::endl;
  std::cout << "make plots" << std::endl;

  // make our canvas
  TCanvas* cdata = new TCanvas("sPlot","sPlot demo", 400, 600);
  cdata->Divide(1,3);

  // get what we need out of the workspace
  RooAbsPdf* model = ws->pdf("model");
  RooAbsPdf* jpsiModel = ws->pdf("jpsiModel");
  RooAbsPdf* bkgModel = ws->pdf("bkgModel");
  
  RooRealVar* probeMvaId = ws->var("probeMvaId");    
  RooRealVar* pair_mass = ws->var("pair_mass");
  RooRealVar* jpsiYield = ws->var("jpsiYield");
  RooRealVar* bkgYield = ws->var("bkgYield");

  // note, we get the dataset with sWeights
  RooDataSet* data = (RooDataSet*) ws->data("dataWithSWeights");
  
  // this shouldn't be necessary, need to fix something with workspace
  // do this to set parameters back to their fitted values.
  model->fitTo(*data, Extended() );
  
  
  
  //prendo istogrammi dal file
  
  /*TFile* f = TFile::Open("isto_fit.root");
	
  TH1F* bkg_totMC = (TH1F*)f->Get("bkg_totMC");
  bkg_totMC->Scale(bkgYield->getVal()/bkg_totMC->Integral("width"));
    
  TH1F* sig_totMC = (TH1F*)f->Get("sig_totMC");
  sig_totMC->Scale(jpsiYield->getVal()/sig_totMC->Integral("width"));

  bkg_totMC->SetLineColor(kRed);	 
  bkg_totMC->SetMarkerColor(kRed);	 
  bkg_totMC->SetFillColor(kRed);	 
  bkg_totMC->SetFillStyle(0);
  bkg_totMC->SetMarkerStyle(8);
  bkg_totMC->SetLineWidth(1);
	
  sig_totMC->SetLineColor(kRed);	 
  sig_totMC->SetMarkerColor(kRed);	 
  sig_totMC->SetFillColor(kRed);	 
  sig_totMC->SetFillStyle(0);
  sig_totMC->SetMarkerStyle(8);
  sig_totMC->SetLineWidth(1);*/

  // Plot pair_mass for data with full model and individual components overlaid
  cdata->cd(1);
  RooPlot* frame = pair_mass->frame();
  data->plotOn(frame);
  model->plotOn(frame);
  model->plotOn(frame,Components(*jpsiModel),LineStyle(kDashed), LineColor(kRed));
  model->plotOn(frame,Components(*bkgModel),LineStyle(kDashed),LineColor(kGreen));
  frame->SetTitle("Fit of model to discriminating variable");
  frame->Draw();

  // ------------------------------------------------------------
  // Now use the sWeights to show our variable distribution for JPsi and background.
  //
  // Plot our variable for JPsi component.
  // Do this by plotting all events weighted by the sWeight for the JPsi component.
  // The SPlot class adds a new variable that has the name of the corresponding
  // yield + "_sw".
  cdata->cd(2);
   
  // create weighted data set
  RooDataSet * dataw_jpsi = new RooDataSet(data->GetName(),data->GetTitle(),data,*data->get(),0,"jpsiYield_sw");
  
  RooPlot* frame2 = probeMvaId->frame();         
  dataw_jpsi->plotOn(frame2, DataError(RooAbsData::SumW2) );
  frame2->SetTitle("ID distribution for JPsi");
  frame2->Draw();
  
  // Plot interesting variables for background
  cdata->cd(3);
  RooDataSet * dataw_bkg = new RooDataSet(data->GetName(),data->GetTitle(),data,*data->get(),0,"bkgYield_sw");
  RooPlot* frame3 = probeMvaId->frame();            
  dataw_bkg->plotOn(frame3,DataError(RooAbsData::SumW2));
  frame3->SetTitle("ID distribution for background");
  frame3->Draw();
  
  cdata->SaveAs("SPlotprova1.png");
  
  /*TCanvas* sign = new TCanvas("sign", "MC-dati segnale", 1);
  sig_totMC->Draw("hist");
  frame2->Draw("samehist");
  sign->SaveAs("MC-dati_segnale.png");
  
  TCanvas* bckg = new TCanvas("bckg", "MC-dati segnale", 1);
  bkg_totMC->Draw("hist");
  frame2->Draw("samehist");
  bckg->SaveAs("MC-dati_bckg.png");*/

  // Fit variable
  TCanvas* cdata2 = new TCanvas("cdata2","data fit", 1);
  RooPlot* frame4 = pair_mass->frame();
  data->plotOn(frame4, Name("data"), Binning(100) );
  model->plotOn(frame4, Name("model"));
  model->plotOn(frame4, Name("signal"), Components(*jpsiModel),LineStyle(kDashed), LineColor(kRed));
  model->plotOn(frame4, Name("bckg"), Components(*bkgModel),LineStyle(kDashed),LineColor(kGreen));
  frame4->SetTitle("Endcap   2 GeV < p_{t} < 5 GeV");
  frame4->GetXaxis()->SetTitle("M_{inv} [GeV]");
  frame4->GetYaxis()->SetTitle("Events/0.008 GeV");
  frame4->GetXaxis()->SetTitleSize(0.037);
  frame4->GetYaxis()->SetTitleSize(0.037);
  frame4->GetXaxis()->SetLabelSize(0.037);
  frame4->GetYaxis()->SetLabelSize(0.037);
  //frame4->GetYaxis()->SetRangeUser(0, 420);
  frame4->Draw();
  TLegend *legend100 = new TLegend(0.1,0.6,0.4,0.9);
  //legend100->SetFillColor(kWhite);
  legend100->SetLineColor(kWhite);
  legend100->AddEntry("data", "Data", "ep");
  legend100->AddEntry("model", "Signal + bckg", "l");
  legend100->AddEntry("signal", "Signal", "l");
  legend100->AddEntry("bckg", "Background", "l");
  //legend100->Draw();
  cdata2->SaveAs("Fitprova1.png");
}



// Control plots
void MakeHistos(RooWorkspace* ws){
  
  THStack* stack_sig;
	
  stack_sig = new THStack("stack","");
  
  gStyle->SetOptStat(0);
  
  TFile* f = TFile::Open("isto_fit.root");
	
  //TH1F* bkg_totMC = (TH1F*)f->Get("bkg_totMC");
  //bkg_totMC->Scale(1/bkg_totMC->Integral("width"));
    
  TH1F* sig_totMC = (TH1F*)f->Get("sig_totMC");
  //sig_totMC->Scale(1/sig_totMC->Integral("width"));

  TH1F* sig_1_15BMC = (TH1F*)f->Get("sig_1_15BMC");

  TH1F* sig_15_2BMC = (TH1F*)f->Get("sig_15_2BMC");

  TH1F* sig_2_5BMC = (TH1F*)f->Get("sig_2_5BMC");
  
  TH1F* sig_5BMC = (TH1F*)f->Get("sig_5BMC");

  TH1F* sig_2_5EMC = (TH1F*)f->Get("sig_2_5EMC");

  TH1F* sig_5EMC = (TH1F*)f->Get("sig_5EMC");  

  sig_totMC->Scale(1/sig_totMC->Integral("width"));


  std::cout << std::endl;
  std::cout << "save histos" << std::endl;

  RooRealVar* probeMvaId = ws->var("probeMvaId");     

  RooRealVar* hlt_9ip6 = ws->var("hlt_9ip6");

  RooRealVar* probePt  = ws->var("probePt");
  RooRealVar* probeEta = ws->var("probeEta");
  RooRealVar* B_mass = ws->var("B_mass");

  // note, we get the dataset with sWeights
  RooDataSet* data = (RooDataSet*) ws->data("dataWithSWeights");

  // create weighted data set
  RooDataSet * dataw_jpsi = new RooDataSet(data->GetName(),data->GetTitle(),data,*data->get(),0,"jpsiYield_sw");
  RooDataSet * dataw_bkg  = new RooDataSet(data->GetName(),data->GetTitle(),data,*data->get(),0,"bkgYield_sw");
  
  // convert to TH1
  TH1 *h1_probeMvaId_jpsi  = dataw_jpsi->createHistogram("h1_probeMvaId_jpsi", *probeMvaId,Binning(20, -4, 15));   
  TH1 *h1_probeMvaId_bkg   = dataw_bkg->createHistogram("h1_probeMvaId_bkg",*probeMvaId,Binning(30));     

  TH1 *h1_probePt_jpsi = dataw_jpsi->createHistogram("h1_probePt_jpsi",*probePt,Binning(90, 0.,30.));
  TH1 *h1_probePt_bkg  = dataw_bkg->createHistogram("h1_probePt_bkg",*probePt,Binning(90,0.,30.));

  TH1 *h1_probeEta_jpsi = dataw_jpsi->createHistogram("h1_probeEta_jpsi",*probeEta,Binning(40));
  TH1 *h1_probeEta_bkg  = dataw_bkg->createHistogram("h1_probeEta_bkg",*probeEta,Binning(40));
  
  for(int k = 1; k<31; k++){
	h1_probeMvaId_jpsi->SetBinContent(k, fabs(h1_probeMvaId_jpsi->GetBinContent(k)));
	//h1_probeMvaId_jpsi->SetBinError(k,sqrt(h1_probeMvaId_jpsi->GetBinContent(k)));
  }
  
  h1_probeMvaId_jpsi->Sumw2();


  TFile myFileSPlots("myFileSPlots.root","RECREATE");
  myFileSPlots.cd();

  h1_probeMvaId_jpsi->Write();         
  h1_probeMvaId_bkg->Write();          
  h1_probePt_jpsi->Write();
  h1_probePt_bkg->Write();
  h1_probeEta_jpsi->Write();
  h1_probeEta_bkg->Write();

  TCanvas* ch1 = new TCanvas("ch1","ch1", 1);
  h1_probeMvaId_jpsi->SetLineWidth(2);
  h1_probeMvaId_bkg->SetLineWidth(2);
  h1_probeMvaId_jpsi->SetLineColor(6);
  h1_probeMvaId_bkg->SetLineColor(4);
  h1_probeMvaId_jpsi->SetTitle("");
  h1_probeMvaId_bkg->SetTitle("");
  h1_probeMvaId_jpsi->DrawNormalized("hist");
  h1_probeMvaId_bkg->DrawNormalized("samehist");
  ch1->SaveAs("probeMvaIdH2_prova1.png");
  
  h1_probeMvaId_jpsi->Scale(1/h1_probeMvaId_jpsi->Integral("width"));
  h1_probeMvaId_bkg->Scale(1/h1_probeMvaId_bkg->Integral("width"));
  
  
  h1_probeMvaId_jpsi->SetLineColor(kBlack);	 
  h1_probeMvaId_jpsi->SetMarkerColor(kBlack);	 
  h1_probeMvaId_jpsi->SetMarkerStyle(8);
  h1_probeMvaId_jpsi->SetLineWidth(1);
  
  
  sig_totMC->SetLineColor(kBlue);	 
  sig_totMC->SetMarkerColor(kBlue);	 
  sig_totMC->SetMarkerStyle(1);
  sig_totMC->SetLineWidth(1);
    
  //stack_sig->Add(sig_totMC, "E1");
  //stack_sig->Add(h1_probeMvaId_jpsi, "E1");
  
 /* TCanvas* ch12 = new TCanvas("ch1","ch1", 1);
  gStyle->SetErrorX(0);
  auto legend222 = new TLegend(0.7,0.7,0.9,0.9);
  legend222 -> AddEntry(sig_totMC, "MC", "ep");
  legend222 -> AddEntry(h1_probeMvaId_jpsi, "Data", "ep");
  stack_sig->SetTitle("");
  stack_sig->Draw("NOSTACK");
  stack_sig->GetXaxis()->SetTitle("probeMvaId");
  stack_sig->GetYaxis()->SetTitle("A.U.");
  legend222->Draw();
  ch12->SaveAs("probeMvaIdComp(sig)2_prova1.png");*/
  
  auto c1 = new TCanvas("c1", "A ratio example");
  auto legend222 = new TLegend(0.71,0.755,0.898,0.925);
  gStyle->SetErrorX(0);
  legend222 -> AddEntry(sig_totMC, "MC", "el");
  legend222 -> AddEntry(h1_probeMvaId_jpsi, "Data", "ep");
  h1_probeMvaId_jpsi->GetYaxis()->SetRangeUser(0., 0.18);
  h1_probeMvaId_jpsi->SetLineColor(kBlack);	 
  h1_probeMvaId_jpsi->SetMarkerColor(kBlack);	 
  h1_probeMvaId_jpsi->SetMarkerStyle(8);
  h1_probeMvaId_jpsi->SetLineWidth(1);
  sig_totMC->SetLineColor(kRed);	 
  sig_totMC->SetMarkerColor(kRed);	 
  sig_totMC->SetMarkerStyle(1);
  sig_totMC->SetLineWidth(1); 
  sig_totMC->GetXaxis()->SetTitle("probeMvaId");
  sig_totMC->GetYaxis()->SetTitle("A.U.");
  sig_totMC->SetTitle("Endcap   2 GeV < p_{t} < 5 GeV");
  sig_totMC->SetTitleSize(0.039);
  h1_probeMvaId_jpsi->SetTitle("Endcap   2 GeV < p_{t} < 5 GeV");
  h1_probeMvaId_jpsi->SetTitleSize(0.039);
  legend222->Draw();
  auto rp = new TRatioPlot(h1_probeMvaId_jpsi, sig_totMC, "pois");
  c1->SetTicks(0, 1);
  rp->SetH2DrawOpt("eHIST");
  rp->SetH1DrawOpt("ep");
  rp->Draw();
  //rp->GetUpperPad()->cd();
  //h1_probeMvaId_jpsi->Draw("PE SAME");   
  //sig_totMC->Draw("LE SAME");   
  legend222->Draw();
  rp->GetLowYaxis()->SetNdivisions(505);
  std::vector<double> lines = {1};
  rp->SetGridlines(lines);
  //rp->SetTitle("Barrel   1.5 GeV < p_{t} < 2 GeV");
  rp->GetLowerRefYaxis()->SetTitle("data/MC");
  rp->GetLowerRefGraph()->SetMinimum(0);
  rp->GetLowerRefGraph()->SetMaximum(2.5);
  rp->GetLowerRefGraph()->GetXaxis()->SetTitleSize(0.039);
  rp->GetLowerRefGraph()->GetYaxis()->SetTitleSize(0.039);
  rp->GetLowerRefGraph()->GetXaxis()->SetLabelSize(0.039);
  rp->GetLowerRefGraph()->GetYaxis()->SetLabelSize(0.039);
  rp->GetUpperRefXaxis()->SetTitleSize(0.039);
  rp->GetUpperRefYaxis()->SetTitleSize(0.039);
  rp->GetUpperRefXaxis()->SetLabelSize(0.039);
  rp->GetUpperRefYaxis()->SetLabelSize(0.039);
  
  c1->SaveAs("ratioplot2_prova1.png");
  
  /*TCanvas* ch11 = new TCanvas("ch1","ch1", 1);
  auto legend22 = new TLegend(0.7,0.7,0.9,0.9);
  legend22 -> AddEntry(bkg_totMC, "MC", "f");
  legend22 -> AddEntry(h1_probeMvaId_bkg, "Data", "f");
  h1_probeMvaId_bkg->SetLineWidth(2);
  bkg_totMC->SetLineWidth(2);
  h1_probeMvaId_bkg->SetLineColor(kBlue);
  bkg_totMC->SetLineColor(kRed);
  h1_probeMvaId_bkg->SetTitle("");
  bkg_totMC->SetTitle("");
  //h1_probeMvaId_bkg->DrawNormalized("hist");
  h1_probeMvaId_bkg->Draw("hist");
  bkg_totMC->Draw("samehist");
  legend22->Draw();
  ch11->SaveAs("probeMvaIdCompTot(bkg)2_prova1.png");

  TCanvas* ch2 = new TCanvas("ch2","ch2", 1);
  h1_probePt_jpsi->SetLineWidth(2);
  h1_probePt_bkg->SetLineWidth(2);
  h1_probePt_jpsi->SetLineColor(6);
  h1_probePt_bkg->SetLineColor(4);
  h1_probePt_jpsi->SetTitle("");
  h1_probePt_bkg->SetTitle("");
  h1_probePt_jpsi->DrawNormalized("hist");
  h1_probePt_bkg->DrawNormalized("samehist");
  ch2->SaveAs("probePt2_prova1.png");

  TCanvas* ch3 = new TCanvas("ch3","ch3", 1);
  h1_probeEta_jpsi->SetLineWidth(2);
  h1_probeEta_bkg->SetLineWidth(2);
  h1_probeEta_jpsi->SetLineColor(6);
  h1_probeEta_bkg->SetLineColor(4);
  h1_probeEta_jpsi->SetTitle("");
  h1_probeEta_bkg->SetTitle("");
  h1_probeEta_jpsi->DrawNormalized("hist");
  h1_probeEta_bkg->DrawNormalized("samehist");
  ch3->SaveAs("probeEta2_prova1.png");*/
}

// Convert ROOT tree in RooDataset
void getDataSet(const char *rootfile, RooWorkspace *ws, float lowRange, float highRange) {    
  
  cout << "roofitting file " << rootfile << endl;
  
  // fit variables
  RooRealVar pair_mass("pair_mass", "M_{inv}", lowRange, highRange,"GeV");
  // 
  // trigger
  RooRealVar hlt_9ip6("hlt_9ip6", "hlt_9ip6", -0.5, 1.5, "");
  // 
  // discriminating variables
  RooRealVar probeMvaId("probeMvaId", "probeMvaId", -4, 16, "");                
  RooRealVar probePt("probePt", "probePt", 0., 1000., "");
  RooRealVar probeEta("probeEta", "probeEta", -2.4, 2.4, "");
  RooRealVar B_mass("B_mass", "B_mass", 4.5, 6.0, "");

  RooArgSet setall(pair_mass,hlt_9ip6,probeMvaId,probePt,probeEta, B_mass);

  TFile *file = TFile::Open(rootfile);
  TTree *tree = (TTree*)file->Get("tnpAna/fitter_tree");

  RooDataSet *data = new RooDataSet("data","data",tree,setall,0); 

  // Inclusive
  data = (RooDataSet*)data->reduce("hlt_9ip6==1 && (B_mass<5.6 && B_mass>4.7) &&  ( (probePt>1.0 && probeEta>-1.5 && probeEta<1.5) || (probePt>2.0 && (probeEta<-1.5 || probeEta>1.5)) )");   

  // Barrel:
  // pt: 1-1.5 GeV    
  //data = (RooDataSet*)data->reduce("hlt_9ip6==1 && probePt>1.0 && probePt<1.5 && probeEta<1.5 && probeEta>-1.5 && (B_mass<5.6 && B_mass>4.7)");      
  // pt: 1.5-2 GeV    
  //data = (RooDataSet*)data->reduce("hlt_9ip6==1 && probePt>1.5 && probePt<2 && probeEta<1.5 && probeEta>-1.5 && (B_mass<5.6 && B_mass>4.7)");      
  // pt: 2-5 GeV    
  // data = (RooDataSet*)data->reduce("hlt_9ip6==1 && probePt>2.0 && probePt<5 && probeEta<1.5 && probeEta>-1.5 && (B_mass<5.6 && B_mass>4.7)");      
  // pt: 5 GeV    
  //data = (RooDataSet*)data->reduce("hlt_9ip6==1 && probePt>5 && probeEta<1.5 && probeEta>-1.5 && B_mass<5.6 && B_mass>4.7");      
  // Endcap
  // pt: 2-5 GeV    
  //data = (RooDataSet*)data->reduce("hlt_9ip6==1 && probePt>2.0 && probePt<5 && B_mass<5.6 && B_mass>4.7 && (probeEta>1.5 || probeEta<-1.5)");      
  // pt: 5 GeV    
  //data = (RooDataSet*)data->reduce("hlt_9ip6==1 && probePt>5 && B_mass<5.6 && B_mass>4.7 && (probeEta>1.5 || probeEta<-1.5)");      

  data->Print();

  ws->import(*data);
}
