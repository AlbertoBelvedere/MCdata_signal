//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Jun  7 23:27:26 2021 by ROOT version 6.14/02
// from TTree Events/Events
// found on file: naniMc_22_marchProd.root
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

   // Declaration of leaf types
   UInt_t          run;
   UInt_t          luminosityBlock;
   ULong64_t       event;
   UInt_t          nBToKEE;
   Float_t         BToKEE_b_iso03[729];   //[nBToKEE]
   Float_t         BToKEE_b_iso03_dca[729];   //[nBToKEE]
   Float_t         BToKEE_b_iso03_dca_tight[729];   //[nBToKEE]
   Float_t         BToKEE_b_iso04[729];   //[nBToKEE]
   Float_t         BToKEE_b_iso04_dca[729];   //[nBToKEE]
   Float_t         BToKEE_b_iso04_dca_tight[729];   //[nBToKEE]
   Float_t         BToKEE_cos2D[729];   //[nBToKEE]
   Float_t         BToKEE_eta[729];   //[nBToKEE]
   Float_t         BToKEE_fit_cos2D[729];   //[nBToKEE]
   Float_t         BToKEE_fit_eta[729];   //[nBToKEE]
   Float_t         BToKEE_fit_k_eta[729];   //[nBToKEE]
   Float_t         BToKEE_fit_k_phi[729];   //[nBToKEE]
   Float_t         BToKEE_fit_k_pt[729];   //[nBToKEE]
   Float_t         BToKEE_fit_l1_eta[729];   //[nBToKEE]
   Float_t         BToKEE_fit_l1_phi[729];   //[nBToKEE]
   Float_t         BToKEE_fit_l1_pt[729];   //[nBToKEE]
   Float_t         BToKEE_fit_l2_eta[729];   //[nBToKEE]
   Float_t         BToKEE_fit_l2_phi[729];   //[nBToKEE]
   Float_t         BToKEE_fit_l2_pt[729];   //[nBToKEE]
   Float_t         BToKEE_fit_mass[729];   //[nBToKEE]
   Float_t         BToKEE_fit_massErr[729];   //[nBToKEE]
   Float_t         BToKEE_fit_phi[729];   //[nBToKEE]
   Float_t         BToKEE_fit_pt[729];   //[nBToKEE]
   Float_t         BToKEE_k_iso03[729];   //[nBToKEE]
   Float_t         BToKEE_k_iso03_dca[729];   //[nBToKEE]
   Float_t         BToKEE_k_iso03_dca_tight[729];   //[nBToKEE]
   Float_t         BToKEE_k_iso04[729];   //[nBToKEE]
   Float_t         BToKEE_k_iso04_dca[729];   //[nBToKEE]
   Float_t         BToKEE_k_iso04_dca_tight[729];   //[nBToKEE]
   Float_t         BToKEE_k_svip2d[729];   //[nBToKEE]
   Float_t         BToKEE_k_svip2d_err[729];   //[nBToKEE]
   Float_t         BToKEE_k_svip3d[729];   //[nBToKEE]
   Float_t         BToKEE_k_svip3d_err[729];   //[nBToKEE]
   Float_t         BToKEE_l1_iso03[729];   //[nBToKEE]
   Float_t         BToKEE_l1_iso03_dca[729];   //[nBToKEE]
   Float_t         BToKEE_l1_iso03_dca_tight[729];   //[nBToKEE]
   Float_t         BToKEE_l1_iso04[729];   //[nBToKEE]
   Float_t         BToKEE_l1_iso04_dca[729];   //[nBToKEE]
   Float_t         BToKEE_l1_iso04_dca_tight[729];   //[nBToKEE]
   Float_t         BToKEE_l2_iso03[729];   //[nBToKEE]
   Float_t         BToKEE_l2_iso03_dca[729];   //[nBToKEE]
   Float_t         BToKEE_l2_iso03_dca_tight[729];   //[nBToKEE]
   Float_t         BToKEE_l2_iso04[729];   //[nBToKEE]
   Float_t         BToKEE_l2_iso04_dca[729];   //[nBToKEE]
   Float_t         BToKEE_l2_iso04_dca_tight[729];   //[nBToKEE]
   Float_t         BToKEE_l_xy[729];   //[nBToKEE]
   Float_t         BToKEE_l_xy_unc[729];   //[nBToKEE]
   Float_t         BToKEE_mass[729];   //[nBToKEE]
   Float_t         BToKEE_maxDR[729];   //[nBToKEE]
   Float_t         BToKEE_minDR[729];   //[nBToKEE]
   Float_t         BToKEE_mllErr_llfit[729];   //[nBToKEE]
   Float_t         BToKEE_mll_fullfit[729];   //[nBToKEE]
   Float_t         BToKEE_mll_llfit[729];   //[nBToKEE]
   Float_t         BToKEE_mll_raw[729];   //[nBToKEE]
   Float_t         BToKEE_phi[729];   //[nBToKEE]
   Float_t         BToKEE_pt[729];   //[nBToKEE]
   Float_t         BToKEE_svprob[729];   //[nBToKEE]
   Float_t         BToKEE_vtx_ex[729];   //[nBToKEE]
   Float_t         BToKEE_vtx_ey[729];   //[nBToKEE]
   Float_t         BToKEE_vtx_ez[729];   //[nBToKEE]
   Float_t         BToKEE_vtx_x[729];   //[nBToKEE]
   Float_t         BToKEE_vtx_y[729];   //[nBToKEE]
   Float_t         BToKEE_vtx_z[729];   //[nBToKEE]
   Int_t           BToKEE_b_n_isotrk[729];   //[nBToKEE]
   Int_t           BToKEE_b_n_isotrk_dca[729];   //[nBToKEE]
   Int_t           BToKEE_b_n_isotrk_dca_tight[729];   //[nBToKEE]
   Int_t           BToKEE_charge[729];   //[nBToKEE]
   Int_t           BToKEE_kIdx[729];   //[nBToKEE]
   Int_t           BToKEE_k_n_isotrk[729];   //[nBToKEE]
   Int_t           BToKEE_k_n_isotrk_dca[729];   //[nBToKEE]
   Int_t           BToKEE_k_n_isotrk_dca_tight[729];   //[nBToKEE]
   Int_t           BToKEE_l1Idx[729];   //[nBToKEE]
   Int_t           BToKEE_l1_n_isotrk[729];   //[nBToKEE]
   Int_t           BToKEE_l1_n_isotrk_dca[729];   //[nBToKEE]
   Int_t           BToKEE_l1_n_isotrk_dca_tight[729];   //[nBToKEE]
   Int_t           BToKEE_l2Idx[729];   //[nBToKEE]
   Int_t           BToKEE_l2_n_isotrk[729];   //[nBToKEE]
   Int_t           BToKEE_l2_n_isotrk_dca[729];   //[nBToKEE]
   Int_t           BToKEE_l2_n_isotrk_dca_tight[729];   //[nBToKEE]
   Int_t           BToKEE_n_k_used[729];   //[nBToKEE]
   Int_t           BToKEE_n_l1_used[729];   //[nBToKEE]
   Int_t           BToKEE_n_l2_used[729];   //[nBToKEE]
   Int_t           BToKEE_pdgId[729];   //[nBToKEE]
   UInt_t          nBToKMuMu;
   Float_t         BToKMuMu_b_iso03[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_b_iso03_dca[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_b_iso03_dca_tight[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_b_iso04[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_b_iso04_dca[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_b_iso04_dca_tight[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_cos2D[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_eta[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_fit_cos2D[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_fit_eta[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_fit_k_eta[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_fit_k_phi[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_fit_k_pt[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_fit_l1_eta[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_fit_l1_phi[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_fit_l1_pt[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_fit_l2_eta[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_fit_l2_phi[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_fit_l2_pt[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_fit_mass[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_fit_massErr[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_fit_phi[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_fit_pt[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_k_iso03[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_k_iso03_dca[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_k_iso03_dca_tight[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_k_iso04[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_k_iso04_dca[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_k_iso04_dca_tight[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_k_svip2d[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_k_svip2d_err[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_k_svip3d[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_k_svip3d_err[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_l1_iso03[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_l1_iso03_dca[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_l1_iso03_dca_tight[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_l1_iso04[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_l1_iso04_dca[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_l1_iso04_dca_tight[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_l2_iso03[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_l2_iso03_dca[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_l2_iso03_dca_tight[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_l2_iso04[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_l2_iso04_dca[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_l2_iso04_dca_tight[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_l_xy[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_l_xy_unc[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_mass[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_maxDR[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_minDR[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_mllErr_llfit[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_mll_fullfit[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_mll_llfit[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_mll_raw[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_phi[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_pt[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_svprob[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_vtx_ex[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_vtx_ey[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_vtx_ez[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_vtx_x[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_vtx_y[149];   //[nBToKMuMu]
   Float_t         BToKMuMu_vtx_z[149];   //[nBToKMuMu]
   Int_t           BToKMuMu_b_n_isotrk[149];   //[nBToKMuMu]
   Int_t           BToKMuMu_b_n_isotrk_dca[149];   //[nBToKMuMu]
   Int_t           BToKMuMu_b_n_isotrk_dca_tight[149];   //[nBToKMuMu]
   Int_t           BToKMuMu_charge[149];   //[nBToKMuMu]
   Int_t           BToKMuMu_kIdx[149];   //[nBToKMuMu]
   Int_t           BToKMuMu_k_n_isotrk[149];   //[nBToKMuMu]
   Int_t           BToKMuMu_k_n_isotrk_dca[149];   //[nBToKMuMu]
   Int_t           BToKMuMu_k_n_isotrk_dca_tight[149];   //[nBToKMuMu]
   Int_t           BToKMuMu_l1Idx[149];   //[nBToKMuMu]
   Int_t           BToKMuMu_l1_n_isotrk[149];   //[nBToKMuMu]
   Int_t           BToKMuMu_l1_n_isotrk_dca[149];   //[nBToKMuMu]
   Int_t           BToKMuMu_l1_n_isotrk_dca_tight[149];   //[nBToKMuMu]
   Int_t           BToKMuMu_l2Idx[149];   //[nBToKMuMu]
   Int_t           BToKMuMu_l2_n_isotrk[149];   //[nBToKMuMu]
   Int_t           BToKMuMu_l2_n_isotrk_dca[149];   //[nBToKMuMu]
   Int_t           BToKMuMu_l2_n_isotrk_dca_tight[149];   //[nBToKMuMu]
   Int_t           BToKMuMu_n_k_used[149];   //[nBToKMuMu]
   Int_t           BToKMuMu_n_l1_used[149];   //[nBToKMuMu]
   Int_t           BToKMuMu_n_l2_used[149];   //[nBToKMuMu]
   Int_t           BToKMuMu_pdgId[149];   //[nBToKMuMu]
   UInt_t          nElectron;
   Float_t         Electron_convChi2Prob[24];   //[nElectron]
   Float_t         Electron_convDeltaCotFromPin[24];   //[nElectron]
   Float_t         Electron_convLxy[24];   //[nElectron]
   Float_t         Electron_convMass[24];   //[nElectron]
   Float_t         Electron_convMassAfterFit[24];   //[nElectron]
   Float_t         Electron_convMassBeforeFit[24];   //[nElectron]
   Float_t         Electron_convMassFromPin[24];   //[nElectron]
   Float_t         Electron_convMinTrkPt[24];   //[nElectron]
   Float_t         Electron_convVtxRadius[24];   //[nElectron]
   Float_t         Electron_dxy[24];   //[nElectron]
   Float_t         Electron_dxyErr[24];   //[nElectron]
   Float_t         Electron_dz[24];   //[nElectron]
   Float_t         Electron_dzErr[24];   //[nElectron]
   Float_t         Electron_dzTrg[24];   //[nElectron]
   Float_t         Electron_eta[24];   //[nElectron]
   Float_t         Electron_fBrem[24];   //[nElectron]
   Float_t         Electron_ip3d[24];   //[nElectron]
   Float_t         Electron_mass[24];   //[nElectron]
   Float_t         Electron_mvaId[24];   //[nElectron]
   Float_t         Electron_pfRelIso[24];   //[nElectron]
   Float_t         Electron_pfmvaId[24];   //[nElectron]
   Float_t         Electron_phi[24];   //[nElectron]
   Float_t         Electron_pt[24];   //[nElectron]
   Float_t         Electron_ptBiased[24];   //[nElectron]
   Float_t         Electron_sip3d[24];   //[nElectron]
   Float_t         Electron_trkRelIso[24];   //[nElectron]
   Float_t         Electron_unBiased[24];   //[nElectron]
   Float_t         Electron_vx[24];   //[nElectron]
   Float_t         Electron_vy[24];   //[nElectron]
   Float_t         Electron_vz[24];   //[nElectron]
   Int_t           Electron_charge[24];   //[nElectron]
   Int_t           Electron_convDeltaExpectedNHitsInner[24];   //[nElectron]
   Int_t           Electron_convLeadIdx[24];   //[nElectron]
   Int_t           Electron_convLeadNHitsBeforeVtx[24];   //[nElectron]
   Int_t           Electron_convMaxNHitsBeforeVtx[24];   //[nElectron]
   Int_t           Electron_convSumNHitsBeforeVtx[24];   //[nElectron]
   Int_t           Electron_convTracksN[24];   //[nElectron]
   Int_t           Electron_convTrailIdx[24];   //[nElectron]
   Int_t           Electron_convTrailNHitsBeforeVtx[24];   //[nElectron]
   Int_t           Electron_pdgId[24];   //[nElectron]
   Bool_t          Electron_convExtra[24];   //[nElectron]
   Bool_t          Electron_convLead[24];   //[nElectron]
   Bool_t          Electron_convLoose[24];   //[nElectron]
   Bool_t          Electron_convOpen[24];   //[nElectron]
   Bool_t          Electron_convQualityHighEff[24];   //[nElectron]
   Bool_t          Electron_convQualityHighPurity[24];   //[nElectron]
   Bool_t          Electron_convTight[24];   //[nElectron]
   Bool_t          Electron_convTrail[24];   //[nElectron]
   Bool_t          Electron_convValid[24];   //[nElectron]
   Bool_t          Electron_convVeto[24];   //[nElectron]
   Bool_t          Electron_isLowPt[24];   //[nElectron]
   Bool_t          Electron_isPF[24];   //[nElectron]
   Bool_t          Electron_isPFoverlap[24];   //[nElectron]
   UInt_t          nGenPart;
   Float_t         GenPart_eta[129];   //[nGenPart]
   Float_t         GenPart_mass[129];   //[nGenPart]
   Float_t         GenPart_phi[129];   //[nGenPart]
   Float_t         GenPart_pt[129];   //[nGenPart]
   Float_t         GenPart_vx[129];   //[nGenPart]
   Float_t         GenPart_vy[129];   //[nGenPart]
   Float_t         GenPart_vz[129];   //[nGenPart]
   Int_t           GenPart_genPartIdxMother[129];   //[nGenPart]
   Int_t           GenPart_pdgId[129];   //[nGenPart]
   Int_t           GenPart_status[129];   //[nGenPart]
   Int_t           GenPart_statusFlags[129];   //[nGenPart]
   Float_t         Generator_binvar;
   Float_t         Generator_scalePDF;
   Float_t         Generator_weight;
   Float_t         Generator_x1;
   Float_t         Generator_x2;
   Float_t         Generator_xpdf1;
   Float_t         Generator_xpdf2;
   Int_t           Generator_id1;
   Int_t           Generator_id2;
   Float_t         genWeight;
   UInt_t          nPSWeight;
   Float_t         PSWeight[1];   //[nPSWeight]
   UInt_t          nMuon;
   Float_t         Muon_dxy[8];   //[nMuon]
   Float_t         Muon_dxyErr[8];   //[nMuon]
   Float_t         Muon_dz[8];   //[nMuon]
   Float_t         Muon_dzErr[8];   //[nMuon]
   Float_t         Muon_eta[8];   //[nMuon]
   Float_t         Muon_ip3d[8];   //[nMuon]
   Float_t         Muon_mass[8];   //[nMuon]
   Float_t         Muon_matched_dpt[8];   //[nMuon]
   Float_t         Muon_matched_dr[8];   //[nMuon]
   Float_t         Muon_pfRelIso03_all[8];   //[nMuon]
   Float_t         Muon_pfRelIso04_all[8];   //[nMuon]
   Float_t         Muon_phi[8];   //[nMuon]
   Float_t         Muon_pt[8];   //[nMuon]
   Float_t         Muon_ptErr[8];   //[nMuon]
   Float_t         Muon_sip3d[8];   //[nMuon]
   Float_t         Muon_vx[8];   //[nMuon]
   Float_t         Muon_vy[8];   //[nMuon]
   Float_t         Muon_vz[8];   //[nMuon]
   Int_t           Muon_charge[8];   //[nMuon]
   Int_t           Muon_fired_HLT_Mu10p5_IP3p5[8];   //[nMuon]
   Int_t           Muon_fired_HLT_Mu12_IP6[8];   //[nMuon]
   Int_t           Muon_fired_HLT_Mu7_IP4[8];   //[nMuon]
   Int_t           Muon_fired_HLT_Mu8_IP3[8];   //[nMuon]
   Int_t           Muon_fired_HLT_Mu8_IP5[8];   //[nMuon]
   Int_t           Muon_fired_HLT_Mu8_IP6[8];   //[nMuon]
   Int_t           Muon_fired_HLT_Mu8p5_IP3p5[8];   //[nMuon]
   Int_t           Muon_fired_HLT_Mu9_IP4[8];   //[nMuon]
   Int_t           Muon_fired_HLT_Mu9_IP5[8];   //[nMuon]
   Int_t           Muon_fired_HLT_Mu9_IP6[8];   //[nMuon]
   Int_t           Muon_isTriggering[8];   //[nMuon]
   Int_t           Muon_looseId[8];   //[nMuon]
   Int_t           Muon_pdgId[8];   //[nMuon]
   Bool_t          Muon_isGlobal[8];   //[nMuon]
   Bool_t          Muon_isPFcand[8];   //[nMuon]
   Bool_t          Muon_isTracker[8];   //[nMuon]
   Bool_t          Muon_mediumId[8];   //[nMuon]
   UChar_t         Muon_pfIsoId[8];   //[nMuon]
   Bool_t          Muon_softId[8];   //[nMuon]
   Bool_t          Muon_tightId[8];   //[nMuon]
   UChar_t         Muon_tkIsoId[8];   //[nMuon]
   Bool_t          Muon_triggerIdLoose[8];   //[nMuon]
   Float_t         Pileup_nTrueInt;
   Float_t         Pileup_pudensity;
   Float_t         Pileup_gpudensity;
   Int_t           Pileup_nPU;
   Int_t           Pileup_sumEOOT;
   Int_t           Pileup_sumLOOT;
   Float_t         fixedGridRhoFastjetAll;
   Float_t         fixedGridRhoFastjetCentral;
   Float_t         fixedGridRhoFastjetCentralCalo;
   Float_t         fixedGridRhoFastjetCentralChargedPileUp;
   Float_t         fixedGridRhoFastjetCentralNeutral;
   UInt_t          nProbeTracks;
   Float_t         ProbeTracks_DCASig[362];   //[nProbeTracks]
   Float_t         ProbeTracks_dxy[362];   //[nProbeTracks]
   Float_t         ProbeTracks_dxyS[362];   //[nProbeTracks]
   Float_t         ProbeTracks_dz[362];   //[nProbeTracks]
   Float_t         ProbeTracks_dzS[362];   //[nProbeTracks]
   Float_t         ProbeTracks_dzTrg[362];   //[nProbeTracks]
   Float_t         ProbeTracks_eta[362];   //[nProbeTracks]
   Float_t         ProbeTracks_mass[362];   //[nProbeTracks]
   Float_t         ProbeTracks_phi[362];   //[nProbeTracks]
   Float_t         ProbeTracks_pt[362];   //[nProbeTracks]
   Float_t         ProbeTracks_vx[362];   //[nProbeTracks]
   Float_t         ProbeTracks_vy[362];   //[nProbeTracks]
   Float_t         ProbeTracks_vz[362];   //[nProbeTracks]
   Int_t           ProbeTracks_charge[362];   //[nProbeTracks]
   Int_t           ProbeTracks_isLostTrk[362];   //[nProbeTracks]
   Int_t           ProbeTracks_isPacked[362];   //[nProbeTracks]
   Int_t           ProbeTracks_nValidHits[362];   //[nProbeTracks]
   Int_t           ProbeTracks_pdgId[362];   //[nProbeTracks]
   Bool_t          ProbeTracks_isMatchedToEle[362];   //[nProbeTracks]
   Bool_t          ProbeTracks_isMatchedToLooseMuon[362];   //[nProbeTracks]
   Bool_t          ProbeTracks_isMatchedToLowPtEle[362];   //[nProbeTracks]
   Bool_t          ProbeTracks_isMatchedToMediumMuon[362];   //[nProbeTracks]
   Bool_t          ProbeTracks_isMatchedToMuon[362];   //[nProbeTracks]
   Bool_t          ProbeTracks_isMatchedToSoftMuon[362];   //[nProbeTracks]
   UChar_t         HLT_Mu7_IP4;
   UChar_t         HLT_Mu8_IP6;
   UChar_t         HLT_Mu8_IP5;
   UChar_t         HLT_Mu8_IP3;
   UChar_t         HLT_Mu8p5_IP3p5;
   UChar_t         HLT_Mu9_IP6;
   UChar_t         HLT_Mu9_IP5;
   UChar_t         HLT_Mu9_IP4;
   UChar_t         HLT_Mu10p5_IP3p5;
   UChar_t         HLT_Mu12_IP6;
   UChar_t         L1_SingleMu7er1p5;
   UChar_t         L1_SingleMu8er1p5;
   UChar_t         L1_SingleMu9er1p5;
   UChar_t         L1_SingleMu10er1p5;
   UChar_t         L1_SingleMu12er1p5;
   UChar_t         L1_SingleMu22;
   UInt_t          nTrigObj;
   Float_t         TrigObj_pt[3];   //[nTrigObj]
   Float_t         TrigObj_eta[3];   //[nTrigObj]
   Float_t         TrigObj_phi[3];   //[nTrigObj]
   Float_t         TrigObj_l1pt[3];   //[nTrigObj]
   Float_t         TrigObj_l1pt_2[3];   //[nTrigObj]
   Float_t         TrigObj_l2pt[3];   //[nTrigObj]
   Int_t           TrigObj_id[3];   //[nTrigObj]
   Int_t           TrigObj_l1iso[3];   //[nTrigObj]
   Int_t           TrigObj_l1charge[3];   //[nTrigObj]
   Int_t           TrigObj_filterBits[3];   //[nTrigObj]
   UInt_t          nOtherPV;
   Float_t         OtherPV_z[3];   //[nOtherPV]
   Float_t         PV_ndof;
   Float_t         PV_x;
   Float_t         PV_y;
   Float_t         PV_z;
   Float_t         PV_chi2;
   Float_t         PV_score;
   Int_t           PV_npvs;
   Int_t           PV_npvsGood;
   UInt_t          nSV;
   Float_t         SV_dlen[11];   //[nSV]
   Float_t         SV_dlenSig[11];   //[nSV]
   Float_t         SV_pAngle[11];   //[nSV]
   Int_t           Electron_genPartIdx[24];   //[nElectron]
   Int_t           Electron_genPartFlav[24];   //[nElectron]
   Int_t           Muon_genPartIdx[8];   //[nMuon]
   Int_t           Muon_genPartFlav[8];   //[nMuon]
   Float_t         SV_chi2[11];   //[nSV]
   Float_t         SV_eta[11];   //[nSV]
   Float_t         SV_mass[11];   //[nSV]
   Float_t         SV_ndof[11];   //[nSV]
   Float_t         SV_phi[11];   //[nSV]
   Float_t         SV_pt[11];   //[nSV]
   Float_t         SV_x[11];   //[nSV]
   Float_t         SV_y[11];   //[nSV]
   Float_t         SV_z[11];   //[nSV]
   Int_t           ProbeTracks_genPartIdx[362];   //[nProbeTracks]
   Int_t           ProbeTracks_genPartFlav[362];   //[nProbeTracks]

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_luminosityBlock;   //!
   TBranch        *b_event;   //!
   TBranch        *b_nBToKEE;   //!
   TBranch        *b_BToKEE_b_iso03;   //!
   TBranch        *b_BToKEE_b_iso03_dca;   //!
   TBranch        *b_BToKEE_b_iso03_dca_tight;   //!
   TBranch        *b_BToKEE_b_iso04;   //!
   TBranch        *b_BToKEE_b_iso04_dca;   //!
   TBranch        *b_BToKEE_b_iso04_dca_tight;   //!
   TBranch        *b_BToKEE_cos2D;   //!
   TBranch        *b_BToKEE_eta;   //!
   TBranch        *b_BToKEE_fit_cos2D;   //!
   TBranch        *b_BToKEE_fit_eta;   //!
   TBranch        *b_BToKEE_fit_k_eta;   //!
   TBranch        *b_BToKEE_fit_k_phi;   //!
   TBranch        *b_BToKEE_fit_k_pt;   //!
   TBranch        *b_BToKEE_fit_l1_eta;   //!
   TBranch        *b_BToKEE_fit_l1_phi;   //!
   TBranch        *b_BToKEE_fit_l1_pt;   //!
   TBranch        *b_BToKEE_fit_l2_eta;   //!
   TBranch        *b_BToKEE_fit_l2_phi;   //!
   TBranch        *b_BToKEE_fit_l2_pt;   //!
   TBranch        *b_BToKEE_fit_mass;   //!
   TBranch        *b_BToKEE_fit_massErr;   //!
   TBranch        *b_BToKEE_fit_phi;   //!
   TBranch        *b_BToKEE_fit_pt;   //!
   TBranch        *b_BToKEE_k_iso03;   //!
   TBranch        *b_BToKEE_k_iso03_dca;   //!
   TBranch        *b_BToKEE_k_iso03_dca_tight;   //!
   TBranch        *b_BToKEE_k_iso04;   //!
   TBranch        *b_BToKEE_k_iso04_dca;   //!
   TBranch        *b_BToKEE_k_iso04_dca_tight;   //!
   TBranch        *b_BToKEE_k_svip2d;   //!
   TBranch        *b_BToKEE_k_svip2d_err;   //!
   TBranch        *b_BToKEE_k_svip3d;   //!
   TBranch        *b_BToKEE_k_svip3d_err;   //!
   TBranch        *b_BToKEE_l1_iso03;   //!
   TBranch        *b_BToKEE_l1_iso03_dca;   //!
   TBranch        *b_BToKEE_l1_iso03_dca_tight;   //!
   TBranch        *b_BToKEE_l1_iso04;   //!
   TBranch        *b_BToKEE_l1_iso04_dca;   //!
   TBranch        *b_BToKEE_l1_iso04_dca_tight;   //!
   TBranch        *b_BToKEE_l2_iso03;   //!
   TBranch        *b_BToKEE_l2_iso03_dca;   //!
   TBranch        *b_BToKEE_l2_iso03_dca_tight;   //!
   TBranch        *b_BToKEE_l2_iso04;   //!
   TBranch        *b_BToKEE_l2_iso04_dca;   //!
   TBranch        *b_BToKEE_l2_iso04_dca_tight;   //!
   TBranch        *b_BToKEE_l_xy;   //!
   TBranch        *b_BToKEE_l_xy_unc;   //!
   TBranch        *b_BToKEE_mass;   //!
   TBranch        *b_BToKEE_maxDR;   //!
   TBranch        *b_BToKEE_minDR;   //!
   TBranch        *b_BToKEE_mllErr_llfit;   //!
   TBranch        *b_BToKEE_mll_fullfit;   //!
   TBranch        *b_BToKEE_mll_llfit;   //!
   TBranch        *b_BToKEE_mll_raw;   //!
   TBranch        *b_BToKEE_phi;   //!
   TBranch        *b_BToKEE_pt;   //!
   TBranch        *b_BToKEE_svprob;   //!
   TBranch        *b_BToKEE_vtx_ex;   //!
   TBranch        *b_BToKEE_vtx_ey;   //!
   TBranch        *b_BToKEE_vtx_ez;   //!
   TBranch        *b_BToKEE_vtx_x;   //!
   TBranch        *b_BToKEE_vtx_y;   //!
   TBranch        *b_BToKEE_vtx_z;   //!
   TBranch        *b_BToKEE_b_n_isotrk;   //!
   TBranch        *b_BToKEE_b_n_isotrk_dca;   //!
   TBranch        *b_BToKEE_b_n_isotrk_dca_tight;   //!
   TBranch        *b_BToKEE_charge;   //!
   TBranch        *b_BToKEE_kIdx;   //!
   TBranch        *b_BToKEE_k_n_isotrk;   //!
   TBranch        *b_BToKEE_k_n_isotrk_dca;   //!
   TBranch        *b_BToKEE_k_n_isotrk_dca_tight;   //!
   TBranch        *b_BToKEE_l1Idx;   //!
   TBranch        *b_BToKEE_l1_n_isotrk;   //!
   TBranch        *b_BToKEE_l1_n_isotrk_dca;   //!
   TBranch        *b_BToKEE_l1_n_isotrk_dca_tight;   //!
   TBranch        *b_BToKEE_l2Idx;   //!
   TBranch        *b_BToKEE_l2_n_isotrk;   //!
   TBranch        *b_BToKEE_l2_n_isotrk_dca;   //!
   TBranch        *b_BToKEE_l2_n_isotrk_dca_tight;   //!
   TBranch        *b_BToKEE_n_k_used;   //!
   TBranch        *b_BToKEE_n_l1_used;   //!
   TBranch        *b_BToKEE_n_l2_used;   //!
   TBranch        *b_BToKEE_pdgId;   //!
   TBranch        *b_nBToKMuMu;   //!
   TBranch        *b_BToKMuMu_b_iso03;   //!
   TBranch        *b_BToKMuMu_b_iso03_dca;   //!
   TBranch        *b_BToKMuMu_b_iso03_dca_tight;   //!
   TBranch        *b_BToKMuMu_b_iso04;   //!
   TBranch        *b_BToKMuMu_b_iso04_dca;   //!
   TBranch        *b_BToKMuMu_b_iso04_dca_tight;   //!
   TBranch        *b_BToKMuMu_cos2D;   //!
   TBranch        *b_BToKMuMu_eta;   //!
   TBranch        *b_BToKMuMu_fit_cos2D;   //!
   TBranch        *b_BToKMuMu_fit_eta;   //!
   TBranch        *b_BToKMuMu_fit_k_eta;   //!
   TBranch        *b_BToKMuMu_fit_k_phi;   //!
   TBranch        *b_BToKMuMu_fit_k_pt;   //!
   TBranch        *b_BToKMuMu_fit_l1_eta;   //!
   TBranch        *b_BToKMuMu_fit_l1_phi;   //!
   TBranch        *b_BToKMuMu_fit_l1_pt;   //!
   TBranch        *b_BToKMuMu_fit_l2_eta;   //!
   TBranch        *b_BToKMuMu_fit_l2_phi;   //!
   TBranch        *b_BToKMuMu_fit_l2_pt;   //!
   TBranch        *b_BToKMuMu_fit_mass;   //!
   TBranch        *b_BToKMuMu_fit_massErr;   //!
   TBranch        *b_BToKMuMu_fit_phi;   //!
   TBranch        *b_BToKMuMu_fit_pt;   //!
   TBranch        *b_BToKMuMu_k_iso03;   //!
   TBranch        *b_BToKMuMu_k_iso03_dca;   //!
   TBranch        *b_BToKMuMu_k_iso03_dca_tight;   //!
   TBranch        *b_BToKMuMu_k_iso04;   //!
   TBranch        *b_BToKMuMu_k_iso04_dca;   //!
   TBranch        *b_BToKMuMu_k_iso04_dca_tight;   //!
   TBranch        *b_BToKMuMu_k_svip2d;   //!
   TBranch        *b_BToKMuMu_k_svip2d_err;   //!
   TBranch        *b_BToKMuMu_k_svip3d;   //!
   TBranch        *b_BToKMuMu_k_svip3d_err;   //!
   TBranch        *b_BToKMuMu_l1_iso03;   //!
   TBranch        *b_BToKMuMu_l1_iso03_dca;   //!
   TBranch        *b_BToKMuMu_l1_iso03_dca_tight;   //!
   TBranch        *b_BToKMuMu_l1_iso04;   //!
   TBranch        *b_BToKMuMu_l1_iso04_dca;   //!
   TBranch        *b_BToKMuMu_l1_iso04_dca_tight;   //!
   TBranch        *b_BToKMuMu_l2_iso03;   //!
   TBranch        *b_BToKMuMu_l2_iso03_dca;   //!
   TBranch        *b_BToKMuMu_l2_iso03_dca_tight;   //!
   TBranch        *b_BToKMuMu_l2_iso04;   //!
   TBranch        *b_BToKMuMu_l2_iso04_dca;   //!
   TBranch        *b_BToKMuMu_l2_iso04_dca_tight;   //!
   TBranch        *b_BToKMuMu_l_xy;   //!
   TBranch        *b_BToKMuMu_l_xy_unc;   //!
   TBranch        *b_BToKMuMu_mass;   //!
   TBranch        *b_BToKMuMu_maxDR;   //!
   TBranch        *b_BToKMuMu_minDR;   //!
   TBranch        *b_BToKMuMu_mllErr_llfit;   //!
   TBranch        *b_BToKMuMu_mll_fullfit;   //!
   TBranch        *b_BToKMuMu_mll_llfit;   //!
   TBranch        *b_BToKMuMu_mll_raw;   //!
   TBranch        *b_BToKMuMu_phi;   //!
   TBranch        *b_BToKMuMu_pt;   //!
   TBranch        *b_BToKMuMu_svprob;   //!
   TBranch        *b_BToKMuMu_vtx_ex;   //!
   TBranch        *b_BToKMuMu_vtx_ey;   //!
   TBranch        *b_BToKMuMu_vtx_ez;   //!
   TBranch        *b_BToKMuMu_vtx_x;   //!
   TBranch        *b_BToKMuMu_vtx_y;   //!
   TBranch        *b_BToKMuMu_vtx_z;   //!
   TBranch        *b_BToKMuMu_b_n_isotrk;   //!
   TBranch        *b_BToKMuMu_b_n_isotrk_dca;   //!
   TBranch        *b_BToKMuMu_b_n_isotrk_dca_tight;   //!
   TBranch        *b_BToKMuMu_charge;   //!
   TBranch        *b_BToKMuMu_kIdx;   //!
   TBranch        *b_BToKMuMu_k_n_isotrk;   //!
   TBranch        *b_BToKMuMu_k_n_isotrk_dca;   //!
   TBranch        *b_BToKMuMu_k_n_isotrk_dca_tight;   //!
   TBranch        *b_BToKMuMu_l1Idx;   //!
   TBranch        *b_BToKMuMu_l1_n_isotrk;   //!
   TBranch        *b_BToKMuMu_l1_n_isotrk_dca;   //!
   TBranch        *b_BToKMuMu_l1_n_isotrk_dca_tight;   //!
   TBranch        *b_BToKMuMu_l2Idx;   //!
   TBranch        *b_BToKMuMu_l2_n_isotrk;   //!
   TBranch        *b_BToKMuMu_l2_n_isotrk_dca;   //!
   TBranch        *b_BToKMuMu_l2_n_isotrk_dca_tight;   //!
   TBranch        *b_BToKMuMu_n_k_used;   //!
   TBranch        *b_BToKMuMu_n_l1_used;   //!
   TBranch        *b_BToKMuMu_n_l2_used;   //!
   TBranch        *b_BToKMuMu_pdgId;   //!
   TBranch        *b_nElectron;   //!
   TBranch        *b_Electron_convChi2Prob;   //!
   TBranch        *b_Electron_convDeltaCotFromPin;   //!
   TBranch        *b_Electron_convLxy;   //!
   TBranch        *b_Electron_convMass;   //!
   TBranch        *b_Electron_convMassAfterFit;   //!
   TBranch        *b_Electron_convMassBeforeFit;   //!
   TBranch        *b_Electron_convMassFromPin;   //!
   TBranch        *b_Electron_convMinTrkPt;   //!
   TBranch        *b_Electron_convVtxRadius;   //!
   TBranch        *b_Electron_dxy;   //!
   TBranch        *b_Electron_dxyErr;   //!
   TBranch        *b_Electron_dz;   //!
   TBranch        *b_Electron_dzErr;   //!
   TBranch        *b_Electron_dzTrg;   //!
   TBranch        *b_Electron_eta;   //!
   TBranch        *b_Electron_fBrem;   //!
   TBranch        *b_Electron_ip3d;   //!
   TBranch        *b_Electron_mass;   //!
   TBranch        *b_Electron_mvaId;   //!
   TBranch        *b_Electron_pfRelIso;   //!
   TBranch        *b_Electron_pfmvaId;   //!
   TBranch        *b_Electron_phi;   //!
   TBranch        *b_Electron_pt;   //!
   TBranch        *b_Electron_ptBiased;   //!
   TBranch        *b_Electron_sip3d;   //!
   TBranch        *b_Electron_trkRelIso;   //!
   TBranch        *b_Electron_unBiased;   //!
   TBranch        *b_Electron_vx;   //!
   TBranch        *b_Electron_vy;   //!
   TBranch        *b_Electron_vz;   //!
   TBranch        *b_Electron_charge;   //!
   TBranch        *b_Electron_convDeltaExpectedNHitsInner;   //!
   TBranch        *b_Electron_convLeadIdx;   //!
   TBranch        *b_Electron_convLeadNHitsBeforeVtx;   //!
   TBranch        *b_Electron_convMaxNHitsBeforeVtx;   //!
   TBranch        *b_Electron_convSumNHitsBeforeVtx;   //!
   TBranch        *b_Electron_convTracksN;   //!
   TBranch        *b_Electron_convTrailIdx;   //!
   TBranch        *b_Electron_convTrailNHitsBeforeVtx;   //!
   TBranch        *b_Electron_pdgId;   //!
   TBranch        *b_Electron_convExtra;   //!
   TBranch        *b_Electron_convLead;   //!
   TBranch        *b_Electron_convLoose;   //!
   TBranch        *b_Electron_convOpen;   //!
   TBranch        *b_Electron_convQualityHighEff;   //!
   TBranch        *b_Electron_convQualityHighPurity;   //!
   TBranch        *b_Electron_convTight;   //!
   TBranch        *b_Electron_convTrail;   //!
   TBranch        *b_Electron_convValid;   //!
   TBranch        *b_Electron_convVeto;   //!
   TBranch        *b_Electron_isLowPt;   //!
   TBranch        *b_Electron_isPF;   //!
   TBranch        *b_Electron_isPFoverlap;   //!
   TBranch        *b_nGenPart;   //!
   TBranch        *b_GenPart_eta;   //!
   TBranch        *b_GenPart_mass;   //!
   TBranch        *b_GenPart_phi;   //!
   TBranch        *b_GenPart_pt;   //!
   TBranch        *b_GenPart_vx;   //!
   TBranch        *b_GenPart_vy;   //!
   TBranch        *b_GenPart_vz;   //!
   TBranch        *b_GenPart_genPartIdxMother;   //!
   TBranch        *b_GenPart_pdgId;   //!
   TBranch        *b_GenPart_status;   //!
   TBranch        *b_GenPart_statusFlags;   //!
   TBranch        *b_Generator_binvar;   //!
   TBranch        *b_Generator_scalePDF;   //!
   TBranch        *b_Generator_weight;   //!
   TBranch        *b_Generator_x1;   //!
   TBranch        *b_Generator_x2;   //!
   TBranch        *b_Generator_xpdf1;   //!
   TBranch        *b_Generator_xpdf2;   //!
   TBranch        *b_Generator_id1;   //!
   TBranch        *b_Generator_id2;   //!
   TBranch        *b_genWeight;   //!
   TBranch        *b_nPSWeight;   //!
   TBranch        *b_PSWeight;   //!
   TBranch        *b_nMuon;   //!
   TBranch        *b_Muon_dxy;   //!
   TBranch        *b_Muon_dxyErr;   //!
   TBranch        *b_Muon_dz;   //!
   TBranch        *b_Muon_dzErr;   //!
   TBranch        *b_Muon_eta;   //!
   TBranch        *b_Muon_ip3d;   //!
   TBranch        *b_Muon_mass;   //!
   TBranch        *b_Muon_matched_dpt;   //!
   TBranch        *b_Muon_matched_dr;   //!
   TBranch        *b_Muon_pfRelIso03_all;   //!
   TBranch        *b_Muon_pfRelIso04_all;   //!
   TBranch        *b_Muon_phi;   //!
   TBranch        *b_Muon_pt;   //!
   TBranch        *b_Muon_ptErr;   //!
   TBranch        *b_Muon_sip3d;   //!
   TBranch        *b_Muon_vx;   //!
   TBranch        *b_Muon_vy;   //!
   TBranch        *b_Muon_vz;   //!
   TBranch        *b_Muon_charge;   //!
   TBranch        *b_Muon_fired_HLT_Mu10p5_IP3p5;   //!
   TBranch        *b_Muon_fired_HLT_Mu12_IP6;   //!
   TBranch        *b_Muon_fired_HLT_Mu7_IP4;   //!
   TBranch        *b_Muon_fired_HLT_Mu8_IP3;   //!
   TBranch        *b_Muon_fired_HLT_Mu8_IP5;   //!
   TBranch        *b_Muon_fired_HLT_Mu8_IP6;   //!
   TBranch        *b_Muon_fired_HLT_Mu8p5_IP3p5;   //!
   TBranch        *b_Muon_fired_HLT_Mu9_IP4;   //!
   TBranch        *b_Muon_fired_HLT_Mu9_IP5;   //!
   TBranch        *b_Muon_fired_HLT_Mu9_IP6;   //!
   TBranch        *b_Muon_isTriggering;   //!
   TBranch        *b_Muon_looseId;   //!
   TBranch        *b_Muon_pdgId;   //!
   TBranch        *b_Muon_isGlobal;   //!
   TBranch        *b_Muon_isPFcand;   //!
   TBranch        *b_Muon_isTracker;   //!
   TBranch        *b_Muon_mediumId;   //!
   TBranch        *b_Muon_pfIsoId;   //!
   TBranch        *b_Muon_softId;   //!
   TBranch        *b_Muon_tightId;   //!
   TBranch        *b_Muon_tkIsoId;   //!
   TBranch        *b_Muon_triggerIdLoose;   //!
   TBranch        *b_Pileup_nTrueInt;   //!
   TBranch        *b_Pileup_pudensity;   //!
   TBranch        *b_Pileup_gpudensity;   //!
   TBranch        *b_Pileup_nPU;   //!
   TBranch        *b_Pileup_sumEOOT;   //!
   TBranch        *b_Pileup_sumLOOT;   //!
   TBranch        *b_fixedGridRhoFastjetAll;   //!
   TBranch        *b_fixedGridRhoFastjetCentral;   //!
   TBranch        *b_fixedGridRhoFastjetCentralCalo;   //!
   TBranch        *b_fixedGridRhoFastjetCentralChargedPileUp;   //!
   TBranch        *b_fixedGridRhoFastjetCentralNeutral;   //!
   TBranch        *b_nProbeTracks;   //!
   TBranch        *b_ProbeTracks_DCASig;   //!
   TBranch        *b_ProbeTracks_dxy;   //!
   TBranch        *b_ProbeTracks_dxyS;   //!
   TBranch        *b_ProbeTracks_dz;   //!
   TBranch        *b_ProbeTracks_dzS;   //!
   TBranch        *b_ProbeTracks_dzTrg;   //!
   TBranch        *b_ProbeTracks_eta;   //!
   TBranch        *b_ProbeTracks_mass;   //!
   TBranch        *b_ProbeTracks_phi;   //!
   TBranch        *b_ProbeTracks_pt;   //!
   TBranch        *b_ProbeTracks_vx;   //!
   TBranch        *b_ProbeTracks_vy;   //!
   TBranch        *b_ProbeTracks_vz;   //!
   TBranch        *b_ProbeTracks_charge;   //!
   TBranch        *b_ProbeTracks_isLostTrk;   //!
   TBranch        *b_ProbeTracks_isPacked;   //!
   TBranch        *b_ProbeTracks_nValidHits;   //!
   TBranch        *b_ProbeTracks_pdgId;   //!
   TBranch        *b_ProbeTracks_isMatchedToEle;   //!
   TBranch        *b_ProbeTracks_isMatchedToLooseMuon;   //!
   TBranch        *b_ProbeTracks_isMatchedToLowPtEle;   //!
   TBranch        *b_ProbeTracks_isMatchedToMediumMuon;   //!
   TBranch        *b_ProbeTracks_isMatchedToMuon;   //!
   TBranch        *b_ProbeTracks_isMatchedToSoftMuon;   //!
   TBranch        *b_HLT_Mu7_IP4;   //!
   TBranch        *b_HLT_Mu8_IP6;   //!
   TBranch        *b_HLT_Mu8_IP5;   //!
   TBranch        *b_HLT_Mu8_IP3;   //!
   TBranch        *b_HLT_Mu8p5_IP3p5;   //!
   TBranch        *b_HLT_Mu9_IP6;   //!
   TBranch        *b_HLT_Mu9_IP5;   //!
   TBranch        *b_HLT_Mu9_IP4;   //!
   TBranch        *b_HLT_Mu10p5_IP3p5;   //!
   TBranch        *b_HLT_Mu12_IP6;   //!
   TBranch        *b_L1_SingleMu7er1p5;   //!
   TBranch        *b_L1_SingleMu8er1p5;   //!
   TBranch        *b_L1_SingleMu9er1p5;   //!
   TBranch        *b_L1_SingleMu10er1p5;   //!
   TBranch        *b_L1_SingleMu12er1p5;   //!
   TBranch        *b_L1_SingleMu22;   //!
   TBranch        *b_nTrigObj;   //!
   TBranch        *b_TrigObj_pt;   //!
   TBranch        *b_TrigObj_eta;   //!
   TBranch        *b_TrigObj_phi;   //!
   TBranch        *b_TrigObj_l1pt;   //!
   TBranch        *b_TrigObj_l1pt_2;   //!
   TBranch        *b_TrigObj_l2pt;   //!
   TBranch        *b_TrigObj_id;   //!
   TBranch        *b_TrigObj_l1iso;   //!
   TBranch        *b_TrigObj_l1charge;   //!
   TBranch        *b_TrigObj_filterBits;   //!
   TBranch        *b_nOtherPV;   //!
   TBranch        *b_OtherPV_z;   //!
   TBranch        *b_PV_ndof;   //!
   TBranch        *b_PV_x;   //!
   TBranch        *b_PV_y;   //!
   TBranch        *b_PV_z;   //!
   TBranch        *b_PV_chi2;   //!
   TBranch        *b_PV_score;   //!
   TBranch        *b_PV_npvs;   //!
   TBranch        *b_PV_npvsGood;   //!
   TBranch        *b_nSV;   //!
   TBranch        *b_SV_dlen;   //!
   TBranch        *b_SV_dlenSig;   //!
   TBranch        *b_SV_pAngle;   //!
   TBranch        *b_Electron_genPartIdx;   //!
   TBranch        *b_Electron_genPartFlav;   //!
   TBranch        *b_Muon_genPartIdx;   //!
   TBranch        *b_Muon_genPartFlav;   //!
   TBranch        *b_SV_chi2;   //!
   TBranch        *b_SV_eta;   //!
   TBranch        *b_SV_mass;   //!
   TBranch        *b_SV_ndof;   //!
   TBranch        *b_SV_phi;   //!
   TBranch        *b_SV_pt;   //!
   TBranch        *b_SV_x;   //!
   TBranch        *b_SV_y;   //!
   TBranch        *b_SV_z;   //!
   TBranch        *b_ProbeTracks_genPartIdx;   //!
   TBranch        *b_ProbeTracks_genPartFlav;   //!

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
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("naniMc_22_marchProd.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("naniMc_22_marchProd.root");
      }
      f->GetObject("Events",tree);

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

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("luminosityBlock", &luminosityBlock, &b_luminosityBlock);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("nBToKEE", &nBToKEE, &b_nBToKEE);
   fChain->SetBranchAddress("BToKEE_b_iso03", BToKEE_b_iso03, &b_BToKEE_b_iso03);
   fChain->SetBranchAddress("BToKEE_b_iso03_dca", BToKEE_b_iso03_dca, &b_BToKEE_b_iso03_dca);
   fChain->SetBranchAddress("BToKEE_b_iso03_dca_tight", BToKEE_b_iso03_dca_tight, &b_BToKEE_b_iso03_dca_tight);
   fChain->SetBranchAddress("BToKEE_b_iso04", BToKEE_b_iso04, &b_BToKEE_b_iso04);
   fChain->SetBranchAddress("BToKEE_b_iso04_dca", BToKEE_b_iso04_dca, &b_BToKEE_b_iso04_dca);
   fChain->SetBranchAddress("BToKEE_b_iso04_dca_tight", BToKEE_b_iso04_dca_tight, &b_BToKEE_b_iso04_dca_tight);
   fChain->SetBranchAddress("BToKEE_cos2D", BToKEE_cos2D, &b_BToKEE_cos2D);
   fChain->SetBranchAddress("BToKEE_eta", BToKEE_eta, &b_BToKEE_eta);
   fChain->SetBranchAddress("BToKEE_fit_cos2D", BToKEE_fit_cos2D, &b_BToKEE_fit_cos2D);
   fChain->SetBranchAddress("BToKEE_fit_eta", BToKEE_fit_eta, &b_BToKEE_fit_eta);
   fChain->SetBranchAddress("BToKEE_fit_k_eta", BToKEE_fit_k_eta, &b_BToKEE_fit_k_eta);
   fChain->SetBranchAddress("BToKEE_fit_k_phi", BToKEE_fit_k_phi, &b_BToKEE_fit_k_phi);
   fChain->SetBranchAddress("BToKEE_fit_k_pt", BToKEE_fit_k_pt, &b_BToKEE_fit_k_pt);
   fChain->SetBranchAddress("BToKEE_fit_l1_eta", BToKEE_fit_l1_eta, &b_BToKEE_fit_l1_eta);
   fChain->SetBranchAddress("BToKEE_fit_l1_phi", BToKEE_fit_l1_phi, &b_BToKEE_fit_l1_phi);
   fChain->SetBranchAddress("BToKEE_fit_l1_pt", BToKEE_fit_l1_pt, &b_BToKEE_fit_l1_pt);
   fChain->SetBranchAddress("BToKEE_fit_l2_eta", BToKEE_fit_l2_eta, &b_BToKEE_fit_l2_eta);
   fChain->SetBranchAddress("BToKEE_fit_l2_phi", BToKEE_fit_l2_phi, &b_BToKEE_fit_l2_phi);
   fChain->SetBranchAddress("BToKEE_fit_l2_pt", BToKEE_fit_l2_pt, &b_BToKEE_fit_l2_pt);
   fChain->SetBranchAddress("BToKEE_fit_mass", BToKEE_fit_mass, &b_BToKEE_fit_mass);
   fChain->SetBranchAddress("BToKEE_fit_massErr", BToKEE_fit_massErr, &b_BToKEE_fit_massErr);
   fChain->SetBranchAddress("BToKEE_fit_phi", BToKEE_fit_phi, &b_BToKEE_fit_phi);
   fChain->SetBranchAddress("BToKEE_fit_pt", BToKEE_fit_pt, &b_BToKEE_fit_pt);
   fChain->SetBranchAddress("BToKEE_k_iso03", BToKEE_k_iso03, &b_BToKEE_k_iso03);
   fChain->SetBranchAddress("BToKEE_k_iso03_dca", BToKEE_k_iso03_dca, &b_BToKEE_k_iso03_dca);
   fChain->SetBranchAddress("BToKEE_k_iso03_dca_tight", BToKEE_k_iso03_dca_tight, &b_BToKEE_k_iso03_dca_tight);
   fChain->SetBranchAddress("BToKEE_k_iso04", BToKEE_k_iso04, &b_BToKEE_k_iso04);
   fChain->SetBranchAddress("BToKEE_k_iso04_dca", BToKEE_k_iso04_dca, &b_BToKEE_k_iso04_dca);
   fChain->SetBranchAddress("BToKEE_k_iso04_dca_tight", BToKEE_k_iso04_dca_tight, &b_BToKEE_k_iso04_dca_tight);
   fChain->SetBranchAddress("BToKEE_k_svip2d", BToKEE_k_svip2d, &b_BToKEE_k_svip2d);
   fChain->SetBranchAddress("BToKEE_k_svip2d_err", BToKEE_k_svip2d_err, &b_BToKEE_k_svip2d_err);
   fChain->SetBranchAddress("BToKEE_k_svip3d", BToKEE_k_svip3d, &b_BToKEE_k_svip3d);
   fChain->SetBranchAddress("BToKEE_k_svip3d_err", BToKEE_k_svip3d_err, &b_BToKEE_k_svip3d_err);
   fChain->SetBranchAddress("BToKEE_l1_iso03", BToKEE_l1_iso03, &b_BToKEE_l1_iso03);
   fChain->SetBranchAddress("BToKEE_l1_iso03_dca", BToKEE_l1_iso03_dca, &b_BToKEE_l1_iso03_dca);
   fChain->SetBranchAddress("BToKEE_l1_iso03_dca_tight", BToKEE_l1_iso03_dca_tight, &b_BToKEE_l1_iso03_dca_tight);
   fChain->SetBranchAddress("BToKEE_l1_iso04", BToKEE_l1_iso04, &b_BToKEE_l1_iso04);
   fChain->SetBranchAddress("BToKEE_l1_iso04_dca", BToKEE_l1_iso04_dca, &b_BToKEE_l1_iso04_dca);
   fChain->SetBranchAddress("BToKEE_l1_iso04_dca_tight", BToKEE_l1_iso04_dca_tight, &b_BToKEE_l1_iso04_dca_tight);
   fChain->SetBranchAddress("BToKEE_l2_iso03", BToKEE_l2_iso03, &b_BToKEE_l2_iso03);
   fChain->SetBranchAddress("BToKEE_l2_iso03_dca", BToKEE_l2_iso03_dca, &b_BToKEE_l2_iso03_dca);
   fChain->SetBranchAddress("BToKEE_l2_iso03_dca_tight", BToKEE_l2_iso03_dca_tight, &b_BToKEE_l2_iso03_dca_tight);
   fChain->SetBranchAddress("BToKEE_l2_iso04", BToKEE_l2_iso04, &b_BToKEE_l2_iso04);
   fChain->SetBranchAddress("BToKEE_l2_iso04_dca", BToKEE_l2_iso04_dca, &b_BToKEE_l2_iso04_dca);
   fChain->SetBranchAddress("BToKEE_l2_iso04_dca_tight", BToKEE_l2_iso04_dca_tight, &b_BToKEE_l2_iso04_dca_tight);
   fChain->SetBranchAddress("BToKEE_l_xy", BToKEE_l_xy, &b_BToKEE_l_xy);
   fChain->SetBranchAddress("BToKEE_l_xy_unc", BToKEE_l_xy_unc, &b_BToKEE_l_xy_unc);
   fChain->SetBranchAddress("BToKEE_mass", BToKEE_mass, &b_BToKEE_mass);
   fChain->SetBranchAddress("BToKEE_maxDR", BToKEE_maxDR, &b_BToKEE_maxDR);
   fChain->SetBranchAddress("BToKEE_minDR", BToKEE_minDR, &b_BToKEE_minDR);
   fChain->SetBranchAddress("BToKEE_mllErr_llfit", BToKEE_mllErr_llfit, &b_BToKEE_mllErr_llfit);
   fChain->SetBranchAddress("BToKEE_mll_fullfit", BToKEE_mll_fullfit, &b_BToKEE_mll_fullfit);
   fChain->SetBranchAddress("BToKEE_mll_llfit", BToKEE_mll_llfit, &b_BToKEE_mll_llfit);
   fChain->SetBranchAddress("BToKEE_mll_raw", BToKEE_mll_raw, &b_BToKEE_mll_raw);
   fChain->SetBranchAddress("BToKEE_phi", BToKEE_phi, &b_BToKEE_phi);
   fChain->SetBranchAddress("BToKEE_pt", BToKEE_pt, &b_BToKEE_pt);
   fChain->SetBranchAddress("BToKEE_svprob", BToKEE_svprob, &b_BToKEE_svprob);
   fChain->SetBranchAddress("BToKEE_vtx_ex", BToKEE_vtx_ex, &b_BToKEE_vtx_ex);
   fChain->SetBranchAddress("BToKEE_vtx_ey", BToKEE_vtx_ey, &b_BToKEE_vtx_ey);
   fChain->SetBranchAddress("BToKEE_vtx_ez", BToKEE_vtx_ez, &b_BToKEE_vtx_ez);
   fChain->SetBranchAddress("BToKEE_vtx_x", BToKEE_vtx_x, &b_BToKEE_vtx_x);
   fChain->SetBranchAddress("BToKEE_vtx_y", BToKEE_vtx_y, &b_BToKEE_vtx_y);
   fChain->SetBranchAddress("BToKEE_vtx_z", BToKEE_vtx_z, &b_BToKEE_vtx_z);
   fChain->SetBranchAddress("BToKEE_b_n_isotrk", BToKEE_b_n_isotrk, &b_BToKEE_b_n_isotrk);
   fChain->SetBranchAddress("BToKEE_b_n_isotrk_dca", BToKEE_b_n_isotrk_dca, &b_BToKEE_b_n_isotrk_dca);
   fChain->SetBranchAddress("BToKEE_b_n_isotrk_dca_tight", BToKEE_b_n_isotrk_dca_tight, &b_BToKEE_b_n_isotrk_dca_tight);
   fChain->SetBranchAddress("BToKEE_charge", BToKEE_charge, &b_BToKEE_charge);
   fChain->SetBranchAddress("BToKEE_kIdx", BToKEE_kIdx, &b_BToKEE_kIdx);
   fChain->SetBranchAddress("BToKEE_k_n_isotrk", BToKEE_k_n_isotrk, &b_BToKEE_k_n_isotrk);
   fChain->SetBranchAddress("BToKEE_k_n_isotrk_dca", BToKEE_k_n_isotrk_dca, &b_BToKEE_k_n_isotrk_dca);
   fChain->SetBranchAddress("BToKEE_k_n_isotrk_dca_tight", BToKEE_k_n_isotrk_dca_tight, &b_BToKEE_k_n_isotrk_dca_tight);
   fChain->SetBranchAddress("BToKEE_l1Idx", BToKEE_l1Idx, &b_BToKEE_l1Idx);
   fChain->SetBranchAddress("BToKEE_l1_n_isotrk", BToKEE_l1_n_isotrk, &b_BToKEE_l1_n_isotrk);
   fChain->SetBranchAddress("BToKEE_l1_n_isotrk_dca", BToKEE_l1_n_isotrk_dca, &b_BToKEE_l1_n_isotrk_dca);
   fChain->SetBranchAddress("BToKEE_l1_n_isotrk_dca_tight", BToKEE_l1_n_isotrk_dca_tight, &b_BToKEE_l1_n_isotrk_dca_tight);
   fChain->SetBranchAddress("BToKEE_l2Idx", BToKEE_l2Idx, &b_BToKEE_l2Idx);
   fChain->SetBranchAddress("BToKEE_l2_n_isotrk", BToKEE_l2_n_isotrk, &b_BToKEE_l2_n_isotrk);
   fChain->SetBranchAddress("BToKEE_l2_n_isotrk_dca", BToKEE_l2_n_isotrk_dca, &b_BToKEE_l2_n_isotrk_dca);
   fChain->SetBranchAddress("BToKEE_l2_n_isotrk_dca_tight", BToKEE_l2_n_isotrk_dca_tight, &b_BToKEE_l2_n_isotrk_dca_tight);
   fChain->SetBranchAddress("BToKEE_n_k_used", BToKEE_n_k_used, &b_BToKEE_n_k_used);
   fChain->SetBranchAddress("BToKEE_n_l1_used", BToKEE_n_l1_used, &b_BToKEE_n_l1_used);
   fChain->SetBranchAddress("BToKEE_n_l2_used", BToKEE_n_l2_used, &b_BToKEE_n_l2_used);
   fChain->SetBranchAddress("BToKEE_pdgId", BToKEE_pdgId, &b_BToKEE_pdgId);
   fChain->SetBranchAddress("nBToKMuMu", &nBToKMuMu, &b_nBToKMuMu);
   fChain->SetBranchAddress("BToKMuMu_b_iso03", BToKMuMu_b_iso03, &b_BToKMuMu_b_iso03);
   fChain->SetBranchAddress("BToKMuMu_b_iso03_dca", BToKMuMu_b_iso03_dca, &b_BToKMuMu_b_iso03_dca);
   fChain->SetBranchAddress("BToKMuMu_b_iso03_dca_tight", BToKMuMu_b_iso03_dca_tight, &b_BToKMuMu_b_iso03_dca_tight);
   fChain->SetBranchAddress("BToKMuMu_b_iso04", BToKMuMu_b_iso04, &b_BToKMuMu_b_iso04);
   fChain->SetBranchAddress("BToKMuMu_b_iso04_dca", BToKMuMu_b_iso04_dca, &b_BToKMuMu_b_iso04_dca);
   fChain->SetBranchAddress("BToKMuMu_b_iso04_dca_tight", BToKMuMu_b_iso04_dca_tight, &b_BToKMuMu_b_iso04_dca_tight);
   fChain->SetBranchAddress("BToKMuMu_cos2D", BToKMuMu_cos2D, &b_BToKMuMu_cos2D);
   fChain->SetBranchAddress("BToKMuMu_eta", BToKMuMu_eta, &b_BToKMuMu_eta);
   fChain->SetBranchAddress("BToKMuMu_fit_cos2D", BToKMuMu_fit_cos2D, &b_BToKMuMu_fit_cos2D);
   fChain->SetBranchAddress("BToKMuMu_fit_eta", BToKMuMu_fit_eta, &b_BToKMuMu_fit_eta);
   fChain->SetBranchAddress("BToKMuMu_fit_k_eta", BToKMuMu_fit_k_eta, &b_BToKMuMu_fit_k_eta);
   fChain->SetBranchAddress("BToKMuMu_fit_k_phi", BToKMuMu_fit_k_phi, &b_BToKMuMu_fit_k_phi);
   fChain->SetBranchAddress("BToKMuMu_fit_k_pt", BToKMuMu_fit_k_pt, &b_BToKMuMu_fit_k_pt);
   fChain->SetBranchAddress("BToKMuMu_fit_l1_eta", BToKMuMu_fit_l1_eta, &b_BToKMuMu_fit_l1_eta);
   fChain->SetBranchAddress("BToKMuMu_fit_l1_phi", BToKMuMu_fit_l1_phi, &b_BToKMuMu_fit_l1_phi);
   fChain->SetBranchAddress("BToKMuMu_fit_l1_pt", BToKMuMu_fit_l1_pt, &b_BToKMuMu_fit_l1_pt);
   fChain->SetBranchAddress("BToKMuMu_fit_l2_eta", BToKMuMu_fit_l2_eta, &b_BToKMuMu_fit_l2_eta);
   fChain->SetBranchAddress("BToKMuMu_fit_l2_phi", BToKMuMu_fit_l2_phi, &b_BToKMuMu_fit_l2_phi);
   fChain->SetBranchAddress("BToKMuMu_fit_l2_pt", BToKMuMu_fit_l2_pt, &b_BToKMuMu_fit_l2_pt);
   fChain->SetBranchAddress("BToKMuMu_fit_mass", BToKMuMu_fit_mass, &b_BToKMuMu_fit_mass);
   fChain->SetBranchAddress("BToKMuMu_fit_massErr", BToKMuMu_fit_massErr, &b_BToKMuMu_fit_massErr);
   fChain->SetBranchAddress("BToKMuMu_fit_phi", BToKMuMu_fit_phi, &b_BToKMuMu_fit_phi);
   fChain->SetBranchAddress("BToKMuMu_fit_pt", BToKMuMu_fit_pt, &b_BToKMuMu_fit_pt);
   fChain->SetBranchAddress("BToKMuMu_k_iso03", BToKMuMu_k_iso03, &b_BToKMuMu_k_iso03);
   fChain->SetBranchAddress("BToKMuMu_k_iso03_dca", BToKMuMu_k_iso03_dca, &b_BToKMuMu_k_iso03_dca);
   fChain->SetBranchAddress("BToKMuMu_k_iso03_dca_tight", BToKMuMu_k_iso03_dca_tight, &b_BToKMuMu_k_iso03_dca_tight);
   fChain->SetBranchAddress("BToKMuMu_k_iso04", BToKMuMu_k_iso04, &b_BToKMuMu_k_iso04);
   fChain->SetBranchAddress("BToKMuMu_k_iso04_dca", BToKMuMu_k_iso04_dca, &b_BToKMuMu_k_iso04_dca);
   fChain->SetBranchAddress("BToKMuMu_k_iso04_dca_tight", BToKMuMu_k_iso04_dca_tight, &b_BToKMuMu_k_iso04_dca_tight);
   fChain->SetBranchAddress("BToKMuMu_k_svip2d", BToKMuMu_k_svip2d, &b_BToKMuMu_k_svip2d);
   fChain->SetBranchAddress("BToKMuMu_k_svip2d_err", BToKMuMu_k_svip2d_err, &b_BToKMuMu_k_svip2d_err);
   fChain->SetBranchAddress("BToKMuMu_k_svip3d", BToKMuMu_k_svip3d, &b_BToKMuMu_k_svip3d);
   fChain->SetBranchAddress("BToKMuMu_k_svip3d_err", BToKMuMu_k_svip3d_err, &b_BToKMuMu_k_svip3d_err);
   fChain->SetBranchAddress("BToKMuMu_l1_iso03", BToKMuMu_l1_iso03, &b_BToKMuMu_l1_iso03);
   fChain->SetBranchAddress("BToKMuMu_l1_iso03_dca", BToKMuMu_l1_iso03_dca, &b_BToKMuMu_l1_iso03_dca);
   fChain->SetBranchAddress("BToKMuMu_l1_iso03_dca_tight", BToKMuMu_l1_iso03_dca_tight, &b_BToKMuMu_l1_iso03_dca_tight);
   fChain->SetBranchAddress("BToKMuMu_l1_iso04", BToKMuMu_l1_iso04, &b_BToKMuMu_l1_iso04);
   fChain->SetBranchAddress("BToKMuMu_l1_iso04_dca", BToKMuMu_l1_iso04_dca, &b_BToKMuMu_l1_iso04_dca);
   fChain->SetBranchAddress("BToKMuMu_l1_iso04_dca_tight", BToKMuMu_l1_iso04_dca_tight, &b_BToKMuMu_l1_iso04_dca_tight);
   fChain->SetBranchAddress("BToKMuMu_l2_iso03", BToKMuMu_l2_iso03, &b_BToKMuMu_l2_iso03);
   fChain->SetBranchAddress("BToKMuMu_l2_iso03_dca", BToKMuMu_l2_iso03_dca, &b_BToKMuMu_l2_iso03_dca);
   fChain->SetBranchAddress("BToKMuMu_l2_iso03_dca_tight", BToKMuMu_l2_iso03_dca_tight, &b_BToKMuMu_l2_iso03_dca_tight);
   fChain->SetBranchAddress("BToKMuMu_l2_iso04", BToKMuMu_l2_iso04, &b_BToKMuMu_l2_iso04);
   fChain->SetBranchAddress("BToKMuMu_l2_iso04_dca", BToKMuMu_l2_iso04_dca, &b_BToKMuMu_l2_iso04_dca);
   fChain->SetBranchAddress("BToKMuMu_l2_iso04_dca_tight", BToKMuMu_l2_iso04_dca_tight, &b_BToKMuMu_l2_iso04_dca_tight);
   fChain->SetBranchAddress("BToKMuMu_l_xy", BToKMuMu_l_xy, &b_BToKMuMu_l_xy);
   fChain->SetBranchAddress("BToKMuMu_l_xy_unc", BToKMuMu_l_xy_unc, &b_BToKMuMu_l_xy_unc);
   fChain->SetBranchAddress("BToKMuMu_mass", BToKMuMu_mass, &b_BToKMuMu_mass);
   fChain->SetBranchAddress("BToKMuMu_maxDR", BToKMuMu_maxDR, &b_BToKMuMu_maxDR);
   fChain->SetBranchAddress("BToKMuMu_minDR", BToKMuMu_minDR, &b_BToKMuMu_minDR);
   fChain->SetBranchAddress("BToKMuMu_mllErr_llfit", BToKMuMu_mllErr_llfit, &b_BToKMuMu_mllErr_llfit);
   fChain->SetBranchAddress("BToKMuMu_mll_fullfit", BToKMuMu_mll_fullfit, &b_BToKMuMu_mll_fullfit);
   fChain->SetBranchAddress("BToKMuMu_mll_llfit", BToKMuMu_mll_llfit, &b_BToKMuMu_mll_llfit);
   fChain->SetBranchAddress("BToKMuMu_mll_raw", BToKMuMu_mll_raw, &b_BToKMuMu_mll_raw);
   fChain->SetBranchAddress("BToKMuMu_phi", BToKMuMu_phi, &b_BToKMuMu_phi);
   fChain->SetBranchAddress("BToKMuMu_pt", BToKMuMu_pt, &b_BToKMuMu_pt);
   fChain->SetBranchAddress("BToKMuMu_svprob", BToKMuMu_svprob, &b_BToKMuMu_svprob);
   fChain->SetBranchAddress("BToKMuMu_vtx_ex", BToKMuMu_vtx_ex, &b_BToKMuMu_vtx_ex);
   fChain->SetBranchAddress("BToKMuMu_vtx_ey", BToKMuMu_vtx_ey, &b_BToKMuMu_vtx_ey);
   fChain->SetBranchAddress("BToKMuMu_vtx_ez", BToKMuMu_vtx_ez, &b_BToKMuMu_vtx_ez);
   fChain->SetBranchAddress("BToKMuMu_vtx_x", BToKMuMu_vtx_x, &b_BToKMuMu_vtx_x);
   fChain->SetBranchAddress("BToKMuMu_vtx_y", BToKMuMu_vtx_y, &b_BToKMuMu_vtx_y);
   fChain->SetBranchAddress("BToKMuMu_vtx_z", BToKMuMu_vtx_z, &b_BToKMuMu_vtx_z);
   fChain->SetBranchAddress("BToKMuMu_b_n_isotrk", BToKMuMu_b_n_isotrk, &b_BToKMuMu_b_n_isotrk);
   fChain->SetBranchAddress("BToKMuMu_b_n_isotrk_dca", BToKMuMu_b_n_isotrk_dca, &b_BToKMuMu_b_n_isotrk_dca);
   fChain->SetBranchAddress("BToKMuMu_b_n_isotrk_dca_tight", BToKMuMu_b_n_isotrk_dca_tight, &b_BToKMuMu_b_n_isotrk_dca_tight);
   fChain->SetBranchAddress("BToKMuMu_charge", BToKMuMu_charge, &b_BToKMuMu_charge);
   fChain->SetBranchAddress("BToKMuMu_kIdx", BToKMuMu_kIdx, &b_BToKMuMu_kIdx);
   fChain->SetBranchAddress("BToKMuMu_k_n_isotrk", BToKMuMu_k_n_isotrk, &b_BToKMuMu_k_n_isotrk);
   fChain->SetBranchAddress("BToKMuMu_k_n_isotrk_dca", BToKMuMu_k_n_isotrk_dca, &b_BToKMuMu_k_n_isotrk_dca);
   fChain->SetBranchAddress("BToKMuMu_k_n_isotrk_dca_tight", BToKMuMu_k_n_isotrk_dca_tight, &b_BToKMuMu_k_n_isotrk_dca_tight);
   fChain->SetBranchAddress("BToKMuMu_l1Idx", BToKMuMu_l1Idx, &b_BToKMuMu_l1Idx);
   fChain->SetBranchAddress("BToKMuMu_l1_n_isotrk", BToKMuMu_l1_n_isotrk, &b_BToKMuMu_l1_n_isotrk);
   fChain->SetBranchAddress("BToKMuMu_l1_n_isotrk_dca", BToKMuMu_l1_n_isotrk_dca, &b_BToKMuMu_l1_n_isotrk_dca);
   fChain->SetBranchAddress("BToKMuMu_l1_n_isotrk_dca_tight", BToKMuMu_l1_n_isotrk_dca_tight, &b_BToKMuMu_l1_n_isotrk_dca_tight);
   fChain->SetBranchAddress("BToKMuMu_l2Idx", BToKMuMu_l2Idx, &b_BToKMuMu_l2Idx);
   fChain->SetBranchAddress("BToKMuMu_l2_n_isotrk", BToKMuMu_l2_n_isotrk, &b_BToKMuMu_l2_n_isotrk);
   fChain->SetBranchAddress("BToKMuMu_l2_n_isotrk_dca", BToKMuMu_l2_n_isotrk_dca, &b_BToKMuMu_l2_n_isotrk_dca);
   fChain->SetBranchAddress("BToKMuMu_l2_n_isotrk_dca_tight", BToKMuMu_l2_n_isotrk_dca_tight, &b_BToKMuMu_l2_n_isotrk_dca_tight);
   fChain->SetBranchAddress("BToKMuMu_n_k_used", BToKMuMu_n_k_used, &b_BToKMuMu_n_k_used);
   fChain->SetBranchAddress("BToKMuMu_n_l1_used", BToKMuMu_n_l1_used, &b_BToKMuMu_n_l1_used);
   fChain->SetBranchAddress("BToKMuMu_n_l2_used", BToKMuMu_n_l2_used, &b_BToKMuMu_n_l2_used);
   fChain->SetBranchAddress("BToKMuMu_pdgId", BToKMuMu_pdgId, &b_BToKMuMu_pdgId);
   fChain->SetBranchAddress("nElectron", &nElectron, &b_nElectron);
   fChain->SetBranchAddress("Electron_convChi2Prob", Electron_convChi2Prob, &b_Electron_convChi2Prob);
   fChain->SetBranchAddress("Electron_convDeltaCotFromPin", Electron_convDeltaCotFromPin, &b_Electron_convDeltaCotFromPin);
   fChain->SetBranchAddress("Electron_convLxy", Electron_convLxy, &b_Electron_convLxy);
   fChain->SetBranchAddress("Electron_convMass", Electron_convMass, &b_Electron_convMass);
   fChain->SetBranchAddress("Electron_convMassAfterFit", Electron_convMassAfterFit, &b_Electron_convMassAfterFit);
   fChain->SetBranchAddress("Electron_convMassBeforeFit", Electron_convMassBeforeFit, &b_Electron_convMassBeforeFit);
   fChain->SetBranchAddress("Electron_convMassFromPin", Electron_convMassFromPin, &b_Electron_convMassFromPin);
   fChain->SetBranchAddress("Electron_convMinTrkPt", Electron_convMinTrkPt, &b_Electron_convMinTrkPt);
   fChain->SetBranchAddress("Electron_convVtxRadius", Electron_convVtxRadius, &b_Electron_convVtxRadius);
   fChain->SetBranchAddress("Electron_dxy", Electron_dxy, &b_Electron_dxy);
   fChain->SetBranchAddress("Electron_dxyErr", Electron_dxyErr, &b_Electron_dxyErr);
   fChain->SetBranchAddress("Electron_dz", Electron_dz, &b_Electron_dz);
   fChain->SetBranchAddress("Electron_dzErr", Electron_dzErr, &b_Electron_dzErr);
   fChain->SetBranchAddress("Electron_dzTrg", Electron_dzTrg, &b_Electron_dzTrg);
   fChain->SetBranchAddress("Electron_eta", Electron_eta, &b_Electron_eta);
   fChain->SetBranchAddress("Electron_fBrem", Electron_fBrem, &b_Electron_fBrem);
   fChain->SetBranchAddress("Electron_ip3d", Electron_ip3d, &b_Electron_ip3d);
   fChain->SetBranchAddress("Electron_mass", Electron_mass, &b_Electron_mass);
   fChain->SetBranchAddress("Electron_mvaId", Electron_mvaId, &b_Electron_mvaId);
   fChain->SetBranchAddress("Electron_pfRelIso", Electron_pfRelIso, &b_Electron_pfRelIso);
   fChain->SetBranchAddress("Electron_pfmvaId", Electron_pfmvaId, &b_Electron_pfmvaId);
   fChain->SetBranchAddress("Electron_phi", Electron_phi, &b_Electron_phi);
   fChain->SetBranchAddress("Electron_pt", Electron_pt, &b_Electron_pt);
   fChain->SetBranchAddress("Electron_ptBiased", Electron_ptBiased, &b_Electron_ptBiased);
   fChain->SetBranchAddress("Electron_sip3d", Electron_sip3d, &b_Electron_sip3d);
   fChain->SetBranchAddress("Electron_trkRelIso", Electron_trkRelIso, &b_Electron_trkRelIso);
   fChain->SetBranchAddress("Electron_unBiased", Electron_unBiased, &b_Electron_unBiased);
   fChain->SetBranchAddress("Electron_vx", Electron_vx, &b_Electron_vx);
   fChain->SetBranchAddress("Electron_vy", Electron_vy, &b_Electron_vy);
   fChain->SetBranchAddress("Electron_vz", Electron_vz, &b_Electron_vz);
   fChain->SetBranchAddress("Electron_charge", Electron_charge, &b_Electron_charge);
   fChain->SetBranchAddress("Electron_convDeltaExpectedNHitsInner", Electron_convDeltaExpectedNHitsInner, &b_Electron_convDeltaExpectedNHitsInner);
   fChain->SetBranchAddress("Electron_convLeadIdx", Electron_convLeadIdx, &b_Electron_convLeadIdx);
   fChain->SetBranchAddress("Electron_convLeadNHitsBeforeVtx", Electron_convLeadNHitsBeforeVtx, &b_Electron_convLeadNHitsBeforeVtx);
   fChain->SetBranchAddress("Electron_convMaxNHitsBeforeVtx", Electron_convMaxNHitsBeforeVtx, &b_Electron_convMaxNHitsBeforeVtx);
   fChain->SetBranchAddress("Electron_convSumNHitsBeforeVtx", Electron_convSumNHitsBeforeVtx, &b_Electron_convSumNHitsBeforeVtx);
   fChain->SetBranchAddress("Electron_convTracksN", Electron_convTracksN, &b_Electron_convTracksN);
   fChain->SetBranchAddress("Electron_convTrailIdx", Electron_convTrailIdx, &b_Electron_convTrailIdx);
   fChain->SetBranchAddress("Electron_convTrailNHitsBeforeVtx", Electron_convTrailNHitsBeforeVtx, &b_Electron_convTrailNHitsBeforeVtx);
   fChain->SetBranchAddress("Electron_pdgId", Electron_pdgId, &b_Electron_pdgId);
   fChain->SetBranchAddress("Electron_convExtra", Electron_convExtra, &b_Electron_convExtra);
   fChain->SetBranchAddress("Electron_convLead", Electron_convLead, &b_Electron_convLead);
   fChain->SetBranchAddress("Electron_convLoose", Electron_convLoose, &b_Electron_convLoose);
   fChain->SetBranchAddress("Electron_convOpen", Electron_convOpen, &b_Electron_convOpen);
   fChain->SetBranchAddress("Electron_convQualityHighEff", Electron_convQualityHighEff, &b_Electron_convQualityHighEff);
   fChain->SetBranchAddress("Electron_convQualityHighPurity", Electron_convQualityHighPurity, &b_Electron_convQualityHighPurity);
   fChain->SetBranchAddress("Electron_convTight", Electron_convTight, &b_Electron_convTight);
   fChain->SetBranchAddress("Electron_convTrail", Electron_convTrail, &b_Electron_convTrail);
   fChain->SetBranchAddress("Electron_convValid", Electron_convValid, &b_Electron_convValid);
   fChain->SetBranchAddress("Electron_convVeto", Electron_convVeto, &b_Electron_convVeto);
   fChain->SetBranchAddress("Electron_isLowPt", Electron_isLowPt, &b_Electron_isLowPt);
   fChain->SetBranchAddress("Electron_isPF", Electron_isPF, &b_Electron_isPF);
   fChain->SetBranchAddress("Electron_isPFoverlap", Electron_isPFoverlap, &b_Electron_isPFoverlap);
   fChain->SetBranchAddress("nGenPart", &nGenPart, &b_nGenPart);
   fChain->SetBranchAddress("GenPart_eta", GenPart_eta, &b_GenPart_eta);
   fChain->SetBranchAddress("GenPart_mass", GenPart_mass, &b_GenPart_mass);
   fChain->SetBranchAddress("GenPart_phi", GenPart_phi, &b_GenPart_phi);
   fChain->SetBranchAddress("GenPart_pt", GenPart_pt, &b_GenPart_pt);
   fChain->SetBranchAddress("GenPart_vx", GenPart_vx, &b_GenPart_vx);
   fChain->SetBranchAddress("GenPart_vy", GenPart_vy, &b_GenPart_vy);
   fChain->SetBranchAddress("GenPart_vz", GenPart_vz, &b_GenPart_vz);
   fChain->SetBranchAddress("GenPart_genPartIdxMother", GenPart_genPartIdxMother, &b_GenPart_genPartIdxMother);
   fChain->SetBranchAddress("GenPart_pdgId", GenPart_pdgId, &b_GenPart_pdgId);
   fChain->SetBranchAddress("GenPart_status", GenPart_status, &b_GenPart_status);
   fChain->SetBranchAddress("GenPart_statusFlags", GenPart_statusFlags, &b_GenPart_statusFlags);
   fChain->SetBranchAddress("Generator_binvar", &Generator_binvar, &b_Generator_binvar);
   fChain->SetBranchAddress("Generator_scalePDF", &Generator_scalePDF, &b_Generator_scalePDF);
   fChain->SetBranchAddress("Generator_weight", &Generator_weight, &b_Generator_weight);
   fChain->SetBranchAddress("Generator_x1", &Generator_x1, &b_Generator_x1);
   fChain->SetBranchAddress("Generator_x2", &Generator_x2, &b_Generator_x2);
   fChain->SetBranchAddress("Generator_xpdf1", &Generator_xpdf1, &b_Generator_xpdf1);
   fChain->SetBranchAddress("Generator_xpdf2", &Generator_xpdf2, &b_Generator_xpdf2);
   fChain->SetBranchAddress("Generator_id1", &Generator_id1, &b_Generator_id1);
   fChain->SetBranchAddress("Generator_id2", &Generator_id2, &b_Generator_id2);
   fChain->SetBranchAddress("genWeight", &genWeight, &b_genWeight);
   fChain->SetBranchAddress("nPSWeight", &nPSWeight, &b_nPSWeight);
   fChain->SetBranchAddress("PSWeight", PSWeight, &b_PSWeight);
   fChain->SetBranchAddress("nMuon", &nMuon, &b_nMuon);
   fChain->SetBranchAddress("Muon_dxy", Muon_dxy, &b_Muon_dxy);
   fChain->SetBranchAddress("Muon_dxyErr", Muon_dxyErr, &b_Muon_dxyErr);
   fChain->SetBranchAddress("Muon_dz", Muon_dz, &b_Muon_dz);
   fChain->SetBranchAddress("Muon_dzErr", Muon_dzErr, &b_Muon_dzErr);
   fChain->SetBranchAddress("Muon_eta", Muon_eta, &b_Muon_eta);
   fChain->SetBranchAddress("Muon_ip3d", Muon_ip3d, &b_Muon_ip3d);
   fChain->SetBranchAddress("Muon_mass", Muon_mass, &b_Muon_mass);
   fChain->SetBranchAddress("Muon_matched_dpt", Muon_matched_dpt, &b_Muon_matched_dpt);
   fChain->SetBranchAddress("Muon_matched_dr", Muon_matched_dr, &b_Muon_matched_dr);
   fChain->SetBranchAddress("Muon_pfRelIso03_all", Muon_pfRelIso03_all, &b_Muon_pfRelIso03_all);
   fChain->SetBranchAddress("Muon_pfRelIso04_all", Muon_pfRelIso04_all, &b_Muon_pfRelIso04_all);
   fChain->SetBranchAddress("Muon_phi", Muon_phi, &b_Muon_phi);
   fChain->SetBranchAddress("Muon_pt", Muon_pt, &b_Muon_pt);
   fChain->SetBranchAddress("Muon_ptErr", Muon_ptErr, &b_Muon_ptErr);
   fChain->SetBranchAddress("Muon_sip3d", Muon_sip3d, &b_Muon_sip3d);
   fChain->SetBranchAddress("Muon_vx", Muon_vx, &b_Muon_vx);
   fChain->SetBranchAddress("Muon_vy", Muon_vy, &b_Muon_vy);
   fChain->SetBranchAddress("Muon_vz", Muon_vz, &b_Muon_vz);
   fChain->SetBranchAddress("Muon_charge", Muon_charge, &b_Muon_charge);
   fChain->SetBranchAddress("Muon_fired_HLT_Mu10p5_IP3p5", Muon_fired_HLT_Mu10p5_IP3p5, &b_Muon_fired_HLT_Mu10p5_IP3p5);
   fChain->SetBranchAddress("Muon_fired_HLT_Mu12_IP6", Muon_fired_HLT_Mu12_IP6, &b_Muon_fired_HLT_Mu12_IP6);
   fChain->SetBranchAddress("Muon_fired_HLT_Mu7_IP4", Muon_fired_HLT_Mu7_IP4, &b_Muon_fired_HLT_Mu7_IP4);
   fChain->SetBranchAddress("Muon_fired_HLT_Mu8_IP3", Muon_fired_HLT_Mu8_IP3, &b_Muon_fired_HLT_Mu8_IP3);
   fChain->SetBranchAddress("Muon_fired_HLT_Mu8_IP5", Muon_fired_HLT_Mu8_IP5, &b_Muon_fired_HLT_Mu8_IP5);
   fChain->SetBranchAddress("Muon_fired_HLT_Mu8_IP6", Muon_fired_HLT_Mu8_IP6, &b_Muon_fired_HLT_Mu8_IP6);
   fChain->SetBranchAddress("Muon_fired_HLT_Mu8p5_IP3p5", Muon_fired_HLT_Mu8p5_IP3p5, &b_Muon_fired_HLT_Mu8p5_IP3p5);
   fChain->SetBranchAddress("Muon_fired_HLT_Mu9_IP4", Muon_fired_HLT_Mu9_IP4, &b_Muon_fired_HLT_Mu9_IP4);
   fChain->SetBranchAddress("Muon_fired_HLT_Mu9_IP5", Muon_fired_HLT_Mu9_IP5, &b_Muon_fired_HLT_Mu9_IP5);
   fChain->SetBranchAddress("Muon_fired_HLT_Mu9_IP6", Muon_fired_HLT_Mu9_IP6, &b_Muon_fired_HLT_Mu9_IP6);
   fChain->SetBranchAddress("Muon_isTriggering", Muon_isTriggering, &b_Muon_isTriggering);
   fChain->SetBranchAddress("Muon_looseId", Muon_looseId, &b_Muon_looseId);
   fChain->SetBranchAddress("Muon_pdgId", Muon_pdgId, &b_Muon_pdgId);
   fChain->SetBranchAddress("Muon_isGlobal", Muon_isGlobal, &b_Muon_isGlobal);
   fChain->SetBranchAddress("Muon_isPFcand", Muon_isPFcand, &b_Muon_isPFcand);
   fChain->SetBranchAddress("Muon_isTracker", Muon_isTracker, &b_Muon_isTracker);
   fChain->SetBranchAddress("Muon_mediumId", Muon_mediumId, &b_Muon_mediumId);
   fChain->SetBranchAddress("Muon_pfIsoId", Muon_pfIsoId, &b_Muon_pfIsoId);
   fChain->SetBranchAddress("Muon_softId", Muon_softId, &b_Muon_softId);
   fChain->SetBranchAddress("Muon_tightId", Muon_tightId, &b_Muon_tightId);
   fChain->SetBranchAddress("Muon_tkIsoId", Muon_tkIsoId, &b_Muon_tkIsoId);
   fChain->SetBranchAddress("Muon_triggerIdLoose", Muon_triggerIdLoose, &b_Muon_triggerIdLoose);
   fChain->SetBranchAddress("Pileup_nTrueInt", &Pileup_nTrueInt, &b_Pileup_nTrueInt);
   fChain->SetBranchAddress("Pileup_pudensity", &Pileup_pudensity, &b_Pileup_pudensity);
   fChain->SetBranchAddress("Pileup_gpudensity", &Pileup_gpudensity, &b_Pileup_gpudensity);
   fChain->SetBranchAddress("Pileup_nPU", &Pileup_nPU, &b_Pileup_nPU);
   fChain->SetBranchAddress("Pileup_sumEOOT", &Pileup_sumEOOT, &b_Pileup_sumEOOT);
   fChain->SetBranchAddress("Pileup_sumLOOT", &Pileup_sumLOOT, &b_Pileup_sumLOOT);
   fChain->SetBranchAddress("fixedGridRhoFastjetAll", &fixedGridRhoFastjetAll, &b_fixedGridRhoFastjetAll);
   fChain->SetBranchAddress("fixedGridRhoFastjetCentral", &fixedGridRhoFastjetCentral, &b_fixedGridRhoFastjetCentral);
   fChain->SetBranchAddress("fixedGridRhoFastjetCentralCalo", &fixedGridRhoFastjetCentralCalo, &b_fixedGridRhoFastjetCentralCalo);
   fChain->SetBranchAddress("fixedGridRhoFastjetCentralChargedPileUp", &fixedGridRhoFastjetCentralChargedPileUp, &b_fixedGridRhoFastjetCentralChargedPileUp);
   fChain->SetBranchAddress("fixedGridRhoFastjetCentralNeutral", &fixedGridRhoFastjetCentralNeutral, &b_fixedGridRhoFastjetCentralNeutral);
   fChain->SetBranchAddress("nProbeTracks", &nProbeTracks, &b_nProbeTracks);
   fChain->SetBranchAddress("ProbeTracks_DCASig", ProbeTracks_DCASig, &b_ProbeTracks_DCASig);
   fChain->SetBranchAddress("ProbeTracks_dxy", ProbeTracks_dxy, &b_ProbeTracks_dxy);
   fChain->SetBranchAddress("ProbeTracks_dxyS", ProbeTracks_dxyS, &b_ProbeTracks_dxyS);
   fChain->SetBranchAddress("ProbeTracks_dz", ProbeTracks_dz, &b_ProbeTracks_dz);
   fChain->SetBranchAddress("ProbeTracks_dzS", ProbeTracks_dzS, &b_ProbeTracks_dzS);
   fChain->SetBranchAddress("ProbeTracks_dzTrg", ProbeTracks_dzTrg, &b_ProbeTracks_dzTrg);
   fChain->SetBranchAddress("ProbeTracks_eta", ProbeTracks_eta, &b_ProbeTracks_eta);
   fChain->SetBranchAddress("ProbeTracks_mass", ProbeTracks_mass, &b_ProbeTracks_mass);
   fChain->SetBranchAddress("ProbeTracks_phi", ProbeTracks_phi, &b_ProbeTracks_phi);
   fChain->SetBranchAddress("ProbeTracks_pt", ProbeTracks_pt, &b_ProbeTracks_pt);
   fChain->SetBranchAddress("ProbeTracks_vx", ProbeTracks_vx, &b_ProbeTracks_vx);
   fChain->SetBranchAddress("ProbeTracks_vy", ProbeTracks_vy, &b_ProbeTracks_vy);
   fChain->SetBranchAddress("ProbeTracks_vz", ProbeTracks_vz, &b_ProbeTracks_vz);
   fChain->SetBranchAddress("ProbeTracks_charge", ProbeTracks_charge, &b_ProbeTracks_charge);
   fChain->SetBranchAddress("ProbeTracks_isLostTrk", ProbeTracks_isLostTrk, &b_ProbeTracks_isLostTrk);
   fChain->SetBranchAddress("ProbeTracks_isPacked", ProbeTracks_isPacked, &b_ProbeTracks_isPacked);
   fChain->SetBranchAddress("ProbeTracks_nValidHits", ProbeTracks_nValidHits, &b_ProbeTracks_nValidHits);
   fChain->SetBranchAddress("ProbeTracks_pdgId", ProbeTracks_pdgId, &b_ProbeTracks_pdgId);
   fChain->SetBranchAddress("ProbeTracks_isMatchedToEle", ProbeTracks_isMatchedToEle, &b_ProbeTracks_isMatchedToEle);
   fChain->SetBranchAddress("ProbeTracks_isMatchedToLooseMuon", ProbeTracks_isMatchedToLooseMuon, &b_ProbeTracks_isMatchedToLooseMuon);
   fChain->SetBranchAddress("ProbeTracks_isMatchedToLowPtEle", ProbeTracks_isMatchedToLowPtEle, &b_ProbeTracks_isMatchedToLowPtEle);
   fChain->SetBranchAddress("ProbeTracks_isMatchedToMediumMuon", ProbeTracks_isMatchedToMediumMuon, &b_ProbeTracks_isMatchedToMediumMuon);
   fChain->SetBranchAddress("ProbeTracks_isMatchedToMuon", ProbeTracks_isMatchedToMuon, &b_ProbeTracks_isMatchedToMuon);
   fChain->SetBranchAddress("ProbeTracks_isMatchedToSoftMuon", ProbeTracks_isMatchedToSoftMuon, &b_ProbeTracks_isMatchedToSoftMuon);
   fChain->SetBranchAddress("HLT_Mu7_IP4", &HLT_Mu7_IP4, &b_HLT_Mu7_IP4);
   fChain->SetBranchAddress("HLT_Mu8_IP6", &HLT_Mu8_IP6, &b_HLT_Mu8_IP6);
   fChain->SetBranchAddress("HLT_Mu8_IP5", &HLT_Mu8_IP5, &b_HLT_Mu8_IP5);
   fChain->SetBranchAddress("HLT_Mu8_IP3", &HLT_Mu8_IP3, &b_HLT_Mu8_IP3);
   fChain->SetBranchAddress("HLT_Mu8p5_IP3p5", &HLT_Mu8p5_IP3p5, &b_HLT_Mu8p5_IP3p5);
   fChain->SetBranchAddress("HLT_Mu9_IP6", &HLT_Mu9_IP6, &b_HLT_Mu9_IP6);
   fChain->SetBranchAddress("HLT_Mu9_IP5", &HLT_Mu9_IP5, &b_HLT_Mu9_IP5);
   fChain->SetBranchAddress("HLT_Mu9_IP4", &HLT_Mu9_IP4, &b_HLT_Mu9_IP4);
   fChain->SetBranchAddress("HLT_Mu10p5_IP3p5", &HLT_Mu10p5_IP3p5, &b_HLT_Mu10p5_IP3p5);
   fChain->SetBranchAddress("HLT_Mu12_IP6", &HLT_Mu12_IP6, &b_HLT_Mu12_IP6);
   fChain->SetBranchAddress("L1_SingleMu7er1p5", &L1_SingleMu7er1p5, &b_L1_SingleMu7er1p5);
   fChain->SetBranchAddress("L1_SingleMu8er1p5", &L1_SingleMu8er1p5, &b_L1_SingleMu8er1p5);
   fChain->SetBranchAddress("L1_SingleMu9er1p5", &L1_SingleMu9er1p5, &b_L1_SingleMu9er1p5);
   fChain->SetBranchAddress("L1_SingleMu10er1p5", &L1_SingleMu10er1p5, &b_L1_SingleMu10er1p5);
   fChain->SetBranchAddress("L1_SingleMu12er1p5", &L1_SingleMu12er1p5, &b_L1_SingleMu12er1p5);
   fChain->SetBranchAddress("L1_SingleMu22", &L1_SingleMu22, &b_L1_SingleMu22);
   fChain->SetBranchAddress("nTrigObj", &nTrigObj, &b_nTrigObj);
   fChain->SetBranchAddress("TrigObj_pt", TrigObj_pt, &b_TrigObj_pt);
   fChain->SetBranchAddress("TrigObj_eta", TrigObj_eta, &b_TrigObj_eta);
   fChain->SetBranchAddress("TrigObj_phi", TrigObj_phi, &b_TrigObj_phi);
   fChain->SetBranchAddress("TrigObj_l1pt", TrigObj_l1pt, &b_TrigObj_l1pt);
   fChain->SetBranchAddress("TrigObj_l1pt_2", TrigObj_l1pt_2, &b_TrigObj_l1pt_2);
   fChain->SetBranchAddress("TrigObj_l2pt", TrigObj_l2pt, &b_TrigObj_l2pt);
   fChain->SetBranchAddress("TrigObj_id", TrigObj_id, &b_TrigObj_id);
   fChain->SetBranchAddress("TrigObj_l1iso", TrigObj_l1iso, &b_TrigObj_l1iso);
   fChain->SetBranchAddress("TrigObj_l1charge", TrigObj_l1charge, &b_TrigObj_l1charge);
   fChain->SetBranchAddress("TrigObj_filterBits", TrigObj_filterBits, &b_TrigObj_filterBits);
   fChain->SetBranchAddress("nOtherPV", &nOtherPV, &b_nOtherPV);
   fChain->SetBranchAddress("OtherPV_z", OtherPV_z, &b_OtherPV_z);
   fChain->SetBranchAddress("PV_ndof", &PV_ndof, &b_PV_ndof);
   fChain->SetBranchAddress("PV_x", &PV_x, &b_PV_x);
   fChain->SetBranchAddress("PV_y", &PV_y, &b_PV_y);
   fChain->SetBranchAddress("PV_z", &PV_z, &b_PV_z);
   fChain->SetBranchAddress("PV_chi2", &PV_chi2, &b_PV_chi2);
   fChain->SetBranchAddress("PV_score", &PV_score, &b_PV_score);
   fChain->SetBranchAddress("PV_npvs", &PV_npvs, &b_PV_npvs);
   fChain->SetBranchAddress("PV_npvsGood", &PV_npvsGood, &b_PV_npvsGood);
   fChain->SetBranchAddress("nSV", &nSV, &b_nSV);
   fChain->SetBranchAddress("SV_dlen", SV_dlen, &b_SV_dlen);
   fChain->SetBranchAddress("SV_dlenSig", SV_dlenSig, &b_SV_dlenSig);
   fChain->SetBranchAddress("SV_pAngle", SV_pAngle, &b_SV_pAngle);
   fChain->SetBranchAddress("Electron_genPartIdx", Electron_genPartIdx, &b_Electron_genPartIdx);
   fChain->SetBranchAddress("Electron_genPartFlav", Electron_genPartFlav, &b_Electron_genPartFlav);
   fChain->SetBranchAddress("Muon_genPartIdx", Muon_genPartIdx, &b_Muon_genPartIdx);
   fChain->SetBranchAddress("Muon_genPartFlav", Muon_genPartFlav, &b_Muon_genPartFlav);
   fChain->SetBranchAddress("SV_chi2", SV_chi2, &b_SV_chi2);
   fChain->SetBranchAddress("SV_eta", SV_eta, &b_SV_eta);
   fChain->SetBranchAddress("SV_mass", SV_mass, &b_SV_mass);
   fChain->SetBranchAddress("SV_ndof", SV_ndof, &b_SV_ndof);
   fChain->SetBranchAddress("SV_phi", SV_phi, &b_SV_phi);
   fChain->SetBranchAddress("SV_pt", SV_pt, &b_SV_pt);
   fChain->SetBranchAddress("SV_x", SV_x, &b_SV_x);
   fChain->SetBranchAddress("SV_y", SV_y, &b_SV_y);
   fChain->SetBranchAddress("SV_z", SV_z, &b_SV_z);
   fChain->SetBranchAddress("ProbeTracks_genPartIdx", ProbeTracks_genPartIdx, &b_ProbeTracks_genPartIdx);
   fChain->SetBranchAddress("ProbeTracks_genPartFlav", ProbeTracks_genPartFlav, &b_ProbeTracks_genPartFlav);
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
