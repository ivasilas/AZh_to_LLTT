//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Oct 18 00:26:39 2017 by ROOT version 6.11/01
// from TTree Ntuple/Expression Ntuple
// found on file: make_ntuples_cfg-0EF04163-2FE5-E611-9FAD-FA163E30BC70.root
//////////////////////////////////////////////////////////

#ifndef runchannelEEMT_h
#define runchannelEEMT_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TMath.h>
//#include <TLorentzVector.h>
#include <TCanvas.h>
#include <TH1.h>
#include <TGraph.h>

using namespace std;

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <fstream>
// Header file for the classes stored in the TTree if any.

class runchannelEEMT {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Float_t         EmbPtWeight;
   Float_t         Eta;
   Float_t         GenWeight;
   Float_t         Ht;
   Float_t         LT;
   Float_t         Mass;
   Float_t         MassError;
   Float_t         MassErrord1;
   Float_t         MassErrord2;
   Float_t         MassErrord3;
   Float_t         MassErrord4;
   Float_t         Mt;
   Float_t         NUP;
   Float_t         Phi;
   Float_t         Pt;
   Float_t         bjetCISVVeto20Loose;
   Float_t         bjetCISVVeto20LooseZTT;
   Float_t         bjetCISVVeto20Medium;
   Float_t         bjetCISVVeto20MediumZTT;
   Float_t         bjetCISVVeto20Tight;
   Float_t         bjetCISVVeto20TightZTT;
   Float_t         bjetCISVVeto30Loose;
   Float_t         bjetCISVVeto30LooseZTT;
   Float_t         bjetCISVVeto30Medium;
   Float_t         bjetCISVVeto30MediumZTT;
   Float_t         bjetCISVVeto30Tight;
   Float_t         bjetCISVVeto30TightZTT;
   Float_t         charge;
   Float_t         closestMassZEE;
   Float_t         closestMassZMM;
   Float_t         dielectronVeto;
   Float_t         dimuonVeto;
   Float_t         doubleEGroup;
   Float_t         doubleEPass;
   Float_t         doubleEPrescale;
   Float_t         doubleESingleMuGroup;
   Float_t         doubleESingleMuPass;
   Float_t         doubleESingleMuPrescale;
   Float_t         doubleE_23_12Group;
   Float_t         doubleE_23_12Pass;
   Float_t         doubleE_23_12Prescale;
   Float_t         doubleMuGroup;
   Float_t         doubleMuNoDZGroup;
   Float_t         doubleMuNoDZPass;
   Float_t         doubleMuNoDZPrescale;
   Float_t         doubleMuPass;
   Float_t         doubleMuPrescale;
   Float_t         doubleMuSingleEGroup;
   Float_t         doubleMuSingleEPass;
   Float_t         doubleMuSingleEPrescale;
   Float_t         doubleTau32Group;
   Float_t         doubleTau32Pass;
   Float_t         doubleTau32Prescale;
   Float_t         doubleTau35Group;
   Float_t         doubleTau35Pass;
   Float_t         doubleTau35Prescale;
   Float_t         doubleTau40Group;
   Float_t         doubleTau40Pass;
   Float_t         doubleTau40Prescale;
   Float_t         doubleTauCmbIso35RegGroup;
   Float_t         doubleTauCmbIso35RegPass;
   Float_t         doubleTauCmbIso35RegPrescale;
   Float_t         doubleTauCmbIso40Group;
   Float_t         doubleTauCmbIso40Pass;
   Float_t         doubleTauCmbIso40Prescale;
   Float_t         doubleTauCmbIso40RegGroup;
   Float_t         doubleTauCmbIso40RegPass;
   Float_t         doubleTauCmbIso40RegPrescale;
   Float_t         e1AbsEta;
   Float_t         e1CBIDLoose;
   Float_t         e1CBIDLooseNoIso;
   Float_t         e1CBIDMedium;
   Float_t         e1CBIDMediumNoIso;
   Float_t         e1CBIDTight;
   Float_t         e1CBIDTightNoIso;
   Float_t         e1CBIDVeto;
   Float_t         e1CBIDVetoNoIso;
   Float_t         e1Charge;
   Float_t         e1ChargeIdLoose;
   Float_t         e1ChargeIdMed;
   Float_t         e1ChargeIdTight;
   Float_t         e1ComesFromHiggs;
   Float_t         e1DPhiToPfMet_type1;
   Float_t         e1E1x5;
   Float_t         e1E2x5Max;
   Float_t         e1E5x5;
   Float_t         e1EcalIsoDR03;
   Float_t         e1EffectiveArea2012Data;
   Float_t         e1EffectiveAreaSpring15;
   Float_t         e1EnergyError;
   Float_t         e1Eta;
   Float_t         e1GenCharge;
   Float_t         e1GenDirectPromptTauDecay;
   Float_t         e1GenEnergy;
   Float_t         e1GenEta;
   Float_t         e1GenIsPrompt;
   Float_t         e1GenMotherPdgId;
   Float_t         e1GenParticle;
   Float_t         e1GenPdgId;
   Float_t         e1GenPhi;
   Float_t         e1GenPrompt;
   Float_t         e1GenPromptTauDecay;
   Float_t         e1GenPt;
   Float_t         e1GenTauDecay;
   Float_t         e1GenVZ;
   Float_t         e1GenVtxPVMatch;
   Float_t         e1HadronicDepth1OverEm;
   Float_t         e1HadronicDepth2OverEm;
   Float_t         e1HadronicOverEM;
   Float_t         e1HcalIsoDR03;
   Float_t         e1IP3D;
   Float_t         e1IP3DErr;
   Float_t         e1IsoDB03;
   Float_t         e1JetArea;
   Float_t         e1JetBtag;
   Float_t         e1JetDR;
   Float_t         e1JetEtaEtaMoment;
   Float_t         e1JetEtaPhiMoment;
   Float_t         e1JetEtaPhiSpread;
   Float_t         e1JetHadronFlavour;
   Float_t         e1JetPFCISVBtag;
   Float_t         e1JetPartonFlavour;
   Float_t         e1JetPhiPhiMoment;
   Float_t         e1JetPt;
   Float_t         e1LowestMll;
   Float_t         e1MVANonTrigCategory;
   Float_t         e1MVANonTrigID;
   Float_t         e1MVANonTrigWP80;
   Float_t         e1MVANonTrigWP90;
   Float_t         e1MVATrigCategory;
   Float_t         e1MVATrigID;
   Float_t         e1MVATrigWP80;
   Float_t         e1MVATrigWP90;
   Float_t         e1Mass;
   Float_t         e1MatchesDoubleE;
   Float_t         e1MatchesDoubleE23_12Filter;
   Float_t         e1MatchesDoubleE23_12Path;
   Float_t         e1MatchesDoubleEFilter;
   Float_t         e1MatchesDoubleEPath;
   Float_t         e1MatchesDoubleESingleMu;
   Float_t         e1MatchesDoubleMuSingleE;
   Float_t         e1MatchesEle12LoosePath;
   Float_t         e1MatchesEle17LoosePath;
   Float_t         e1MatchesEle22eta2p1LoosePath;
   Float_t         e1MatchesEle23LoosePath;
   Float_t         e1MatchesEle25eta2p1LoosePath;
   Float_t         e1MatchesEle25eta2p1TightPath;
   Float_t         e1MatchesEle27TightPath;
   Float_t         e1MatchesEle27eta2p1LoosePath;
   Float_t         e1MatchesSingleE;
   Float_t         e1MatchesSingleESingleMu;
   Float_t         e1MatchesSingleETight27Filter;
   Float_t         e1MatchesSingleE_leg1;
   Float_t         e1MatchesSingleE_leg2;
   Float_t         e1MatchesSingleMuSingleE;
   Float_t         e1MatchesTripleE;
   Float_t         e1MissingHits;
   Float_t         e1MtToPfMet_type1;
   Float_t         e1NearMuonVeto;
   Float_t         e1NearestMuonDR;
   Float_t         e1NearestZMass;
   Float_t         e1PFChargedIso;
   Float_t         e1PFNeutralIso;
   Float_t         e1PFPUChargedIso;
   Float_t         e1PFPhotonIso;
   Float_t         e1PVDXY;
   Float_t         e1PVDZ;
   Float_t         e1PassesConversionVeto;
   Float_t         e1Phi;
   Float_t         e1Pt;
   Float_t         e1Pt_ElectronResPhiDown;
   Float_t         e1Pt_ElectronResRhoDown;
   Float_t         e1Pt_ElectronResRhoUp;
   Float_t         e1Pt_ElectronScaleDown;
   Float_t         e1Pt_ElectronScaleUp;
   Float_t         e1Pt_ElectronUncorr;
   Float_t         e1Rank;
   Float_t         e1RelIso;
   Float_t         e1RelPFIsoDB;
   Float_t         e1RelPFIsoRho;
   Float_t         e1Rho;
   Float_t         e1SCEnergy;
   Float_t         e1SCEta;
   Float_t         e1SCEtaWidth;
   Float_t         e1SCPhi;
   Float_t         e1SCPhiWidth;
   Float_t         e1SCPreshowerEnergy;
   Float_t         e1SCRawEnergy;
   Float_t         e1SIP2D;
   Float_t         e1SIP3D;
   Float_t         e1SigmaIEtaIEta;
   Float_t         e1TrkIsoDR03;
   Float_t         e1VZ;
   Float_t         e1WWLoose;
   Float_t         e1ZTTGenMatching;
   Float_t         e1_e2_CosThetaStar;
   Float_t         e1_e2_DPhi;
   Float_t         e1_e2_DR;
   Float_t         e1_e2_Eta;
   Float_t         e1_e2_Mass;
   Float_t         e1_e2_Mass_TauEnDown;
   Float_t         e1_e2_Mass_TauEnUp;
   Float_t         e1_e2_Mt;
   Float_t         e1_e2_MtTotal;
   Float_t         e1_e2_Mt_TauEnDown;
   Float_t         e1_e2_Mt_TauEnUp;
   Float_t         e1_e2_MvaMet;
   Float_t         e1_e2_MvaMetCovMatrix00;
   Float_t         e1_e2_MvaMetCovMatrix01;
   Float_t         e1_e2_MvaMetCovMatrix10;
   Float_t         e1_e2_MvaMetCovMatrix11;
   Float_t         e1_e2_MvaMetPhi;
   Float_t         e1_e2_PZeta;
   Float_t         e1_e2_PZetaLess0p85PZetaVis;
   Float_t         e1_e2_PZetaVis;
   Float_t         e1_e2_Phi;
   Float_t         e1_e2_Pt;
   Float_t         e1_e2_SS;
   Float_t         e1_e2_ToMETDPhi_Ty1;
   Float_t         e1_e2_collinearmass;
   Float_t         e1_e2_collinearmass_CheckUESDown;
   Float_t         e1_e2_collinearmass_CheckUESUp;
   Float_t         e1_e2_collinearmass_EleEnDown;
   Float_t         e1_e2_collinearmass_EleEnUp;
   Float_t         e1_e2_collinearmass_JetCheckTotalDown;
   Float_t         e1_e2_collinearmass_JetCheckTotalUp;
   Float_t         e1_e2_collinearmass_JetEnDown;
   Float_t         e1_e2_collinearmass_JetEnUp;
   Float_t         e1_e2_collinearmass_MuEnDown;
   Float_t         e1_e2_collinearmass_MuEnUp;
   Float_t         e1_e2_collinearmass_TauEnDown;
   Float_t         e1_e2_collinearmass_TauEnUp;
   Float_t         e1_e2_collinearmass_UnclusteredEnDown;
   Float_t         e1_e2_collinearmass_UnclusteredEnUp;
   Float_t         e1_e2_pt_tt;
   Float_t         e1_m_CosThetaStar;
   Float_t         e1_m_DPhi;
   Float_t         e1_m_DR;
   Float_t         e1_m_Eta;
   Float_t         e1_m_Mass;
   Float_t         e1_m_Mass_TauEnDown;
   Float_t         e1_m_Mass_TauEnUp;
   Float_t         e1_m_Mt;
   Float_t         e1_m_MtTotal;
   Float_t         e1_m_Mt_TauEnDown;
   Float_t         e1_m_Mt_TauEnUp;
   Float_t         e1_m_MvaMet;
   Float_t         e1_m_MvaMetCovMatrix00;
   Float_t         e1_m_MvaMetCovMatrix01;
   Float_t         e1_m_MvaMetCovMatrix10;
   Float_t         e1_m_MvaMetCovMatrix11;
   Float_t         e1_m_MvaMetPhi;
   Float_t         e1_m_PZeta;
   Float_t         e1_m_PZetaLess0p85PZetaVis;
   Float_t         e1_m_PZetaVis;
   Float_t         e1_m_Phi;
   Float_t         e1_m_Pt;
   Float_t         e1_m_SS;
   Float_t         e1_m_ToMETDPhi_Ty1;
   Float_t         e1_m_collinearmass;
   Float_t         e1_m_collinearmass_CheckUESDown;
   Float_t         e1_m_collinearmass_CheckUESUp;
   Float_t         e1_m_collinearmass_EleEnDown;
   Float_t         e1_m_collinearmass_EleEnUp;
   Float_t         e1_m_collinearmass_JetCheckTotalDown;
   Float_t         e1_m_collinearmass_JetCheckTotalUp;
   Float_t         e1_m_collinearmass_JetEnDown;
   Float_t         e1_m_collinearmass_JetEnUp;
   Float_t         e1_m_collinearmass_MuEnDown;
   Float_t         e1_m_collinearmass_MuEnUp;
   Float_t         e1_m_collinearmass_TauEnDown;
   Float_t         e1_m_collinearmass_TauEnUp;
   Float_t         e1_m_collinearmass_UnclusteredEnDown;
   Float_t         e1_m_collinearmass_UnclusteredEnUp;
   Float_t         e1_m_pt_tt;
   Float_t         e1_t_CosThetaStar;
   Float_t         e1_t_DPhi;
   Float_t         e1_t_DR;
   Float_t         e1_t_Eta;
   Float_t         e1_t_Mass;
   Float_t         e1_t_Mass_TauEnDown;
   Float_t         e1_t_Mass_TauEnUp;
   Float_t         e1_t_Mt;
   Float_t         e1_t_MtTotal;
   Float_t         e1_t_Mt_TauEnDown;
   Float_t         e1_t_Mt_TauEnUp;
   Float_t         e1_t_MvaMet;
   Float_t         e1_t_MvaMetCovMatrix00;
   Float_t         e1_t_MvaMetCovMatrix01;
   Float_t         e1_t_MvaMetCovMatrix10;
   Float_t         e1_t_MvaMetCovMatrix11;
   Float_t         e1_t_MvaMetPhi;
   Float_t         e1_t_PZeta;
   Float_t         e1_t_PZetaLess0p85PZetaVis;
   Float_t         e1_t_PZetaVis;
   Float_t         e1_t_Phi;
   Float_t         e1_t_Pt;
   Float_t         e1_t_SS;
   Float_t         e1_t_ToMETDPhi_Ty1;
   Float_t         e1_t_collinearmass;
   Float_t         e1_t_collinearmass_CheckUESDown;
   Float_t         e1_t_collinearmass_CheckUESUp;
   Float_t         e1_t_collinearmass_EleEnDown;
   Float_t         e1_t_collinearmass_EleEnUp;
   Float_t         e1_t_collinearmass_JetCheckTotalDown;
   Float_t         e1_t_collinearmass_JetCheckTotalUp;
   Float_t         e1_t_collinearmass_JetEnDown;
   Float_t         e1_t_collinearmass_JetEnUp;
   Float_t         e1_t_collinearmass_MuEnDown;
   Float_t         e1_t_collinearmass_MuEnUp;
   Float_t         e1_t_collinearmass_TauEnDown;
   Float_t         e1_t_collinearmass_TauEnUp;
   Float_t         e1_t_collinearmass_UnclusteredEnDown;
   Float_t         e1_t_collinearmass_UnclusteredEnUp;
   Float_t         e1_t_pt_tt;
   Float_t         e1deltaEtaSuperClusterTrackAtVtx;
   Float_t         e1deltaPhiSuperClusterTrackAtVtx;
   Float_t         e1eSuperClusterOverP;
   Float_t         e1ecalEnergy;
   Float_t         e1fBrem;
   Float_t         e1trackMomentumAtVtxP;
   Float_t         e2AbsEta;
   Float_t         e2CBIDLoose;
   Float_t         e2CBIDLooseNoIso;
   Float_t         e2CBIDMedium;
   Float_t         e2CBIDMediumNoIso;
   Float_t         e2CBIDTight;
   Float_t         e2CBIDTightNoIso;
   Float_t         e2CBIDVeto;
   Float_t         e2CBIDVetoNoIso;
   Float_t         e2Charge;
   Float_t         e2ChargeIdLoose;
   Float_t         e2ChargeIdMed;
   Float_t         e2ChargeIdTight;
   Float_t         e2ComesFromHiggs;
   Float_t         e2DPhiToPfMet_type1;
   Float_t         e2E1x5;
   Float_t         e2E2x5Max;
   Float_t         e2E5x5;
   Float_t         e2EcalIsoDR03;
   Float_t         e2EffectiveArea2012Data;
   Float_t         e2EffectiveAreaSpring15;
   Float_t         e2EnergyError;
   Float_t         e2Eta;
   Float_t         e2GenCharge;
   Float_t         e2GenDirectPromptTauDecay;
   Float_t         e2GenEnergy;
   Float_t         e2GenEta;
   Float_t         e2GenIsPrompt;
   Float_t         e2GenMotherPdgId;
   Float_t         e2GenParticle;
   Float_t         e2GenPdgId;
   Float_t         e2GenPhi;
   Float_t         e2GenPrompt;
   Float_t         e2GenPromptTauDecay;
   Float_t         e2GenPt;
   Float_t         e2GenTauDecay;
   Float_t         e2GenVZ;
   Float_t         e2GenVtxPVMatch;
   Float_t         e2HadronicDepth1OverEm;
   Float_t         e2HadronicDepth2OverEm;
   Float_t         e2HadronicOverEM;
   Float_t         e2HcalIsoDR03;
   Float_t         e2IP3D;
   Float_t         e2IP3DErr;
   Float_t         e2IsoDB03;
   Float_t         e2JetArea;
   Float_t         e2JetBtag;
   Float_t         e2JetDR;
   Float_t         e2JetEtaEtaMoment;
   Float_t         e2JetEtaPhiMoment;
   Float_t         e2JetEtaPhiSpread;
   Float_t         e2JetHadronFlavour;
   Float_t         e2JetPFCISVBtag;
   Float_t         e2JetPartonFlavour;
   Float_t         e2JetPhiPhiMoment;
   Float_t         e2JetPt;
   Float_t         e2LowestMll;
   Float_t         e2MVANonTrigCategory;
   Float_t         e2MVANonTrigID;
   Float_t         e2MVANonTrigWP80;
   Float_t         e2MVANonTrigWP90;
   Float_t         e2MVATrigCategory;
   Float_t         e2MVATrigID;
   Float_t         e2MVATrigWP80;
   Float_t         e2MVATrigWP90;
   Float_t         e2Mass;
   Float_t         e2MatchesDoubleE;
   Float_t         e2MatchesDoubleE23_12Filter;
   Float_t         e2MatchesDoubleE23_12Path;
   Float_t         e2MatchesDoubleEFilter;
   Float_t         e2MatchesDoubleEPath;
   Float_t         e2MatchesDoubleESingleMu;
   Float_t         e2MatchesDoubleMuSingleE;
   Float_t         e2MatchesEle12LoosePath;
   Float_t         e2MatchesEle17LoosePath;
   Float_t         e2MatchesEle22eta2p1LoosePath;
   Float_t         e2MatchesEle23LoosePath;
   Float_t         e2MatchesEle25eta2p1LoosePath;
   Float_t         e2MatchesEle25eta2p1TightPath;
   Float_t         e2MatchesEle27TightPath;
   Float_t         e2MatchesEle27eta2p1LoosePath;
   Float_t         e2MatchesSingleE;
   Float_t         e2MatchesSingleESingleMu;
   Float_t         e2MatchesSingleETight27Filter;
   Float_t         e2MatchesSingleE_leg1;
   Float_t         e2MatchesSingleE_leg2;
   Float_t         e2MatchesSingleMuSingleE;
   Float_t         e2MatchesTripleE;
   Float_t         e2MissingHits;
   Float_t         e2MtToPfMet_type1;
   Float_t         e2NearMuonVeto;
   Float_t         e2NearestMuonDR;
   Float_t         e2NearestZMass;
   Float_t         e2PFChargedIso;
   Float_t         e2PFNeutralIso;
   Float_t         e2PFPUChargedIso;
   Float_t         e2PFPhotonIso;
   Float_t         e2PVDXY;
   Float_t         e2PVDZ;
   Float_t         e2PassesConversionVeto;
   Float_t         e2Phi;
   Float_t         e2Pt;
   Float_t         e2Pt_ElectronResPhiDown;
   Float_t         e2Pt_ElectronResRhoDown;
   Float_t         e2Pt_ElectronResRhoUp;
   Float_t         e2Pt_ElectronScaleDown;
   Float_t         e2Pt_ElectronScaleUp;
   Float_t         e2Pt_ElectronUncorr;
   Float_t         e2Rank;
   Float_t         e2RelIso;
   Float_t         e2RelPFIsoDB;
   Float_t         e2RelPFIsoRho;
   Float_t         e2Rho;
   Float_t         e2SCEnergy;
   Float_t         e2SCEta;
   Float_t         e2SCEtaWidth;
   Float_t         e2SCPhi;
   Float_t         e2SCPhiWidth;
   Float_t         e2SCPreshowerEnergy;
   Float_t         e2SCRawEnergy;
   Float_t         e2SIP2D;
   Float_t         e2SIP3D;
   Float_t         e2SigmaIEtaIEta;
   Float_t         e2TrkIsoDR03;
   Float_t         e2VZ;
   Float_t         e2WWLoose;
   Float_t         e2ZTTGenMatching;
   Float_t         e2_e1_collinearmass;
   Float_t         e2_e1_collinearmass_CheckUESDown;
   Float_t         e2_e1_collinearmass_CheckUESUp;
   Float_t         e2_e1_collinearmass_JetCheckTotalDown;
   Float_t         e2_e1_collinearmass_JetCheckTotalUp;
   Float_t         e2_e1_collinearmass_JetEnDown;
   Float_t         e2_e1_collinearmass_JetEnUp;
   Float_t         e2_e1_collinearmass_UnclusteredEnDown;
   Float_t         e2_e1_collinearmass_UnclusteredEnUp;
   Float_t         e2_m_CosThetaStar;
   Float_t         e2_m_DPhi;
   Float_t         e2_m_DR;
   Float_t         e2_m_Eta;
   Float_t         e2_m_Mass;
   Float_t         e2_m_Mass_TauEnDown;
   Float_t         e2_m_Mass_TauEnUp;
   Float_t         e2_m_Mt;
   Float_t         e2_m_MtTotal;
   Float_t         e2_m_Mt_TauEnDown;
   Float_t         e2_m_Mt_TauEnUp;
   Float_t         e2_m_MvaMet;
   Float_t         e2_m_MvaMetCovMatrix00;
   Float_t         e2_m_MvaMetCovMatrix01;
   Float_t         e2_m_MvaMetCovMatrix10;
   Float_t         e2_m_MvaMetCovMatrix11;
   Float_t         e2_m_MvaMetPhi;
   Float_t         e2_m_PZeta;
   Float_t         e2_m_PZetaLess0p85PZetaVis;
   Float_t         e2_m_PZetaVis;
   Float_t         e2_m_Phi;
   Float_t         e2_m_Pt;
   Float_t         e2_m_SS;
   Float_t         e2_m_ToMETDPhi_Ty1;
   Float_t         e2_m_collinearmass;
   Float_t         e2_m_collinearmass_CheckUESDown;
   Float_t         e2_m_collinearmass_CheckUESUp;
   Float_t         e2_m_collinearmass_EleEnDown;
   Float_t         e2_m_collinearmass_EleEnUp;
   Float_t         e2_m_collinearmass_JetCheckTotalDown;
   Float_t         e2_m_collinearmass_JetCheckTotalUp;
   Float_t         e2_m_collinearmass_JetEnDown;
   Float_t         e2_m_collinearmass_JetEnUp;
   Float_t         e2_m_collinearmass_MuEnDown;
   Float_t         e2_m_collinearmass_MuEnUp;
   Float_t         e2_m_collinearmass_TauEnDown;
   Float_t         e2_m_collinearmass_TauEnUp;
   Float_t         e2_m_collinearmass_UnclusteredEnDown;
   Float_t         e2_m_collinearmass_UnclusteredEnUp;
   Float_t         e2_m_pt_tt;
   Float_t         e2_t_CosThetaStar;
   Float_t         e2_t_DPhi;
   Float_t         e2_t_DR;
   Float_t         e2_t_Eta;
   Float_t         e2_t_Mass;
   Float_t         e2_t_Mass_TauEnDown;
   Float_t         e2_t_Mass_TauEnUp;
   Float_t         e2_t_Mt;
   Float_t         e2_t_MtTotal;
   Float_t         e2_t_Mt_TauEnDown;
   Float_t         e2_t_Mt_TauEnUp;
   Float_t         e2_t_MvaMet;
   Float_t         e2_t_MvaMetCovMatrix00;
   Float_t         e2_t_MvaMetCovMatrix01;
   Float_t         e2_t_MvaMetCovMatrix10;
   Float_t         e2_t_MvaMetCovMatrix11;
   Float_t         e2_t_MvaMetPhi;
   Float_t         e2_t_PZeta;
   Float_t         e2_t_PZetaLess0p85PZetaVis;
   Float_t         e2_t_PZetaVis;
   Float_t         e2_t_Phi;
   Float_t         e2_t_Pt;
   Float_t         e2_t_SS;
   Float_t         e2_t_ToMETDPhi_Ty1;
   Float_t         e2_t_collinearmass;
   Float_t         e2_t_collinearmass_CheckUESDown;
   Float_t         e2_t_collinearmass_CheckUESUp;
   Float_t         e2_t_collinearmass_EleEnDown;
   Float_t         e2_t_collinearmass_EleEnUp;
   Float_t         e2_t_collinearmass_JetCheckTotalDown;
   Float_t         e2_t_collinearmass_JetCheckTotalUp;
   Float_t         e2_t_collinearmass_JetEnDown;
   Float_t         e2_t_collinearmass_JetEnUp;
   Float_t         e2_t_collinearmass_MuEnDown;
   Float_t         e2_t_collinearmass_MuEnUp;
   Float_t         e2_t_collinearmass_TauEnDown;
   Float_t         e2_t_collinearmass_TauEnUp;
   Float_t         e2_t_collinearmass_UnclusteredEnDown;
   Float_t         e2_t_collinearmass_UnclusteredEnUp;
   Float_t         e2_t_pt_tt;
   Float_t         e2deltaEtaSuperClusterTrackAtVtx;
   Float_t         e2deltaPhiSuperClusterTrackAtVtx;
   Float_t         e2eSuperClusterOverP;
   Float_t         e2ecalEnergy;
   Float_t         e2fBrem;
   Float_t         e2trackMomentumAtVtxP;
   Float_t         eVetoAZHdR0;
   Float_t         eVetoLLTTp001dxyz;
   Float_t         eVetoLLTTp001dxyzR0;
   Float_t         eVetoMVAIso;
   Float_t         eVetoMVAIsoVtx;
   Float_t         eVetoZTTp001dxyz;
   Float_t         eVetoZTTp001dxyzR0;
   ULong64_t       evt;
   Float_t         genHTT;
   Float_t         genM;
   Float_t         genMass;
   Float_t         genpT;
   Float_t         genpX;
   Float_t         genpY;
   Float_t         isGtautau;
   Float_t         isHee;
   Float_t         isHmumu;
   Float_t         isHtautau;
   Float_t         isWenu;
   Float_t         isWmunu;
   Float_t         isWtaunu;
   Float_t         isZee;
   Float_t         isZmumu;
   Float_t         isZtautau;
   Int_t           isdata;
   Float_t         j1csv;
   Float_t         j1eta;
   Float_t         j1flavor;
   Float_t         j1phi;
   Float_t         j1pt;
   Float_t         j2csv;
   Float_t         j2eta;
   Float_t         j2flavor;
   Float_t         j2phi;
   Float_t         j2pt;
   Float_t         jb1csv;
   Float_t         jb1eta;
   Float_t         jb1hadronflavor;
   Float_t         jb1partonflavor;
   Float_t         jb1phi;
   Float_t         jb1pt;
   Float_t         jb1ptDown;
   Float_t         jb1ptUp;
   Float_t         jb1pu;
   Float_t         jb1rawf;
   Float_t         jb2csv;
   Float_t         jb2eta;
   Float_t         jb2hadronflavor;
   Float_t         jb2partonflavor;
   Float_t         jb2phi;
   Float_t         jb2pt;
   Float_t         jb2ptDown;
   Float_t         jb2ptUp;
   Float_t         jb2pu;
   Float_t         jb2rawf;
   Float_t         jetVeto20;
   Float_t         jetVeto20ZTT;
   Float_t         jetVeto20_JetEnDown;
   Float_t         jetVeto20_JetEnUp;
   Float_t         jetVeto30;
   Float_t         jetVeto30ZTT;
   Float_t         jetVeto30_JetEnDown;
   Float_t         jetVeto30_JetEnUp;
   Int_t           lumi;
   Float_t         mAbsEta;
   Float_t         mBestTrackType;
   Float_t         mCharge;
   Float_t         mChi2LocalPosition;
   Float_t         mComesFromHiggs;
   Float_t         mDPhiToPfMet_type1;
   Float_t         mEcalIsoDR03;
   Float_t         mEffectiveArea2011;
   Float_t         mEffectiveArea2012;
   Float_t         mEta;
   Float_t         mEta_MuonEnDown;
   Float_t         mEta_MuonEnUp;
   Float_t         mGenCharge;
   Float_t         mGenDirectPromptTauDecayFinalState;
   Float_t         mGenEnergy;
   Float_t         mGenEta;
   Float_t         mGenIsPrompt;
   Float_t         mGenMotherPdgId;
   Float_t         mGenParticle;
   Float_t         mGenPdgId;
   Float_t         mGenPhi;
   Float_t         mGenPrompt;
   Float_t         mGenPromptFinalState;
   Float_t         mGenPromptTauDecay;
   Float_t         mGenPt;
   Float_t         mGenTauDecay;
   Float_t         mGenVZ;
   Float_t         mGenVtxPVMatch;
   Float_t         mHcalIsoDR03;
   Float_t         mIP3D;
   Float_t         mIP3DErr;
   Float_t         mIsGlobal;
   Float_t         mIsPFMuon;
   Float_t         mIsTracker;
   Float_t         mIsoDB03;
   Float_t         mIsoDB04;
   Float_t         mJetArea;
   Float_t         mJetBtag;
   Float_t         mJetDR;
   Float_t         mJetEtaEtaMoment;
   Float_t         mJetEtaPhiMoment;
   Float_t         mJetEtaPhiSpread;
   Float_t         mJetHadronFlavour;
   Float_t         mJetPFCISVBtag;
   Float_t         mJetPartonFlavour;
   Float_t         mJetPhiPhiMoment;
   Float_t         mJetPt;
   Float_t         mLowestMll;
   Float_t         mMass;
   Float_t         mMatchedStations;
   Float_t         mMatchesDoubleESingleMu;
   Float_t         mMatchesDoubleMu;
   Float_t         mMatchesDoubleMuFilter1;
   Float_t         mMatchesDoubleMuFilter2;
   Float_t         mMatchesDoubleMuNoDZFilter1;
   Float_t         mMatchesDoubleMuNoDZFilter2;
   Float_t         mMatchesDoubleMuPath1;
   Float_t         mMatchesDoubleMuPath2;
   Float_t         mMatchesDoubleMuSingleE;
   Float_t         mMatchesIsoMu17eta2p1Path;
   Float_t         mMatchesIsoMu18Path;
   Float_t         mMatchesIsoMu20Path;
   Float_t         mMatchesIsoMu22Path;
   Float_t         mMatchesIsoMu22eta2p1Path;
   Float_t         mMatchesIsoMu24Filter;
   Float_t         mMatchesIsoMu27Path;
   Float_t         mMatchesIsoTkMu20Path;
   Float_t         mMatchesIsoTkMu22Path;
   Float_t         mMatchesIsoTkMu24Filter;
   Float_t         mMatchesMu17Path;
   Float_t         mMatchesMu17VVLPath;
   Float_t         mMatchesMu50Path;
   Float_t         mMatchesMu8Path;
   Float_t         mMatchesMu8VVLPath;
   Float_t         mMatchesSingleESingleMu;
   Float_t         mMatchesSingleMu;
   Float_t         mMatchesSingleMuIso20;
   Float_t         mMatchesSingleMuIsoTk20;
   Float_t         mMatchesSingleMuSingleE;
   Float_t         mMatchesSingleMu_leg1;
   Float_t         mMatchesSingleMu_leg1_noiso;
   Float_t         mMatchesSingleMu_leg2;
   Float_t         mMatchesSingleMu_leg2_noiso;
   Float_t         mMatchesTripleMu;
   Float_t         mMtToPfMet_type1;
   Float_t         mMuonHits;
   Float_t         mNearestZMass;
   Float_t         mNormTrkChi2;
   Float_t         mNormalizedChi2;
   Float_t         mPFChargedHadronIsoR04;
   Float_t         mPFChargedIso;
   Float_t         mPFIDLoose;
   Float_t         mPFIDMedium;
   Float_t         mPFIDTight;
   Float_t         mPFNeutralHadronIsoR04;
   Float_t         mPFNeutralIso;
   Float_t         mPFPUChargedIso;
   Float_t         mPFPhotonIso;
   Float_t         mPFPhotonIsoR04;
   Float_t         mPFPileupIsoR04;
   Float_t         mPVDXY;
   Float_t         mPVDZ;
   Float_t         mPhi;
   Float_t         mPhi_MuonEnDown;
   Float_t         mPhi_MuonEnUp;
   Float_t         mPixHits;
   Float_t         mPt;
   Float_t         mPt_MuonEnDown;
   Float_t         mPt_MuonEnUp;
   Float_t         mRank;
   Float_t         mRelPFIsoDBDefault;
   Float_t         mRelPFIsoDBDefaultR04;
   Float_t         mRelPFIsoRho;
   Float_t         mRho;
   Float_t         mSIP2D;
   Float_t         mSIP3D;
   Float_t         mSegmentCompatibility;
   Float_t         mTkLayersWithMeasurement;
   Float_t         mTrkIsoDR03;
   Float_t         mTrkKink;
   Int_t           mTypeCode;
   Float_t         mVZ;
   Float_t         mValidFraction;
   Float_t         mZTTGenMatching;
   Float_t         m_e1_collinearmass;
   Float_t         m_e1_collinearmass_CheckUESDown;
   Float_t         m_e1_collinearmass_CheckUESUp;
   Float_t         m_e1_collinearmass_JetCheckTotalDown;
   Float_t         m_e1_collinearmass_JetCheckTotalUp;
   Float_t         m_e1_collinearmass_JetEnDown;
   Float_t         m_e1_collinearmass_JetEnUp;
   Float_t         m_e1_collinearmass_UnclusteredEnDown;
   Float_t         m_e1_collinearmass_UnclusteredEnUp;
   Float_t         m_e2_collinearmass;
   Float_t         m_e2_collinearmass_CheckUESDown;
   Float_t         m_e2_collinearmass_CheckUESUp;
   Float_t         m_e2_collinearmass_JetCheckTotalDown;
   Float_t         m_e2_collinearmass_JetCheckTotalUp;
   Float_t         m_e2_collinearmass_JetEnDown;
   Float_t         m_e2_collinearmass_JetEnUp;
   Float_t         m_e2_collinearmass_UnclusteredEnDown;
   Float_t         m_e2_collinearmass_UnclusteredEnUp;
   Float_t         m_t_CosThetaStar;
   Float_t         m_t_DPhi;
   Float_t         m_t_DR;
   Float_t         m_t_Eta;
   Float_t         m_t_Mass;
   Float_t         m_t_Mass_TauEnDown;
   Float_t         m_t_Mass_TauEnUp;
   Float_t         m_t_Mt;
   Float_t         m_t_MtTotal;
   Float_t         m_t_Mt_TauEnDown;
   Float_t         m_t_Mt_TauEnUp;
   Float_t         m_t_MvaMet;
   Float_t         m_t_MvaMetCovMatrix00;
   Float_t         m_t_MvaMetCovMatrix01;
   Float_t         m_t_MvaMetCovMatrix10;
   Float_t         m_t_MvaMetCovMatrix11;
   Float_t         m_t_MvaMetPhi;
   Float_t         m_t_PZeta;
   Float_t         m_t_PZetaLess0p85PZetaVis;
   Float_t         m_t_PZetaVis;
   Float_t         m_t_Phi;
   Float_t         m_t_Pt;
   Float_t         m_t_SS;
   Float_t         m_t_ToMETDPhi_Ty1;
   Float_t         m_t_collinearmass;
   Float_t         m_t_collinearmass_CheckUESDown;
   Float_t         m_t_collinearmass_CheckUESUp;
   Float_t         m_t_collinearmass_EleEnDown;
   Float_t         m_t_collinearmass_EleEnUp;
   Float_t         m_t_collinearmass_JetCheckTotalDown;
   Float_t         m_t_collinearmass_JetCheckTotalUp;
   Float_t         m_t_collinearmass_JetEnDown;
   Float_t         m_t_collinearmass_JetEnUp;
   Float_t         m_t_collinearmass_MuEnDown;
   Float_t         m_t_collinearmass_MuEnUp;
   Float_t         m_t_collinearmass_TauEnDown;
   Float_t         m_t_collinearmass_TauEnUp;
   Float_t         m_t_collinearmass_UnclusteredEnDown;
   Float_t         m_t_collinearmass_UnclusteredEnUp;
   Float_t         m_t_pt_tt;
   Float_t         metSig;
   Float_t         metcov00;
   Float_t         metcov01;
   Float_t         metcov10;
   Float_t         metcov11;
   Float_t         muGlbIsoVetoPt10;
   Float_t         muVetoAZHdR0;
   Float_t         muVetoLLTTp001dxyz;
   Float_t         muVetoLLTTp001dxyzR0;
   Float_t         muVetoPt15IsoIdVtx;
   Float_t         muVetoPt5;
   Float_t         muVetoPt5IsoIdVtx;
   Float_t         muVetoZTTp001dxyz;
   Float_t         muVetoZTTp001dxyzR0;
   Float_t         nTruePU;
   Float_t         numGenJets;
   Float_t         nvtx;
   Float_t         processID;
   Float_t         puppiMetEt;
   Float_t         puppiMetPhi;
   Float_t         pvChi2;
   Float_t         pvDX;
   Float_t         pvDY;
   Float_t         pvDZ;
   Int_t           pvIsFake;
   Int_t           pvIsValid;
   Float_t         pvNormChi2;
   Float_t         pvRho;
   Float_t         pvX;
   Float_t         pvY;
   Float_t         pvZ;
   Float_t         pvndof;
   Float_t         recoilDaught;
   Float_t         recoilWithMet;
   Float_t         rho;
   Int_t           run;
   Float_t         singleE17SingleMu8Group;
   Float_t         singleE17SingleMu8Pass;
   Float_t         singleE17SingleMu8Prescale;
   Float_t         singleE20SingleTau28Group;
   Float_t         singleE20SingleTau28Pass;
   Float_t         singleE20SingleTau28Prescale;
   Float_t         singleE22SingleTau20SingleL1Group;
   Float_t         singleE22SingleTau20SingleL1Pass;
   Float_t         singleE22SingleTau20SingleL1Prescale;
   Float_t         singleE22SingleTau29Group;
   Float_t         singleE22SingleTau29Pass;
   Float_t         singleE22SingleTau29Prescale;
   Float_t         singleE23SingleMu8Group;
   Float_t         singleE23SingleMu8Pass;
   Float_t         singleE23SingleMu8Prescale;
   Float_t         singleE24SingleTau20Group;
   Float_t         singleE24SingleTau20Pass;
   Float_t         singleE24SingleTau20Prescale;
   Float_t         singleE24SingleTau20SingleL1Group;
   Float_t         singleE24SingleTau20SingleL1Pass;
   Float_t         singleE24SingleTau20SingleL1Prescale;
   Float_t         singleE24SingleTau30Group;
   Float_t         singleE24SingleTau30Pass;
   Float_t         singleE24SingleTau30Prescale;
   Float_t         singleE25eta2p1TightGroup;
   Float_t         singleE25eta2p1TightPass;
   Float_t         singleE25eta2p1TightPrescale;
   Float_t         singleE27SingleTau20SingleL1Group;
   Float_t         singleE27SingleTau20SingleL1Pass;
   Float_t         singleE27SingleTau20SingleL1Prescale;
   Float_t         singleE27TightGroup;
   Float_t         singleE27TightPass;
   Float_t         singleE27TightPrescale;
   Float_t         singleE27eta2p1LooseGroup;
   Float_t         singleE27eta2p1LoosePass;
   Float_t         singleE27eta2p1LoosePrescale;
   Float_t         singleE27eta2p1TightGroup;
   Float_t         singleE27eta2p1TightPass;
   Float_t         singleE27eta2p1TightPrescale;
   Float_t         singleE32SingleTau20SingleL1Group;
   Float_t         singleE32SingleTau20SingleL1Pass;
   Float_t         singleE32SingleTau20SingleL1Prescale;
   Float_t         singleE36SingleTau30Group;
   Float_t         singleE36SingleTau30Pass;
   Float_t         singleE36SingleTau30Prescale;
   Float_t         singleESingleMuGroup;
   Float_t         singleESingleMuPass;
   Float_t         singleESingleMuPrescale;
   Float_t         singleE_leg1Group;
   Float_t         singleE_leg1Pass;
   Float_t         singleE_leg1Prescale;
   Float_t         singleE_leg2Group;
   Float_t         singleE_leg2Pass;
   Float_t         singleE_leg2Prescale;
   Float_t         singleIsoMu20Group;
   Float_t         singleIsoMu20Pass;
   Float_t         singleIsoMu20Prescale;
   Float_t         singleIsoMu22Group;
   Float_t         singleIsoMu22Pass;
   Float_t         singleIsoMu22Prescale;
   Float_t         singleIsoMu22eta2p1Group;
   Float_t         singleIsoMu22eta2p1Pass;
   Float_t         singleIsoMu22eta2p1Prescale;
   Float_t         singleIsoMu24Group;
   Float_t         singleIsoMu24Pass;
   Float_t         singleIsoMu24Prescale;
   Float_t         singleIsoMu24eta2p1Group;
   Float_t         singleIsoMu24eta2p1Pass;
   Float_t         singleIsoMu24eta2p1Prescale;
   Float_t         singleIsoMu27Group;
   Float_t         singleIsoMu27Pass;
   Float_t         singleIsoMu27Prescale;
   Float_t         singleIsoTkMu20Group;
   Float_t         singleIsoTkMu20Pass;
   Float_t         singleIsoTkMu20Prescale;
   Float_t         singleIsoTkMu22Group;
   Float_t         singleIsoTkMu22Pass;
   Float_t         singleIsoTkMu22Prescale;
   Float_t         singleIsoTkMu22eta2p1Group;
   Float_t         singleIsoTkMu22eta2p1Pass;
   Float_t         singleIsoTkMu22eta2p1Prescale;
   Float_t         singleIsoTkMu24Group;
   Float_t         singleIsoTkMu24Pass;
   Float_t         singleIsoTkMu24Prescale;
   Float_t         singleIsoTkMu24eta2p1Group;
   Float_t         singleIsoTkMu24eta2p1Pass;
   Float_t         singleIsoTkMu24eta2p1Prescale;
   Float_t         singleMu17SingleE12Group;
   Float_t         singleMu17SingleE12Pass;
   Float_t         singleMu17SingleE12Prescale;
   Float_t         singleMu19eta2p1LooseTau20Group;
   Float_t         singleMu19eta2p1LooseTau20Pass;
   Float_t         singleMu19eta2p1LooseTau20Prescale;
   Float_t         singleMu19eta2p1LooseTau20singleL1Group;
   Float_t         singleMu19eta2p1LooseTau20singleL1Pass;
   Float_t         singleMu19eta2p1LooseTau20singleL1Prescale;
   Float_t         singleMu21eta2p1LooseTau20singleL1Group;
   Float_t         singleMu21eta2p1LooseTau20singleL1Pass;
   Float_t         singleMu21eta2p1LooseTau20singleL1Prescale;
   Float_t         singleMu23SingleE12DZGroup;
   Float_t         singleMu23SingleE12DZPass;
   Float_t         singleMu23SingleE12DZPrescale;
   Float_t         singleMu23SingleE12Group;
   Float_t         singleMu23SingleE12Pass;
   Float_t         singleMu23SingleE12Prescale;
   Float_t         singleMu23SingleE8Group;
   Float_t         singleMu23SingleE8Pass;
   Float_t         singleMu23SingleE8Prescale;
   Float_t         singleMu8SingleE23DZGroup;
   Float_t         singleMu8SingleE23DZPass;
   Float_t         singleMu8SingleE23DZPrescale;
   Float_t         singleMuGroup;
   Float_t         singleMuPass;
   Float_t         singleMuPrescale;
   Float_t         singleMuSingleEGroup;
   Float_t         singleMuSingleEPass;
   Float_t         singleMuSingleEPrescale;
   Float_t         singleMu_leg1Group;
   Float_t         singleMu_leg1Pass;
   Float_t         singleMu_leg1Prescale;
   Float_t         singleMu_leg1_noisoGroup;
   Float_t         singleMu_leg1_noisoPass;
   Float_t         singleMu_leg1_noisoPrescale;
   Float_t         singleMu_leg2Group;
   Float_t         singleMu_leg2Pass;
   Float_t         singleMu_leg2Prescale;
   Float_t         singleMu_leg2_noisoGroup;
   Float_t         singleMu_leg2_noisoPass;
   Float_t         singleMu_leg2_noisoPrescale;
   Float_t         singleTau140Group;
   Float_t         singleTau140Pass;
   Float_t         singleTau140Prescale;
   Float_t         singleTau140Trk50Group;
   Float_t         singleTau140Trk50Pass;
   Float_t         singleTau140Trk50Prescale;
   Float_t         tAbsEta;
   Float_t         tAgainstElectronLooseMVA6;
   Float_t         tAgainstElectronMVA6Raw;
   Float_t         tAgainstElectronMVA6category;
   Float_t         tAgainstElectronMediumMVA6;
   Float_t         tAgainstElectronTightMVA6;
   Float_t         tAgainstElectronVLooseMVA6;
   Float_t         tAgainstElectronVTightMVA6;
   Float_t         tAgainstMuonLoose3;
   Float_t         tAgainstMuonTight3;
   Float_t         tByCombinedIsolationDeltaBetaCorrRaw3Hits;
   Float_t         tByIsolationMVArun2v1DBdR03oldDMwLTraw;
   Float_t         tByIsolationMVArun2v1DBnewDMwLTraw;
   Float_t         tByIsolationMVArun2v1DBoldDMwLTraw;
   Float_t         tByIsolationMVArun2v1PWdR03oldDMwLTraw;
   Float_t         tByIsolationMVArun2v1PWnewDMwLTraw;
   Float_t         tByIsolationMVArun2v1PWoldDMwLTraw;
   Float_t         tByLooseCombinedIsolationDeltaBetaCorr3Hits;
   Float_t         tByLooseIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         tByLooseIsolationMVArun2v1DBnewDMwLT;
   Float_t         tByLooseIsolationMVArun2v1DBoldDMwLT;
   Float_t         tByLooseIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         tByLooseIsolationMVArun2v1PWnewDMwLT;
   Float_t         tByLooseIsolationMVArun2v1PWoldDMwLT;
   Float_t         tByMediumCombinedIsolationDeltaBetaCorr3Hits;
   Float_t         tByMediumIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         tByMediumIsolationMVArun2v1DBnewDMwLT;
   Float_t         tByMediumIsolationMVArun2v1DBoldDMwLT;
   Float_t         tByMediumIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         tByMediumIsolationMVArun2v1PWnewDMwLT;
   Float_t         tByMediumIsolationMVArun2v1PWoldDMwLT;
   Float_t         tByPhotonPtSumOutsideSignalCone;
   Float_t         tByTightCombinedIsolationDeltaBetaCorr3Hits;
   Float_t         tByTightIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         tByTightIsolationMVArun2v1DBnewDMwLT;
   Float_t         tByTightIsolationMVArun2v1DBoldDMwLT;
   Float_t         tByTightIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         tByTightIsolationMVArun2v1PWnewDMwLT;
   Float_t         tByTightIsolationMVArun2v1PWoldDMwLT;
   Float_t         tByVLooseIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         tByVLooseIsolationMVArun2v1DBnewDMwLT;
   Float_t         tByVLooseIsolationMVArun2v1DBoldDMwLT;
   Float_t         tByVLooseIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         tByVLooseIsolationMVArun2v1PWnewDMwLT;
   Float_t         tByVLooseIsolationMVArun2v1PWoldDMwLT;
   Float_t         tByVTightIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         tByVTightIsolationMVArun2v1DBnewDMwLT;
   Float_t         tByVTightIsolationMVArun2v1DBoldDMwLT;
   Float_t         tByVTightIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         tByVTightIsolationMVArun2v1PWnewDMwLT;
   Float_t         tByVTightIsolationMVArun2v1PWoldDMwLT;
   Float_t         tByVVTightIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         tByVVTightIsolationMVArun2v1DBnewDMwLT;
   Float_t         tByVVTightIsolationMVArun2v1DBoldDMwLT;
   Float_t         tByVVTightIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         tByVVTightIsolationMVArun2v1PWnewDMwLT;
   Float_t         tByVVTightIsolationMVArun2v1PWoldDMwLT;
   Float_t         tCharge;
   Float_t         tChargedIsoPtSum;
   Float_t         tChargedIsoPtSumdR03;
   Float_t         tComesFromHiggs;
   Float_t         tDPhiToPfMet_type1;
   Float_t         tDecayMode;
   Float_t         tDecayModeFinding;
   Float_t         tDecayModeFindingNewDMs;
   Float_t         tDoubleTau32Filter;
   Float_t         tDoubleTau35Filter;
   Float_t         tDoubleTau40Filter;
   Float_t         tElecOverlap;
   Float_t         tEta;
   Float_t         tEta_TauEnDown;
   Float_t         tEta_TauEnUp;
   Float_t         tFootprintCorrection;
   Float_t         tFootprintCorrectiondR03;
   Float_t         tGenCharge;
   Float_t         tGenDecayMode;
   Float_t         tGenEnergy;
   Float_t         tGenEta;
   Float_t         tGenIsPrompt;
   Float_t         tGenJetEta;
   Float_t         tGenJetPt;
   Float_t         tGenMotherEnergy;
   Float_t         tGenMotherEta;
   Float_t         tGenMotherPdgId;
   Float_t         tGenMotherPhi;
   Float_t         tGenMotherPt;
   Float_t         tGenPdgId;
   Float_t         tGenPhi;
   Float_t         tGenPt;
   Float_t         tGenStatus;
   Float_t         tGlobalMuonVtxOverlap;
   Float_t         tJetArea;
   Float_t         tJetBtag;
   Float_t         tJetDR;
   Float_t         tJetEtaEtaMoment;
   Float_t         tJetEtaPhiMoment;
   Float_t         tJetEtaPhiSpread;
   Float_t         tJetHadronFlavour;
   Float_t         tJetPFCISVBtag;
   Float_t         tJetPartonFlavour;
   Float_t         tJetPhiPhiMoment;
   Float_t         tJetPt;
   Float_t         tLeadTrackPt;
   Float_t         tLowestMll;
   Float_t         tMass;
   Float_t         tMass_TauEnDown;
   Float_t         tMass_TauEnUp;
   Float_t         tMatchesDoubleTau32Path;
   Float_t         tMatchesDoubleTau35Path;
   Float_t         tMatchesDoubleTau40Path;
   Float_t         tMtToPfMet_type1;
   Float_t         tMuOverlap;
   Float_t         tMuonIdIsoStdVtxOverlap;
   Float_t         tMuonIdIsoVtxOverlap;
   Float_t         tMuonIdVtxOverlap;
   Float_t         tNChrgHadrIsolationCands;
   Float_t         tNChrgHadrSignalCands;
   Float_t         tNGammaSignalCands;
   Float_t         tNNeutralHadrSignalCands;
   Float_t         tNSignalCands;
   Float_t         tNearestZMass;
   Float_t         tNeutralIsoPtSum;
   Float_t         tNeutralIsoPtSumWeight;
   Float_t         tNeutralIsoPtSumWeightdR03;
   Float_t         tNeutralIsoPtSumdR03;
   Float_t         tPVDXY;
   Float_t         tPVDZ;
   Float_t         tPhi;
   Float_t         tPhi_TauEnDown;
   Float_t         tPhi_TauEnUp;
   Float_t         tPhotonPtSumOutsideSignalCone;
   Float_t         tPhotonPtSumOutsideSignalConedR03;
   Float_t         tPt;
   Float_t         tPt_TauEnDown;
   Float_t         tPt_TauEnUp;
   Float_t         tPuCorrPtSum;
   Float_t         tRank;
   Float_t         tVZ;
   Float_t         tZTTGenDR;
   Float_t         tZTTGenEta;
   Float_t         tZTTGenMatching;
   Float_t         tZTTGenPhi;
   Float_t         tZTTGenPt;
   Float_t         t_e1_collinearmass;
   Float_t         t_e1_collinearmass_CheckUESDown;
   Float_t         t_e1_collinearmass_CheckUESUp;
   Float_t         t_e1_collinearmass_JetCheckTotalDown;
   Float_t         t_e1_collinearmass_JetCheckTotalUp;
   Float_t         t_e1_collinearmass_JetEnDown;
   Float_t         t_e1_collinearmass_JetEnUp;
   Float_t         t_e1_collinearmass_UnclusteredEnDown;
   Float_t         t_e1_collinearmass_UnclusteredEnUp;
   Float_t         t_e2_collinearmass;
   Float_t         t_e2_collinearmass_CheckUESDown;
   Float_t         t_e2_collinearmass_CheckUESUp;
   Float_t         t_e2_collinearmass_JetCheckTotalDown;
   Float_t         t_e2_collinearmass_JetCheckTotalUp;
   Float_t         t_e2_collinearmass_JetEnDown;
   Float_t         t_e2_collinearmass_JetEnUp;
   Float_t         t_e2_collinearmass_UnclusteredEnDown;
   Float_t         t_e2_collinearmass_UnclusteredEnUp;
   Float_t         t_m_collinearmass;
   Float_t         t_m_collinearmass_CheckUESDown;
   Float_t         t_m_collinearmass_CheckUESUp;
   Float_t         t_m_collinearmass_JetCheckTotalDown;
   Float_t         t_m_collinearmass_JetCheckTotalUp;
   Float_t         t_m_collinearmass_JetEnDown;
   Float_t         t_m_collinearmass_JetEnUp;
   Float_t         t_m_collinearmass_UnclusteredEnDown;
   Float_t         t_m_collinearmass_UnclusteredEnUp;
   Float_t         tauVetoPt20Loose3HitsVtx;
   Float_t         tauVetoPt20TightMVALTVtx;
   Float_t         topQuarkPt1;
   Float_t         topQuarkPt2;
   Float_t         tripleEGroup;
   Float_t         tripleEPass;
   Float_t         tripleEPrescale;
   Float_t         tripleMuGroup;
   Float_t         tripleMuPass;
   Float_t         tripleMuPrescale;
   Float_t         type1_pfMetEt;
   Float_t         type1_pfMetPhi;
   Float_t         vbfDeta;
   Float_t         vbfDetaZTT;
   Float_t         vbfDeta_JetEnDown;
   Float_t         vbfDeta_JetEnUp;
   Float_t         vbfDijetPtZTT;
   Float_t         vbfDijetrap;
   Float_t         vbfDijetrap_JetEnDown;
   Float_t         vbfDijetrap_JetEnUp;
   Float_t         vbfDphi;
   Float_t         vbfDphiZTT;
   Float_t         vbfDphi_JetEnDown;
   Float_t         vbfDphi_JetEnUp;
   Float_t         vbfDphihj;
   Float_t         vbfDphihj_JetEnDown;
   Float_t         vbfDphihj_JetEnUp;
   Float_t         vbfDphihjnomet;
   Float_t         vbfDphihjnomet_JetEnDown;
   Float_t         vbfDphihjnomet_JetEnUp;
   Float_t         vbfHrap;
   Float_t         vbfHrap_JetEnDown;
   Float_t         vbfHrap_JetEnUp;
   Float_t         vbfJetVeto20;
   Float_t         vbfJetVeto20ZTT;
   Float_t         vbfJetVeto20_JetEnDown;
   Float_t         vbfJetVeto20_JetEnUp;
   Float_t         vbfJetVeto30;
   Float_t         vbfJetVeto30ZTT;
   Float_t         vbfJetVeto30_JetEnDown;
   Float_t         vbfJetVeto30_JetEnUp;
   Float_t         vbfMVA;
   Float_t         vbfMVA_JetEnDown;
   Float_t         vbfMVA_JetEnUp;
   Float_t         vbfMass;
   Float_t         vbfMassZTT;
   Float_t         vbfMass_JetEnDown;
   Float_t         vbfMass_JetEnUp;
   Float_t         vbfNJets20;
   Float_t         vbfNJets20_JetEnDown;
   Float_t         vbfNJets20_JetEnUp;
   Float_t         vbfNJets30;
   Float_t         vbfNJets30_JetEnDown;
   Float_t         vbfNJets30_JetEnUp;
   Float_t         vbfVispt;
   Float_t         vbfVispt_JetEnDown;
   Float_t         vbfVispt_JetEnUp;
   Float_t         vbfdijetpt;
   Float_t         vbfdijetpt_JetEnDown;
   Float_t         vbfdijetpt_JetEnUp;
   Float_t         vbfj1eta;
   Float_t         vbfj1eta_JetEnDown;
   Float_t         vbfj1eta_JetEnUp;
   Float_t         vbfj1pt;
   Float_t         vbfj1pt_JetEnDown;
   Float_t         vbfj1pt_JetEnUp;
   Float_t         vbfj2eta;
   Float_t         vbfj2eta_JetEnDown;
   Float_t         vbfj2eta_JetEnUp;
   Float_t         vbfj2pt;
   Float_t         vbfj2pt_JetEnDown;
   Float_t         vbfj2pt_JetEnUp;
   Float_t         vispX;
   Float_t         vispY;
   Int_t           idx;

   // List of branches
   TBranch        *b_EmbPtWeight;   //!
   TBranch        *b_Eta;   //!
   TBranch        *b_GenWeight;   //!
   TBranch        *b_Ht;   //!
   TBranch        *b_LT;   //!
   TBranch        *b_Mass;   //!
   TBranch        *b_MassError;   //!
   TBranch        *b_MassErrord1;   //!
   TBranch        *b_MassErrord2;   //!
   TBranch        *b_MassErrord3;   //!
   TBranch        *b_MassErrord4;   //!
   TBranch        *b_Mt;   //!
   TBranch        *b_NUP;   //!
   TBranch        *b_Phi;   //!
   TBranch        *b_Pt;   //!
   TBranch        *b_bjetCISVVeto20Loose;   //!
   TBranch        *b_bjetCISVVeto20LooseZTT;   //!
   TBranch        *b_bjetCISVVeto20Medium;   //!
   TBranch        *b_bjetCISVVeto20MediumZTT;   //!
   TBranch        *b_bjetCISVVeto20Tight;   //!
   TBranch        *b_bjetCISVVeto20TightZTT;   //!
   TBranch        *b_bjetCISVVeto30Loose;   //!
   TBranch        *b_bjetCISVVeto30LooseZTT;   //!
   TBranch        *b_bjetCISVVeto30Medium;   //!
   TBranch        *b_bjetCISVVeto30MediumZTT;   //!
   TBranch        *b_bjetCISVVeto30Tight;   //!
   TBranch        *b_bjetCISVVeto30TightZTT;   //!
   TBranch        *b_charge;   //!
   TBranch        *b_closestMassZEE;   //!
   TBranch        *b_closestMassZMM;   //!
   TBranch        *b_dielectronVeto;   //!
   TBranch        *b_dimuonVeto;   //!
   TBranch        *b_doubleEGroup;   //!
   TBranch        *b_doubleEPass;   //!
   TBranch        *b_doubleEPrescale;   //!
   TBranch        *b_doubleESingleMuGroup;   //!
   TBranch        *b_doubleESingleMuPass;   //!
   TBranch        *b_doubleESingleMuPrescale;   //!
   TBranch        *b_doubleE_23_12Group;   //!
   TBranch        *b_doubleE_23_12Pass;   //!
   TBranch        *b_doubleE_23_12Prescale;   //!
   TBranch        *b_doubleMuGroup;   //!
   TBranch        *b_doubleMuNoDZGroup;   //!
   TBranch        *b_doubleMuNoDZPass;   //!
   TBranch        *b_doubleMuNoDZPrescale;   //!
   TBranch        *b_doubleMuPass;   //!
   TBranch        *b_doubleMuPrescale;   //!
   TBranch        *b_doubleMuSingleEGroup;   //!
   TBranch        *b_doubleMuSingleEPass;   //!
   TBranch        *b_doubleMuSingleEPrescale;   //!
   TBranch        *b_doubleTau32Group;   //!
   TBranch        *b_doubleTau32Pass;   //!
   TBranch        *b_doubleTau32Prescale;   //!
   TBranch        *b_doubleTau35Group;   //!
   TBranch        *b_doubleTau35Pass;   //!
   TBranch        *b_doubleTau35Prescale;   //!
   TBranch        *b_doubleTau40Group;   //!
   TBranch        *b_doubleTau40Pass;   //!
   TBranch        *b_doubleTau40Prescale;   //!
   TBranch        *b_doubleTauCmbIso35RegGroup;   //!
   TBranch        *b_doubleTauCmbIso35RegPass;   //!
   TBranch        *b_doubleTauCmbIso35RegPrescale;   //!
   TBranch        *b_doubleTauCmbIso40Group;   //!
   TBranch        *b_doubleTauCmbIso40Pass;   //!
   TBranch        *b_doubleTauCmbIso40Prescale;   //!
   TBranch        *b_doubleTauCmbIso40RegGroup;   //!
   TBranch        *b_doubleTauCmbIso40RegPass;   //!
   TBranch        *b_doubleTauCmbIso40RegPrescale;   //!
   TBranch        *b_e1AbsEta;   //!
   TBranch        *b_e1CBIDLoose;   //!
   TBranch        *b_e1CBIDLooseNoIso;   //!
   TBranch        *b_e1CBIDMedium;   //!
   TBranch        *b_e1CBIDMediumNoIso;   //!
   TBranch        *b_e1CBIDTight;   //!
   TBranch        *b_e1CBIDTightNoIso;   //!
   TBranch        *b_e1CBIDVeto;   //!
   TBranch        *b_e1CBIDVetoNoIso;   //!
   TBranch        *b_e1Charge;   //!
   TBranch        *b_e1ChargeIdLoose;   //!
   TBranch        *b_e1ChargeIdMed;   //!
   TBranch        *b_e1ChargeIdTight;   //!
   TBranch        *b_e1ComesFromHiggs;   //!
   TBranch        *b_e1DPhiToPfMet_type1;   //!
   TBranch        *b_e1E1x5;   //!
   TBranch        *b_e1E2x5Max;   //!
   TBranch        *b_e1E5x5;   //!
   TBranch        *b_e1EcalIsoDR03;   //!
   TBranch        *b_e1EffectiveArea2012Data;   //!
   TBranch        *b_e1EffectiveAreaSpring15;   //!
   TBranch        *b_e1EnergyError;   //!
   TBranch        *b_e1Eta;   //!
   TBranch        *b_e1GenCharge;   //!
   TBranch        *b_e1GenDirectPromptTauDecay;   //!
   TBranch        *b_e1GenEnergy;   //!
   TBranch        *b_e1GenEta;   //!
   TBranch        *b_e1GenIsPrompt;   //!
   TBranch        *b_e1GenMotherPdgId;   //!
   TBranch        *b_e1GenParticle;   //!
   TBranch        *b_e1GenPdgId;   //!
   TBranch        *b_e1GenPhi;   //!
   TBranch        *b_e1GenPrompt;   //!
   TBranch        *b_e1GenPromptTauDecay;   //!
   TBranch        *b_e1GenPt;   //!
   TBranch        *b_e1GenTauDecay;   //!
   TBranch        *b_e1GenVZ;   //!
   TBranch        *b_e1GenVtxPVMatch;   //!
   TBranch        *b_e1HadronicDepth1OverEm;   //!
   TBranch        *b_e1HadronicDepth2OverEm;   //!
   TBranch        *b_e1HadronicOverEM;   //!
   TBranch        *b_e1HcalIsoDR03;   //!
   TBranch        *b_e1IP3D;   //!
   TBranch        *b_e1IP3DErr;   //!
   TBranch        *b_e1IsoDB03;   //!
   TBranch        *b_e1JetArea;   //!
   TBranch        *b_e1JetBtag;   //!
   TBranch        *b_e1JetDR;   //!
   TBranch        *b_e1JetEtaEtaMoment;   //!
   TBranch        *b_e1JetEtaPhiMoment;   //!
   TBranch        *b_e1JetEtaPhiSpread;   //!
   TBranch        *b_e1JetHadronFlavour;   //!
   TBranch        *b_e1JetPFCISVBtag;   //!
   TBranch        *b_e1JetPartonFlavour;   //!
   TBranch        *b_e1JetPhiPhiMoment;   //!
   TBranch        *b_e1JetPt;   //!
   TBranch        *b_e1LowestMll;   //!
   TBranch        *b_e1MVANonTrigCategory;   //!
   TBranch        *b_e1MVANonTrigID;   //!
   TBranch        *b_e1MVANonTrigWP80;   //!
   TBranch        *b_e1MVANonTrigWP90;   //!
   TBranch        *b_e1MVATrigCategory;   //!
   TBranch        *b_e1MVATrigID;   //!
   TBranch        *b_e1MVATrigWP80;   //!
   TBranch        *b_e1MVATrigWP90;   //!
   TBranch        *b_e1Mass;   //!
   TBranch        *b_e1MatchesDoubleE;   //!
   TBranch        *b_e1MatchesDoubleE23_12Filter;   //!
   TBranch        *b_e1MatchesDoubleE23_12Path;   //!
   TBranch        *b_e1MatchesDoubleEFilter;   //!
   TBranch        *b_e1MatchesDoubleEPath;   //!
   TBranch        *b_e1MatchesDoubleESingleMu;   //!
   TBranch        *b_e1MatchesDoubleMuSingleE;   //!
   TBranch        *b_e1MatchesEle12LoosePath;   //!
   TBranch        *b_e1MatchesEle17LoosePath;   //!
   TBranch        *b_e1MatchesEle22eta2p1LoosePath;   //!
   TBranch        *b_e1MatchesEle23LoosePath;   //!
   TBranch        *b_e1MatchesEle25eta2p1LoosePath;   //!
   TBranch        *b_e1MatchesEle25eta2p1TightPath;   //!
   TBranch        *b_e1MatchesEle27TightPath;   //!
   TBranch        *b_e1MatchesEle27eta2p1LoosePath;   //!
   TBranch        *b_e1MatchesSingleE;   //!
   TBranch        *b_e1MatchesSingleESingleMu;   //!
   TBranch        *b_e1MatchesSingleETight27Filter;   //!
   TBranch        *b_e1MatchesSingleE_leg1;   //!
   TBranch        *b_e1MatchesSingleE_leg2;   //!
   TBranch        *b_e1MatchesSingleMuSingleE;   //!
   TBranch        *b_e1MatchesTripleE;   //!
   TBranch        *b_e1MissingHits;   //!
   TBranch        *b_e1MtToPfMet_type1;   //!
   TBranch        *b_e1NearMuonVeto;   //!
   TBranch        *b_e1NearestMuonDR;   //!
   TBranch        *b_e1NearestZMass;   //!
   TBranch        *b_e1PFChargedIso;   //!
   TBranch        *b_e1PFNeutralIso;   //!
   TBranch        *b_e1PFPUChargedIso;   //!
   TBranch        *b_e1PFPhotonIso;   //!
   TBranch        *b_e1PVDXY;   //!
   TBranch        *b_e1PVDZ;   //!
   TBranch        *b_e1PassesConversionVeto;   //!
   TBranch        *b_e1Phi;   //!
   TBranch        *b_e1Pt;   //!
   TBranch        *b_e1Pt_ElectronResPhiDown;   //!
   TBranch        *b_e1Pt_ElectronResRhoDown;   //!
   TBranch        *b_e1Pt_ElectronResRhoUp;   //!
   TBranch        *b_e1Pt_ElectronScaleDown;   //!
   TBranch        *b_e1Pt_ElectronScaleUp;   //!
   TBranch        *b_e1Pt_ElectronUncorr;   //!
   TBranch        *b_e1Rank;   //!
   TBranch        *b_e1RelIso;   //!
   TBranch        *b_e1RelPFIsoDB;   //!
   TBranch        *b_e1RelPFIsoRho;   //!
   TBranch        *b_e1Rho;   //!
   TBranch        *b_e1SCEnergy;   //!
   TBranch        *b_e1SCEta;   //!
   TBranch        *b_e1SCEtaWidth;   //!
   TBranch        *b_e1SCPhi;   //!
   TBranch        *b_e1SCPhiWidth;   //!
   TBranch        *b_e1SCPreshowerEnergy;   //!
   TBranch        *b_e1SCRawEnergy;   //!
   TBranch        *b_e1SIP2D;   //!
   TBranch        *b_e1SIP3D;   //!
   TBranch        *b_e1SigmaIEtaIEta;   //!
   TBranch        *b_e1TrkIsoDR03;   //!
   TBranch        *b_e1VZ;   //!
   TBranch        *b_e1WWLoose;   //!
   TBranch        *b_e1ZTTGenMatching;   //!
   TBranch        *b_e1_e2_CosThetaStar;   //!
   TBranch        *b_e1_e2_DPhi;   //!
   TBranch        *b_e1_e2_DR;   //!
   TBranch        *b_e1_e2_Eta;   //!
   TBranch        *b_e1_e2_Mass;   //!
   TBranch        *b_e1_e2_Mass_TauEnDown;   //!
   TBranch        *b_e1_e2_Mass_TauEnUp;   //!
   TBranch        *b_e1_e2_Mt;   //!
   TBranch        *b_e1_e2_MtTotal;   //!
   TBranch        *b_e1_e2_Mt_TauEnDown;   //!
   TBranch        *b_e1_e2_Mt_TauEnUp;   //!
   TBranch        *b_e1_e2_MvaMet;   //!
   TBranch        *b_e1_e2_MvaMetCovMatrix00;   //!
   TBranch        *b_e1_e2_MvaMetCovMatrix01;   //!
   TBranch        *b_e1_e2_MvaMetCovMatrix10;   //!
   TBranch        *b_e1_e2_MvaMetCovMatrix11;   //!
   TBranch        *b_e1_e2_MvaMetPhi;   //!
   TBranch        *b_e1_e2_PZeta;   //!
   TBranch        *b_e1_e2_PZetaLess0p85PZetaVis;   //!
   TBranch        *b_e1_e2_PZetaVis;   //!
   TBranch        *b_e1_e2_Phi;   //!
   TBranch        *b_e1_e2_Pt;   //!
   TBranch        *b_e1_e2_SS;   //!
   TBranch        *b_e1_e2_ToMETDPhi_Ty1;   //!
   TBranch        *b_e1_e2_collinearmass;   //!
   TBranch        *b_e1_e2_collinearmass_CheckUESDown;   //!
   TBranch        *b_e1_e2_collinearmass_CheckUESUp;   //!
   TBranch        *b_e1_e2_collinearmass_EleEnDown;   //!
   TBranch        *b_e1_e2_collinearmass_EleEnUp;   //!
   TBranch        *b_e1_e2_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_e1_e2_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_e1_e2_collinearmass_JetEnDown;   //!
   TBranch        *b_e1_e2_collinearmass_JetEnUp;   //!
   TBranch        *b_e1_e2_collinearmass_MuEnDown;   //!
   TBranch        *b_e1_e2_collinearmass_MuEnUp;   //!
   TBranch        *b_e1_e2_collinearmass_TauEnDown;   //!
   TBranch        *b_e1_e2_collinearmass_TauEnUp;   //!
   TBranch        *b_e1_e2_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_e1_e2_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_e1_e2_pt_tt;   //!
   TBranch        *b_e1_m_CosThetaStar;   //!
   TBranch        *b_e1_m_DPhi;   //!
   TBranch        *b_e1_m_DR;   //!
   TBranch        *b_e1_m_Eta;   //!
   TBranch        *b_e1_m_Mass;   //!
   TBranch        *b_e1_m_Mass_TauEnDown;   //!
   TBranch        *b_e1_m_Mass_TauEnUp;   //!
   TBranch        *b_e1_m_Mt;   //!
   TBranch        *b_e1_m_MtTotal;   //!
   TBranch        *b_e1_m_Mt_TauEnDown;   //!
   TBranch        *b_e1_m_Mt_TauEnUp;   //!
   TBranch        *b_e1_m_MvaMet;   //!
   TBranch        *b_e1_m_MvaMetCovMatrix00;   //!
   TBranch        *b_e1_m_MvaMetCovMatrix01;   //!
   TBranch        *b_e1_m_MvaMetCovMatrix10;   //!
   TBranch        *b_e1_m_MvaMetCovMatrix11;   //!
   TBranch        *b_e1_m_MvaMetPhi;   //!
   TBranch        *b_e1_m_PZeta;   //!
   TBranch        *b_e1_m_PZetaLess0p85PZetaVis;   //!
   TBranch        *b_e1_m_PZetaVis;   //!
   TBranch        *b_e1_m_Phi;   //!
   TBranch        *b_e1_m_Pt;   //!
   TBranch        *b_e1_m_SS;   //!
   TBranch        *b_e1_m_ToMETDPhi_Ty1;   //!
   TBranch        *b_e1_m_collinearmass;   //!
   TBranch        *b_e1_m_collinearmass_CheckUESDown;   //!
   TBranch        *b_e1_m_collinearmass_CheckUESUp;   //!
   TBranch        *b_e1_m_collinearmass_EleEnDown;   //!
   TBranch        *b_e1_m_collinearmass_EleEnUp;   //!
   TBranch        *b_e1_m_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_e1_m_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_e1_m_collinearmass_JetEnDown;   //!
   TBranch        *b_e1_m_collinearmass_JetEnUp;   //!
   TBranch        *b_e1_m_collinearmass_MuEnDown;   //!
   TBranch        *b_e1_m_collinearmass_MuEnUp;   //!
   TBranch        *b_e1_m_collinearmass_TauEnDown;   //!
   TBranch        *b_e1_m_collinearmass_TauEnUp;   //!
   TBranch        *b_e1_m_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_e1_m_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_e1_m_pt_tt;   //!
   TBranch        *b_e1_t_CosThetaStar;   //!
   TBranch        *b_e1_t_DPhi;   //!
   TBranch        *b_e1_t_DR;   //!
   TBranch        *b_e1_t_Eta;   //!
   TBranch        *b_e1_t_Mass;   //!
   TBranch        *b_e1_t_Mass_TauEnDown;   //!
   TBranch        *b_e1_t_Mass_TauEnUp;   //!
   TBranch        *b_e1_t_Mt;   //!
   TBranch        *b_e1_t_MtTotal;   //!
   TBranch        *b_e1_t_Mt_TauEnDown;   //!
   TBranch        *b_e1_t_Mt_TauEnUp;   //!
   TBranch        *b_e1_t_MvaMet;   //!
   TBranch        *b_e1_t_MvaMetCovMatrix00;   //!
   TBranch        *b_e1_t_MvaMetCovMatrix01;   //!
   TBranch        *b_e1_t_MvaMetCovMatrix10;   //!
   TBranch        *b_e1_t_MvaMetCovMatrix11;   //!
   TBranch        *b_e1_t_MvaMetPhi;   //!
   TBranch        *b_e1_t_PZeta;   //!
   TBranch        *b_e1_t_PZetaLess0p85PZetaVis;   //!
   TBranch        *b_e1_t_PZetaVis;   //!
   TBranch        *b_e1_t_Phi;   //!
   TBranch        *b_e1_t_Pt;   //!
   TBranch        *b_e1_t_SS;   //!
   TBranch        *b_e1_t_ToMETDPhi_Ty1;   //!
   TBranch        *b_e1_t_collinearmass;   //!
   TBranch        *b_e1_t_collinearmass_CheckUESDown;   //!
   TBranch        *b_e1_t_collinearmass_CheckUESUp;   //!
   TBranch        *b_e1_t_collinearmass_EleEnDown;   //!
   TBranch        *b_e1_t_collinearmass_EleEnUp;   //!
   TBranch        *b_e1_t_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_e1_t_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_e1_t_collinearmass_JetEnDown;   //!
   TBranch        *b_e1_t_collinearmass_JetEnUp;   //!
   TBranch        *b_e1_t_collinearmass_MuEnDown;   //!
   TBranch        *b_e1_t_collinearmass_MuEnUp;   //!
   TBranch        *b_e1_t_collinearmass_TauEnDown;   //!
   TBranch        *b_e1_t_collinearmass_TauEnUp;   //!
   TBranch        *b_e1_t_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_e1_t_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_e1_t_pt_tt;   //!
   TBranch        *b_e1deltaEtaSuperClusterTrackAtVtx;   //!
   TBranch        *b_e1deltaPhiSuperClusterTrackAtVtx;   //!
   TBranch        *b_e1eSuperClusterOverP;   //!
   TBranch        *b_e1ecalEnergy;   //!
   TBranch        *b_e1fBrem;   //!
   TBranch        *b_e1trackMomentumAtVtxP;   //!
   TBranch        *b_e2AbsEta;   //!
   TBranch        *b_e2CBIDLoose;   //!
   TBranch        *b_e2CBIDLooseNoIso;   //!
   TBranch        *b_e2CBIDMedium;   //!
   TBranch        *b_e2CBIDMediumNoIso;   //!
   TBranch        *b_e2CBIDTight;   //!
   TBranch        *b_e2CBIDTightNoIso;   //!
   TBranch        *b_e2CBIDVeto;   //!
   TBranch        *b_e2CBIDVetoNoIso;   //!
   TBranch        *b_e2Charge;   //!
   TBranch        *b_e2ChargeIdLoose;   //!
   TBranch        *b_e2ChargeIdMed;   //!
   TBranch        *b_e2ChargeIdTight;   //!
   TBranch        *b_e2ComesFromHiggs;   //!
   TBranch        *b_e2DPhiToPfMet_type1;   //!
   TBranch        *b_e2E1x5;   //!
   TBranch        *b_e2E2x5Max;   //!
   TBranch        *b_e2E5x5;   //!
   TBranch        *b_e2EcalIsoDR03;   //!
   TBranch        *b_e2EffectiveArea2012Data;   //!
   TBranch        *b_e2EffectiveAreaSpring15;   //!
   TBranch        *b_e2EnergyError;   //!
   TBranch        *b_e2Eta;   //!
   TBranch        *b_e2GenCharge;   //!
   TBranch        *b_e2GenDirectPromptTauDecay;   //!
   TBranch        *b_e2GenEnergy;   //!
   TBranch        *b_e2GenEta;   //!
   TBranch        *b_e2GenIsPrompt;   //!
   TBranch        *b_e2GenMotherPdgId;   //!
   TBranch        *b_e2GenParticle;   //!
   TBranch        *b_e2GenPdgId;   //!
   TBranch        *b_e2GenPhi;   //!
   TBranch        *b_e2GenPrompt;   //!
   TBranch        *b_e2GenPromptTauDecay;   //!
   TBranch        *b_e2GenPt;   //!
   TBranch        *b_e2GenTauDecay;   //!
   TBranch        *b_e2GenVZ;   //!
   TBranch        *b_e2GenVtxPVMatch;   //!
   TBranch        *b_e2HadronicDepth1OverEm;   //!
   TBranch        *b_e2HadronicDepth2OverEm;   //!
   TBranch        *b_e2HadronicOverEM;   //!
   TBranch        *b_e2HcalIsoDR03;   //!
   TBranch        *b_e2IP3D;   //!
   TBranch        *b_e2IP3DErr;   //!
   TBranch        *b_e2IsoDB03;   //!
   TBranch        *b_e2JetArea;   //!
   TBranch        *b_e2JetBtag;   //!
   TBranch        *b_e2JetDR;   //!
   TBranch        *b_e2JetEtaEtaMoment;   //!
   TBranch        *b_e2JetEtaPhiMoment;   //!
   TBranch        *b_e2JetEtaPhiSpread;   //!
   TBranch        *b_e2JetHadronFlavour;   //!
   TBranch        *b_e2JetPFCISVBtag;   //!
   TBranch        *b_e2JetPartonFlavour;   //!
   TBranch        *b_e2JetPhiPhiMoment;   //!
   TBranch        *b_e2JetPt;   //!
   TBranch        *b_e2LowestMll;   //!
   TBranch        *b_e2MVANonTrigCategory;   //!
   TBranch        *b_e2MVANonTrigID;   //!
   TBranch        *b_e2MVANonTrigWP80;   //!
   TBranch        *b_e2MVANonTrigWP90;   //!
   TBranch        *b_e2MVATrigCategory;   //!
   TBranch        *b_e2MVATrigID;   //!
   TBranch        *b_e2MVATrigWP80;   //!
   TBranch        *b_e2MVATrigWP90;   //!
   TBranch        *b_e2Mass;   //!
   TBranch        *b_e2MatchesDoubleE;   //!
   TBranch        *b_e2MatchesDoubleE23_12Filter;   //!
   TBranch        *b_e2MatchesDoubleE23_12Path;   //!
   TBranch        *b_e2MatchesDoubleEFilter;   //!
   TBranch        *b_e2MatchesDoubleEPath;   //!
   TBranch        *b_e2MatchesDoubleESingleMu;   //!
   TBranch        *b_e2MatchesDoubleMuSingleE;   //!
   TBranch        *b_e2MatchesEle12LoosePath;   //!
   TBranch        *b_e2MatchesEle17LoosePath;   //!
   TBranch        *b_e2MatchesEle22eta2p1LoosePath;   //!
   TBranch        *b_e2MatchesEle23LoosePath;   //!
   TBranch        *b_e2MatchesEle25eta2p1LoosePath;   //!
   TBranch        *b_e2MatchesEle25eta2p1TightPath;   //!
   TBranch        *b_e2MatchesEle27TightPath;   //!
   TBranch        *b_e2MatchesEle27eta2p1LoosePath;   //!
   TBranch        *b_e2MatchesSingleE;   //!
   TBranch        *b_e2MatchesSingleESingleMu;   //!
   TBranch        *b_e2MatchesSingleETight27Filter;   //!
   TBranch        *b_e2MatchesSingleE_leg1;   //!
   TBranch        *b_e2MatchesSingleE_leg2;   //!
   TBranch        *b_e2MatchesSingleMuSingleE;   //!
   TBranch        *b_e2MatchesTripleE;   //!
   TBranch        *b_e2MissingHits;   //!
   TBranch        *b_e2MtToPfMet_type1;   //!
   TBranch        *b_e2NearMuonVeto;   //!
   TBranch        *b_e2NearestMuonDR;   //!
   TBranch        *b_e2NearestZMass;   //!
   TBranch        *b_e2PFChargedIso;   //!
   TBranch        *b_e2PFNeutralIso;   //!
   TBranch        *b_e2PFPUChargedIso;   //!
   TBranch        *b_e2PFPhotonIso;   //!
   TBranch        *b_e2PVDXY;   //!
   TBranch        *b_e2PVDZ;   //!
   TBranch        *b_e2PassesConversionVeto;   //!
   TBranch        *b_e2Phi;   //!
   TBranch        *b_e2Pt;   //!
   TBranch        *b_e2Pt_ElectronResPhiDown;   //!
   TBranch        *b_e2Pt_ElectronResRhoDown;   //!
   TBranch        *b_e2Pt_ElectronResRhoUp;   //!
   TBranch        *b_e2Pt_ElectronScaleDown;   //!
   TBranch        *b_e2Pt_ElectronScaleUp;   //!
   TBranch        *b_e2Pt_ElectronUncorr;   //!
   TBranch        *b_e2Rank;   //!
   TBranch        *b_e2RelIso;   //!
   TBranch        *b_e2RelPFIsoDB;   //!
   TBranch        *b_e2RelPFIsoRho;   //!
   TBranch        *b_e2Rho;   //!
   TBranch        *b_e2SCEnergy;   //!
   TBranch        *b_e2SCEta;   //!
   TBranch        *b_e2SCEtaWidth;   //!
   TBranch        *b_e2SCPhi;   //!
   TBranch        *b_e2SCPhiWidth;   //!
   TBranch        *b_e2SCPreshowerEnergy;   //!
   TBranch        *b_e2SCRawEnergy;   //!
   TBranch        *b_e2SIP2D;   //!
   TBranch        *b_e2SIP3D;   //!
   TBranch        *b_e2SigmaIEtaIEta;   //!
   TBranch        *b_e2TrkIsoDR03;   //!
   TBranch        *b_e2VZ;   //!
   TBranch        *b_e2WWLoose;   //!
   TBranch        *b_e2ZTTGenMatching;   //!
   TBranch        *b_e2_e1_collinearmass;   //!
   TBranch        *b_e2_e1_collinearmass_CheckUESDown;   //!
   TBranch        *b_e2_e1_collinearmass_CheckUESUp;   //!
   TBranch        *b_e2_e1_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_e2_e1_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_e2_e1_collinearmass_JetEnDown;   //!
   TBranch        *b_e2_e1_collinearmass_JetEnUp;   //!
   TBranch        *b_e2_e1_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_e2_e1_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_e2_m_CosThetaStar;   //!
   TBranch        *b_e2_m_DPhi;   //!
   TBranch        *b_e2_m_DR;   //!
   TBranch        *b_e2_m_Eta;   //!
   TBranch        *b_e2_m_Mass;   //!
   TBranch        *b_e2_m_Mass_TauEnDown;   //!
   TBranch        *b_e2_m_Mass_TauEnUp;   //!
   TBranch        *b_e2_m_Mt;   //!
   TBranch        *b_e2_m_MtTotal;   //!
   TBranch        *b_e2_m_Mt_TauEnDown;   //!
   TBranch        *b_e2_m_Mt_TauEnUp;   //!
   TBranch        *b_e2_m_MvaMet;   //!
   TBranch        *b_e2_m_MvaMetCovMatrix00;   //!
   TBranch        *b_e2_m_MvaMetCovMatrix01;   //!
   TBranch        *b_e2_m_MvaMetCovMatrix10;   //!
   TBranch        *b_e2_m_MvaMetCovMatrix11;   //!
   TBranch        *b_e2_m_MvaMetPhi;   //!
   TBranch        *b_e2_m_PZeta;   //!
   TBranch        *b_e2_m_PZetaLess0p85PZetaVis;   //!
   TBranch        *b_e2_m_PZetaVis;   //!
   TBranch        *b_e2_m_Phi;   //!
   TBranch        *b_e2_m_Pt;   //!
   TBranch        *b_e2_m_SS;   //!
   TBranch        *b_e2_m_ToMETDPhi_Ty1;   //!
   TBranch        *b_e2_m_collinearmass;   //!
   TBranch        *b_e2_m_collinearmass_CheckUESDown;   //!
   TBranch        *b_e2_m_collinearmass_CheckUESUp;   //!
   TBranch        *b_e2_m_collinearmass_EleEnDown;   //!
   TBranch        *b_e2_m_collinearmass_EleEnUp;   //!
   TBranch        *b_e2_m_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_e2_m_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_e2_m_collinearmass_JetEnDown;   //!
   TBranch        *b_e2_m_collinearmass_JetEnUp;   //!
   TBranch        *b_e2_m_collinearmass_MuEnDown;   //!
   TBranch        *b_e2_m_collinearmass_MuEnUp;   //!
   TBranch        *b_e2_m_collinearmass_TauEnDown;   //!
   TBranch        *b_e2_m_collinearmass_TauEnUp;   //!
   TBranch        *b_e2_m_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_e2_m_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_e2_m_pt_tt;   //!
   TBranch        *b_e2_t_CosThetaStar;   //!
   TBranch        *b_e2_t_DPhi;   //!
   TBranch        *b_e2_t_DR;   //!
   TBranch        *b_e2_t_Eta;   //!
   TBranch        *b_e2_t_Mass;   //!
   TBranch        *b_e2_t_Mass_TauEnDown;   //!
   TBranch        *b_e2_t_Mass_TauEnUp;   //!
   TBranch        *b_e2_t_Mt;   //!
   TBranch        *b_e2_t_MtTotal;   //!
   TBranch        *b_e2_t_Mt_TauEnDown;   //!
   TBranch        *b_e2_t_Mt_TauEnUp;   //!
   TBranch        *b_e2_t_MvaMet;   //!
   TBranch        *b_e2_t_MvaMetCovMatrix00;   //!
   TBranch        *b_e2_t_MvaMetCovMatrix01;   //!
   TBranch        *b_e2_t_MvaMetCovMatrix10;   //!
   TBranch        *b_e2_t_MvaMetCovMatrix11;   //!
   TBranch        *b_e2_t_MvaMetPhi;   //!
   TBranch        *b_e2_t_PZeta;   //!
   TBranch        *b_e2_t_PZetaLess0p85PZetaVis;   //!
   TBranch        *b_e2_t_PZetaVis;   //!
   TBranch        *b_e2_t_Phi;   //!
   TBranch        *b_e2_t_Pt;   //!
   TBranch        *b_e2_t_SS;   //!
   TBranch        *b_e2_t_ToMETDPhi_Ty1;   //!
   TBranch        *b_e2_t_collinearmass;   //!
   TBranch        *b_e2_t_collinearmass_CheckUESDown;   //!
   TBranch        *b_e2_t_collinearmass_CheckUESUp;   //!
   TBranch        *b_e2_t_collinearmass_EleEnDown;   //!
   TBranch        *b_e2_t_collinearmass_EleEnUp;   //!
   TBranch        *b_e2_t_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_e2_t_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_e2_t_collinearmass_JetEnDown;   //!
   TBranch        *b_e2_t_collinearmass_JetEnUp;   //!
   TBranch        *b_e2_t_collinearmass_MuEnDown;   //!
   TBranch        *b_e2_t_collinearmass_MuEnUp;   //!
   TBranch        *b_e2_t_collinearmass_TauEnDown;   //!
   TBranch        *b_e2_t_collinearmass_TauEnUp;   //!
   TBranch        *b_e2_t_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_e2_t_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_e2_t_pt_tt;   //!
   TBranch        *b_e2deltaEtaSuperClusterTrackAtVtx;   //!
   TBranch        *b_e2deltaPhiSuperClusterTrackAtVtx;   //!
   TBranch        *b_e2eSuperClusterOverP;   //!
   TBranch        *b_e2ecalEnergy;   //!
   TBranch        *b_e2fBrem;   //!
   TBranch        *b_e2trackMomentumAtVtxP;   //!
   TBranch        *b_eVetoAZHdR0;   //!
   TBranch        *b_eVetoLLTTp001dxyz;   //!
   TBranch        *b_eVetoLLTTp001dxyzR0;   //!
   TBranch        *b_eVetoMVAIso;   //!
   TBranch        *b_eVetoMVAIsoVtx;   //!
   TBranch        *b_eVetoZTTp001dxyz;   //!
   TBranch        *b_eVetoZTTp001dxyzR0;   //!
   TBranch        *b_evt;   //!
   TBranch        *b_genHTT;   //!
   TBranch        *b_genM;   //!
   TBranch        *b_genMass;   //!
   TBranch        *b_genpT;   //!
   TBranch        *b_genpX;   //!
   TBranch        *b_genpY;   //!
   TBranch        *b_isGtautau;   //!
   TBranch        *b_isHee;   //!
   TBranch        *b_isHmumu;   //!
   TBranch        *b_isHtautau;   //!
   TBranch        *b_isWenu;   //!
   TBranch        *b_isWmunu;   //!
   TBranch        *b_isWtaunu;   //!
   TBranch        *b_isZee;   //!
   TBranch        *b_isZmumu;   //!
   TBranch        *b_isZtautau;   //!
   TBranch        *b_isdata;   //!
   TBranch        *b_j1csv;   //!
   TBranch        *b_j1eta;   //!
   TBranch        *b_j1flavor;   //!
   TBranch        *b_j1phi;   //!
   TBranch        *b_j1pt;   //!
   TBranch        *b_j2csv;   //!
   TBranch        *b_j2eta;   //!
   TBranch        *b_j2flavor;   //!
   TBranch        *b_j2phi;   //!
   TBranch        *b_j2pt;   //!
   TBranch        *b_jb1csv;   //!
   TBranch        *b_jb1eta;   //!
   TBranch        *b_jb1hadronflavor;   //!
   TBranch        *b_jb1partonflavor;   //!
   TBranch        *b_jb1phi;   //!
   TBranch        *b_jb1pt;   //!
   TBranch        *b_jb1ptDown;   //!
   TBranch        *b_jb1ptUp;   //!
   TBranch        *b_jb1pu;   //!
   TBranch        *b_jb1rawf;   //!
   TBranch        *b_jb2csv;   //!
   TBranch        *b_jb2eta;   //!
   TBranch        *b_jb2hadronflavor;   //!
   TBranch        *b_jb2partonflavor;   //!
   TBranch        *b_jb2phi;   //!
   TBranch        *b_jb2pt;   //!
   TBranch        *b_jb2ptDown;   //!
   TBranch        *b_jb2ptUp;   //!
   TBranch        *b_jb2pu;   //!
   TBranch        *b_jb2rawf;   //!
   TBranch        *b_jetVeto20;   //!
   TBranch        *b_jetVeto20ZTT;   //!
   TBranch        *b_jetVeto20_JetEnDown;   //!
   TBranch        *b_jetVeto20_JetEnUp;   //!
   TBranch        *b_jetVeto30;   //!
   TBranch        *b_jetVeto30ZTT;   //!
   TBranch        *b_jetVeto30_JetEnDown;   //!
   TBranch        *b_jetVeto30_JetEnUp;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_mAbsEta;   //!
   TBranch        *b_mBestTrackType;   //!
   TBranch        *b_mCharge;   //!
   TBranch        *b_mChi2LocalPosition;   //!
   TBranch        *b_mComesFromHiggs;   //!
   TBranch        *b_mDPhiToPfMet_type1;   //!
   TBranch        *b_mEcalIsoDR03;   //!
   TBranch        *b_mEffectiveArea2011;   //!
   TBranch        *b_mEffectiveArea2012;   //!
   TBranch        *b_mEta;   //!
   TBranch        *b_mEta_MuonEnDown;   //!
   TBranch        *b_mEta_MuonEnUp;   //!
   TBranch        *b_mGenCharge;   //!
   TBranch        *b_mGenDirectPromptTauDecayFinalState;   //!
   TBranch        *b_mGenEnergy;   //!
   TBranch        *b_mGenEta;   //!
   TBranch        *b_mGenIsPrompt;   //!
   TBranch        *b_mGenMotherPdgId;   //!
   TBranch        *b_mGenParticle;   //!
   TBranch        *b_mGenPdgId;   //!
   TBranch        *b_mGenPhi;   //!
   TBranch        *b_mGenPrompt;   //!
   TBranch        *b_mGenPromptFinalState;   //!
   TBranch        *b_mGenPromptTauDecay;   //!
   TBranch        *b_mGenPt;   //!
   TBranch        *b_mGenTauDecay;   //!
   TBranch        *b_mGenVZ;   //!
   TBranch        *b_mGenVtxPVMatch;   //!
   TBranch        *b_mHcalIsoDR03;   //!
   TBranch        *b_mIP3D;   //!
   TBranch        *b_mIP3DErr;   //!
   TBranch        *b_mIsGlobal;   //!
   TBranch        *b_mIsPFMuon;   //!
   TBranch        *b_mIsTracker;   //!
   TBranch        *b_mIsoDB03;   //!
   TBranch        *b_mIsoDB04;   //!
   TBranch        *b_mJetArea;   //!
   TBranch        *b_mJetBtag;   //!
   TBranch        *b_mJetDR;   //!
   TBranch        *b_mJetEtaEtaMoment;   //!
   TBranch        *b_mJetEtaPhiMoment;   //!
   TBranch        *b_mJetEtaPhiSpread;   //!
   TBranch        *b_mJetHadronFlavour;   //!
   TBranch        *b_mJetPFCISVBtag;   //!
   TBranch        *b_mJetPartonFlavour;   //!
   TBranch        *b_mJetPhiPhiMoment;   //!
   TBranch        *b_mJetPt;   //!
   TBranch        *b_mLowestMll;   //!
   TBranch        *b_mMass;   //!
   TBranch        *b_mMatchedStations;   //!
   TBranch        *b_mMatchesDoubleESingleMu;   //!
   TBranch        *b_mMatchesDoubleMu;   //!
   TBranch        *b_mMatchesDoubleMuFilter1;   //!
   TBranch        *b_mMatchesDoubleMuFilter2;   //!
   TBranch        *b_mMatchesDoubleMuNoDZFilter1;   //!
   TBranch        *b_mMatchesDoubleMuNoDZFilter2;   //!
   TBranch        *b_mMatchesDoubleMuPath1;   //!
   TBranch        *b_mMatchesDoubleMuPath2;   //!
   TBranch        *b_mMatchesDoubleMuSingleE;   //!
   TBranch        *b_mMatchesIsoMu17eta2p1Path;   //!
   TBranch        *b_mMatchesIsoMu18Path;   //!
   TBranch        *b_mMatchesIsoMu20Path;   //!
   TBranch        *b_mMatchesIsoMu22Path;   //!
   TBranch        *b_mMatchesIsoMu22eta2p1Path;   //!
   TBranch        *b_mMatchesIsoMu24Filter;   //!
   TBranch        *b_mMatchesIsoMu27Path;   //!
   TBranch        *b_mMatchesIsoTkMu20Path;   //!
   TBranch        *b_mMatchesIsoTkMu22Path;   //!
   TBranch        *b_mMatchesIsoTkMu24Filter;   //!
   TBranch        *b_mMatchesMu17Path;   //!
   TBranch        *b_mMatchesMu17VVLPath;   //!
   TBranch        *b_mMatchesMu50Path;   //!
   TBranch        *b_mMatchesMu8Path;   //!
   TBranch        *b_mMatchesMu8VVLPath;   //!
   TBranch        *b_mMatchesSingleESingleMu;   //!
   TBranch        *b_mMatchesSingleMu;   //!
   TBranch        *b_mMatchesSingleMuIso20;   //!
   TBranch        *b_mMatchesSingleMuIsoTk20;   //!
   TBranch        *b_mMatchesSingleMuSingleE;   //!
   TBranch        *b_mMatchesSingleMu_leg1;   //!
   TBranch        *b_mMatchesSingleMu_leg1_noiso;   //!
   TBranch        *b_mMatchesSingleMu_leg2;   //!
   TBranch        *b_mMatchesSingleMu_leg2_noiso;   //!
   TBranch        *b_mMatchesTripleMu;   //!
   TBranch        *b_mMtToPfMet_type1;   //!
   TBranch        *b_mMuonHits;   //!
   TBranch        *b_mNearestZMass;   //!
   TBranch        *b_mNormTrkChi2;   //!
   TBranch        *b_mNormalizedChi2;   //!
   TBranch        *b_mPFChargedHadronIsoR04;   //!
   TBranch        *b_mPFChargedIso;   //!
   TBranch        *b_mPFIDLoose;   //!
   TBranch        *b_mPFIDMedium;   //!
   TBranch        *b_mPFIDTight;   //!
   TBranch        *b_mPFNeutralHadronIsoR04;   //!
   TBranch        *b_mPFNeutralIso;   //!
   TBranch        *b_mPFPUChargedIso;   //!
   TBranch        *b_mPFPhotonIso;   //!
   TBranch        *b_mPFPhotonIsoR04;   //!
   TBranch        *b_mPFPileupIsoR04;   //!
   TBranch        *b_mPVDXY;   //!
   TBranch        *b_mPVDZ;   //!
   TBranch        *b_mPhi;   //!
   TBranch        *b_mPhi_MuonEnDown;   //!
   TBranch        *b_mPhi_MuonEnUp;   //!
   TBranch        *b_mPixHits;   //!
   TBranch        *b_mPt;   //!
   TBranch        *b_mPt_MuonEnDown;   //!
   TBranch        *b_mPt_MuonEnUp;   //!
   TBranch        *b_mRank;   //!
   TBranch        *b_mRelPFIsoDBDefault;   //!
   TBranch        *b_mRelPFIsoDBDefaultR04;   //!
   TBranch        *b_mRelPFIsoRho;   //!
   TBranch        *b_mRho;   //!
   TBranch        *b_mSIP2D;   //!
   TBranch        *b_mSIP3D;   //!
   TBranch        *b_mSegmentCompatibility;   //!
   TBranch        *b_mTkLayersWithMeasurement;   //!
   TBranch        *b_mTrkIsoDR03;   //!
   TBranch        *b_mTrkKink;   //!
   TBranch        *b_mTypeCode;   //!
   TBranch        *b_mVZ;   //!
   TBranch        *b_mValidFraction;   //!
   TBranch        *b_mZTTGenMatching;   //!
   TBranch        *b_m_e1_collinearmass;   //!
   TBranch        *b_m_e1_collinearmass_CheckUESDown;   //!
   TBranch        *b_m_e1_collinearmass_CheckUESUp;   //!
   TBranch        *b_m_e1_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_m_e1_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_m_e1_collinearmass_JetEnDown;   //!
   TBranch        *b_m_e1_collinearmass_JetEnUp;   //!
   TBranch        *b_m_e1_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_m_e1_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_m_e2_collinearmass;   //!
   TBranch        *b_m_e2_collinearmass_CheckUESDown;   //!
   TBranch        *b_m_e2_collinearmass_CheckUESUp;   //!
   TBranch        *b_m_e2_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_m_e2_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_m_e2_collinearmass_JetEnDown;   //!
   TBranch        *b_m_e2_collinearmass_JetEnUp;   //!
   TBranch        *b_m_e2_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_m_e2_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_m_t_CosThetaStar;   //!
   TBranch        *b_m_t_DPhi;   //!
   TBranch        *b_m_t_DR;   //!
   TBranch        *b_m_t_Eta;   //!
   TBranch        *b_m_t_Mass;   //!
   TBranch        *b_m_t_Mass_TauEnDown;   //!
   TBranch        *b_m_t_Mass_TauEnUp;   //!
   TBranch        *b_m_t_Mt;   //!
   TBranch        *b_m_t_MtTotal;   //!
   TBranch        *b_m_t_Mt_TauEnDown;   //!
   TBranch        *b_m_t_Mt_TauEnUp;   //!
   TBranch        *b_m_t_MvaMet;   //!
   TBranch        *b_m_t_MvaMetCovMatrix00;   //!
   TBranch        *b_m_t_MvaMetCovMatrix01;   //!
   TBranch        *b_m_t_MvaMetCovMatrix10;   //!
   TBranch        *b_m_t_MvaMetCovMatrix11;   //!
   TBranch        *b_m_t_MvaMetPhi;   //!
   TBranch        *b_m_t_PZeta;   //!
   TBranch        *b_m_t_PZetaLess0p85PZetaVis;   //!
   TBranch        *b_m_t_PZetaVis;   //!
   TBranch        *b_m_t_Phi;   //!
   TBranch        *b_m_t_Pt;   //!
   TBranch        *b_m_t_SS;   //!
   TBranch        *b_m_t_ToMETDPhi_Ty1;   //!
   TBranch        *b_m_t_collinearmass;   //!
   TBranch        *b_m_t_collinearmass_CheckUESDown;   //!
   TBranch        *b_m_t_collinearmass_CheckUESUp;   //!
   TBranch        *b_m_t_collinearmass_EleEnDown;   //!
   TBranch        *b_m_t_collinearmass_EleEnUp;   //!
   TBranch        *b_m_t_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_m_t_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_m_t_collinearmass_JetEnDown;   //!
   TBranch        *b_m_t_collinearmass_JetEnUp;   //!
   TBranch        *b_m_t_collinearmass_MuEnDown;   //!
   TBranch        *b_m_t_collinearmass_MuEnUp;   //!
   TBranch        *b_m_t_collinearmass_TauEnDown;   //!
   TBranch        *b_m_t_collinearmass_TauEnUp;   //!
   TBranch        *b_m_t_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_m_t_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_m_t_pt_tt;   //!
   TBranch        *b_metSig;   //!
   TBranch        *b_metcov00;   //!
   TBranch        *b_metcov01;   //!
   TBranch        *b_metcov10;   //!
   TBranch        *b_metcov11;   //!
   TBranch        *b_muGlbIsoVetoPt10;   //!
   TBranch        *b_muVetoAZHdR0;   //!
   TBranch        *b_muVetoLLTTp001dxyz;   //!
   TBranch        *b_muVetoLLTTp001dxyzR0;   //!
   TBranch        *b_muVetoPt15IsoIdVtx;   //!
   TBranch        *b_muVetoPt5;   //!
   TBranch        *b_muVetoPt5IsoIdVtx;   //!
   TBranch        *b_muVetoZTTp001dxyz;   //!
   TBranch        *b_muVetoZTTp001dxyzR0;   //!
   TBranch        *b_nTruePU;   //!
   TBranch        *b_numGenJets;   //!
   TBranch        *b_nvtx;   //!
   TBranch        *b_processID;   //!
   TBranch        *b_puppiMetEt;   //!
   TBranch        *b_puppiMetPhi;   //!
   TBranch        *b_pvChi2;   //!
   TBranch        *b_pvDX;   //!
   TBranch        *b_pvDY;   //!
   TBranch        *b_pvDZ;   //!
   TBranch        *b_pvIsFake;   //!
   TBranch        *b_pvIsValid;   //!
   TBranch        *b_pvNormChi2;   //!
   TBranch        *b_pvRho;   //!
   TBranch        *b_pvX;   //!
   TBranch        *b_pvY;   //!
   TBranch        *b_pvZ;   //!
   TBranch        *b_pvndof;   //!
   TBranch        *b_recoilDaught;   //!
   TBranch        *b_recoilWithMet;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_run;   //!
   TBranch        *b_singleE17SingleMu8Group;   //!
   TBranch        *b_singleE17SingleMu8Pass;   //!
   TBranch        *b_singleE17SingleMu8Prescale;   //!
   TBranch        *b_singleE20SingleTau28Group;   //!
   TBranch        *b_singleE20SingleTau28Pass;   //!
   TBranch        *b_singleE20SingleTau28Prescale;   //!
   TBranch        *b_singleE22SingleTau20SingleL1Group;   //!
   TBranch        *b_singleE22SingleTau20SingleL1Pass;   //!
   TBranch        *b_singleE22SingleTau20SingleL1Prescale;   //!
   TBranch        *b_singleE22SingleTau29Group;   //!
   TBranch        *b_singleE22SingleTau29Pass;   //!
   TBranch        *b_singleE22SingleTau29Prescale;   //!
   TBranch        *b_singleE23SingleMu8Group;   //!
   TBranch        *b_singleE23SingleMu8Pass;   //!
   TBranch        *b_singleE23SingleMu8Prescale;   //!
   TBranch        *b_singleE24SingleTau20Group;   //!
   TBranch        *b_singleE24SingleTau20Pass;   //!
   TBranch        *b_singleE24SingleTau20Prescale;   //!
   TBranch        *b_singleE24SingleTau20SingleL1Group;   //!
   TBranch        *b_singleE24SingleTau20SingleL1Pass;   //!
   TBranch        *b_singleE24SingleTau20SingleL1Prescale;   //!
   TBranch        *b_singleE24SingleTau30Group;   //!
   TBranch        *b_singleE24SingleTau30Pass;   //!
   TBranch        *b_singleE24SingleTau30Prescale;   //!
   TBranch        *b_singleE25eta2p1TightGroup;   //!
   TBranch        *b_singleE25eta2p1TightPass;   //!
   TBranch        *b_singleE25eta2p1TightPrescale;   //!
   TBranch        *b_singleE27SingleTau20SingleL1Group;   //!
   TBranch        *b_singleE27SingleTau20SingleL1Pass;   //!
   TBranch        *b_singleE27SingleTau20SingleL1Prescale;   //!
   TBranch        *b_singleE27TightGroup;   //!
   TBranch        *b_singleE27TightPass;   //!
   TBranch        *b_singleE27TightPrescale;   //!
   TBranch        *b_singleE27eta2p1LooseGroup;   //!
   TBranch        *b_singleE27eta2p1LoosePass;   //!
   TBranch        *b_singleE27eta2p1LoosePrescale;   //!
   TBranch        *b_singleE27eta2p1TightGroup;   //!
   TBranch        *b_singleE27eta2p1TightPass;   //!
   TBranch        *b_singleE27eta2p1TightPrescale;   //!
   TBranch        *b_singleE32SingleTau20SingleL1Group;   //!
   TBranch        *b_singleE32SingleTau20SingleL1Pass;   //!
   TBranch        *b_singleE32SingleTau20SingleL1Prescale;   //!
   TBranch        *b_singleE36SingleTau30Group;   //!
   TBranch        *b_singleE36SingleTau30Pass;   //!
   TBranch        *b_singleE36SingleTau30Prescale;   //!
   TBranch        *b_singleESingleMuGroup;   //!
   TBranch        *b_singleESingleMuPass;   //!
   TBranch        *b_singleESingleMuPrescale;   //!
   TBranch        *b_singleE_leg1Group;   //!
   TBranch        *b_singleE_leg1Pass;   //!
   TBranch        *b_singleE_leg1Prescale;   //!
   TBranch        *b_singleE_leg2Group;   //!
   TBranch        *b_singleE_leg2Pass;   //!
   TBranch        *b_singleE_leg2Prescale;   //!
   TBranch        *b_singleIsoMu20Group;   //!
   TBranch        *b_singleIsoMu20Pass;   //!
   TBranch        *b_singleIsoMu20Prescale;   //!
   TBranch        *b_singleIsoMu22Group;   //!
   TBranch        *b_singleIsoMu22Pass;   //!
   TBranch        *b_singleIsoMu22Prescale;   //!
   TBranch        *b_singleIsoMu22eta2p1Group;   //!
   TBranch        *b_singleIsoMu22eta2p1Pass;   //!
   TBranch        *b_singleIsoMu22eta2p1Prescale;   //!
   TBranch        *b_singleIsoMu24Group;   //!
   TBranch        *b_singleIsoMu24Pass;   //!
   TBranch        *b_singleIsoMu24Prescale;   //!
   TBranch        *b_singleIsoMu24eta2p1Group;   //!
   TBranch        *b_singleIsoMu24eta2p1Pass;   //!
   TBranch        *b_singleIsoMu24eta2p1Prescale;   //!
   TBranch        *b_singleIsoMu27Group;   //!
   TBranch        *b_singleIsoMu27Pass;   //!
   TBranch        *b_singleIsoMu27Prescale;   //!
   TBranch        *b_singleIsoTkMu20Group;   //!
   TBranch        *b_singleIsoTkMu20Pass;   //!
   TBranch        *b_singleIsoTkMu20Prescale;   //!
   TBranch        *b_singleIsoTkMu22Group;   //!
   TBranch        *b_singleIsoTkMu22Pass;   //!
   TBranch        *b_singleIsoTkMu22Prescale;   //!
   TBranch        *b_singleIsoTkMu22eta2p1Group;   //!
   TBranch        *b_singleIsoTkMu22eta2p1Pass;   //!
   TBranch        *b_singleIsoTkMu22eta2p1Prescale;   //!
   TBranch        *b_singleIsoTkMu24Group;   //!
   TBranch        *b_singleIsoTkMu24Pass;   //!
   TBranch        *b_singleIsoTkMu24Prescale;   //!
   TBranch        *b_singleIsoTkMu24eta2p1Group;   //!
   TBranch        *b_singleIsoTkMu24eta2p1Pass;   //!
   TBranch        *b_singleIsoTkMu24eta2p1Prescale;   //!
   TBranch        *b_singleMu17SingleE12Group;   //!
   TBranch        *b_singleMu17SingleE12Pass;   //!
   TBranch        *b_singleMu17SingleE12Prescale;   //!
   TBranch        *b_singleMu19eta2p1LooseTau20Group;   //!
   TBranch        *b_singleMu19eta2p1LooseTau20Pass;   //!
   TBranch        *b_singleMu19eta2p1LooseTau20Prescale;   //!
   TBranch        *b_singleMu19eta2p1LooseTau20singleL1Group;   //!
   TBranch        *b_singleMu19eta2p1LooseTau20singleL1Pass;   //!
   TBranch        *b_singleMu19eta2p1LooseTau20singleL1Prescale;   //!
   TBranch        *b_singleMu21eta2p1LooseTau20singleL1Group;   //!
   TBranch        *b_singleMu21eta2p1LooseTau20singleL1Pass;   //!
   TBranch        *b_singleMu21eta2p1LooseTau20singleL1Prescale;   //!
   TBranch        *b_singleMu23SingleE12DZGroup;   //!
   TBranch        *b_singleMu23SingleE12DZPass;   //!
   TBranch        *b_singleMu23SingleE12DZPrescale;   //!
   TBranch        *b_singleMu23SingleE12Group;   //!
   TBranch        *b_singleMu23SingleE12Pass;   //!
   TBranch        *b_singleMu23SingleE12Prescale;   //!
   TBranch        *b_singleMu23SingleE8Group;   //!
   TBranch        *b_singleMu23SingleE8Pass;   //!
   TBranch        *b_singleMu23SingleE8Prescale;   //!
   TBranch        *b_singleMu8SingleE23DZGroup;   //!
   TBranch        *b_singleMu8SingleE23DZPass;   //!
   TBranch        *b_singleMu8SingleE23DZPrescale;   //!
   TBranch        *b_singleMuGroup;   //!
   TBranch        *b_singleMuPass;   //!
   TBranch        *b_singleMuPrescale;   //!
   TBranch        *b_singleMuSingleEGroup;   //!
   TBranch        *b_singleMuSingleEPass;   //!
   TBranch        *b_singleMuSingleEPrescale;   //!
   TBranch        *b_singleMu_leg1Group;   //!
   TBranch        *b_singleMu_leg1Pass;   //!
   TBranch        *b_singleMu_leg1Prescale;   //!
   TBranch        *b_singleMu_leg1_noisoGroup;   //!
   TBranch        *b_singleMu_leg1_noisoPass;   //!
   TBranch        *b_singleMu_leg1_noisoPrescale;   //!
   TBranch        *b_singleMu_leg2Group;   //!
   TBranch        *b_singleMu_leg2Pass;   //!
   TBranch        *b_singleMu_leg2Prescale;   //!
   TBranch        *b_singleMu_leg2_noisoGroup;   //!
   TBranch        *b_singleMu_leg2_noisoPass;   //!
   TBranch        *b_singleMu_leg2_noisoPrescale;   //!
   TBranch        *b_singleTau140Group;   //!
   TBranch        *b_singleTau140Pass;   //!
   TBranch        *b_singleTau140Prescale;   //!
   TBranch        *b_singleTau140Trk50Group;   //!
   TBranch        *b_singleTau140Trk50Pass;   //!
   TBranch        *b_singleTau140Trk50Prescale;   //!
   TBranch        *b_tAbsEta;   //!
   TBranch        *b_tAgainstElectronLooseMVA6;   //!
   TBranch        *b_tAgainstElectronMVA6Raw;   //!
   TBranch        *b_tAgainstElectronMVA6category;   //!
   TBranch        *b_tAgainstElectronMediumMVA6;   //!
   TBranch        *b_tAgainstElectronTightMVA6;   //!
   TBranch        *b_tAgainstElectronVLooseMVA6;   //!
   TBranch        *b_tAgainstElectronVTightMVA6;   //!
   TBranch        *b_tAgainstMuonLoose3;   //!
   TBranch        *b_tAgainstMuonTight3;   //!
   TBranch        *b_tByCombinedIsolationDeltaBetaCorrRaw3Hits;   //!
   TBranch        *b_tByIsolationMVArun2v1DBdR03oldDMwLTraw;   //!
   TBranch        *b_tByIsolationMVArun2v1DBnewDMwLTraw;   //!
   TBranch        *b_tByIsolationMVArun2v1DBoldDMwLTraw;   //!
   TBranch        *b_tByIsolationMVArun2v1PWdR03oldDMwLTraw;   //!
   TBranch        *b_tByIsolationMVArun2v1PWnewDMwLTraw;   //!
   TBranch        *b_tByIsolationMVArun2v1PWoldDMwLTraw;   //!
   TBranch        *b_tByLooseCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_tByLooseIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_tByLooseIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_tByLooseIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_tByLooseIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_tByLooseIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_tByLooseIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_tByMediumCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_tByMediumIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_tByMediumIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_tByMediumIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_tByMediumIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_tByMediumIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_tByMediumIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_tByPhotonPtSumOutsideSignalCone;   //!
   TBranch        *b_tByTightCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_tByTightIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_tByTightIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_tByTightIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_tByTightIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_tByTightIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_tByTightIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_tByVLooseIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_tByVLooseIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_tByVLooseIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_tByVLooseIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_tByVLooseIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_tByVLooseIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_tByVTightIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_tByVTightIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_tByVTightIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_tByVTightIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_tByVTightIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_tByVTightIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_tByVVTightIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_tByVVTightIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_tByVVTightIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_tByVVTightIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_tByVVTightIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_tByVVTightIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_tCharge;   //!
   TBranch        *b_tChargedIsoPtSum;   //!
   TBranch        *b_tChargedIsoPtSumdR03;   //!
   TBranch        *b_tComesFromHiggs;   //!
   TBranch        *b_tDPhiToPfMet_type1;   //!
   TBranch        *b_tDecayMode;   //!
   TBranch        *b_tDecayModeFinding;   //!
   TBranch        *b_tDecayModeFindingNewDMs;   //!
   TBranch        *b_tDoubleTau32Filter;   //!
   TBranch        *b_tDoubleTau35Filter;   //!
   TBranch        *b_tDoubleTau40Filter;   //!
   TBranch        *b_tElecOverlap;   //!
   TBranch        *b_tEta;   //!
   TBranch        *b_tEta_TauEnDown;   //!
   TBranch        *b_tEta_TauEnUp;   //!
   TBranch        *b_tFootprintCorrection;   //!
   TBranch        *b_tFootprintCorrectiondR03;   //!
   TBranch        *b_tGenCharge;   //!
   TBranch        *b_tGenDecayMode;   //!
   TBranch        *b_tGenEnergy;   //!
   TBranch        *b_tGenEta;   //!
   TBranch        *b_tGenIsPrompt;   //!
   TBranch        *b_tGenJetEta;   //!
   TBranch        *b_tGenJetPt;   //!
   TBranch        *b_tGenMotherEnergy;   //!
   TBranch        *b_tGenMotherEta;   //!
   TBranch        *b_tGenMotherPdgId;   //!
   TBranch        *b_tGenMotherPhi;   //!
   TBranch        *b_tGenMotherPt;   //!
   TBranch        *b_tGenPdgId;   //!
   TBranch        *b_tGenPhi;   //!
   TBranch        *b_tGenPt;   //!
   TBranch        *b_tGenStatus;   //!
   TBranch        *b_tGlobalMuonVtxOverlap;   //!
   TBranch        *b_tJetArea;   //!
   TBranch        *b_tJetBtag;   //!
   TBranch        *b_tJetDR;   //!
   TBranch        *b_tJetEtaEtaMoment;   //!
   TBranch        *b_tJetEtaPhiMoment;   //!
   TBranch        *b_tJetEtaPhiSpread;   //!
   TBranch        *b_tJetHadronFlavour;   //!
   TBranch        *b_tJetPFCISVBtag;   //!
   TBranch        *b_tJetPartonFlavour;   //!
   TBranch        *b_tJetPhiPhiMoment;   //!
   TBranch        *b_tJetPt;   //!
   TBranch        *b_tLeadTrackPt;   //!
   TBranch        *b_tLowestMll;   //!
   TBranch        *b_tMass;   //!
   TBranch        *b_tMass_TauEnDown;   //!
   TBranch        *b_tMass_TauEnUp;   //!
   TBranch        *b_tMatchesDoubleTau32Path;   //!
   TBranch        *b_tMatchesDoubleTau35Path;   //!
   TBranch        *b_tMatchesDoubleTau40Path;   //!
   TBranch        *b_tMtToPfMet_type1;   //!
   TBranch        *b_tMuOverlap;   //!
   TBranch        *b_tMuonIdIsoStdVtxOverlap;   //!
   TBranch        *b_tMuonIdIsoVtxOverlap;   //!
   TBranch        *b_tMuonIdVtxOverlap;   //!
   TBranch        *b_tNChrgHadrIsolationCands;   //!
   TBranch        *b_tNChrgHadrSignalCands;   //!
   TBranch        *b_tNGammaSignalCands;   //!
   TBranch        *b_tNNeutralHadrSignalCands;   //!
   TBranch        *b_tNSignalCands;   //!
   TBranch        *b_tNearestZMass;   //!
   TBranch        *b_tNeutralIsoPtSum;   //!
   TBranch        *b_tNeutralIsoPtSumWeight;   //!
   TBranch        *b_tNeutralIsoPtSumWeightdR03;   //!
   TBranch        *b_tNeutralIsoPtSumdR03;   //!
   TBranch        *b_tPVDXY;   //!
   TBranch        *b_tPVDZ;   //!
   TBranch        *b_tPhi;   //!
   TBranch        *b_tPhi_TauEnDown;   //!
   TBranch        *b_tPhi_TauEnUp;   //!
   TBranch        *b_tPhotonPtSumOutsideSignalCone;   //!
   TBranch        *b_tPhotonPtSumOutsideSignalConedR03;   //!
   TBranch        *b_tPt;   //!
   TBranch        *b_tPt_TauEnDown;   //!
   TBranch        *b_tPt_TauEnUp;   //!
   TBranch        *b_tPuCorrPtSum;   //!
   TBranch        *b_tRank;   //!
   TBranch        *b_tVZ;   //!
   TBranch        *b_tZTTGenDR;   //!
   TBranch        *b_tZTTGenEta;   //!
   TBranch        *b_tZTTGenMatching;   //!
   TBranch        *b_tZTTGenPhi;   //!
   TBranch        *b_tZTTGenPt;   //!
   TBranch        *b_t_e1_collinearmass;   //!
   TBranch        *b_t_e1_collinearmass_CheckUESDown;   //!
   TBranch        *b_t_e1_collinearmass_CheckUESUp;   //!
   TBranch        *b_t_e1_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_t_e1_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_t_e1_collinearmass_JetEnDown;   //!
   TBranch        *b_t_e1_collinearmass_JetEnUp;   //!
   TBranch        *b_t_e1_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_t_e1_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_t_e2_collinearmass;   //!
   TBranch        *b_t_e2_collinearmass_CheckUESDown;   //!
   TBranch        *b_t_e2_collinearmass_CheckUESUp;   //!
   TBranch        *b_t_e2_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_t_e2_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_t_e2_collinearmass_JetEnDown;   //!
   TBranch        *b_t_e2_collinearmass_JetEnUp;   //!
   TBranch        *b_t_e2_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_t_e2_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_t_m_collinearmass;   //!
   TBranch        *b_t_m_collinearmass_CheckUESDown;   //!
   TBranch        *b_t_m_collinearmass_CheckUESUp;   //!
   TBranch        *b_t_m_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_t_m_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_t_m_collinearmass_JetEnDown;   //!
   TBranch        *b_t_m_collinearmass_JetEnUp;   //!
   TBranch        *b_t_m_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_t_m_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_tauVetoPt20Loose3HitsVtx;   //!
   TBranch        *b_tauVetoPt20TightMVALTVtx;   //!
   TBranch        *b_topQuarkPt1;   //!
   TBranch        *b_topQuarkPt2;   //!
   TBranch        *b_tripleEGroup;   //!
   TBranch        *b_tripleEPass;   //!
   TBranch        *b_tripleEPrescale;   //!
   TBranch        *b_tripleMuGroup;   //!
   TBranch        *b_tripleMuPass;   //!
   TBranch        *b_tripleMuPrescale;   //!
   TBranch        *b_type1_pfMetEt;   //!
   TBranch        *b_type1_pfMetPhi;   //!
   TBranch        *b_vbfDeta;   //!
   TBranch        *b_vbfDetaZTT;   //!
   TBranch        *b_vbfDeta_JetEnDown;   //!
   TBranch        *b_vbfDeta_JetEnUp;   //!
   TBranch        *b_vbfDijetPtZTT;   //!
   TBranch        *b_vbfDijetrap;   //!
   TBranch        *b_vbfDijetrap_JetEnDown;   //!
   TBranch        *b_vbfDijetrap_JetEnUp;   //!
   TBranch        *b_vbfDphi;   //!
   TBranch        *b_vbfDphiZTT;   //!
   TBranch        *b_vbfDphi_JetEnDown;   //!
   TBranch        *b_vbfDphi_JetEnUp;   //!
   TBranch        *b_vbfDphihj;   //!
   TBranch        *b_vbfDphihj_JetEnDown;   //!
   TBranch        *b_vbfDphihj_JetEnUp;   //!
   TBranch        *b_vbfDphihjnomet;   //!
   TBranch        *b_vbfDphihjnomet_JetEnDown;   //!
   TBranch        *b_vbfDphihjnomet_JetEnUp;   //!
   TBranch        *b_vbfHrap;   //!
   TBranch        *b_vbfHrap_JetEnDown;   //!
   TBranch        *b_vbfHrap_JetEnUp;   //!
   TBranch        *b_vbfJetVeto20;   //!
   TBranch        *b_vbfJetVeto20ZTT;   //!
   TBranch        *b_vbfJetVeto20_JetEnDown;   //!
   TBranch        *b_vbfJetVeto20_JetEnUp;   //!
   TBranch        *b_vbfJetVeto30;   //!
   TBranch        *b_vbfJetVeto30ZTT;   //!
   TBranch        *b_vbfJetVeto30_JetEnDown;   //!
   TBranch        *b_vbfJetVeto30_JetEnUp;   //!
   TBranch        *b_vbfMVA;   //!
   TBranch        *b_vbfMVA_JetEnDown;   //!
   TBranch        *b_vbfMVA_JetEnUp;   //!
   TBranch        *b_vbfMass;   //!
   TBranch        *b_vbfMassZTT;   //!
   TBranch        *b_vbfMass_JetEnDown;   //!
   TBranch        *b_vbfMass_JetEnUp;   //!
   TBranch        *b_vbfNJets20;   //!
   TBranch        *b_vbfNJets20_JetEnDown;   //!
   TBranch        *b_vbfNJets20_JetEnUp;   //!
   TBranch        *b_vbfNJets30;   //!
   TBranch        *b_vbfNJets30_JetEnDown;   //!
   TBranch        *b_vbfNJets30_JetEnUp;   //!
   TBranch        *b_vbfVispt;   //!
   TBranch        *b_vbfVispt_JetEnDown;   //!
   TBranch        *b_vbfVispt_JetEnUp;   //!
   TBranch        *b_vbfdijetpt;   //!
   TBranch        *b_vbfdijetpt_JetEnDown;   //!
   TBranch        *b_vbfdijetpt_JetEnUp;   //!
   TBranch        *b_vbfj1eta;   //!
   TBranch        *b_vbfj1eta_JetEnDown;   //!
   TBranch        *b_vbfj1eta_JetEnUp;   //!
   TBranch        *b_vbfj1pt;   //!
   TBranch        *b_vbfj1pt_JetEnDown;   //!
   TBranch        *b_vbfj1pt_JetEnUp;   //!
   TBranch        *b_vbfj2eta;   //!
   TBranch        *b_vbfj2eta_JetEnDown;   //!
   TBranch        *b_vbfj2eta_JetEnUp;   //!
   TBranch        *b_vbfj2pt;   //!
   TBranch        *b_vbfj2pt_JetEnDown;   //!
   TBranch        *b_vbfj2pt_JetEnUp;   //!
   TBranch        *b_vispX;   //!
   TBranch        *b_vispY;   //!
   TBranch        *b_idx;   //!

   runchannelEEMT(const std::string SampleName,const int maxEvents, TTree *tree=0);
   virtual ~runchannelEEMT();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(const std::string SampleName,const int maxEvents);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   struct EEMT_PartInfo {     

   float s_e2_Pt;
   float s_e1_Pt;
  
   float s_e1_MatchesDoubleE23_12Path;
   float s_e2_MatchesDoubleE23_12Path;
   float s_e1_MatchesDoubleE23_12Filter;
   float s_e2_MatchesDoubleE23_12Filter;
   
};

 bool EEMT_ZEESelection(EEMT_PartInfo aParticle);

};

#endif

#ifdef runchannelEEMT_cxx
runchannelEEMT::runchannelEEMT(const std::string SampleName, const int maxEvents, TTree *tree) //: fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
       TChain *mychain = new TChain("eemt/final/Ntuple");
//"Ntuple/tree");
      	std::string FullFileName = SampleName+".txt";
     	std::ifstream GetFile(FullFileName.c_str());
      	std::string FileContent;
      	while(getline(GetFile, FileContent))
		{
		  std::cout << FileContent << std::endl;
		  if (FileContent.empty()) break;
		  mychain -> Add(FileContent.c_str());
		}
      tree = mychain;
      std::cout << "Number of events read " << "\t" 
		<< mychain->GetEntries()    << "\t" 
                << "Analysing "<< "\t" << maxEvents << std::endl;
   }
   Init(tree);
}

runchannelEEMT::~runchannelEEMT()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t runchannelEEMT::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t runchannelEEMT::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (!fChain->InheritsFrom(TChain::Class()))  return centry;
   TChain *chain = (TChain*)fChain;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void runchannelEEMT::Init(TTree *tree)
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

   fChain->SetBranchAddress("EmbPtWeight", &EmbPtWeight, &b_EmbPtWeight);
   fChain->SetBranchAddress("Eta", &Eta, &b_Eta);
   fChain->SetBranchAddress("GenWeight", &GenWeight, &b_GenWeight);
   fChain->SetBranchAddress("Ht", &Ht, &b_Ht);
   fChain->SetBranchAddress("LT", &LT, &b_LT);
   fChain->SetBranchAddress("Mass", &Mass, &b_Mass);
   fChain->SetBranchAddress("MassError", &MassError, &b_MassError);
   fChain->SetBranchAddress("MassErrord1", &MassErrord1, &b_MassErrord1);
   fChain->SetBranchAddress("MassErrord2", &MassErrord2, &b_MassErrord2);
   fChain->SetBranchAddress("MassErrord3", &MassErrord3, &b_MassErrord3);
   fChain->SetBranchAddress("MassErrord4", &MassErrord4, &b_MassErrord4);
   fChain->SetBranchAddress("Mt", &Mt, &b_Mt);
   fChain->SetBranchAddress("NUP", &NUP, &b_NUP);
   fChain->SetBranchAddress("Phi", &Phi, &b_Phi);
   fChain->SetBranchAddress("Pt", &Pt, &b_Pt);
   fChain->SetBranchAddress("bjetCISVVeto20Loose", &bjetCISVVeto20Loose, &b_bjetCISVVeto20Loose);
   fChain->SetBranchAddress("bjetCISVVeto20LooseZTT", &bjetCISVVeto20LooseZTT, &b_bjetCISVVeto20LooseZTT);
   fChain->SetBranchAddress("bjetCISVVeto20Medium", &bjetCISVVeto20Medium, &b_bjetCISVVeto20Medium);
   fChain->SetBranchAddress("bjetCISVVeto20MediumZTT", &bjetCISVVeto20MediumZTT, &b_bjetCISVVeto20MediumZTT);
   fChain->SetBranchAddress("bjetCISVVeto20Tight", &bjetCISVVeto20Tight, &b_bjetCISVVeto20Tight);
   fChain->SetBranchAddress("bjetCISVVeto20TightZTT", &bjetCISVVeto20TightZTT, &b_bjetCISVVeto20TightZTT);
   fChain->SetBranchAddress("bjetCISVVeto30Loose", &bjetCISVVeto30Loose, &b_bjetCISVVeto30Loose);
   fChain->SetBranchAddress("bjetCISVVeto30LooseZTT", &bjetCISVVeto30LooseZTT, &b_bjetCISVVeto30LooseZTT);
   fChain->SetBranchAddress("bjetCISVVeto30Medium", &bjetCISVVeto30Medium, &b_bjetCISVVeto30Medium);
   fChain->SetBranchAddress("bjetCISVVeto30MediumZTT", &bjetCISVVeto30MediumZTT, &b_bjetCISVVeto30MediumZTT);
   fChain->SetBranchAddress("bjetCISVVeto30Tight", &bjetCISVVeto30Tight, &b_bjetCISVVeto30Tight);
   fChain->SetBranchAddress("bjetCISVVeto30TightZTT", &bjetCISVVeto30TightZTT, &b_bjetCISVVeto30TightZTT);
   fChain->SetBranchAddress("charge", &charge, &b_charge);
   fChain->SetBranchAddress("closestMassZEE", &closestMassZEE, &b_closestMassZEE);
   fChain->SetBranchAddress("closestMassZMM", &closestMassZMM, &b_closestMassZMM);
   fChain->SetBranchAddress("dielectronVeto", &dielectronVeto, &b_dielectronVeto);
   fChain->SetBranchAddress("dimuonVeto", &dimuonVeto, &b_dimuonVeto);
   fChain->SetBranchAddress("doubleEGroup", &doubleEGroup, &b_doubleEGroup);
   fChain->SetBranchAddress("doubleEPass", &doubleEPass, &b_doubleEPass);
   fChain->SetBranchAddress("doubleEPrescale", &doubleEPrescale, &b_doubleEPrescale);
   fChain->SetBranchAddress("doubleESingleMuGroup", &doubleESingleMuGroup, &b_doubleESingleMuGroup);
   fChain->SetBranchAddress("doubleESingleMuPass", &doubleESingleMuPass, &b_doubleESingleMuPass);
   fChain->SetBranchAddress("doubleESingleMuPrescale", &doubleESingleMuPrescale, &b_doubleESingleMuPrescale);
   fChain->SetBranchAddress("doubleE_23_12Group", &doubleE_23_12Group, &b_doubleE_23_12Group);
   fChain->SetBranchAddress("doubleE_23_12Pass", &doubleE_23_12Pass, &b_doubleE_23_12Pass);
   fChain->SetBranchAddress("doubleE_23_12Prescale", &doubleE_23_12Prescale, &b_doubleE_23_12Prescale);
   fChain->SetBranchAddress("doubleMuGroup", &doubleMuGroup, &b_doubleMuGroup);
   fChain->SetBranchAddress("doubleMuNoDZGroup", &doubleMuNoDZGroup, &b_doubleMuNoDZGroup);
   fChain->SetBranchAddress("doubleMuNoDZPass", &doubleMuNoDZPass, &b_doubleMuNoDZPass);
   fChain->SetBranchAddress("doubleMuNoDZPrescale", &doubleMuNoDZPrescale, &b_doubleMuNoDZPrescale);
   fChain->SetBranchAddress("doubleMuPass", &doubleMuPass, &b_doubleMuPass);
   fChain->SetBranchAddress("doubleMuPrescale", &doubleMuPrescale, &b_doubleMuPrescale);
   fChain->SetBranchAddress("doubleMuSingleEGroup", &doubleMuSingleEGroup, &b_doubleMuSingleEGroup);
   fChain->SetBranchAddress("doubleMuSingleEPass", &doubleMuSingleEPass, &b_doubleMuSingleEPass);
   fChain->SetBranchAddress("doubleMuSingleEPrescale", &doubleMuSingleEPrescale, &b_doubleMuSingleEPrescale);
   fChain->SetBranchAddress("doubleTau32Group", &doubleTau32Group, &b_doubleTau32Group);
   fChain->SetBranchAddress("doubleTau32Pass", &doubleTau32Pass, &b_doubleTau32Pass);
   fChain->SetBranchAddress("doubleTau32Prescale", &doubleTau32Prescale, &b_doubleTau32Prescale);
   fChain->SetBranchAddress("doubleTau35Group", &doubleTau35Group, &b_doubleTau35Group);
   fChain->SetBranchAddress("doubleTau35Pass", &doubleTau35Pass, &b_doubleTau35Pass);
   fChain->SetBranchAddress("doubleTau35Prescale", &doubleTau35Prescale, &b_doubleTau35Prescale);
   fChain->SetBranchAddress("doubleTau40Group", &doubleTau40Group, &b_doubleTau40Group);
   fChain->SetBranchAddress("doubleTau40Pass", &doubleTau40Pass, &b_doubleTau40Pass);
   fChain->SetBranchAddress("doubleTau40Prescale", &doubleTau40Prescale, &b_doubleTau40Prescale);
   fChain->SetBranchAddress("doubleTauCmbIso35RegGroup", &doubleTauCmbIso35RegGroup, &b_doubleTauCmbIso35RegGroup);
   fChain->SetBranchAddress("doubleTauCmbIso35RegPass", &doubleTauCmbIso35RegPass, &b_doubleTauCmbIso35RegPass);
   fChain->SetBranchAddress("doubleTauCmbIso35RegPrescale", &doubleTauCmbIso35RegPrescale, &b_doubleTauCmbIso35RegPrescale);
   fChain->SetBranchAddress("doubleTauCmbIso40Group", &doubleTauCmbIso40Group, &b_doubleTauCmbIso40Group);
   fChain->SetBranchAddress("doubleTauCmbIso40Pass", &doubleTauCmbIso40Pass, &b_doubleTauCmbIso40Pass);
   fChain->SetBranchAddress("doubleTauCmbIso40Prescale", &doubleTauCmbIso40Prescale, &b_doubleTauCmbIso40Prescale);
   fChain->SetBranchAddress("doubleTauCmbIso40RegGroup", &doubleTauCmbIso40RegGroup, &b_doubleTauCmbIso40RegGroup);
   fChain->SetBranchAddress("doubleTauCmbIso40RegPass", &doubleTauCmbIso40RegPass, &b_doubleTauCmbIso40RegPass);
   fChain->SetBranchAddress("doubleTauCmbIso40RegPrescale", &doubleTauCmbIso40RegPrescale, &b_doubleTauCmbIso40RegPrescale);
   fChain->SetBranchAddress("e1AbsEta", &e1AbsEta, &b_e1AbsEta);
   fChain->SetBranchAddress("e1CBIDLoose", &e1CBIDLoose, &b_e1CBIDLoose);
   fChain->SetBranchAddress("e1CBIDLooseNoIso", &e1CBIDLooseNoIso, &b_e1CBIDLooseNoIso);
   fChain->SetBranchAddress("e1CBIDMedium", &e1CBIDMedium, &b_e1CBIDMedium);
   fChain->SetBranchAddress("e1CBIDMediumNoIso", &e1CBIDMediumNoIso, &b_e1CBIDMediumNoIso);
   fChain->SetBranchAddress("e1CBIDTight", &e1CBIDTight, &b_e1CBIDTight);
   fChain->SetBranchAddress("e1CBIDTightNoIso", &e1CBIDTightNoIso, &b_e1CBIDTightNoIso);
   fChain->SetBranchAddress("e1CBIDVeto", &e1CBIDVeto, &b_e1CBIDVeto);
   fChain->SetBranchAddress("e1CBIDVetoNoIso", &e1CBIDVetoNoIso, &b_e1CBIDVetoNoIso);
   fChain->SetBranchAddress("e1Charge", &e1Charge, &b_e1Charge);
   fChain->SetBranchAddress("e1ChargeIdLoose", &e1ChargeIdLoose, &b_e1ChargeIdLoose);
   fChain->SetBranchAddress("e1ChargeIdMed", &e1ChargeIdMed, &b_e1ChargeIdMed);
   fChain->SetBranchAddress("e1ChargeIdTight", &e1ChargeIdTight, &b_e1ChargeIdTight);
   fChain->SetBranchAddress("e1ComesFromHiggs", &e1ComesFromHiggs, &b_e1ComesFromHiggs);
   fChain->SetBranchAddress("e1DPhiToPfMet_type1", &e1DPhiToPfMet_type1, &b_e1DPhiToPfMet_type1);
   fChain->SetBranchAddress("e1E1x5", &e1E1x5, &b_e1E1x5);
   fChain->SetBranchAddress("e1E2x5Max", &e1E2x5Max, &b_e1E2x5Max);
   fChain->SetBranchAddress("e1E5x5", &e1E5x5, &b_e1E5x5);
   fChain->SetBranchAddress("e1EcalIsoDR03", &e1EcalIsoDR03, &b_e1EcalIsoDR03);
   fChain->SetBranchAddress("e1EffectiveArea2012Data", &e1EffectiveArea2012Data, &b_e1EffectiveArea2012Data);
   fChain->SetBranchAddress("e1EffectiveAreaSpring15", &e1EffectiveAreaSpring15, &b_e1EffectiveAreaSpring15);
   fChain->SetBranchAddress("e1EnergyError", &e1EnergyError, &b_e1EnergyError);
   fChain->SetBranchAddress("e1Eta", &e1Eta, &b_e1Eta);
   fChain->SetBranchAddress("e1GenCharge", &e1GenCharge, &b_e1GenCharge);
   fChain->SetBranchAddress("e1GenDirectPromptTauDecay", &e1GenDirectPromptTauDecay, &b_e1GenDirectPromptTauDecay);
   fChain->SetBranchAddress("e1GenEnergy", &e1GenEnergy, &b_e1GenEnergy);
   fChain->SetBranchAddress("e1GenEta", &e1GenEta, &b_e1GenEta);
   fChain->SetBranchAddress("e1GenIsPrompt", &e1GenIsPrompt, &b_e1GenIsPrompt);
   fChain->SetBranchAddress("e1GenMotherPdgId", &e1GenMotherPdgId, &b_e1GenMotherPdgId);
   fChain->SetBranchAddress("e1GenParticle", &e1GenParticle, &b_e1GenParticle);
   fChain->SetBranchAddress("e1GenPdgId", &e1GenPdgId, &b_e1GenPdgId);
   fChain->SetBranchAddress("e1GenPhi", &e1GenPhi, &b_e1GenPhi);
   fChain->SetBranchAddress("e1GenPrompt", &e1GenPrompt, &b_e1GenPrompt);
   fChain->SetBranchAddress("e1GenPromptTauDecay", &e1GenPromptTauDecay, &b_e1GenPromptTauDecay);
   fChain->SetBranchAddress("e1GenPt", &e1GenPt, &b_e1GenPt);
   fChain->SetBranchAddress("e1GenTauDecay", &e1GenTauDecay, &b_e1GenTauDecay);
   fChain->SetBranchAddress("e1GenVZ", &e1GenVZ, &b_e1GenVZ);
   fChain->SetBranchAddress("e1GenVtxPVMatch", &e1GenVtxPVMatch, &b_e1GenVtxPVMatch);
   fChain->SetBranchAddress("e1HadronicDepth1OverEm", &e1HadronicDepth1OverEm, &b_e1HadronicDepth1OverEm);
   fChain->SetBranchAddress("e1HadronicDepth2OverEm", &e1HadronicDepth2OverEm, &b_e1HadronicDepth2OverEm);
   fChain->SetBranchAddress("e1HadronicOverEM", &e1HadronicOverEM, &b_e1HadronicOverEM);
   fChain->SetBranchAddress("e1HcalIsoDR03", &e1HcalIsoDR03, &b_e1HcalIsoDR03);
   fChain->SetBranchAddress("e1IP3D", &e1IP3D, &b_e1IP3D);
   fChain->SetBranchAddress("e1IP3DErr", &e1IP3DErr, &b_e1IP3DErr);
   fChain->SetBranchAddress("e1IsoDB03", &e1IsoDB03, &b_e1IsoDB03);
   fChain->SetBranchAddress("e1JetArea", &e1JetArea, &b_e1JetArea);
   fChain->SetBranchAddress("e1JetBtag", &e1JetBtag, &b_e1JetBtag);
   fChain->SetBranchAddress("e1JetDR", &e1JetDR, &b_e1JetDR);
   fChain->SetBranchAddress("e1JetEtaEtaMoment", &e1JetEtaEtaMoment, &b_e1JetEtaEtaMoment);
   fChain->SetBranchAddress("e1JetEtaPhiMoment", &e1JetEtaPhiMoment, &b_e1JetEtaPhiMoment);
   fChain->SetBranchAddress("e1JetEtaPhiSpread", &e1JetEtaPhiSpread, &b_e1JetEtaPhiSpread);
   fChain->SetBranchAddress("e1JetHadronFlavour", &e1JetHadronFlavour, &b_e1JetHadronFlavour);
   fChain->SetBranchAddress("e1JetPFCISVBtag", &e1JetPFCISVBtag, &b_e1JetPFCISVBtag);
   fChain->SetBranchAddress("e1JetPartonFlavour", &e1JetPartonFlavour, &b_e1JetPartonFlavour);
   fChain->SetBranchAddress("e1JetPhiPhiMoment", &e1JetPhiPhiMoment, &b_e1JetPhiPhiMoment);
   fChain->SetBranchAddress("e1JetPt", &e1JetPt, &b_e1JetPt);
   fChain->SetBranchAddress("e1LowestMll", &e1LowestMll, &b_e1LowestMll);
   fChain->SetBranchAddress("e1MVANonTrigCategory", &e1MVANonTrigCategory, &b_e1MVANonTrigCategory);
   fChain->SetBranchAddress("e1MVANonTrigID", &e1MVANonTrigID, &b_e1MVANonTrigID);
   fChain->SetBranchAddress("e1MVANonTrigWP80", &e1MVANonTrigWP80, &b_e1MVANonTrigWP80);
   fChain->SetBranchAddress("e1MVANonTrigWP90", &e1MVANonTrigWP90, &b_e1MVANonTrigWP90);
   fChain->SetBranchAddress("e1MVATrigCategory", &e1MVATrigCategory, &b_e1MVATrigCategory);
   fChain->SetBranchAddress("e1MVATrigID", &e1MVATrigID, &b_e1MVATrigID);
   fChain->SetBranchAddress("e1MVATrigWP80", &e1MVATrigWP80, &b_e1MVATrigWP80);
   fChain->SetBranchAddress("e1MVATrigWP90", &e1MVATrigWP90, &b_e1MVATrigWP90);
   fChain->SetBranchAddress("e1Mass", &e1Mass, &b_e1Mass);
   fChain->SetBranchAddress("e1MatchesDoubleE", &e1MatchesDoubleE, &b_e1MatchesDoubleE);
   fChain->SetBranchAddress("e1MatchesDoubleE23_12Filter", &e1MatchesDoubleE23_12Filter, &b_e1MatchesDoubleE23_12Filter);
   fChain->SetBranchAddress("e1MatchesDoubleE23_12Path", &e1MatchesDoubleE23_12Path, &b_e1MatchesDoubleE23_12Path);
   fChain->SetBranchAddress("e1MatchesDoubleEFilter", &e1MatchesDoubleEFilter, &b_e1MatchesDoubleEFilter);
   fChain->SetBranchAddress("e1MatchesDoubleEPath", &e1MatchesDoubleEPath, &b_e1MatchesDoubleEPath);
   fChain->SetBranchAddress("e1MatchesDoubleESingleMu", &e1MatchesDoubleESingleMu, &b_e1MatchesDoubleESingleMu);
   fChain->SetBranchAddress("e1MatchesDoubleMuSingleE", &e1MatchesDoubleMuSingleE, &b_e1MatchesDoubleMuSingleE);
   fChain->SetBranchAddress("e1MatchesEle12LoosePath", &e1MatchesEle12LoosePath, &b_e1MatchesEle12LoosePath);
   fChain->SetBranchAddress("e1MatchesEle17LoosePath", &e1MatchesEle17LoosePath, &b_e1MatchesEle17LoosePath);
   fChain->SetBranchAddress("e1MatchesEle22eta2p1LoosePath", &e1MatchesEle22eta2p1LoosePath, &b_e1MatchesEle22eta2p1LoosePath);
   fChain->SetBranchAddress("e1MatchesEle23LoosePath", &e1MatchesEle23LoosePath, &b_e1MatchesEle23LoosePath);
   fChain->SetBranchAddress("e1MatchesEle25eta2p1LoosePath", &e1MatchesEle25eta2p1LoosePath, &b_e1MatchesEle25eta2p1LoosePath);
   fChain->SetBranchAddress("e1MatchesEle25eta2p1TightPath", &e1MatchesEle25eta2p1TightPath, &b_e1MatchesEle25eta2p1TightPath);
   fChain->SetBranchAddress("e1MatchesEle27TightPath", &e1MatchesEle27TightPath, &b_e1MatchesEle27TightPath);
   fChain->SetBranchAddress("e1MatchesEle27eta2p1LoosePath", &e1MatchesEle27eta2p1LoosePath, &b_e1MatchesEle27eta2p1LoosePath);
   fChain->SetBranchAddress("e1MatchesSingleE", &e1MatchesSingleE, &b_e1MatchesSingleE);
   fChain->SetBranchAddress("e1MatchesSingleESingleMu", &e1MatchesSingleESingleMu, &b_e1MatchesSingleESingleMu);
   fChain->SetBranchAddress("e1MatchesSingleETight27Filter", &e1MatchesSingleETight27Filter, &b_e1MatchesSingleETight27Filter);
   fChain->SetBranchAddress("e1MatchesSingleE_leg1", &e1MatchesSingleE_leg1, &b_e1MatchesSingleE_leg1);
   fChain->SetBranchAddress("e1MatchesSingleE_leg2", &e1MatchesSingleE_leg2, &b_e1MatchesSingleE_leg2);
   fChain->SetBranchAddress("e1MatchesSingleMuSingleE", &e1MatchesSingleMuSingleE, &b_e1MatchesSingleMuSingleE);
   fChain->SetBranchAddress("e1MatchesTripleE", &e1MatchesTripleE, &b_e1MatchesTripleE);
   fChain->SetBranchAddress("e1MissingHits", &e1MissingHits, &b_e1MissingHits);
   fChain->SetBranchAddress("e1MtToPfMet_type1", &e1MtToPfMet_type1, &b_e1MtToPfMet_type1);
   fChain->SetBranchAddress("e1NearMuonVeto", &e1NearMuonVeto, &b_e1NearMuonVeto);
   fChain->SetBranchAddress("e1NearestMuonDR", &e1NearestMuonDR, &b_e1NearestMuonDR);
   fChain->SetBranchAddress("e1NearestZMass", &e1NearestZMass, &b_e1NearestZMass);
   fChain->SetBranchAddress("e1PFChargedIso", &e1PFChargedIso, &b_e1PFChargedIso);
   fChain->SetBranchAddress("e1PFNeutralIso", &e1PFNeutralIso, &b_e1PFNeutralIso);
   fChain->SetBranchAddress("e1PFPUChargedIso", &e1PFPUChargedIso, &b_e1PFPUChargedIso);
   fChain->SetBranchAddress("e1PFPhotonIso", &e1PFPhotonIso, &b_e1PFPhotonIso);
   fChain->SetBranchAddress("e1PVDXY", &e1PVDXY, &b_e1PVDXY);
   fChain->SetBranchAddress("e1PVDZ", &e1PVDZ, &b_e1PVDZ);
   fChain->SetBranchAddress("e1PassesConversionVeto", &e1PassesConversionVeto, &b_e1PassesConversionVeto);
   fChain->SetBranchAddress("e1Phi", &e1Phi, &b_e1Phi);
   fChain->SetBranchAddress("e1Pt", &e1Pt, &b_e1Pt);
   fChain->SetBranchAddress("e1Pt_ElectronResPhiDown", &e1Pt_ElectronResPhiDown, &b_e1Pt_ElectronResPhiDown);
   fChain->SetBranchAddress("e1Pt_ElectronResRhoDown", &e1Pt_ElectronResRhoDown, &b_e1Pt_ElectronResRhoDown);
   fChain->SetBranchAddress("e1Pt_ElectronResRhoUp", &e1Pt_ElectronResRhoUp, &b_e1Pt_ElectronResRhoUp);
   fChain->SetBranchAddress("e1Pt_ElectronScaleDown", &e1Pt_ElectronScaleDown, &b_e1Pt_ElectronScaleDown);
   fChain->SetBranchAddress("e1Pt_ElectronScaleUp", &e1Pt_ElectronScaleUp, &b_e1Pt_ElectronScaleUp);
   fChain->SetBranchAddress("e1Pt_ElectronUncorr", &e1Pt_ElectronUncorr, &b_e1Pt_ElectronUncorr);
   fChain->SetBranchAddress("e1Rank", &e1Rank, &b_e1Rank);
   fChain->SetBranchAddress("e1RelIso", &e1RelIso, &b_e1RelIso);
   fChain->SetBranchAddress("e1RelPFIsoDB", &e1RelPFIsoDB, &b_e1RelPFIsoDB);
   fChain->SetBranchAddress("e1RelPFIsoRho", &e1RelPFIsoRho, &b_e1RelPFIsoRho);
   fChain->SetBranchAddress("e1Rho", &e1Rho, &b_e1Rho);
   fChain->SetBranchAddress("e1SCEnergy", &e1SCEnergy, &b_e1SCEnergy);
   fChain->SetBranchAddress("e1SCEta", &e1SCEta, &b_e1SCEta);
   fChain->SetBranchAddress("e1SCEtaWidth", &e1SCEtaWidth, &b_e1SCEtaWidth);
   fChain->SetBranchAddress("e1SCPhi", &e1SCPhi, &b_e1SCPhi);
   fChain->SetBranchAddress("e1SCPhiWidth", &e1SCPhiWidth, &b_e1SCPhiWidth);
   fChain->SetBranchAddress("e1SCPreshowerEnergy", &e1SCPreshowerEnergy, &b_e1SCPreshowerEnergy);
   fChain->SetBranchAddress("e1SCRawEnergy", &e1SCRawEnergy, &b_e1SCRawEnergy);
   fChain->SetBranchAddress("e1SIP2D", &e1SIP2D, &b_e1SIP2D);
   fChain->SetBranchAddress("e1SIP3D", &e1SIP3D, &b_e1SIP3D);
   fChain->SetBranchAddress("e1SigmaIEtaIEta", &e1SigmaIEtaIEta, &b_e1SigmaIEtaIEta);
   fChain->SetBranchAddress("e1TrkIsoDR03", &e1TrkIsoDR03, &b_e1TrkIsoDR03);
   fChain->SetBranchAddress("e1VZ", &e1VZ, &b_e1VZ);
   fChain->SetBranchAddress("e1WWLoose", &e1WWLoose, &b_e1WWLoose);
   fChain->SetBranchAddress("e1ZTTGenMatching", &e1ZTTGenMatching, &b_e1ZTTGenMatching);
   fChain->SetBranchAddress("e1_e2_CosThetaStar", &e1_e2_CosThetaStar, &b_e1_e2_CosThetaStar);
   fChain->SetBranchAddress("e1_e2_DPhi", &e1_e2_DPhi, &b_e1_e2_DPhi);
   fChain->SetBranchAddress("e1_e2_DR", &e1_e2_DR, &b_e1_e2_DR);
   fChain->SetBranchAddress("e1_e2_Eta", &e1_e2_Eta, &b_e1_e2_Eta);
   fChain->SetBranchAddress("e1_e2_Mass", &e1_e2_Mass, &b_e1_e2_Mass);
   fChain->SetBranchAddress("e1_e2_Mass_TauEnDown", &e1_e2_Mass_TauEnDown, &b_e1_e2_Mass_TauEnDown);
   fChain->SetBranchAddress("e1_e2_Mass_TauEnUp", &e1_e2_Mass_TauEnUp, &b_e1_e2_Mass_TauEnUp);
   fChain->SetBranchAddress("e1_e2_Mt", &e1_e2_Mt, &b_e1_e2_Mt);
   fChain->SetBranchAddress("e1_e2_MtTotal", &e1_e2_MtTotal, &b_e1_e2_MtTotal);
   fChain->SetBranchAddress("e1_e2_Mt_TauEnDown", &e1_e2_Mt_TauEnDown, &b_e1_e2_Mt_TauEnDown);
   fChain->SetBranchAddress("e1_e2_Mt_TauEnUp", &e1_e2_Mt_TauEnUp, &b_e1_e2_Mt_TauEnUp);
   fChain->SetBranchAddress("e1_e2_MvaMet", &e1_e2_MvaMet, &b_e1_e2_MvaMet);
   fChain->SetBranchAddress("e1_e2_MvaMetCovMatrix00", &e1_e2_MvaMetCovMatrix00, &b_e1_e2_MvaMetCovMatrix00);
   fChain->SetBranchAddress("e1_e2_MvaMetCovMatrix01", &e1_e2_MvaMetCovMatrix01, &b_e1_e2_MvaMetCovMatrix01);
   fChain->SetBranchAddress("e1_e2_MvaMetCovMatrix10", &e1_e2_MvaMetCovMatrix10, &b_e1_e2_MvaMetCovMatrix10);
   fChain->SetBranchAddress("e1_e2_MvaMetCovMatrix11", &e1_e2_MvaMetCovMatrix11, &b_e1_e2_MvaMetCovMatrix11);
   fChain->SetBranchAddress("e1_e2_MvaMetPhi", &e1_e2_MvaMetPhi, &b_e1_e2_MvaMetPhi);
   fChain->SetBranchAddress("e1_e2_PZeta", &e1_e2_PZeta, &b_e1_e2_PZeta);
   fChain->SetBranchAddress("e1_e2_PZetaLess0p85PZetaVis", &e1_e2_PZetaLess0p85PZetaVis, &b_e1_e2_PZetaLess0p85PZetaVis);
   fChain->SetBranchAddress("e1_e2_PZetaVis", &e1_e2_PZetaVis, &b_e1_e2_PZetaVis);
   fChain->SetBranchAddress("e1_e2_Phi", &e1_e2_Phi, &b_e1_e2_Phi);
   fChain->SetBranchAddress("e1_e2_Pt", &e1_e2_Pt, &b_e1_e2_Pt);
   fChain->SetBranchAddress("e1_e2_SS", &e1_e2_SS, &b_e1_e2_SS);
   fChain->SetBranchAddress("e1_e2_ToMETDPhi_Ty1", &e1_e2_ToMETDPhi_Ty1, &b_e1_e2_ToMETDPhi_Ty1);
   fChain->SetBranchAddress("e1_e2_collinearmass", &e1_e2_collinearmass, &b_e1_e2_collinearmass);
   fChain->SetBranchAddress("e1_e2_collinearmass_CheckUESDown", &e1_e2_collinearmass_CheckUESDown, &b_e1_e2_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("e1_e2_collinearmass_CheckUESUp", &e1_e2_collinearmass_CheckUESUp, &b_e1_e2_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("e1_e2_collinearmass_EleEnDown", &e1_e2_collinearmass_EleEnDown, &b_e1_e2_collinearmass_EleEnDown);
   fChain->SetBranchAddress("e1_e2_collinearmass_EleEnUp", &e1_e2_collinearmass_EleEnUp, &b_e1_e2_collinearmass_EleEnUp);
   fChain->SetBranchAddress("e1_e2_collinearmass_JetCheckTotalDown", &e1_e2_collinearmass_JetCheckTotalDown, &b_e1_e2_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("e1_e2_collinearmass_JetCheckTotalUp", &e1_e2_collinearmass_JetCheckTotalUp, &b_e1_e2_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("e1_e2_collinearmass_JetEnDown", &e1_e2_collinearmass_JetEnDown, &b_e1_e2_collinearmass_JetEnDown);
   fChain->SetBranchAddress("e1_e2_collinearmass_JetEnUp", &e1_e2_collinearmass_JetEnUp, &b_e1_e2_collinearmass_JetEnUp);
   fChain->SetBranchAddress("e1_e2_collinearmass_MuEnDown", &e1_e2_collinearmass_MuEnDown, &b_e1_e2_collinearmass_MuEnDown);
   fChain->SetBranchAddress("e1_e2_collinearmass_MuEnUp", &e1_e2_collinearmass_MuEnUp, &b_e1_e2_collinearmass_MuEnUp);
   fChain->SetBranchAddress("e1_e2_collinearmass_TauEnDown", &e1_e2_collinearmass_TauEnDown, &b_e1_e2_collinearmass_TauEnDown);
   fChain->SetBranchAddress("e1_e2_collinearmass_TauEnUp", &e1_e2_collinearmass_TauEnUp, &b_e1_e2_collinearmass_TauEnUp);
   fChain->SetBranchAddress("e1_e2_collinearmass_UnclusteredEnDown", &e1_e2_collinearmass_UnclusteredEnDown, &b_e1_e2_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("e1_e2_collinearmass_UnclusteredEnUp", &e1_e2_collinearmass_UnclusteredEnUp, &b_e1_e2_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("e1_e2_pt_tt", &e1_e2_pt_tt, &b_e1_e2_pt_tt);
   fChain->SetBranchAddress("e1_m_CosThetaStar", &e1_m_CosThetaStar, &b_e1_m_CosThetaStar);
   fChain->SetBranchAddress("e1_m_DPhi", &e1_m_DPhi, &b_e1_m_DPhi);
   fChain->SetBranchAddress("e1_m_DR", &e1_m_DR, &b_e1_m_DR);
   fChain->SetBranchAddress("e1_m_Eta", &e1_m_Eta, &b_e1_m_Eta);
   fChain->SetBranchAddress("e1_m_Mass", &e1_m_Mass, &b_e1_m_Mass);
   fChain->SetBranchAddress("e1_m_Mass_TauEnDown", &e1_m_Mass_TauEnDown, &b_e1_m_Mass_TauEnDown);
   fChain->SetBranchAddress("e1_m_Mass_TauEnUp", &e1_m_Mass_TauEnUp, &b_e1_m_Mass_TauEnUp);
   fChain->SetBranchAddress("e1_m_Mt", &e1_m_Mt, &b_e1_m_Mt);
   fChain->SetBranchAddress("e1_m_MtTotal", &e1_m_MtTotal, &b_e1_m_MtTotal);
   fChain->SetBranchAddress("e1_m_Mt_TauEnDown", &e1_m_Mt_TauEnDown, &b_e1_m_Mt_TauEnDown);
   fChain->SetBranchAddress("e1_m_Mt_TauEnUp", &e1_m_Mt_TauEnUp, &b_e1_m_Mt_TauEnUp);
   fChain->SetBranchAddress("e1_m_MvaMet", &e1_m_MvaMet, &b_e1_m_MvaMet);
   fChain->SetBranchAddress("e1_m_MvaMetCovMatrix00", &e1_m_MvaMetCovMatrix00, &b_e1_m_MvaMetCovMatrix00);
   fChain->SetBranchAddress("e1_m_MvaMetCovMatrix01", &e1_m_MvaMetCovMatrix01, &b_e1_m_MvaMetCovMatrix01);
   fChain->SetBranchAddress("e1_m_MvaMetCovMatrix10", &e1_m_MvaMetCovMatrix10, &b_e1_m_MvaMetCovMatrix10);
   fChain->SetBranchAddress("e1_m_MvaMetCovMatrix11", &e1_m_MvaMetCovMatrix11, &b_e1_m_MvaMetCovMatrix11);
   fChain->SetBranchAddress("e1_m_MvaMetPhi", &e1_m_MvaMetPhi, &b_e1_m_MvaMetPhi);
   fChain->SetBranchAddress("e1_m_PZeta", &e1_m_PZeta, &b_e1_m_PZeta);
   fChain->SetBranchAddress("e1_m_PZetaLess0p85PZetaVis", &e1_m_PZetaLess0p85PZetaVis, &b_e1_m_PZetaLess0p85PZetaVis);
   fChain->SetBranchAddress("e1_m_PZetaVis", &e1_m_PZetaVis, &b_e1_m_PZetaVis);
   fChain->SetBranchAddress("e1_m_Phi", &e1_m_Phi, &b_e1_m_Phi);
   fChain->SetBranchAddress("e1_m_Pt", &e1_m_Pt, &b_e1_m_Pt);
   fChain->SetBranchAddress("e1_m_SS", &e1_m_SS, &b_e1_m_SS);
   fChain->SetBranchAddress("e1_m_ToMETDPhi_Ty1", &e1_m_ToMETDPhi_Ty1, &b_e1_m_ToMETDPhi_Ty1);
   fChain->SetBranchAddress("e1_m_collinearmass", &e1_m_collinearmass, &b_e1_m_collinearmass);
   fChain->SetBranchAddress("e1_m_collinearmass_CheckUESDown", &e1_m_collinearmass_CheckUESDown, &b_e1_m_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("e1_m_collinearmass_CheckUESUp", &e1_m_collinearmass_CheckUESUp, &b_e1_m_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("e1_m_collinearmass_EleEnDown", &e1_m_collinearmass_EleEnDown, &b_e1_m_collinearmass_EleEnDown);
   fChain->SetBranchAddress("e1_m_collinearmass_EleEnUp", &e1_m_collinearmass_EleEnUp, &b_e1_m_collinearmass_EleEnUp);
   fChain->SetBranchAddress("e1_m_collinearmass_JetCheckTotalDown", &e1_m_collinearmass_JetCheckTotalDown, &b_e1_m_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("e1_m_collinearmass_JetCheckTotalUp", &e1_m_collinearmass_JetCheckTotalUp, &b_e1_m_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("e1_m_collinearmass_JetEnDown", &e1_m_collinearmass_JetEnDown, &b_e1_m_collinearmass_JetEnDown);
   fChain->SetBranchAddress("e1_m_collinearmass_JetEnUp", &e1_m_collinearmass_JetEnUp, &b_e1_m_collinearmass_JetEnUp);
   fChain->SetBranchAddress("e1_m_collinearmass_MuEnDown", &e1_m_collinearmass_MuEnDown, &b_e1_m_collinearmass_MuEnDown);
   fChain->SetBranchAddress("e1_m_collinearmass_MuEnUp", &e1_m_collinearmass_MuEnUp, &b_e1_m_collinearmass_MuEnUp);
   fChain->SetBranchAddress("e1_m_collinearmass_TauEnDown", &e1_m_collinearmass_TauEnDown, &b_e1_m_collinearmass_TauEnDown);
   fChain->SetBranchAddress("e1_m_collinearmass_TauEnUp", &e1_m_collinearmass_TauEnUp, &b_e1_m_collinearmass_TauEnUp);
   fChain->SetBranchAddress("e1_m_collinearmass_UnclusteredEnDown", &e1_m_collinearmass_UnclusteredEnDown, &b_e1_m_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("e1_m_collinearmass_UnclusteredEnUp", &e1_m_collinearmass_UnclusteredEnUp, &b_e1_m_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("e1_m_pt_tt", &e1_m_pt_tt, &b_e1_m_pt_tt);
   fChain->SetBranchAddress("e1_t_CosThetaStar", &e1_t_CosThetaStar, &b_e1_t_CosThetaStar);
   fChain->SetBranchAddress("e1_t_DPhi", &e1_t_DPhi, &b_e1_t_DPhi);
   fChain->SetBranchAddress("e1_t_DR", &e1_t_DR, &b_e1_t_DR);
   fChain->SetBranchAddress("e1_t_Eta", &e1_t_Eta, &b_e1_t_Eta);
   fChain->SetBranchAddress("e1_t_Mass", &e1_t_Mass, &b_e1_t_Mass);
   fChain->SetBranchAddress("e1_t_Mass_TauEnDown", &e1_t_Mass_TauEnDown, &b_e1_t_Mass_TauEnDown);
   fChain->SetBranchAddress("e1_t_Mass_TauEnUp", &e1_t_Mass_TauEnUp, &b_e1_t_Mass_TauEnUp);
   fChain->SetBranchAddress("e1_t_Mt", &e1_t_Mt, &b_e1_t_Mt);
   fChain->SetBranchAddress("e1_t_MtTotal", &e1_t_MtTotal, &b_e1_t_MtTotal);
   fChain->SetBranchAddress("e1_t_Mt_TauEnDown", &e1_t_Mt_TauEnDown, &b_e1_t_Mt_TauEnDown);
   fChain->SetBranchAddress("e1_t_Mt_TauEnUp", &e1_t_Mt_TauEnUp, &b_e1_t_Mt_TauEnUp);
   fChain->SetBranchAddress("e1_t_MvaMet", &e1_t_MvaMet, &b_e1_t_MvaMet);
   fChain->SetBranchAddress("e1_t_MvaMetCovMatrix00", &e1_t_MvaMetCovMatrix00, &b_e1_t_MvaMetCovMatrix00);
   fChain->SetBranchAddress("e1_t_MvaMetCovMatrix01", &e1_t_MvaMetCovMatrix01, &b_e1_t_MvaMetCovMatrix01);
   fChain->SetBranchAddress("e1_t_MvaMetCovMatrix10", &e1_t_MvaMetCovMatrix10, &b_e1_t_MvaMetCovMatrix10);
   fChain->SetBranchAddress("e1_t_MvaMetCovMatrix11", &e1_t_MvaMetCovMatrix11, &b_e1_t_MvaMetCovMatrix11);
   fChain->SetBranchAddress("e1_t_MvaMetPhi", &e1_t_MvaMetPhi, &b_e1_t_MvaMetPhi);
   fChain->SetBranchAddress("e1_t_PZeta", &e1_t_PZeta, &b_e1_t_PZeta);
   fChain->SetBranchAddress("e1_t_PZetaLess0p85PZetaVis", &e1_t_PZetaLess0p85PZetaVis, &b_e1_t_PZetaLess0p85PZetaVis);
   fChain->SetBranchAddress("e1_t_PZetaVis", &e1_t_PZetaVis, &b_e1_t_PZetaVis);
   fChain->SetBranchAddress("e1_t_Phi", &e1_t_Phi, &b_e1_t_Phi);
   fChain->SetBranchAddress("e1_t_Pt", &e1_t_Pt, &b_e1_t_Pt);
   fChain->SetBranchAddress("e1_t_SS", &e1_t_SS, &b_e1_t_SS);
   fChain->SetBranchAddress("e1_t_ToMETDPhi_Ty1", &e1_t_ToMETDPhi_Ty1, &b_e1_t_ToMETDPhi_Ty1);
   fChain->SetBranchAddress("e1_t_collinearmass", &e1_t_collinearmass, &b_e1_t_collinearmass);
   fChain->SetBranchAddress("e1_t_collinearmass_CheckUESDown", &e1_t_collinearmass_CheckUESDown, &b_e1_t_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("e1_t_collinearmass_CheckUESUp", &e1_t_collinearmass_CheckUESUp, &b_e1_t_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("e1_t_collinearmass_EleEnDown", &e1_t_collinearmass_EleEnDown, &b_e1_t_collinearmass_EleEnDown);
   fChain->SetBranchAddress("e1_t_collinearmass_EleEnUp", &e1_t_collinearmass_EleEnUp, &b_e1_t_collinearmass_EleEnUp);
   fChain->SetBranchAddress("e1_t_collinearmass_JetCheckTotalDown", &e1_t_collinearmass_JetCheckTotalDown, &b_e1_t_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("e1_t_collinearmass_JetCheckTotalUp", &e1_t_collinearmass_JetCheckTotalUp, &b_e1_t_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("e1_t_collinearmass_JetEnDown", &e1_t_collinearmass_JetEnDown, &b_e1_t_collinearmass_JetEnDown);
   fChain->SetBranchAddress("e1_t_collinearmass_JetEnUp", &e1_t_collinearmass_JetEnUp, &b_e1_t_collinearmass_JetEnUp);
   fChain->SetBranchAddress("e1_t_collinearmass_MuEnDown", &e1_t_collinearmass_MuEnDown, &b_e1_t_collinearmass_MuEnDown);
   fChain->SetBranchAddress("e1_t_collinearmass_MuEnUp", &e1_t_collinearmass_MuEnUp, &b_e1_t_collinearmass_MuEnUp);
   fChain->SetBranchAddress("e1_t_collinearmass_TauEnDown", &e1_t_collinearmass_TauEnDown, &b_e1_t_collinearmass_TauEnDown);
   fChain->SetBranchAddress("e1_t_collinearmass_TauEnUp", &e1_t_collinearmass_TauEnUp, &b_e1_t_collinearmass_TauEnUp);
   fChain->SetBranchAddress("e1_t_collinearmass_UnclusteredEnDown", &e1_t_collinearmass_UnclusteredEnDown, &b_e1_t_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("e1_t_collinearmass_UnclusteredEnUp", &e1_t_collinearmass_UnclusteredEnUp, &b_e1_t_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("e1_t_pt_tt", &e1_t_pt_tt, &b_e1_t_pt_tt);
   fChain->SetBranchAddress("e1deltaEtaSuperClusterTrackAtVtx", &e1deltaEtaSuperClusterTrackAtVtx, &b_e1deltaEtaSuperClusterTrackAtVtx);
   fChain->SetBranchAddress("e1deltaPhiSuperClusterTrackAtVtx", &e1deltaPhiSuperClusterTrackAtVtx, &b_e1deltaPhiSuperClusterTrackAtVtx);
   fChain->SetBranchAddress("e1eSuperClusterOverP", &e1eSuperClusterOverP, &b_e1eSuperClusterOverP);
   fChain->SetBranchAddress("e1ecalEnergy", &e1ecalEnergy, &b_e1ecalEnergy);
   fChain->SetBranchAddress("e1fBrem", &e1fBrem, &b_e1fBrem);
   fChain->SetBranchAddress("e1trackMomentumAtVtxP", &e1trackMomentumAtVtxP, &b_e1trackMomentumAtVtxP);
   fChain->SetBranchAddress("e2AbsEta", &e2AbsEta, &b_e2AbsEta);
   fChain->SetBranchAddress("e2CBIDLoose", &e2CBIDLoose, &b_e2CBIDLoose);
   fChain->SetBranchAddress("e2CBIDLooseNoIso", &e2CBIDLooseNoIso, &b_e2CBIDLooseNoIso);
   fChain->SetBranchAddress("e2CBIDMedium", &e2CBIDMedium, &b_e2CBIDMedium);
   fChain->SetBranchAddress("e2CBIDMediumNoIso", &e2CBIDMediumNoIso, &b_e2CBIDMediumNoIso);
   fChain->SetBranchAddress("e2CBIDTight", &e2CBIDTight, &b_e2CBIDTight);
   fChain->SetBranchAddress("e2CBIDTightNoIso", &e2CBIDTightNoIso, &b_e2CBIDTightNoIso);
   fChain->SetBranchAddress("e2CBIDVeto", &e2CBIDVeto, &b_e2CBIDVeto);
   fChain->SetBranchAddress("e2CBIDVetoNoIso", &e2CBIDVetoNoIso, &b_e2CBIDVetoNoIso);
   fChain->SetBranchAddress("e2Charge", &e2Charge, &b_e2Charge);
   fChain->SetBranchAddress("e2ChargeIdLoose", &e2ChargeIdLoose, &b_e2ChargeIdLoose);
   fChain->SetBranchAddress("e2ChargeIdMed", &e2ChargeIdMed, &b_e2ChargeIdMed);
   fChain->SetBranchAddress("e2ChargeIdTight", &e2ChargeIdTight, &b_e2ChargeIdTight);
   fChain->SetBranchAddress("e2ComesFromHiggs", &e2ComesFromHiggs, &b_e2ComesFromHiggs);
   fChain->SetBranchAddress("e2DPhiToPfMet_type1", &e2DPhiToPfMet_type1, &b_e2DPhiToPfMet_type1);
   fChain->SetBranchAddress("e2E1x5", &e2E1x5, &b_e2E1x5);
   fChain->SetBranchAddress("e2E2x5Max", &e2E2x5Max, &b_e2E2x5Max);
   fChain->SetBranchAddress("e2E5x5", &e2E5x5, &b_e2E5x5);
   fChain->SetBranchAddress("e2EcalIsoDR03", &e2EcalIsoDR03, &b_e2EcalIsoDR03);
   fChain->SetBranchAddress("e2EffectiveArea2012Data", &e2EffectiveArea2012Data, &b_e2EffectiveArea2012Data);
   fChain->SetBranchAddress("e2EffectiveAreaSpring15", &e2EffectiveAreaSpring15, &b_e2EffectiveAreaSpring15);
   fChain->SetBranchAddress("e2EnergyError", &e2EnergyError, &b_e2EnergyError);
   fChain->SetBranchAddress("e2Eta", &e2Eta, &b_e2Eta);
   fChain->SetBranchAddress("e2GenCharge", &e2GenCharge, &b_e2GenCharge);
   fChain->SetBranchAddress("e2GenDirectPromptTauDecay", &e2GenDirectPromptTauDecay, &b_e2GenDirectPromptTauDecay);
   fChain->SetBranchAddress("e2GenEnergy", &e2GenEnergy, &b_e2GenEnergy);
   fChain->SetBranchAddress("e2GenEta", &e2GenEta, &b_e2GenEta);
   fChain->SetBranchAddress("e2GenIsPrompt", &e2GenIsPrompt, &b_e2GenIsPrompt);
   fChain->SetBranchAddress("e2GenMotherPdgId", &e2GenMotherPdgId, &b_e2GenMotherPdgId);
   fChain->SetBranchAddress("e2GenParticle", &e2GenParticle, &b_e2GenParticle);
   fChain->SetBranchAddress("e2GenPdgId", &e2GenPdgId, &b_e2GenPdgId);
   fChain->SetBranchAddress("e2GenPhi", &e2GenPhi, &b_e2GenPhi);
   fChain->SetBranchAddress("e2GenPrompt", &e2GenPrompt, &b_e2GenPrompt);
   fChain->SetBranchAddress("e2GenPromptTauDecay", &e2GenPromptTauDecay, &b_e2GenPromptTauDecay);
   fChain->SetBranchAddress("e2GenPt", &e2GenPt, &b_e2GenPt);
   fChain->SetBranchAddress("e2GenTauDecay", &e2GenTauDecay, &b_e2GenTauDecay);
   fChain->SetBranchAddress("e2GenVZ", &e2GenVZ, &b_e2GenVZ);
   fChain->SetBranchAddress("e2GenVtxPVMatch", &e2GenVtxPVMatch, &b_e2GenVtxPVMatch);
   fChain->SetBranchAddress("e2HadronicDepth1OverEm", &e2HadronicDepth1OverEm, &b_e2HadronicDepth1OverEm);
   fChain->SetBranchAddress("e2HadronicDepth2OverEm", &e2HadronicDepth2OverEm, &b_e2HadronicDepth2OverEm);
   fChain->SetBranchAddress("e2HadronicOverEM", &e2HadronicOverEM, &b_e2HadronicOverEM);
   fChain->SetBranchAddress("e2HcalIsoDR03", &e2HcalIsoDR03, &b_e2HcalIsoDR03);
   fChain->SetBranchAddress("e2IP3D", &e2IP3D, &b_e2IP3D);
   fChain->SetBranchAddress("e2IP3DErr", &e2IP3DErr, &b_e2IP3DErr);
   fChain->SetBranchAddress("e2IsoDB03", &e2IsoDB03, &b_e2IsoDB03);
   fChain->SetBranchAddress("e2JetArea", &e2JetArea, &b_e2JetArea);
   fChain->SetBranchAddress("e2JetBtag", &e2JetBtag, &b_e2JetBtag);
   fChain->SetBranchAddress("e2JetDR", &e2JetDR, &b_e2JetDR);
   fChain->SetBranchAddress("e2JetEtaEtaMoment", &e2JetEtaEtaMoment, &b_e2JetEtaEtaMoment);
   fChain->SetBranchAddress("e2JetEtaPhiMoment", &e2JetEtaPhiMoment, &b_e2JetEtaPhiMoment);
   fChain->SetBranchAddress("e2JetEtaPhiSpread", &e2JetEtaPhiSpread, &b_e2JetEtaPhiSpread);
   fChain->SetBranchAddress("e2JetHadronFlavour", &e2JetHadronFlavour, &b_e2JetHadronFlavour);
   fChain->SetBranchAddress("e2JetPFCISVBtag", &e2JetPFCISVBtag, &b_e2JetPFCISVBtag);
   fChain->SetBranchAddress("e2JetPartonFlavour", &e2JetPartonFlavour, &b_e2JetPartonFlavour);
   fChain->SetBranchAddress("e2JetPhiPhiMoment", &e2JetPhiPhiMoment, &b_e2JetPhiPhiMoment);
   fChain->SetBranchAddress("e2JetPt", &e2JetPt, &b_e2JetPt);
   fChain->SetBranchAddress("e2LowestMll", &e2LowestMll, &b_e2LowestMll);
   fChain->SetBranchAddress("e2MVANonTrigCategory", &e2MVANonTrigCategory, &b_e2MVANonTrigCategory);
   fChain->SetBranchAddress("e2MVANonTrigID", &e2MVANonTrigID, &b_e2MVANonTrigID);
   fChain->SetBranchAddress("e2MVANonTrigWP80", &e2MVANonTrigWP80, &b_e2MVANonTrigWP80);
   fChain->SetBranchAddress("e2MVANonTrigWP90", &e2MVANonTrigWP90, &b_e2MVANonTrigWP90);
   fChain->SetBranchAddress("e2MVATrigCategory", &e2MVATrigCategory, &b_e2MVATrigCategory);
   fChain->SetBranchAddress("e2MVATrigID", &e2MVATrigID, &b_e2MVATrigID);
   fChain->SetBranchAddress("e2MVATrigWP80", &e2MVATrigWP80, &b_e2MVATrigWP80);
   fChain->SetBranchAddress("e2MVATrigWP90", &e2MVATrigWP90, &b_e2MVATrigWP90);
   fChain->SetBranchAddress("e2Mass", &e2Mass, &b_e2Mass);
   fChain->SetBranchAddress("e2MatchesDoubleE", &e2MatchesDoubleE, &b_e2MatchesDoubleE);
   fChain->SetBranchAddress("e2MatchesDoubleE23_12Filter", &e2MatchesDoubleE23_12Filter, &b_e2MatchesDoubleE23_12Filter);
   fChain->SetBranchAddress("e2MatchesDoubleE23_12Path", &e2MatchesDoubleE23_12Path, &b_e2MatchesDoubleE23_12Path);
   fChain->SetBranchAddress("e2MatchesDoubleEFilter", &e2MatchesDoubleEFilter, &b_e2MatchesDoubleEFilter);
   fChain->SetBranchAddress("e2MatchesDoubleEPath", &e2MatchesDoubleEPath, &b_e2MatchesDoubleEPath);
   fChain->SetBranchAddress("e2MatchesDoubleESingleMu", &e2MatchesDoubleESingleMu, &b_e2MatchesDoubleESingleMu);
   fChain->SetBranchAddress("e2MatchesDoubleMuSingleE", &e2MatchesDoubleMuSingleE, &b_e2MatchesDoubleMuSingleE);
   fChain->SetBranchAddress("e2MatchesEle12LoosePath", &e2MatchesEle12LoosePath, &b_e2MatchesEle12LoosePath);
   fChain->SetBranchAddress("e2MatchesEle17LoosePath", &e2MatchesEle17LoosePath, &b_e2MatchesEle17LoosePath);
   fChain->SetBranchAddress("e2MatchesEle22eta2p1LoosePath", &e2MatchesEle22eta2p1LoosePath, &b_e2MatchesEle22eta2p1LoosePath);
   fChain->SetBranchAddress("e2MatchesEle23LoosePath", &e2MatchesEle23LoosePath, &b_e2MatchesEle23LoosePath);
   fChain->SetBranchAddress("e2MatchesEle25eta2p1LoosePath", &e2MatchesEle25eta2p1LoosePath, &b_e2MatchesEle25eta2p1LoosePath);
   fChain->SetBranchAddress("e2MatchesEle25eta2p1TightPath", &e2MatchesEle25eta2p1TightPath, &b_e2MatchesEle25eta2p1TightPath);
   fChain->SetBranchAddress("e2MatchesEle27TightPath", &e2MatchesEle27TightPath, &b_e2MatchesEle27TightPath);
   fChain->SetBranchAddress("e2MatchesEle27eta2p1LoosePath", &e2MatchesEle27eta2p1LoosePath, &b_e2MatchesEle27eta2p1LoosePath);
   fChain->SetBranchAddress("e2MatchesSingleE", &e2MatchesSingleE, &b_e2MatchesSingleE);
   fChain->SetBranchAddress("e2MatchesSingleESingleMu", &e2MatchesSingleESingleMu, &b_e2MatchesSingleESingleMu);
   fChain->SetBranchAddress("e2MatchesSingleETight27Filter", &e2MatchesSingleETight27Filter, &b_e2MatchesSingleETight27Filter);
   fChain->SetBranchAddress("e2MatchesSingleE_leg1", &e2MatchesSingleE_leg1, &b_e2MatchesSingleE_leg1);
   fChain->SetBranchAddress("e2MatchesSingleE_leg2", &e2MatchesSingleE_leg2, &b_e2MatchesSingleE_leg2);
   fChain->SetBranchAddress("e2MatchesSingleMuSingleE", &e2MatchesSingleMuSingleE, &b_e2MatchesSingleMuSingleE);
   fChain->SetBranchAddress("e2MatchesTripleE", &e2MatchesTripleE, &b_e2MatchesTripleE);
   fChain->SetBranchAddress("e2MissingHits", &e2MissingHits, &b_e2MissingHits);
   fChain->SetBranchAddress("e2MtToPfMet_type1", &e2MtToPfMet_type1, &b_e2MtToPfMet_type1);
   fChain->SetBranchAddress("e2NearMuonVeto", &e2NearMuonVeto, &b_e2NearMuonVeto);
   fChain->SetBranchAddress("e2NearestMuonDR", &e2NearestMuonDR, &b_e2NearestMuonDR);
   fChain->SetBranchAddress("e2NearestZMass", &e2NearestZMass, &b_e2NearestZMass);
   fChain->SetBranchAddress("e2PFChargedIso", &e2PFChargedIso, &b_e2PFChargedIso);
   fChain->SetBranchAddress("e2PFNeutralIso", &e2PFNeutralIso, &b_e2PFNeutralIso);
   fChain->SetBranchAddress("e2PFPUChargedIso", &e2PFPUChargedIso, &b_e2PFPUChargedIso);
   fChain->SetBranchAddress("e2PFPhotonIso", &e2PFPhotonIso, &b_e2PFPhotonIso);
   fChain->SetBranchAddress("e2PVDXY", &e2PVDXY, &b_e2PVDXY);
   fChain->SetBranchAddress("e2PVDZ", &e2PVDZ, &b_e2PVDZ);
   fChain->SetBranchAddress("e2PassesConversionVeto", &e2PassesConversionVeto, &b_e2PassesConversionVeto);
   fChain->SetBranchAddress("e2Phi", &e2Phi, &b_e2Phi);
   fChain->SetBranchAddress("e2Pt", &e2Pt, &b_e2Pt);
   fChain->SetBranchAddress("e2Pt_ElectronResPhiDown", &e2Pt_ElectronResPhiDown, &b_e2Pt_ElectronResPhiDown);
   fChain->SetBranchAddress("e2Pt_ElectronResRhoDown", &e2Pt_ElectronResRhoDown, &b_e2Pt_ElectronResRhoDown);
   fChain->SetBranchAddress("e2Pt_ElectronResRhoUp", &e2Pt_ElectronResRhoUp, &b_e2Pt_ElectronResRhoUp);
   fChain->SetBranchAddress("e2Pt_ElectronScaleDown", &e2Pt_ElectronScaleDown, &b_e2Pt_ElectronScaleDown);
   fChain->SetBranchAddress("e2Pt_ElectronScaleUp", &e2Pt_ElectronScaleUp, &b_e2Pt_ElectronScaleUp);
   fChain->SetBranchAddress("e2Pt_ElectronUncorr", &e2Pt_ElectronUncorr, &b_e2Pt_ElectronUncorr);
   fChain->SetBranchAddress("e2Rank", &e2Rank, &b_e2Rank);
   fChain->SetBranchAddress("e2RelIso", &e2RelIso, &b_e2RelIso);
   fChain->SetBranchAddress("e2RelPFIsoDB", &e2RelPFIsoDB, &b_e2RelPFIsoDB);
   fChain->SetBranchAddress("e2RelPFIsoRho", &e2RelPFIsoRho, &b_e2RelPFIsoRho);
   fChain->SetBranchAddress("e2Rho", &e2Rho, &b_e2Rho);
   fChain->SetBranchAddress("e2SCEnergy", &e2SCEnergy, &b_e2SCEnergy);
   fChain->SetBranchAddress("e2SCEta", &e2SCEta, &b_e2SCEta);
   fChain->SetBranchAddress("e2SCEtaWidth", &e2SCEtaWidth, &b_e2SCEtaWidth);
   fChain->SetBranchAddress("e2SCPhi", &e2SCPhi, &b_e2SCPhi);
   fChain->SetBranchAddress("e2SCPhiWidth", &e2SCPhiWidth, &b_e2SCPhiWidth);
   fChain->SetBranchAddress("e2SCPreshowerEnergy", &e2SCPreshowerEnergy, &b_e2SCPreshowerEnergy);
   fChain->SetBranchAddress("e2SCRawEnergy", &e2SCRawEnergy, &b_e2SCRawEnergy);
   fChain->SetBranchAddress("e2SIP2D", &e2SIP2D, &b_e2SIP2D);
   fChain->SetBranchAddress("e2SIP3D", &e2SIP3D, &b_e2SIP3D);
   fChain->SetBranchAddress("e2SigmaIEtaIEta", &e2SigmaIEtaIEta, &b_e2SigmaIEtaIEta);
   fChain->SetBranchAddress("e2TrkIsoDR03", &e2TrkIsoDR03, &b_e2TrkIsoDR03);
   fChain->SetBranchAddress("e2VZ", &e2VZ, &b_e2VZ);
   fChain->SetBranchAddress("e2WWLoose", &e2WWLoose, &b_e2WWLoose);
   fChain->SetBranchAddress("e2ZTTGenMatching", &e2ZTTGenMatching, &b_e2ZTTGenMatching);
   fChain->SetBranchAddress("e2_e1_collinearmass", &e2_e1_collinearmass, &b_e2_e1_collinearmass);
   fChain->SetBranchAddress("e2_e1_collinearmass_CheckUESDown", &e2_e1_collinearmass_CheckUESDown, &b_e2_e1_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("e2_e1_collinearmass_CheckUESUp", &e2_e1_collinearmass_CheckUESUp, &b_e2_e1_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("e2_e1_collinearmass_JetCheckTotalDown", &e2_e1_collinearmass_JetCheckTotalDown, &b_e2_e1_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("e2_e1_collinearmass_JetCheckTotalUp", &e2_e1_collinearmass_JetCheckTotalUp, &b_e2_e1_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("e2_e1_collinearmass_JetEnDown", &e2_e1_collinearmass_JetEnDown, &b_e2_e1_collinearmass_JetEnDown);
   fChain->SetBranchAddress("e2_e1_collinearmass_JetEnUp", &e2_e1_collinearmass_JetEnUp, &b_e2_e1_collinearmass_JetEnUp);
   fChain->SetBranchAddress("e2_e1_collinearmass_UnclusteredEnDown", &e2_e1_collinearmass_UnclusteredEnDown, &b_e2_e1_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("e2_e1_collinearmass_UnclusteredEnUp", &e2_e1_collinearmass_UnclusteredEnUp, &b_e2_e1_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("e2_m_CosThetaStar", &e2_m_CosThetaStar, &b_e2_m_CosThetaStar);
   fChain->SetBranchAddress("e2_m_DPhi", &e2_m_DPhi, &b_e2_m_DPhi);
   fChain->SetBranchAddress("e2_m_DR", &e2_m_DR, &b_e2_m_DR);
   fChain->SetBranchAddress("e2_m_Eta", &e2_m_Eta, &b_e2_m_Eta);
   fChain->SetBranchAddress("e2_m_Mass", &e2_m_Mass, &b_e2_m_Mass);
   fChain->SetBranchAddress("e2_m_Mass_TauEnDown", &e2_m_Mass_TauEnDown, &b_e2_m_Mass_TauEnDown);
   fChain->SetBranchAddress("e2_m_Mass_TauEnUp", &e2_m_Mass_TauEnUp, &b_e2_m_Mass_TauEnUp);
   fChain->SetBranchAddress("e2_m_Mt", &e2_m_Mt, &b_e2_m_Mt);
   fChain->SetBranchAddress("e2_m_MtTotal", &e2_m_MtTotal, &b_e2_m_MtTotal);
   fChain->SetBranchAddress("e2_m_Mt_TauEnDown", &e2_m_Mt_TauEnDown, &b_e2_m_Mt_TauEnDown);
   fChain->SetBranchAddress("e2_m_Mt_TauEnUp", &e2_m_Mt_TauEnUp, &b_e2_m_Mt_TauEnUp);
   fChain->SetBranchAddress("e2_m_MvaMet", &e2_m_MvaMet, &b_e2_m_MvaMet);
   fChain->SetBranchAddress("e2_m_MvaMetCovMatrix00", &e2_m_MvaMetCovMatrix00, &b_e2_m_MvaMetCovMatrix00);
   fChain->SetBranchAddress("e2_m_MvaMetCovMatrix01", &e2_m_MvaMetCovMatrix01, &b_e2_m_MvaMetCovMatrix01);
   fChain->SetBranchAddress("e2_m_MvaMetCovMatrix10", &e2_m_MvaMetCovMatrix10, &b_e2_m_MvaMetCovMatrix10);
   fChain->SetBranchAddress("e2_m_MvaMetCovMatrix11", &e2_m_MvaMetCovMatrix11, &b_e2_m_MvaMetCovMatrix11);
   fChain->SetBranchAddress("e2_m_MvaMetPhi", &e2_m_MvaMetPhi, &b_e2_m_MvaMetPhi);
   fChain->SetBranchAddress("e2_m_PZeta", &e2_m_PZeta, &b_e2_m_PZeta);
   fChain->SetBranchAddress("e2_m_PZetaLess0p85PZetaVis", &e2_m_PZetaLess0p85PZetaVis, &b_e2_m_PZetaLess0p85PZetaVis);
   fChain->SetBranchAddress("e2_m_PZetaVis", &e2_m_PZetaVis, &b_e2_m_PZetaVis);
   fChain->SetBranchAddress("e2_m_Phi", &e2_m_Phi, &b_e2_m_Phi);
   fChain->SetBranchAddress("e2_m_Pt", &e2_m_Pt, &b_e2_m_Pt);
   fChain->SetBranchAddress("e2_m_SS", &e2_m_SS, &b_e2_m_SS);
   fChain->SetBranchAddress("e2_m_ToMETDPhi_Ty1", &e2_m_ToMETDPhi_Ty1, &b_e2_m_ToMETDPhi_Ty1);
   fChain->SetBranchAddress("e2_m_collinearmass", &e2_m_collinearmass, &b_e2_m_collinearmass);
   fChain->SetBranchAddress("e2_m_collinearmass_CheckUESDown", &e2_m_collinearmass_CheckUESDown, &b_e2_m_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("e2_m_collinearmass_CheckUESUp", &e2_m_collinearmass_CheckUESUp, &b_e2_m_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("e2_m_collinearmass_EleEnDown", &e2_m_collinearmass_EleEnDown, &b_e2_m_collinearmass_EleEnDown);
   fChain->SetBranchAddress("e2_m_collinearmass_EleEnUp", &e2_m_collinearmass_EleEnUp, &b_e2_m_collinearmass_EleEnUp);
   fChain->SetBranchAddress("e2_m_collinearmass_JetCheckTotalDown", &e2_m_collinearmass_JetCheckTotalDown, &b_e2_m_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("e2_m_collinearmass_JetCheckTotalUp", &e2_m_collinearmass_JetCheckTotalUp, &b_e2_m_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("e2_m_collinearmass_JetEnDown", &e2_m_collinearmass_JetEnDown, &b_e2_m_collinearmass_JetEnDown);
   fChain->SetBranchAddress("e2_m_collinearmass_JetEnUp", &e2_m_collinearmass_JetEnUp, &b_e2_m_collinearmass_JetEnUp);
   fChain->SetBranchAddress("e2_m_collinearmass_MuEnDown", &e2_m_collinearmass_MuEnDown, &b_e2_m_collinearmass_MuEnDown);
   fChain->SetBranchAddress("e2_m_collinearmass_MuEnUp", &e2_m_collinearmass_MuEnUp, &b_e2_m_collinearmass_MuEnUp);
   fChain->SetBranchAddress("e2_m_collinearmass_TauEnDown", &e2_m_collinearmass_TauEnDown, &b_e2_m_collinearmass_TauEnDown);
   fChain->SetBranchAddress("e2_m_collinearmass_TauEnUp", &e2_m_collinearmass_TauEnUp, &b_e2_m_collinearmass_TauEnUp);
   fChain->SetBranchAddress("e2_m_collinearmass_UnclusteredEnDown", &e2_m_collinearmass_UnclusteredEnDown, &b_e2_m_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("e2_m_collinearmass_UnclusteredEnUp", &e2_m_collinearmass_UnclusteredEnUp, &b_e2_m_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("e2_m_pt_tt", &e2_m_pt_tt, &b_e2_m_pt_tt);
   fChain->SetBranchAddress("e2_t_CosThetaStar", &e2_t_CosThetaStar, &b_e2_t_CosThetaStar);
   fChain->SetBranchAddress("e2_t_DPhi", &e2_t_DPhi, &b_e2_t_DPhi);
   fChain->SetBranchAddress("e2_t_DR", &e2_t_DR, &b_e2_t_DR);
   fChain->SetBranchAddress("e2_t_Eta", &e2_t_Eta, &b_e2_t_Eta);
   fChain->SetBranchAddress("e2_t_Mass", &e2_t_Mass, &b_e2_t_Mass);
   fChain->SetBranchAddress("e2_t_Mass_TauEnDown", &e2_t_Mass_TauEnDown, &b_e2_t_Mass_TauEnDown);
   fChain->SetBranchAddress("e2_t_Mass_TauEnUp", &e2_t_Mass_TauEnUp, &b_e2_t_Mass_TauEnUp);
   fChain->SetBranchAddress("e2_t_Mt", &e2_t_Mt, &b_e2_t_Mt);
   fChain->SetBranchAddress("e2_t_MtTotal", &e2_t_MtTotal, &b_e2_t_MtTotal);
   fChain->SetBranchAddress("e2_t_Mt_TauEnDown", &e2_t_Mt_TauEnDown, &b_e2_t_Mt_TauEnDown);
   fChain->SetBranchAddress("e2_t_Mt_TauEnUp", &e2_t_Mt_TauEnUp, &b_e2_t_Mt_TauEnUp);
   fChain->SetBranchAddress("e2_t_MvaMet", &e2_t_MvaMet, &b_e2_t_MvaMet);
   fChain->SetBranchAddress("e2_t_MvaMetCovMatrix00", &e2_t_MvaMetCovMatrix00, &b_e2_t_MvaMetCovMatrix00);
   fChain->SetBranchAddress("e2_t_MvaMetCovMatrix01", &e2_t_MvaMetCovMatrix01, &b_e2_t_MvaMetCovMatrix01);
   fChain->SetBranchAddress("e2_t_MvaMetCovMatrix10", &e2_t_MvaMetCovMatrix10, &b_e2_t_MvaMetCovMatrix10);
   fChain->SetBranchAddress("e2_t_MvaMetCovMatrix11", &e2_t_MvaMetCovMatrix11, &b_e2_t_MvaMetCovMatrix11);
   fChain->SetBranchAddress("e2_t_MvaMetPhi", &e2_t_MvaMetPhi, &b_e2_t_MvaMetPhi);
   fChain->SetBranchAddress("e2_t_PZeta", &e2_t_PZeta, &b_e2_t_PZeta);
   fChain->SetBranchAddress("e2_t_PZetaLess0p85PZetaVis", &e2_t_PZetaLess0p85PZetaVis, &b_e2_t_PZetaLess0p85PZetaVis);
   fChain->SetBranchAddress("e2_t_PZetaVis", &e2_t_PZetaVis, &b_e2_t_PZetaVis);
   fChain->SetBranchAddress("e2_t_Phi", &e2_t_Phi, &b_e2_t_Phi);
   fChain->SetBranchAddress("e2_t_Pt", &e2_t_Pt, &b_e2_t_Pt);
   fChain->SetBranchAddress("e2_t_SS", &e2_t_SS, &b_e2_t_SS);
   fChain->SetBranchAddress("e2_t_ToMETDPhi_Ty1", &e2_t_ToMETDPhi_Ty1, &b_e2_t_ToMETDPhi_Ty1);
   fChain->SetBranchAddress("e2_t_collinearmass", &e2_t_collinearmass, &b_e2_t_collinearmass);
   fChain->SetBranchAddress("e2_t_collinearmass_CheckUESDown", &e2_t_collinearmass_CheckUESDown, &b_e2_t_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("e2_t_collinearmass_CheckUESUp", &e2_t_collinearmass_CheckUESUp, &b_e2_t_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("e2_t_collinearmass_EleEnDown", &e2_t_collinearmass_EleEnDown, &b_e2_t_collinearmass_EleEnDown);
   fChain->SetBranchAddress("e2_t_collinearmass_EleEnUp", &e2_t_collinearmass_EleEnUp, &b_e2_t_collinearmass_EleEnUp);
   fChain->SetBranchAddress("e2_t_collinearmass_JetCheckTotalDown", &e2_t_collinearmass_JetCheckTotalDown, &b_e2_t_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("e2_t_collinearmass_JetCheckTotalUp", &e2_t_collinearmass_JetCheckTotalUp, &b_e2_t_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("e2_t_collinearmass_JetEnDown", &e2_t_collinearmass_JetEnDown, &b_e2_t_collinearmass_JetEnDown);
   fChain->SetBranchAddress("e2_t_collinearmass_JetEnUp", &e2_t_collinearmass_JetEnUp, &b_e2_t_collinearmass_JetEnUp);
   fChain->SetBranchAddress("e2_t_collinearmass_MuEnDown", &e2_t_collinearmass_MuEnDown, &b_e2_t_collinearmass_MuEnDown);
   fChain->SetBranchAddress("e2_t_collinearmass_MuEnUp", &e2_t_collinearmass_MuEnUp, &b_e2_t_collinearmass_MuEnUp);
   fChain->SetBranchAddress("e2_t_collinearmass_TauEnDown", &e2_t_collinearmass_TauEnDown, &b_e2_t_collinearmass_TauEnDown);
   fChain->SetBranchAddress("e2_t_collinearmass_TauEnUp", &e2_t_collinearmass_TauEnUp, &b_e2_t_collinearmass_TauEnUp);
   fChain->SetBranchAddress("e2_t_collinearmass_UnclusteredEnDown", &e2_t_collinearmass_UnclusteredEnDown, &b_e2_t_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("e2_t_collinearmass_UnclusteredEnUp", &e2_t_collinearmass_UnclusteredEnUp, &b_e2_t_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("e2_t_pt_tt", &e2_t_pt_tt, &b_e2_t_pt_tt);
   fChain->SetBranchAddress("e2deltaEtaSuperClusterTrackAtVtx", &e2deltaEtaSuperClusterTrackAtVtx, &b_e2deltaEtaSuperClusterTrackAtVtx);
   fChain->SetBranchAddress("e2deltaPhiSuperClusterTrackAtVtx", &e2deltaPhiSuperClusterTrackAtVtx, &b_e2deltaPhiSuperClusterTrackAtVtx);
   fChain->SetBranchAddress("e2eSuperClusterOverP", &e2eSuperClusterOverP, &b_e2eSuperClusterOverP);
   fChain->SetBranchAddress("e2ecalEnergy", &e2ecalEnergy, &b_e2ecalEnergy);
   fChain->SetBranchAddress("e2fBrem", &e2fBrem, &b_e2fBrem);
   fChain->SetBranchAddress("e2trackMomentumAtVtxP", &e2trackMomentumAtVtxP, &b_e2trackMomentumAtVtxP);
   fChain->SetBranchAddress("eVetoAZHdR0", &eVetoAZHdR0, &b_eVetoAZHdR0);
   fChain->SetBranchAddress("eVetoLLTTp001dxyz", &eVetoLLTTp001dxyz, &b_eVetoLLTTp001dxyz);
   fChain->SetBranchAddress("eVetoLLTTp001dxyzR0", &eVetoLLTTp001dxyzR0, &b_eVetoLLTTp001dxyzR0);
   fChain->SetBranchAddress("eVetoMVAIso", &eVetoMVAIso, &b_eVetoMVAIso);
   fChain->SetBranchAddress("eVetoMVAIsoVtx", &eVetoMVAIsoVtx, &b_eVetoMVAIsoVtx);
   fChain->SetBranchAddress("eVetoZTTp001dxyz", &eVetoZTTp001dxyz, &b_eVetoZTTp001dxyz);
   fChain->SetBranchAddress("eVetoZTTp001dxyzR0", &eVetoZTTp001dxyzR0, &b_eVetoZTTp001dxyzR0);
   fChain->SetBranchAddress("evt", &evt, &b_evt);
   fChain->SetBranchAddress("genHTT", &genHTT, &b_genHTT);
   fChain->SetBranchAddress("genM", &genM, &b_genM);
   fChain->SetBranchAddress("genMass", &genMass, &b_genMass);
   fChain->SetBranchAddress("genpT", &genpT, &b_genpT);
   fChain->SetBranchAddress("genpX", &genpX, &b_genpX);
   fChain->SetBranchAddress("genpY", &genpY, &b_genpY);
   fChain->SetBranchAddress("isGtautau", &isGtautau, &b_isGtautau);
   fChain->SetBranchAddress("isHee", &isHee, &b_isHee);
   fChain->SetBranchAddress("isHmumu", &isHmumu, &b_isHmumu);
   fChain->SetBranchAddress("isHtautau", &isHtautau, &b_isHtautau);
   fChain->SetBranchAddress("isWenu", &isWenu, &b_isWenu);
   fChain->SetBranchAddress("isWmunu", &isWmunu, &b_isWmunu);
   fChain->SetBranchAddress("isWtaunu", &isWtaunu, &b_isWtaunu);
   fChain->SetBranchAddress("isZee", &isZee, &b_isZee);
   fChain->SetBranchAddress("isZmumu", &isZmumu, &b_isZmumu);
   fChain->SetBranchAddress("isZtautau", &isZtautau, &b_isZtautau);
   fChain->SetBranchAddress("isdata", &isdata, &b_isdata);
   fChain->SetBranchAddress("j1csv", &j1csv, &b_j1csv);
   fChain->SetBranchAddress("j1eta", &j1eta, &b_j1eta);
   fChain->SetBranchAddress("j1flavor", &j1flavor, &b_j1flavor);
   fChain->SetBranchAddress("j1phi", &j1phi, &b_j1phi);
   fChain->SetBranchAddress("j1pt", &j1pt, &b_j1pt);
   fChain->SetBranchAddress("j2csv", &j2csv, &b_j2csv);
   fChain->SetBranchAddress("j2eta", &j2eta, &b_j2eta);
   fChain->SetBranchAddress("j2flavor", &j2flavor, &b_j2flavor);
   fChain->SetBranchAddress("j2phi", &j2phi, &b_j2phi);
   fChain->SetBranchAddress("j2pt", &j2pt, &b_j2pt);
   fChain->SetBranchAddress("jb1csv", &jb1csv, &b_jb1csv);
   fChain->SetBranchAddress("jb1eta", &jb1eta, &b_jb1eta);
   fChain->SetBranchAddress("jb1hadronflavor", &jb1hadronflavor, &b_jb1hadronflavor);
   fChain->SetBranchAddress("jb1partonflavor", &jb1partonflavor, &b_jb1partonflavor);
   fChain->SetBranchAddress("jb1phi", &jb1phi, &b_jb1phi);
   fChain->SetBranchAddress("jb1pt", &jb1pt, &b_jb1pt);
   fChain->SetBranchAddress("jb1ptDown", &jb1ptDown, &b_jb1ptDown);
   fChain->SetBranchAddress("jb1ptUp", &jb1ptUp, &b_jb1ptUp);
   fChain->SetBranchAddress("jb1pu", &jb1pu, &b_jb1pu);
   fChain->SetBranchAddress("jb1rawf", &jb1rawf, &b_jb1rawf);
   fChain->SetBranchAddress("jb2csv", &jb2csv, &b_jb2csv);
   fChain->SetBranchAddress("jb2eta", &jb2eta, &b_jb2eta);
   fChain->SetBranchAddress("jb2hadronflavor", &jb2hadronflavor, &b_jb2hadronflavor);
   fChain->SetBranchAddress("jb2partonflavor", &jb2partonflavor, &b_jb2partonflavor);
   fChain->SetBranchAddress("jb2phi", &jb2phi, &b_jb2phi);
   fChain->SetBranchAddress("jb2pt", &jb2pt, &b_jb2pt);
   fChain->SetBranchAddress("jb2ptDown", &jb2ptDown, &b_jb2ptDown);
   fChain->SetBranchAddress("jb2ptUp", &jb2ptUp, &b_jb2ptUp);
   fChain->SetBranchAddress("jb2pu", &jb2pu, &b_jb2pu);
   fChain->SetBranchAddress("jb2rawf", &jb2rawf, &b_jb2rawf);
   fChain->SetBranchAddress("jetVeto20", &jetVeto20, &b_jetVeto20);
   fChain->SetBranchAddress("jetVeto20ZTT", &jetVeto20ZTT, &b_jetVeto20ZTT);
   fChain->SetBranchAddress("jetVeto20_JetEnDown", &jetVeto20_JetEnDown, &b_jetVeto20_JetEnDown);
   fChain->SetBranchAddress("jetVeto20_JetEnUp", &jetVeto20_JetEnUp, &b_jetVeto20_JetEnUp);
   fChain->SetBranchAddress("jetVeto30", &jetVeto30, &b_jetVeto30);
   fChain->SetBranchAddress("jetVeto30ZTT", &jetVeto30ZTT, &b_jetVeto30ZTT);
   fChain->SetBranchAddress("jetVeto30_JetEnDown", &jetVeto30_JetEnDown, &b_jetVeto30_JetEnDown);
   fChain->SetBranchAddress("jetVeto30_JetEnUp", &jetVeto30_JetEnUp, &b_jetVeto30_JetEnUp);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("mAbsEta", &mAbsEta, &b_mAbsEta);
   fChain->SetBranchAddress("mBestTrackType", &mBestTrackType, &b_mBestTrackType);
   fChain->SetBranchAddress("mCharge", &mCharge, &b_mCharge);
   fChain->SetBranchAddress("mChi2LocalPosition", &mChi2LocalPosition, &b_mChi2LocalPosition);
   fChain->SetBranchAddress("mComesFromHiggs", &mComesFromHiggs, &b_mComesFromHiggs);
   fChain->SetBranchAddress("mDPhiToPfMet_type1", &mDPhiToPfMet_type1, &b_mDPhiToPfMet_type1);
   fChain->SetBranchAddress("mEcalIsoDR03", &mEcalIsoDR03, &b_mEcalIsoDR03);
   fChain->SetBranchAddress("mEffectiveArea2011", &mEffectiveArea2011, &b_mEffectiveArea2011);
   fChain->SetBranchAddress("mEffectiveArea2012", &mEffectiveArea2012, &b_mEffectiveArea2012);
   fChain->SetBranchAddress("mEta", &mEta, &b_mEta);
   fChain->SetBranchAddress("mEta_MuonEnDown", &mEta_MuonEnDown, &b_mEta_MuonEnDown);
   fChain->SetBranchAddress("mEta_MuonEnUp", &mEta_MuonEnUp, &b_mEta_MuonEnUp);
   fChain->SetBranchAddress("mGenCharge", &mGenCharge, &b_mGenCharge);
   fChain->SetBranchAddress("mGenDirectPromptTauDecayFinalState", &mGenDirectPromptTauDecayFinalState, &b_mGenDirectPromptTauDecayFinalState);
   fChain->SetBranchAddress("mGenEnergy", &mGenEnergy, &b_mGenEnergy);
   fChain->SetBranchAddress("mGenEta", &mGenEta, &b_mGenEta);
   fChain->SetBranchAddress("mGenIsPrompt", &mGenIsPrompt, &b_mGenIsPrompt);
   fChain->SetBranchAddress("mGenMotherPdgId", &mGenMotherPdgId, &b_mGenMotherPdgId);
   fChain->SetBranchAddress("mGenParticle", &mGenParticle, &b_mGenParticle);
   fChain->SetBranchAddress("mGenPdgId", &mGenPdgId, &b_mGenPdgId);
   fChain->SetBranchAddress("mGenPhi", &mGenPhi, &b_mGenPhi);
   fChain->SetBranchAddress("mGenPrompt", &mGenPrompt, &b_mGenPrompt);
   fChain->SetBranchAddress("mGenPromptFinalState", &mGenPromptFinalState, &b_mGenPromptFinalState);
   fChain->SetBranchAddress("mGenPromptTauDecay", &mGenPromptTauDecay, &b_mGenPromptTauDecay);
   fChain->SetBranchAddress("mGenPt", &mGenPt, &b_mGenPt);
   fChain->SetBranchAddress("mGenTauDecay", &mGenTauDecay, &b_mGenTauDecay);
   fChain->SetBranchAddress("mGenVZ", &mGenVZ, &b_mGenVZ);
   fChain->SetBranchAddress("mGenVtxPVMatch", &mGenVtxPVMatch, &b_mGenVtxPVMatch);
   fChain->SetBranchAddress("mHcalIsoDR03", &mHcalIsoDR03, &b_mHcalIsoDR03);
   fChain->SetBranchAddress("mIP3D", &mIP3D, &b_mIP3D);
   fChain->SetBranchAddress("mIP3DErr", &mIP3DErr, &b_mIP3DErr);
   fChain->SetBranchAddress("mIsGlobal", &mIsGlobal, &b_mIsGlobal);
   fChain->SetBranchAddress("mIsPFMuon", &mIsPFMuon, &b_mIsPFMuon);
   fChain->SetBranchAddress("mIsTracker", &mIsTracker, &b_mIsTracker);
   fChain->SetBranchAddress("mIsoDB03", &mIsoDB03, &b_mIsoDB03);
   fChain->SetBranchAddress("mIsoDB04", &mIsoDB04, &b_mIsoDB04);
   fChain->SetBranchAddress("mJetArea", &mJetArea, &b_mJetArea);
   fChain->SetBranchAddress("mJetBtag", &mJetBtag, &b_mJetBtag);
   fChain->SetBranchAddress("mJetDR", &mJetDR, &b_mJetDR);
   fChain->SetBranchAddress("mJetEtaEtaMoment", &mJetEtaEtaMoment, &b_mJetEtaEtaMoment);
   fChain->SetBranchAddress("mJetEtaPhiMoment", &mJetEtaPhiMoment, &b_mJetEtaPhiMoment);
   fChain->SetBranchAddress("mJetEtaPhiSpread", &mJetEtaPhiSpread, &b_mJetEtaPhiSpread);
   fChain->SetBranchAddress("mJetHadronFlavour", &mJetHadronFlavour, &b_mJetHadronFlavour);
   fChain->SetBranchAddress("mJetPFCISVBtag", &mJetPFCISVBtag, &b_mJetPFCISVBtag);
   fChain->SetBranchAddress("mJetPartonFlavour", &mJetPartonFlavour, &b_mJetPartonFlavour);
   fChain->SetBranchAddress("mJetPhiPhiMoment", &mJetPhiPhiMoment, &b_mJetPhiPhiMoment);
   fChain->SetBranchAddress("mJetPt", &mJetPt, &b_mJetPt);
   fChain->SetBranchAddress("mLowestMll", &mLowestMll, &b_mLowestMll);
   fChain->SetBranchAddress("mMass", &mMass, &b_mMass);
   fChain->SetBranchAddress("mMatchedStations", &mMatchedStations, &b_mMatchedStations);
   fChain->SetBranchAddress("mMatchesDoubleESingleMu", &mMatchesDoubleESingleMu, &b_mMatchesDoubleESingleMu);
   fChain->SetBranchAddress("mMatchesDoubleMu", &mMatchesDoubleMu, &b_mMatchesDoubleMu);
   fChain->SetBranchAddress("mMatchesDoubleMuFilter1", &mMatchesDoubleMuFilter1, &b_mMatchesDoubleMuFilter1);
   fChain->SetBranchAddress("mMatchesDoubleMuFilter2", &mMatchesDoubleMuFilter2, &b_mMatchesDoubleMuFilter2);
   fChain->SetBranchAddress("mMatchesDoubleMuNoDZFilter1", &mMatchesDoubleMuNoDZFilter1, &b_mMatchesDoubleMuNoDZFilter1);
   fChain->SetBranchAddress("mMatchesDoubleMuNoDZFilter2", &mMatchesDoubleMuNoDZFilter2, &b_mMatchesDoubleMuNoDZFilter2);
   fChain->SetBranchAddress("mMatchesDoubleMuPath1", &mMatchesDoubleMuPath1, &b_mMatchesDoubleMuPath1);
   fChain->SetBranchAddress("mMatchesDoubleMuPath2", &mMatchesDoubleMuPath2, &b_mMatchesDoubleMuPath2);
   fChain->SetBranchAddress("mMatchesDoubleMuSingleE", &mMatchesDoubleMuSingleE, &b_mMatchesDoubleMuSingleE);
   fChain->SetBranchAddress("mMatchesIsoMu17eta2p1Path", &mMatchesIsoMu17eta2p1Path, &b_mMatchesIsoMu17eta2p1Path);
   fChain->SetBranchAddress("mMatchesIsoMu18Path", &mMatchesIsoMu18Path, &b_mMatchesIsoMu18Path);
   fChain->SetBranchAddress("mMatchesIsoMu20Path", &mMatchesIsoMu20Path, &b_mMatchesIsoMu20Path);
   fChain->SetBranchAddress("mMatchesIsoMu22Path", &mMatchesIsoMu22Path, &b_mMatchesIsoMu22Path);
   fChain->SetBranchAddress("mMatchesIsoMu22eta2p1Path", &mMatchesIsoMu22eta2p1Path, &b_mMatchesIsoMu22eta2p1Path);
   fChain->SetBranchAddress("mMatchesIsoMu24Filter", &mMatchesIsoMu24Filter, &b_mMatchesIsoMu24Filter);
   fChain->SetBranchAddress("mMatchesIsoMu27Path", &mMatchesIsoMu27Path, &b_mMatchesIsoMu27Path);
   fChain->SetBranchAddress("mMatchesIsoTkMu20Path", &mMatchesIsoTkMu20Path, &b_mMatchesIsoTkMu20Path);
   fChain->SetBranchAddress("mMatchesIsoTkMu22Path", &mMatchesIsoTkMu22Path, &b_mMatchesIsoTkMu22Path);
   fChain->SetBranchAddress("mMatchesIsoTkMu24Filter", &mMatchesIsoTkMu24Filter, &b_mMatchesIsoTkMu24Filter);
   fChain->SetBranchAddress("mMatchesMu17Path", &mMatchesMu17Path, &b_mMatchesMu17Path);
   fChain->SetBranchAddress("mMatchesMu17VVLPath", &mMatchesMu17VVLPath, &b_mMatchesMu17VVLPath);
   fChain->SetBranchAddress("mMatchesMu50Path", &mMatchesMu50Path, &b_mMatchesMu50Path);
   fChain->SetBranchAddress("mMatchesMu8Path", &mMatchesMu8Path, &b_mMatchesMu8Path);
   fChain->SetBranchAddress("mMatchesMu8VVLPath", &mMatchesMu8VVLPath, &b_mMatchesMu8VVLPath);
   fChain->SetBranchAddress("mMatchesSingleESingleMu", &mMatchesSingleESingleMu, &b_mMatchesSingleESingleMu);
   fChain->SetBranchAddress("mMatchesSingleMu", &mMatchesSingleMu, &b_mMatchesSingleMu);
   fChain->SetBranchAddress("mMatchesSingleMuIso20", &mMatchesSingleMuIso20, &b_mMatchesSingleMuIso20);
   fChain->SetBranchAddress("mMatchesSingleMuIsoTk20", &mMatchesSingleMuIsoTk20, &b_mMatchesSingleMuIsoTk20);
   fChain->SetBranchAddress("mMatchesSingleMuSingleE", &mMatchesSingleMuSingleE, &b_mMatchesSingleMuSingleE);
   fChain->SetBranchAddress("mMatchesSingleMu_leg1", &mMatchesSingleMu_leg1, &b_mMatchesSingleMu_leg1);
   fChain->SetBranchAddress("mMatchesSingleMu_leg1_noiso", &mMatchesSingleMu_leg1_noiso, &b_mMatchesSingleMu_leg1_noiso);
   fChain->SetBranchAddress("mMatchesSingleMu_leg2", &mMatchesSingleMu_leg2, &b_mMatchesSingleMu_leg2);
   fChain->SetBranchAddress("mMatchesSingleMu_leg2_noiso", &mMatchesSingleMu_leg2_noiso, &b_mMatchesSingleMu_leg2_noiso);
   fChain->SetBranchAddress("mMatchesTripleMu", &mMatchesTripleMu, &b_mMatchesTripleMu);
   fChain->SetBranchAddress("mMtToPfMet_type1", &mMtToPfMet_type1, &b_mMtToPfMet_type1);
   fChain->SetBranchAddress("mMuonHits", &mMuonHits, &b_mMuonHits);
   fChain->SetBranchAddress("mNearestZMass", &mNearestZMass, &b_mNearestZMass);
   fChain->SetBranchAddress("mNormTrkChi2", &mNormTrkChi2, &b_mNormTrkChi2);
   fChain->SetBranchAddress("mNormalizedChi2", &mNormalizedChi2, &b_mNormalizedChi2);
   fChain->SetBranchAddress("mPFChargedHadronIsoR04", &mPFChargedHadronIsoR04, &b_mPFChargedHadronIsoR04);
   fChain->SetBranchAddress("mPFChargedIso", &mPFChargedIso, &b_mPFChargedIso);
   fChain->SetBranchAddress("mPFIDLoose", &mPFIDLoose, &b_mPFIDLoose);
   fChain->SetBranchAddress("mPFIDMedium", &mPFIDMedium, &b_mPFIDMedium);
   fChain->SetBranchAddress("mPFIDTight", &mPFIDTight, &b_mPFIDTight);
   fChain->SetBranchAddress("mPFNeutralHadronIsoR04", &mPFNeutralHadronIsoR04, &b_mPFNeutralHadronIsoR04);
   fChain->SetBranchAddress("mPFNeutralIso", &mPFNeutralIso, &b_mPFNeutralIso);
   fChain->SetBranchAddress("mPFPUChargedIso", &mPFPUChargedIso, &b_mPFPUChargedIso);
   fChain->SetBranchAddress("mPFPhotonIso", &mPFPhotonIso, &b_mPFPhotonIso);
   fChain->SetBranchAddress("mPFPhotonIsoR04", &mPFPhotonIsoR04, &b_mPFPhotonIsoR04);
   fChain->SetBranchAddress("mPFPileupIsoR04", &mPFPileupIsoR04, &b_mPFPileupIsoR04);
   fChain->SetBranchAddress("mPVDXY", &mPVDXY, &b_mPVDXY);
   fChain->SetBranchAddress("mPVDZ", &mPVDZ, &b_mPVDZ);
   fChain->SetBranchAddress("mPhi", &mPhi, &b_mPhi);
   fChain->SetBranchAddress("mPhi_MuonEnDown", &mPhi_MuonEnDown, &b_mPhi_MuonEnDown);
   fChain->SetBranchAddress("mPhi_MuonEnUp", &mPhi_MuonEnUp, &b_mPhi_MuonEnUp);
   fChain->SetBranchAddress("mPixHits", &mPixHits, &b_mPixHits);
   fChain->SetBranchAddress("mPt", &mPt, &b_mPt);
   fChain->SetBranchAddress("mPt_MuonEnDown", &mPt_MuonEnDown, &b_mPt_MuonEnDown);
   fChain->SetBranchAddress("mPt_MuonEnUp", &mPt_MuonEnUp, &b_mPt_MuonEnUp);
   fChain->SetBranchAddress("mRank", &mRank, &b_mRank);
   fChain->SetBranchAddress("mRelPFIsoDBDefault", &mRelPFIsoDBDefault, &b_mRelPFIsoDBDefault);
   fChain->SetBranchAddress("mRelPFIsoDBDefaultR04", &mRelPFIsoDBDefaultR04, &b_mRelPFIsoDBDefaultR04);
   fChain->SetBranchAddress("mRelPFIsoRho", &mRelPFIsoRho, &b_mRelPFIsoRho);
   fChain->SetBranchAddress("mRho", &mRho, &b_mRho);
   fChain->SetBranchAddress("mSIP2D", &mSIP2D, &b_mSIP2D);
   fChain->SetBranchAddress("mSIP3D", &mSIP3D, &b_mSIP3D);
   fChain->SetBranchAddress("mSegmentCompatibility", &mSegmentCompatibility, &b_mSegmentCompatibility);
   fChain->SetBranchAddress("mTkLayersWithMeasurement", &mTkLayersWithMeasurement, &b_mTkLayersWithMeasurement);
   fChain->SetBranchAddress("mTrkIsoDR03", &mTrkIsoDR03, &b_mTrkIsoDR03);
   fChain->SetBranchAddress("mTrkKink", &mTrkKink, &b_mTrkKink);
   fChain->SetBranchAddress("mTypeCode", &mTypeCode, &b_mTypeCode);
   fChain->SetBranchAddress("mVZ", &mVZ, &b_mVZ);
   fChain->SetBranchAddress("mValidFraction", &mValidFraction, &b_mValidFraction);
   fChain->SetBranchAddress("mZTTGenMatching", &mZTTGenMatching, &b_mZTTGenMatching);
   fChain->SetBranchAddress("m_e1_collinearmass", &m_e1_collinearmass, &b_m_e1_collinearmass);
   fChain->SetBranchAddress("m_e1_collinearmass_CheckUESDown", &m_e1_collinearmass_CheckUESDown, &b_m_e1_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("m_e1_collinearmass_CheckUESUp", &m_e1_collinearmass_CheckUESUp, &b_m_e1_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("m_e1_collinearmass_JetCheckTotalDown", &m_e1_collinearmass_JetCheckTotalDown, &b_m_e1_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("m_e1_collinearmass_JetCheckTotalUp", &m_e1_collinearmass_JetCheckTotalUp, &b_m_e1_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("m_e1_collinearmass_JetEnDown", &m_e1_collinearmass_JetEnDown, &b_m_e1_collinearmass_JetEnDown);
   fChain->SetBranchAddress("m_e1_collinearmass_JetEnUp", &m_e1_collinearmass_JetEnUp, &b_m_e1_collinearmass_JetEnUp);
   fChain->SetBranchAddress("m_e1_collinearmass_UnclusteredEnDown", &m_e1_collinearmass_UnclusteredEnDown, &b_m_e1_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("m_e1_collinearmass_UnclusteredEnUp", &m_e1_collinearmass_UnclusteredEnUp, &b_m_e1_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("m_e2_collinearmass", &m_e2_collinearmass, &b_m_e2_collinearmass);
   fChain->SetBranchAddress("m_e2_collinearmass_CheckUESDown", &m_e2_collinearmass_CheckUESDown, &b_m_e2_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("m_e2_collinearmass_CheckUESUp", &m_e2_collinearmass_CheckUESUp, &b_m_e2_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("m_e2_collinearmass_JetCheckTotalDown", &m_e2_collinearmass_JetCheckTotalDown, &b_m_e2_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("m_e2_collinearmass_JetCheckTotalUp", &m_e2_collinearmass_JetCheckTotalUp, &b_m_e2_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("m_e2_collinearmass_JetEnDown", &m_e2_collinearmass_JetEnDown, &b_m_e2_collinearmass_JetEnDown);
   fChain->SetBranchAddress("m_e2_collinearmass_JetEnUp", &m_e2_collinearmass_JetEnUp, &b_m_e2_collinearmass_JetEnUp);
   fChain->SetBranchAddress("m_e2_collinearmass_UnclusteredEnDown", &m_e2_collinearmass_UnclusteredEnDown, &b_m_e2_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("m_e2_collinearmass_UnclusteredEnUp", &m_e2_collinearmass_UnclusteredEnUp, &b_m_e2_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("m_t_CosThetaStar", &m_t_CosThetaStar, &b_m_t_CosThetaStar);
   fChain->SetBranchAddress("m_t_DPhi", &m_t_DPhi, &b_m_t_DPhi);
   fChain->SetBranchAddress("m_t_DR", &m_t_DR, &b_m_t_DR);
   fChain->SetBranchAddress("m_t_Eta", &m_t_Eta, &b_m_t_Eta);
   fChain->SetBranchAddress("m_t_Mass", &m_t_Mass, &b_m_t_Mass);
   fChain->SetBranchAddress("m_t_Mass_TauEnDown", &m_t_Mass_TauEnDown, &b_m_t_Mass_TauEnDown);
   fChain->SetBranchAddress("m_t_Mass_TauEnUp", &m_t_Mass_TauEnUp, &b_m_t_Mass_TauEnUp);
   fChain->SetBranchAddress("m_t_Mt", &m_t_Mt, &b_m_t_Mt);
   fChain->SetBranchAddress("m_t_MtTotal", &m_t_MtTotal, &b_m_t_MtTotal);
   fChain->SetBranchAddress("m_t_Mt_TauEnDown", &m_t_Mt_TauEnDown, &b_m_t_Mt_TauEnDown);
   fChain->SetBranchAddress("m_t_Mt_TauEnUp", &m_t_Mt_TauEnUp, &b_m_t_Mt_TauEnUp);
   fChain->SetBranchAddress("m_t_MvaMet", &m_t_MvaMet, &b_m_t_MvaMet);
   fChain->SetBranchAddress("m_t_MvaMetCovMatrix00", &m_t_MvaMetCovMatrix00, &b_m_t_MvaMetCovMatrix00);
   fChain->SetBranchAddress("m_t_MvaMetCovMatrix01", &m_t_MvaMetCovMatrix01, &b_m_t_MvaMetCovMatrix01);
   fChain->SetBranchAddress("m_t_MvaMetCovMatrix10", &m_t_MvaMetCovMatrix10, &b_m_t_MvaMetCovMatrix10);
   fChain->SetBranchAddress("m_t_MvaMetCovMatrix11", &m_t_MvaMetCovMatrix11, &b_m_t_MvaMetCovMatrix11);
   fChain->SetBranchAddress("m_t_MvaMetPhi", &m_t_MvaMetPhi, &b_m_t_MvaMetPhi);
   fChain->SetBranchAddress("m_t_PZeta", &m_t_PZeta, &b_m_t_PZeta);
   fChain->SetBranchAddress("m_t_PZetaLess0p85PZetaVis", &m_t_PZetaLess0p85PZetaVis, &b_m_t_PZetaLess0p85PZetaVis);
   fChain->SetBranchAddress("m_t_PZetaVis", &m_t_PZetaVis, &b_m_t_PZetaVis);
   fChain->SetBranchAddress("m_t_Phi", &m_t_Phi, &b_m_t_Phi);
   fChain->SetBranchAddress("m_t_Pt", &m_t_Pt, &b_m_t_Pt);
   fChain->SetBranchAddress("m_t_SS", &m_t_SS, &b_m_t_SS);
   fChain->SetBranchAddress("m_t_ToMETDPhi_Ty1", &m_t_ToMETDPhi_Ty1, &b_m_t_ToMETDPhi_Ty1);
   fChain->SetBranchAddress("m_t_collinearmass", &m_t_collinearmass, &b_m_t_collinearmass);
   fChain->SetBranchAddress("m_t_collinearmass_CheckUESDown", &m_t_collinearmass_CheckUESDown, &b_m_t_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("m_t_collinearmass_CheckUESUp", &m_t_collinearmass_CheckUESUp, &b_m_t_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("m_t_collinearmass_EleEnDown", &m_t_collinearmass_EleEnDown, &b_m_t_collinearmass_EleEnDown);
   fChain->SetBranchAddress("m_t_collinearmass_EleEnUp", &m_t_collinearmass_EleEnUp, &b_m_t_collinearmass_EleEnUp);
   fChain->SetBranchAddress("m_t_collinearmass_JetCheckTotalDown", &m_t_collinearmass_JetCheckTotalDown, &b_m_t_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("m_t_collinearmass_JetCheckTotalUp", &m_t_collinearmass_JetCheckTotalUp, &b_m_t_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("m_t_collinearmass_JetEnDown", &m_t_collinearmass_JetEnDown, &b_m_t_collinearmass_JetEnDown);
   fChain->SetBranchAddress("m_t_collinearmass_JetEnUp", &m_t_collinearmass_JetEnUp, &b_m_t_collinearmass_JetEnUp);
   fChain->SetBranchAddress("m_t_collinearmass_MuEnDown", &m_t_collinearmass_MuEnDown, &b_m_t_collinearmass_MuEnDown);
   fChain->SetBranchAddress("m_t_collinearmass_MuEnUp", &m_t_collinearmass_MuEnUp, &b_m_t_collinearmass_MuEnUp);
   fChain->SetBranchAddress("m_t_collinearmass_TauEnDown", &m_t_collinearmass_TauEnDown, &b_m_t_collinearmass_TauEnDown);
   fChain->SetBranchAddress("m_t_collinearmass_TauEnUp", &m_t_collinearmass_TauEnUp, &b_m_t_collinearmass_TauEnUp);
   fChain->SetBranchAddress("m_t_collinearmass_UnclusteredEnDown", &m_t_collinearmass_UnclusteredEnDown, &b_m_t_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("m_t_collinearmass_UnclusteredEnUp", &m_t_collinearmass_UnclusteredEnUp, &b_m_t_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("m_t_pt_tt", &m_t_pt_tt, &b_m_t_pt_tt);
   fChain->SetBranchAddress("metSig", &metSig, &b_metSig);
   fChain->SetBranchAddress("metcov00", &metcov00, &b_metcov00);
   fChain->SetBranchAddress("metcov01", &metcov01, &b_metcov01);
   fChain->SetBranchAddress("metcov10", &metcov10, &b_metcov10);
   fChain->SetBranchAddress("metcov11", &metcov11, &b_metcov11);
   fChain->SetBranchAddress("muGlbIsoVetoPt10", &muGlbIsoVetoPt10, &b_muGlbIsoVetoPt10);
   fChain->SetBranchAddress("muVetoAZHdR0", &muVetoAZHdR0, &b_muVetoAZHdR0);
   fChain->SetBranchAddress("muVetoLLTTp001dxyz", &muVetoLLTTp001dxyz, &b_muVetoLLTTp001dxyz);
   fChain->SetBranchAddress("muVetoLLTTp001dxyzR0", &muVetoLLTTp001dxyzR0, &b_muVetoLLTTp001dxyzR0);
   fChain->SetBranchAddress("muVetoPt15IsoIdVtx", &muVetoPt15IsoIdVtx, &b_muVetoPt15IsoIdVtx);
   fChain->SetBranchAddress("muVetoPt5", &muVetoPt5, &b_muVetoPt5);
   fChain->SetBranchAddress("muVetoPt5IsoIdVtx", &muVetoPt5IsoIdVtx, &b_muVetoPt5IsoIdVtx);
   fChain->SetBranchAddress("muVetoZTTp001dxyz", &muVetoZTTp001dxyz, &b_muVetoZTTp001dxyz);
   fChain->SetBranchAddress("muVetoZTTp001dxyzR0", &muVetoZTTp001dxyzR0, &b_muVetoZTTp001dxyzR0);
   fChain->SetBranchAddress("nTruePU", &nTruePU, &b_nTruePU);
   fChain->SetBranchAddress("numGenJets", &numGenJets, &b_numGenJets);
   fChain->SetBranchAddress("nvtx", &nvtx, &b_nvtx);
   fChain->SetBranchAddress("processID", &processID, &b_processID);
   fChain->SetBranchAddress("puppiMetEt", &puppiMetEt, &b_puppiMetEt);
   fChain->SetBranchAddress("puppiMetPhi", &puppiMetPhi, &b_puppiMetPhi);
   fChain->SetBranchAddress("pvChi2", &pvChi2, &b_pvChi2);
   fChain->SetBranchAddress("pvDX", &pvDX, &b_pvDX);
   fChain->SetBranchAddress("pvDY", &pvDY, &b_pvDY);
   fChain->SetBranchAddress("pvDZ", &pvDZ, &b_pvDZ);
   fChain->SetBranchAddress("pvIsFake", &pvIsFake, &b_pvIsFake);
   fChain->SetBranchAddress("pvIsValid", &pvIsValid, &b_pvIsValid);
   fChain->SetBranchAddress("pvNormChi2", &pvNormChi2, &b_pvNormChi2);
   fChain->SetBranchAddress("pvRho", &pvRho, &b_pvRho);
   fChain->SetBranchAddress("pvX", &pvX, &b_pvX);
   fChain->SetBranchAddress("pvY", &pvY, &b_pvY);
   fChain->SetBranchAddress("pvZ", &pvZ, &b_pvZ);
   fChain->SetBranchAddress("pvndof", &pvndof, &b_pvndof);
   fChain->SetBranchAddress("recoilDaught", &recoilDaught, &b_recoilDaught);
   fChain->SetBranchAddress("recoilWithMet", &recoilWithMet, &b_recoilWithMet);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("singleE17SingleMu8Group", &singleE17SingleMu8Group, &b_singleE17SingleMu8Group);
   fChain->SetBranchAddress("singleE17SingleMu8Pass", &singleE17SingleMu8Pass, &b_singleE17SingleMu8Pass);
   fChain->SetBranchAddress("singleE17SingleMu8Prescale", &singleE17SingleMu8Prescale, &b_singleE17SingleMu8Prescale);
   fChain->SetBranchAddress("singleE20SingleTau28Group", &singleE20SingleTau28Group, &b_singleE20SingleTau28Group);
   fChain->SetBranchAddress("singleE20SingleTau28Pass", &singleE20SingleTau28Pass, &b_singleE20SingleTau28Pass);
   fChain->SetBranchAddress("singleE20SingleTau28Prescale", &singleE20SingleTau28Prescale, &b_singleE20SingleTau28Prescale);
   fChain->SetBranchAddress("singleE22SingleTau20SingleL1Group", &singleE22SingleTau20SingleL1Group, &b_singleE22SingleTau20SingleL1Group);
   fChain->SetBranchAddress("singleE22SingleTau20SingleL1Pass", &singleE22SingleTau20SingleL1Pass, &b_singleE22SingleTau20SingleL1Pass);
   fChain->SetBranchAddress("singleE22SingleTau20SingleL1Prescale", &singleE22SingleTau20SingleL1Prescale, &b_singleE22SingleTau20SingleL1Prescale);
   fChain->SetBranchAddress("singleE22SingleTau29Group", &singleE22SingleTau29Group, &b_singleE22SingleTau29Group);
   fChain->SetBranchAddress("singleE22SingleTau29Pass", &singleE22SingleTau29Pass, &b_singleE22SingleTau29Pass);
   fChain->SetBranchAddress("singleE22SingleTau29Prescale", &singleE22SingleTau29Prescale, &b_singleE22SingleTau29Prescale);
   fChain->SetBranchAddress("singleE23SingleMu8Group", &singleE23SingleMu8Group, &b_singleE23SingleMu8Group);
   fChain->SetBranchAddress("singleE23SingleMu8Pass", &singleE23SingleMu8Pass, &b_singleE23SingleMu8Pass);
   fChain->SetBranchAddress("singleE23SingleMu8Prescale", &singleE23SingleMu8Prescale, &b_singleE23SingleMu8Prescale);
   fChain->SetBranchAddress("singleE24SingleTau20Group", &singleE24SingleTau20Group, &b_singleE24SingleTau20Group);
   fChain->SetBranchAddress("singleE24SingleTau20Pass", &singleE24SingleTau20Pass, &b_singleE24SingleTau20Pass);
   fChain->SetBranchAddress("singleE24SingleTau20Prescale", &singleE24SingleTau20Prescale, &b_singleE24SingleTau20Prescale);
   fChain->SetBranchAddress("singleE24SingleTau20SingleL1Group", &singleE24SingleTau20SingleL1Group, &b_singleE24SingleTau20SingleL1Group);
   fChain->SetBranchAddress("singleE24SingleTau20SingleL1Pass", &singleE24SingleTau20SingleL1Pass, &b_singleE24SingleTau20SingleL1Pass);
   fChain->SetBranchAddress("singleE24SingleTau20SingleL1Prescale", &singleE24SingleTau20SingleL1Prescale, &b_singleE24SingleTau20SingleL1Prescale);
   fChain->SetBranchAddress("singleE24SingleTau30Group", &singleE24SingleTau30Group, &b_singleE24SingleTau30Group);
   fChain->SetBranchAddress("singleE24SingleTau30Pass", &singleE24SingleTau30Pass, &b_singleE24SingleTau30Pass);
   fChain->SetBranchAddress("singleE24SingleTau30Prescale", &singleE24SingleTau30Prescale, &b_singleE24SingleTau30Prescale);
   fChain->SetBranchAddress("singleE25eta2p1TightGroup", &singleE25eta2p1TightGroup, &b_singleE25eta2p1TightGroup);
   fChain->SetBranchAddress("singleE25eta2p1TightPass", &singleE25eta2p1TightPass, &b_singleE25eta2p1TightPass);
   fChain->SetBranchAddress("singleE25eta2p1TightPrescale", &singleE25eta2p1TightPrescale, &b_singleE25eta2p1TightPrescale);
   fChain->SetBranchAddress("singleE27SingleTau20SingleL1Group", &singleE27SingleTau20SingleL1Group, &b_singleE27SingleTau20SingleL1Group);
   fChain->SetBranchAddress("singleE27SingleTau20SingleL1Pass", &singleE27SingleTau20SingleL1Pass, &b_singleE27SingleTau20SingleL1Pass);
   fChain->SetBranchAddress("singleE27SingleTau20SingleL1Prescale", &singleE27SingleTau20SingleL1Prescale, &b_singleE27SingleTau20SingleL1Prescale);
   fChain->SetBranchAddress("singleE27TightGroup", &singleE27TightGroup, &b_singleE27TightGroup);
   fChain->SetBranchAddress("singleE27TightPass", &singleE27TightPass, &b_singleE27TightPass);
   fChain->SetBranchAddress("singleE27TightPrescale", &singleE27TightPrescale, &b_singleE27TightPrescale);
   fChain->SetBranchAddress("singleE27eta2p1LooseGroup", &singleE27eta2p1LooseGroup, &b_singleE27eta2p1LooseGroup);
   fChain->SetBranchAddress("singleE27eta2p1LoosePass", &singleE27eta2p1LoosePass, &b_singleE27eta2p1LoosePass);
   fChain->SetBranchAddress("singleE27eta2p1LoosePrescale", &singleE27eta2p1LoosePrescale, &b_singleE27eta2p1LoosePrescale);
   fChain->SetBranchAddress("singleE27eta2p1TightGroup", &singleE27eta2p1TightGroup, &b_singleE27eta2p1TightGroup);
   fChain->SetBranchAddress("singleE27eta2p1TightPass", &singleE27eta2p1TightPass, &b_singleE27eta2p1TightPass);
   fChain->SetBranchAddress("singleE27eta2p1TightPrescale", &singleE27eta2p1TightPrescale, &b_singleE27eta2p1TightPrescale);
   fChain->SetBranchAddress("singleE32SingleTau20SingleL1Group", &singleE32SingleTau20SingleL1Group, &b_singleE32SingleTau20SingleL1Group);
   fChain->SetBranchAddress("singleE32SingleTau20SingleL1Pass", &singleE32SingleTau20SingleL1Pass, &b_singleE32SingleTau20SingleL1Pass);
   fChain->SetBranchAddress("singleE32SingleTau20SingleL1Prescale", &singleE32SingleTau20SingleL1Prescale, &b_singleE32SingleTau20SingleL1Prescale);
   fChain->SetBranchAddress("singleE36SingleTau30Group", &singleE36SingleTau30Group, &b_singleE36SingleTau30Group);
   fChain->SetBranchAddress("singleE36SingleTau30Pass", &singleE36SingleTau30Pass, &b_singleE36SingleTau30Pass);
   fChain->SetBranchAddress("singleE36SingleTau30Prescale", &singleE36SingleTau30Prescale, &b_singleE36SingleTau30Prescale);
   fChain->SetBranchAddress("singleESingleMuGroup", &singleESingleMuGroup, &b_singleESingleMuGroup);
   fChain->SetBranchAddress("singleESingleMuPass", &singleESingleMuPass, &b_singleESingleMuPass);
   fChain->SetBranchAddress("singleESingleMuPrescale", &singleESingleMuPrescale, &b_singleESingleMuPrescale);
   fChain->SetBranchAddress("singleE_leg1Group", &singleE_leg1Group, &b_singleE_leg1Group);
   fChain->SetBranchAddress("singleE_leg1Pass", &singleE_leg1Pass, &b_singleE_leg1Pass);
   fChain->SetBranchAddress("singleE_leg1Prescale", &singleE_leg1Prescale, &b_singleE_leg1Prescale);
   fChain->SetBranchAddress("singleE_leg2Group", &singleE_leg2Group, &b_singleE_leg2Group);
   fChain->SetBranchAddress("singleE_leg2Pass", &singleE_leg2Pass, &b_singleE_leg2Pass);
   fChain->SetBranchAddress("singleE_leg2Prescale", &singleE_leg2Prescale, &b_singleE_leg2Prescale);
   fChain->SetBranchAddress("singleIsoMu20Group", &singleIsoMu20Group, &b_singleIsoMu20Group);
   fChain->SetBranchAddress("singleIsoMu20Pass", &singleIsoMu20Pass, &b_singleIsoMu20Pass);
   fChain->SetBranchAddress("singleIsoMu20Prescale", &singleIsoMu20Prescale, &b_singleIsoMu20Prescale);
   fChain->SetBranchAddress("singleIsoMu22Group", &singleIsoMu22Group, &b_singleIsoMu22Group);
   fChain->SetBranchAddress("singleIsoMu22Pass", &singleIsoMu22Pass, &b_singleIsoMu22Pass);
   fChain->SetBranchAddress("singleIsoMu22Prescale", &singleIsoMu22Prescale, &b_singleIsoMu22Prescale);
   fChain->SetBranchAddress("singleIsoMu22eta2p1Group", &singleIsoMu22eta2p1Group, &b_singleIsoMu22eta2p1Group);
   fChain->SetBranchAddress("singleIsoMu22eta2p1Pass", &singleIsoMu22eta2p1Pass, &b_singleIsoMu22eta2p1Pass);
   fChain->SetBranchAddress("singleIsoMu22eta2p1Prescale", &singleIsoMu22eta2p1Prescale, &b_singleIsoMu22eta2p1Prescale);
   fChain->SetBranchAddress("singleIsoMu24Group", &singleIsoMu24Group, &b_singleIsoMu24Group);
   fChain->SetBranchAddress("singleIsoMu24Pass", &singleIsoMu24Pass, &b_singleIsoMu24Pass);
   fChain->SetBranchAddress("singleIsoMu24Prescale", &singleIsoMu24Prescale, &b_singleIsoMu24Prescale);
   fChain->SetBranchAddress("singleIsoMu24eta2p1Group", &singleIsoMu24eta2p1Group, &b_singleIsoMu24eta2p1Group);
   fChain->SetBranchAddress("singleIsoMu24eta2p1Pass", &singleIsoMu24eta2p1Pass, &b_singleIsoMu24eta2p1Pass);
   fChain->SetBranchAddress("singleIsoMu24eta2p1Prescale", &singleIsoMu24eta2p1Prescale, &b_singleIsoMu24eta2p1Prescale);
   fChain->SetBranchAddress("singleIsoMu27Group", &singleIsoMu27Group, &b_singleIsoMu27Group);
   fChain->SetBranchAddress("singleIsoMu27Pass", &singleIsoMu27Pass, &b_singleIsoMu27Pass);
   fChain->SetBranchAddress("singleIsoMu27Prescale", &singleIsoMu27Prescale, &b_singleIsoMu27Prescale);
   fChain->SetBranchAddress("singleIsoTkMu20Group", &singleIsoTkMu20Group, &b_singleIsoTkMu20Group);
   fChain->SetBranchAddress("singleIsoTkMu20Pass", &singleIsoTkMu20Pass, &b_singleIsoTkMu20Pass);
   fChain->SetBranchAddress("singleIsoTkMu20Prescale", &singleIsoTkMu20Prescale, &b_singleIsoTkMu20Prescale);
   fChain->SetBranchAddress("singleIsoTkMu22Group", &singleIsoTkMu22Group, &b_singleIsoTkMu22Group);
   fChain->SetBranchAddress("singleIsoTkMu22Pass", &singleIsoTkMu22Pass, &b_singleIsoTkMu22Pass);
   fChain->SetBranchAddress("singleIsoTkMu22Prescale", &singleIsoTkMu22Prescale, &b_singleIsoTkMu22Prescale);
   fChain->SetBranchAddress("singleIsoTkMu22eta2p1Group", &singleIsoTkMu22eta2p1Group, &b_singleIsoTkMu22eta2p1Group);
   fChain->SetBranchAddress("singleIsoTkMu22eta2p1Pass", &singleIsoTkMu22eta2p1Pass, &b_singleIsoTkMu22eta2p1Pass);
   fChain->SetBranchAddress("singleIsoTkMu22eta2p1Prescale", &singleIsoTkMu22eta2p1Prescale, &b_singleIsoTkMu22eta2p1Prescale);
   fChain->SetBranchAddress("singleIsoTkMu24Group", &singleIsoTkMu24Group, &b_singleIsoTkMu24Group);
   fChain->SetBranchAddress("singleIsoTkMu24Pass", &singleIsoTkMu24Pass, &b_singleIsoTkMu24Pass);
   fChain->SetBranchAddress("singleIsoTkMu24Prescale", &singleIsoTkMu24Prescale, &b_singleIsoTkMu24Prescale);
   fChain->SetBranchAddress("singleIsoTkMu24eta2p1Group", &singleIsoTkMu24eta2p1Group, &b_singleIsoTkMu24eta2p1Group);
   fChain->SetBranchAddress("singleIsoTkMu24eta2p1Pass", &singleIsoTkMu24eta2p1Pass, &b_singleIsoTkMu24eta2p1Pass);
   fChain->SetBranchAddress("singleIsoTkMu24eta2p1Prescale", &singleIsoTkMu24eta2p1Prescale, &b_singleIsoTkMu24eta2p1Prescale);
   fChain->SetBranchAddress("singleMu17SingleE12Group", &singleMu17SingleE12Group, &b_singleMu17SingleE12Group);
   fChain->SetBranchAddress("singleMu17SingleE12Pass", &singleMu17SingleE12Pass, &b_singleMu17SingleE12Pass);
   fChain->SetBranchAddress("singleMu17SingleE12Prescale", &singleMu17SingleE12Prescale, &b_singleMu17SingleE12Prescale);
   fChain->SetBranchAddress("singleMu19eta2p1LooseTau20Group", &singleMu19eta2p1LooseTau20Group, &b_singleMu19eta2p1LooseTau20Group);
   fChain->SetBranchAddress("singleMu19eta2p1LooseTau20Pass", &singleMu19eta2p1LooseTau20Pass, &b_singleMu19eta2p1LooseTau20Pass);
   fChain->SetBranchAddress("singleMu19eta2p1LooseTau20Prescale", &singleMu19eta2p1LooseTau20Prescale, &b_singleMu19eta2p1LooseTau20Prescale);
   fChain->SetBranchAddress("singleMu19eta2p1LooseTau20singleL1Group", &singleMu19eta2p1LooseTau20singleL1Group, &b_singleMu19eta2p1LooseTau20singleL1Group);
   fChain->SetBranchAddress("singleMu19eta2p1LooseTau20singleL1Pass", &singleMu19eta2p1LooseTau20singleL1Pass, &b_singleMu19eta2p1LooseTau20singleL1Pass);
   fChain->SetBranchAddress("singleMu19eta2p1LooseTau20singleL1Prescale", &singleMu19eta2p1LooseTau20singleL1Prescale, &b_singleMu19eta2p1LooseTau20singleL1Prescale);
   fChain->SetBranchAddress("singleMu21eta2p1LooseTau20singleL1Group", &singleMu21eta2p1LooseTau20singleL1Group, &b_singleMu21eta2p1LooseTau20singleL1Group);
   fChain->SetBranchAddress("singleMu21eta2p1LooseTau20singleL1Pass", &singleMu21eta2p1LooseTau20singleL1Pass, &b_singleMu21eta2p1LooseTau20singleL1Pass);
   fChain->SetBranchAddress("singleMu21eta2p1LooseTau20singleL1Prescale", &singleMu21eta2p1LooseTau20singleL1Prescale, &b_singleMu21eta2p1LooseTau20singleL1Prescale);
   fChain->SetBranchAddress("singleMu23SingleE12DZGroup", &singleMu23SingleE12DZGroup, &b_singleMu23SingleE12DZGroup);
   fChain->SetBranchAddress("singleMu23SingleE12DZPass", &singleMu23SingleE12DZPass, &b_singleMu23SingleE12DZPass);
   fChain->SetBranchAddress("singleMu23SingleE12DZPrescale", &singleMu23SingleE12DZPrescale, &b_singleMu23SingleE12DZPrescale);
   fChain->SetBranchAddress("singleMu23SingleE12Group", &singleMu23SingleE12Group, &b_singleMu23SingleE12Group);
   fChain->SetBranchAddress("singleMu23SingleE12Pass", &singleMu23SingleE12Pass, &b_singleMu23SingleE12Pass);
   fChain->SetBranchAddress("singleMu23SingleE12Prescale", &singleMu23SingleE12Prescale, &b_singleMu23SingleE12Prescale);
   fChain->SetBranchAddress("singleMu23SingleE8Group", &singleMu23SingleE8Group, &b_singleMu23SingleE8Group);
   fChain->SetBranchAddress("singleMu23SingleE8Pass", &singleMu23SingleE8Pass, &b_singleMu23SingleE8Pass);
   fChain->SetBranchAddress("singleMu23SingleE8Prescale", &singleMu23SingleE8Prescale, &b_singleMu23SingleE8Prescale);
   fChain->SetBranchAddress("singleMu8SingleE23DZGroup", &singleMu8SingleE23DZGroup, &b_singleMu8SingleE23DZGroup);
   fChain->SetBranchAddress("singleMu8SingleE23DZPass", &singleMu8SingleE23DZPass, &b_singleMu8SingleE23DZPass);
   fChain->SetBranchAddress("singleMu8SingleE23DZPrescale", &singleMu8SingleE23DZPrescale, &b_singleMu8SingleE23DZPrescale);
   fChain->SetBranchAddress("singleMuGroup", &singleMuGroup, &b_singleMuGroup);
   fChain->SetBranchAddress("singleMuPass", &singleMuPass, &b_singleMuPass);
   fChain->SetBranchAddress("singleMuPrescale", &singleMuPrescale, &b_singleMuPrescale);
   fChain->SetBranchAddress("singleMuSingleEGroup", &singleMuSingleEGroup, &b_singleMuSingleEGroup);
   fChain->SetBranchAddress("singleMuSingleEPass", &singleMuSingleEPass, &b_singleMuSingleEPass);
   fChain->SetBranchAddress("singleMuSingleEPrescale", &singleMuSingleEPrescale, &b_singleMuSingleEPrescale);
   fChain->SetBranchAddress("singleMu_leg1Group", &singleMu_leg1Group, &b_singleMu_leg1Group);
   fChain->SetBranchAddress("singleMu_leg1Pass", &singleMu_leg1Pass, &b_singleMu_leg1Pass);
   fChain->SetBranchAddress("singleMu_leg1Prescale", &singleMu_leg1Prescale, &b_singleMu_leg1Prescale);
   fChain->SetBranchAddress("singleMu_leg1_noisoGroup", &singleMu_leg1_noisoGroup, &b_singleMu_leg1_noisoGroup);
   fChain->SetBranchAddress("singleMu_leg1_noisoPass", &singleMu_leg1_noisoPass, &b_singleMu_leg1_noisoPass);
   fChain->SetBranchAddress("singleMu_leg1_noisoPrescale", &singleMu_leg1_noisoPrescale, &b_singleMu_leg1_noisoPrescale);
   fChain->SetBranchAddress("singleMu_leg2Group", &singleMu_leg2Group, &b_singleMu_leg2Group);
   fChain->SetBranchAddress("singleMu_leg2Pass", &singleMu_leg2Pass, &b_singleMu_leg2Pass);
   fChain->SetBranchAddress("singleMu_leg2Prescale", &singleMu_leg2Prescale, &b_singleMu_leg2Prescale);
   fChain->SetBranchAddress("singleMu_leg2_noisoGroup", &singleMu_leg2_noisoGroup, &b_singleMu_leg2_noisoGroup);
   fChain->SetBranchAddress("singleMu_leg2_noisoPass", &singleMu_leg2_noisoPass, &b_singleMu_leg2_noisoPass);
   fChain->SetBranchAddress("singleMu_leg2_noisoPrescale", &singleMu_leg2_noisoPrescale, &b_singleMu_leg2_noisoPrescale);
   fChain->SetBranchAddress("singleTau140Group", &singleTau140Group, &b_singleTau140Group);
   fChain->SetBranchAddress("singleTau140Pass", &singleTau140Pass, &b_singleTau140Pass);
   fChain->SetBranchAddress("singleTau140Prescale", &singleTau140Prescale, &b_singleTau140Prescale);
   fChain->SetBranchAddress("singleTau140Trk50Group", &singleTau140Trk50Group, &b_singleTau140Trk50Group);
   fChain->SetBranchAddress("singleTau140Trk50Pass", &singleTau140Trk50Pass, &b_singleTau140Trk50Pass);
   fChain->SetBranchAddress("singleTau140Trk50Prescale", &singleTau140Trk50Prescale, &b_singleTau140Trk50Prescale);
   fChain->SetBranchAddress("tAbsEta", &tAbsEta, &b_tAbsEta);
   fChain->SetBranchAddress("tAgainstElectronLooseMVA6", &tAgainstElectronLooseMVA6, &b_tAgainstElectronLooseMVA6);
   fChain->SetBranchAddress("tAgainstElectronMVA6Raw", &tAgainstElectronMVA6Raw, &b_tAgainstElectronMVA6Raw);
   fChain->SetBranchAddress("tAgainstElectronMVA6category", &tAgainstElectronMVA6category, &b_tAgainstElectronMVA6category);
   fChain->SetBranchAddress("tAgainstElectronMediumMVA6", &tAgainstElectronMediumMVA6, &b_tAgainstElectronMediumMVA6);
   fChain->SetBranchAddress("tAgainstElectronTightMVA6", &tAgainstElectronTightMVA6, &b_tAgainstElectronTightMVA6);
   fChain->SetBranchAddress("tAgainstElectronVLooseMVA6", &tAgainstElectronVLooseMVA6, &b_tAgainstElectronVLooseMVA6);
   fChain->SetBranchAddress("tAgainstElectronVTightMVA6", &tAgainstElectronVTightMVA6, &b_tAgainstElectronVTightMVA6);
   fChain->SetBranchAddress("tAgainstMuonLoose3", &tAgainstMuonLoose3, &b_tAgainstMuonLoose3);
   fChain->SetBranchAddress("tAgainstMuonTight3", &tAgainstMuonTight3, &b_tAgainstMuonTight3);
   fChain->SetBranchAddress("tByCombinedIsolationDeltaBetaCorrRaw3Hits", &tByCombinedIsolationDeltaBetaCorrRaw3Hits, &b_tByCombinedIsolationDeltaBetaCorrRaw3Hits);
   fChain->SetBranchAddress("tByIsolationMVArun2v1DBdR03oldDMwLTraw", &tByIsolationMVArun2v1DBdR03oldDMwLTraw, &b_tByIsolationMVArun2v1DBdR03oldDMwLTraw);
   fChain->SetBranchAddress("tByIsolationMVArun2v1DBnewDMwLTraw", &tByIsolationMVArun2v1DBnewDMwLTraw, &b_tByIsolationMVArun2v1DBnewDMwLTraw);
   fChain->SetBranchAddress("tByIsolationMVArun2v1DBoldDMwLTraw", &tByIsolationMVArun2v1DBoldDMwLTraw, &b_tByIsolationMVArun2v1DBoldDMwLTraw);
   fChain->SetBranchAddress("tByIsolationMVArun2v1PWdR03oldDMwLTraw", &tByIsolationMVArun2v1PWdR03oldDMwLTraw, &b_tByIsolationMVArun2v1PWdR03oldDMwLTraw);
   fChain->SetBranchAddress("tByIsolationMVArun2v1PWnewDMwLTraw", &tByIsolationMVArun2v1PWnewDMwLTraw, &b_tByIsolationMVArun2v1PWnewDMwLTraw);
   fChain->SetBranchAddress("tByIsolationMVArun2v1PWoldDMwLTraw", &tByIsolationMVArun2v1PWoldDMwLTraw, &b_tByIsolationMVArun2v1PWoldDMwLTraw);
   fChain->SetBranchAddress("tByLooseCombinedIsolationDeltaBetaCorr3Hits", &tByLooseCombinedIsolationDeltaBetaCorr3Hits, &b_tByLooseCombinedIsolationDeltaBetaCorr3Hits);
   fChain->SetBranchAddress("tByLooseIsolationMVArun2v1DBdR03oldDMwLT", &tByLooseIsolationMVArun2v1DBdR03oldDMwLT, &b_tByLooseIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("tByLooseIsolationMVArun2v1DBnewDMwLT", &tByLooseIsolationMVArun2v1DBnewDMwLT, &b_tByLooseIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("tByLooseIsolationMVArun2v1DBoldDMwLT", &tByLooseIsolationMVArun2v1DBoldDMwLT, &b_tByLooseIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("tByLooseIsolationMVArun2v1PWdR03oldDMwLT", &tByLooseIsolationMVArun2v1PWdR03oldDMwLT, &b_tByLooseIsolationMVArun2v1PWdR03oldDMwLT);
   fChain->SetBranchAddress("tByLooseIsolationMVArun2v1PWnewDMwLT", &tByLooseIsolationMVArun2v1PWnewDMwLT, &b_tByLooseIsolationMVArun2v1PWnewDMwLT);
   fChain->SetBranchAddress("tByLooseIsolationMVArun2v1PWoldDMwLT", &tByLooseIsolationMVArun2v1PWoldDMwLT, &b_tByLooseIsolationMVArun2v1PWoldDMwLT);
   fChain->SetBranchAddress("tByMediumCombinedIsolationDeltaBetaCorr3Hits", &tByMediumCombinedIsolationDeltaBetaCorr3Hits, &b_tByMediumCombinedIsolationDeltaBetaCorr3Hits);
   fChain->SetBranchAddress("tByMediumIsolationMVArun2v1DBdR03oldDMwLT", &tByMediumIsolationMVArun2v1DBdR03oldDMwLT, &b_tByMediumIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("tByMediumIsolationMVArun2v1DBnewDMwLT", &tByMediumIsolationMVArun2v1DBnewDMwLT, &b_tByMediumIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("tByMediumIsolationMVArun2v1DBoldDMwLT", &tByMediumIsolationMVArun2v1DBoldDMwLT, &b_tByMediumIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("tByMediumIsolationMVArun2v1PWdR03oldDMwLT", &tByMediumIsolationMVArun2v1PWdR03oldDMwLT, &b_tByMediumIsolationMVArun2v1PWdR03oldDMwLT);
   fChain->SetBranchAddress("tByMediumIsolationMVArun2v1PWnewDMwLT", &tByMediumIsolationMVArun2v1PWnewDMwLT, &b_tByMediumIsolationMVArun2v1PWnewDMwLT);
   fChain->SetBranchAddress("tByMediumIsolationMVArun2v1PWoldDMwLT", &tByMediumIsolationMVArun2v1PWoldDMwLT, &b_tByMediumIsolationMVArun2v1PWoldDMwLT);
   fChain->SetBranchAddress("tByPhotonPtSumOutsideSignalCone", &tByPhotonPtSumOutsideSignalCone, &b_tByPhotonPtSumOutsideSignalCone);
   fChain->SetBranchAddress("tByTightCombinedIsolationDeltaBetaCorr3Hits", &tByTightCombinedIsolationDeltaBetaCorr3Hits, &b_tByTightCombinedIsolationDeltaBetaCorr3Hits);
   fChain->SetBranchAddress("tByTightIsolationMVArun2v1DBdR03oldDMwLT", &tByTightIsolationMVArun2v1DBdR03oldDMwLT, &b_tByTightIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("tByTightIsolationMVArun2v1DBnewDMwLT", &tByTightIsolationMVArun2v1DBnewDMwLT, &b_tByTightIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("tByTightIsolationMVArun2v1DBoldDMwLT", &tByTightIsolationMVArun2v1DBoldDMwLT, &b_tByTightIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("tByTightIsolationMVArun2v1PWdR03oldDMwLT", &tByTightIsolationMVArun2v1PWdR03oldDMwLT, &b_tByTightIsolationMVArun2v1PWdR03oldDMwLT);
   fChain->SetBranchAddress("tByTightIsolationMVArun2v1PWnewDMwLT", &tByTightIsolationMVArun2v1PWnewDMwLT, &b_tByTightIsolationMVArun2v1PWnewDMwLT);
   fChain->SetBranchAddress("tByTightIsolationMVArun2v1PWoldDMwLT", &tByTightIsolationMVArun2v1PWoldDMwLT, &b_tByTightIsolationMVArun2v1PWoldDMwLT);
   fChain->SetBranchAddress("tByVLooseIsolationMVArun2v1DBdR03oldDMwLT", &tByVLooseIsolationMVArun2v1DBdR03oldDMwLT, &b_tByVLooseIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("tByVLooseIsolationMVArun2v1DBnewDMwLT", &tByVLooseIsolationMVArun2v1DBnewDMwLT, &b_tByVLooseIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("tByVLooseIsolationMVArun2v1DBoldDMwLT", &tByVLooseIsolationMVArun2v1DBoldDMwLT, &b_tByVLooseIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("tByVLooseIsolationMVArun2v1PWdR03oldDMwLT", &tByVLooseIsolationMVArun2v1PWdR03oldDMwLT, &b_tByVLooseIsolationMVArun2v1PWdR03oldDMwLT);
   fChain->SetBranchAddress("tByVLooseIsolationMVArun2v1PWnewDMwLT", &tByVLooseIsolationMVArun2v1PWnewDMwLT, &b_tByVLooseIsolationMVArun2v1PWnewDMwLT);
   fChain->SetBranchAddress("tByVLooseIsolationMVArun2v1PWoldDMwLT", &tByVLooseIsolationMVArun2v1PWoldDMwLT, &b_tByVLooseIsolationMVArun2v1PWoldDMwLT);
   fChain->SetBranchAddress("tByVTightIsolationMVArun2v1DBdR03oldDMwLT", &tByVTightIsolationMVArun2v1DBdR03oldDMwLT, &b_tByVTightIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("tByVTightIsolationMVArun2v1DBnewDMwLT", &tByVTightIsolationMVArun2v1DBnewDMwLT, &b_tByVTightIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("tByVTightIsolationMVArun2v1DBoldDMwLT", &tByVTightIsolationMVArun2v1DBoldDMwLT, &b_tByVTightIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("tByVTightIsolationMVArun2v1PWdR03oldDMwLT", &tByVTightIsolationMVArun2v1PWdR03oldDMwLT, &b_tByVTightIsolationMVArun2v1PWdR03oldDMwLT);
   fChain->SetBranchAddress("tByVTightIsolationMVArun2v1PWnewDMwLT", &tByVTightIsolationMVArun2v1PWnewDMwLT, &b_tByVTightIsolationMVArun2v1PWnewDMwLT);
   fChain->SetBranchAddress("tByVTightIsolationMVArun2v1PWoldDMwLT", &tByVTightIsolationMVArun2v1PWoldDMwLT, &b_tByVTightIsolationMVArun2v1PWoldDMwLT);
   fChain->SetBranchAddress("tByVVTightIsolationMVArun2v1DBdR03oldDMwLT", &tByVVTightIsolationMVArun2v1DBdR03oldDMwLT, &b_tByVVTightIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("tByVVTightIsolationMVArun2v1DBnewDMwLT", &tByVVTightIsolationMVArun2v1DBnewDMwLT, &b_tByVVTightIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("tByVVTightIsolationMVArun2v1DBoldDMwLT", &tByVVTightIsolationMVArun2v1DBoldDMwLT, &b_tByVVTightIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("tByVVTightIsolationMVArun2v1PWdR03oldDMwLT", &tByVVTightIsolationMVArun2v1PWdR03oldDMwLT, &b_tByVVTightIsolationMVArun2v1PWdR03oldDMwLT);
   fChain->SetBranchAddress("tByVVTightIsolationMVArun2v1PWnewDMwLT", &tByVVTightIsolationMVArun2v1PWnewDMwLT, &b_tByVVTightIsolationMVArun2v1PWnewDMwLT);
   fChain->SetBranchAddress("tByVVTightIsolationMVArun2v1PWoldDMwLT", &tByVVTightIsolationMVArun2v1PWoldDMwLT, &b_tByVVTightIsolationMVArun2v1PWoldDMwLT);
   fChain->SetBranchAddress("tCharge", &tCharge, &b_tCharge);
   fChain->SetBranchAddress("tChargedIsoPtSum", &tChargedIsoPtSum, &b_tChargedIsoPtSum);
   fChain->SetBranchAddress("tChargedIsoPtSumdR03", &tChargedIsoPtSumdR03, &b_tChargedIsoPtSumdR03);
   fChain->SetBranchAddress("tComesFromHiggs", &tComesFromHiggs, &b_tComesFromHiggs);
   fChain->SetBranchAddress("tDPhiToPfMet_type1", &tDPhiToPfMet_type1, &b_tDPhiToPfMet_type1);
   fChain->SetBranchAddress("tDecayMode", &tDecayMode, &b_tDecayMode);
   fChain->SetBranchAddress("tDecayModeFinding", &tDecayModeFinding, &b_tDecayModeFinding);
   fChain->SetBranchAddress("tDecayModeFindingNewDMs", &tDecayModeFindingNewDMs, &b_tDecayModeFindingNewDMs);
   fChain->SetBranchAddress("tDoubleTau32Filter", &tDoubleTau32Filter, &b_tDoubleTau32Filter);
   fChain->SetBranchAddress("tDoubleTau35Filter", &tDoubleTau35Filter, &b_tDoubleTau35Filter);
   fChain->SetBranchAddress("tDoubleTau40Filter", &tDoubleTau40Filter, &b_tDoubleTau40Filter);
   fChain->SetBranchAddress("tElecOverlap", &tElecOverlap, &b_tElecOverlap);
   fChain->SetBranchAddress("tEta", &tEta, &b_tEta);
   fChain->SetBranchAddress("tEta_TauEnDown", &tEta_TauEnDown, &b_tEta_TauEnDown);
   fChain->SetBranchAddress("tEta_TauEnUp", &tEta_TauEnUp, &b_tEta_TauEnUp);
   fChain->SetBranchAddress("tFootprintCorrection", &tFootprintCorrection, &b_tFootprintCorrection);
   fChain->SetBranchAddress("tFootprintCorrectiondR03", &tFootprintCorrectiondR03, &b_tFootprintCorrectiondR03);
   fChain->SetBranchAddress("tGenCharge", &tGenCharge, &b_tGenCharge);
   fChain->SetBranchAddress("tGenDecayMode", &tGenDecayMode, &b_tGenDecayMode);
   fChain->SetBranchAddress("tGenEnergy", &tGenEnergy, &b_tGenEnergy);
   fChain->SetBranchAddress("tGenEta", &tGenEta, &b_tGenEta);
   fChain->SetBranchAddress("tGenIsPrompt", &tGenIsPrompt, &b_tGenIsPrompt);
   fChain->SetBranchAddress("tGenJetEta", &tGenJetEta, &b_tGenJetEta);
   fChain->SetBranchAddress("tGenJetPt", &tGenJetPt, &b_tGenJetPt);
   fChain->SetBranchAddress("tGenMotherEnergy", &tGenMotherEnergy, &b_tGenMotherEnergy);
   fChain->SetBranchAddress("tGenMotherEta", &tGenMotherEta, &b_tGenMotherEta);
   fChain->SetBranchAddress("tGenMotherPdgId", &tGenMotherPdgId, &b_tGenMotherPdgId);
   fChain->SetBranchAddress("tGenMotherPhi", &tGenMotherPhi, &b_tGenMotherPhi);
   fChain->SetBranchAddress("tGenMotherPt", &tGenMotherPt, &b_tGenMotherPt);
   fChain->SetBranchAddress("tGenPdgId", &tGenPdgId, &b_tGenPdgId);
   fChain->SetBranchAddress("tGenPhi", &tGenPhi, &b_tGenPhi);
   fChain->SetBranchAddress("tGenPt", &tGenPt, &b_tGenPt);
   fChain->SetBranchAddress("tGenStatus", &tGenStatus, &b_tGenStatus);
   fChain->SetBranchAddress("tGlobalMuonVtxOverlap", &tGlobalMuonVtxOverlap, &b_tGlobalMuonVtxOverlap);
   fChain->SetBranchAddress("tJetArea", &tJetArea, &b_tJetArea);
   fChain->SetBranchAddress("tJetBtag", &tJetBtag, &b_tJetBtag);
   fChain->SetBranchAddress("tJetDR", &tJetDR, &b_tJetDR);
   fChain->SetBranchAddress("tJetEtaEtaMoment", &tJetEtaEtaMoment, &b_tJetEtaEtaMoment);
   fChain->SetBranchAddress("tJetEtaPhiMoment", &tJetEtaPhiMoment, &b_tJetEtaPhiMoment);
   fChain->SetBranchAddress("tJetEtaPhiSpread", &tJetEtaPhiSpread, &b_tJetEtaPhiSpread);
   fChain->SetBranchAddress("tJetHadronFlavour", &tJetHadronFlavour, &b_tJetHadronFlavour);
   fChain->SetBranchAddress("tJetPFCISVBtag", &tJetPFCISVBtag, &b_tJetPFCISVBtag);
   fChain->SetBranchAddress("tJetPartonFlavour", &tJetPartonFlavour, &b_tJetPartonFlavour);
   fChain->SetBranchAddress("tJetPhiPhiMoment", &tJetPhiPhiMoment, &b_tJetPhiPhiMoment);
   fChain->SetBranchAddress("tJetPt", &tJetPt, &b_tJetPt);
   fChain->SetBranchAddress("tLeadTrackPt", &tLeadTrackPt, &b_tLeadTrackPt);
   fChain->SetBranchAddress("tLowestMll", &tLowestMll, &b_tLowestMll);
   fChain->SetBranchAddress("tMass", &tMass, &b_tMass);
   fChain->SetBranchAddress("tMass_TauEnDown", &tMass_TauEnDown, &b_tMass_TauEnDown);
   fChain->SetBranchAddress("tMass_TauEnUp", &tMass_TauEnUp, &b_tMass_TauEnUp);
   fChain->SetBranchAddress("tMatchesDoubleTau32Path", &tMatchesDoubleTau32Path, &b_tMatchesDoubleTau32Path);
   fChain->SetBranchAddress("tMatchesDoubleTau35Path", &tMatchesDoubleTau35Path, &b_tMatchesDoubleTau35Path);
   fChain->SetBranchAddress("tMatchesDoubleTau40Path", &tMatchesDoubleTau40Path, &b_tMatchesDoubleTau40Path);
   fChain->SetBranchAddress("tMtToPfMet_type1", &tMtToPfMet_type1, &b_tMtToPfMet_type1);
   fChain->SetBranchAddress("tMuOverlap", &tMuOverlap, &b_tMuOverlap);
   fChain->SetBranchAddress("tMuonIdIsoStdVtxOverlap", &tMuonIdIsoStdVtxOverlap, &b_tMuonIdIsoStdVtxOverlap);
   fChain->SetBranchAddress("tMuonIdIsoVtxOverlap", &tMuonIdIsoVtxOverlap, &b_tMuonIdIsoVtxOverlap);
   fChain->SetBranchAddress("tMuonIdVtxOverlap", &tMuonIdVtxOverlap, &b_tMuonIdVtxOverlap);
   fChain->SetBranchAddress("tNChrgHadrIsolationCands", &tNChrgHadrIsolationCands, &b_tNChrgHadrIsolationCands);
   fChain->SetBranchAddress("tNChrgHadrSignalCands", &tNChrgHadrSignalCands, &b_tNChrgHadrSignalCands);
   fChain->SetBranchAddress("tNGammaSignalCands", &tNGammaSignalCands, &b_tNGammaSignalCands);
   fChain->SetBranchAddress("tNNeutralHadrSignalCands", &tNNeutralHadrSignalCands, &b_tNNeutralHadrSignalCands);
   fChain->SetBranchAddress("tNSignalCands", &tNSignalCands, &b_tNSignalCands);
   fChain->SetBranchAddress("tNearestZMass", &tNearestZMass, &b_tNearestZMass);
   fChain->SetBranchAddress("tNeutralIsoPtSum", &tNeutralIsoPtSum, &b_tNeutralIsoPtSum);
   fChain->SetBranchAddress("tNeutralIsoPtSumWeight", &tNeutralIsoPtSumWeight, &b_tNeutralIsoPtSumWeight);
   fChain->SetBranchAddress("tNeutralIsoPtSumWeightdR03", &tNeutralIsoPtSumWeightdR03, &b_tNeutralIsoPtSumWeightdR03);
   fChain->SetBranchAddress("tNeutralIsoPtSumdR03", &tNeutralIsoPtSumdR03, &b_tNeutralIsoPtSumdR03);
   fChain->SetBranchAddress("tPVDXY", &tPVDXY, &b_tPVDXY);
   fChain->SetBranchAddress("tPVDZ", &tPVDZ, &b_tPVDZ);
   fChain->SetBranchAddress("tPhi", &tPhi, &b_tPhi);
   fChain->SetBranchAddress("tPhi_TauEnDown", &tPhi_TauEnDown, &b_tPhi_TauEnDown);
   fChain->SetBranchAddress("tPhi_TauEnUp", &tPhi_TauEnUp, &b_tPhi_TauEnUp);
   fChain->SetBranchAddress("tPhotonPtSumOutsideSignalCone", &tPhotonPtSumOutsideSignalCone, &b_tPhotonPtSumOutsideSignalCone);
   fChain->SetBranchAddress("tPhotonPtSumOutsideSignalConedR03", &tPhotonPtSumOutsideSignalConedR03, &b_tPhotonPtSumOutsideSignalConedR03);
   fChain->SetBranchAddress("tPt", &tPt, &b_tPt);
   fChain->SetBranchAddress("tPt_TauEnDown", &tPt_TauEnDown, &b_tPt_TauEnDown);
   fChain->SetBranchAddress("tPt_TauEnUp", &tPt_TauEnUp, &b_tPt_TauEnUp);
   fChain->SetBranchAddress("tPuCorrPtSum", &tPuCorrPtSum, &b_tPuCorrPtSum);
   fChain->SetBranchAddress("tRank", &tRank, &b_tRank);
   fChain->SetBranchAddress("tVZ", &tVZ, &b_tVZ);
   fChain->SetBranchAddress("tZTTGenDR", &tZTTGenDR, &b_tZTTGenDR);
   fChain->SetBranchAddress("tZTTGenEta", &tZTTGenEta, &b_tZTTGenEta);
   fChain->SetBranchAddress("tZTTGenMatching", &tZTTGenMatching, &b_tZTTGenMatching);
   fChain->SetBranchAddress("tZTTGenPhi", &tZTTGenPhi, &b_tZTTGenPhi);
   fChain->SetBranchAddress("tZTTGenPt", &tZTTGenPt, &b_tZTTGenPt);
   fChain->SetBranchAddress("t_e1_collinearmass", &t_e1_collinearmass, &b_t_e1_collinearmass);
   fChain->SetBranchAddress("t_e1_collinearmass_CheckUESDown", &t_e1_collinearmass_CheckUESDown, &b_t_e1_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("t_e1_collinearmass_CheckUESUp", &t_e1_collinearmass_CheckUESUp, &b_t_e1_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("t_e1_collinearmass_JetCheckTotalDown", &t_e1_collinearmass_JetCheckTotalDown, &b_t_e1_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("t_e1_collinearmass_JetCheckTotalUp", &t_e1_collinearmass_JetCheckTotalUp, &b_t_e1_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("t_e1_collinearmass_JetEnDown", &t_e1_collinearmass_JetEnDown, &b_t_e1_collinearmass_JetEnDown);
   fChain->SetBranchAddress("t_e1_collinearmass_JetEnUp", &t_e1_collinearmass_JetEnUp, &b_t_e1_collinearmass_JetEnUp);
   fChain->SetBranchAddress("t_e1_collinearmass_UnclusteredEnDown", &t_e1_collinearmass_UnclusteredEnDown, &b_t_e1_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("t_e1_collinearmass_UnclusteredEnUp", &t_e1_collinearmass_UnclusteredEnUp, &b_t_e1_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("t_e2_collinearmass", &t_e2_collinearmass, &b_t_e2_collinearmass);
   fChain->SetBranchAddress("t_e2_collinearmass_CheckUESDown", &t_e2_collinearmass_CheckUESDown, &b_t_e2_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("t_e2_collinearmass_CheckUESUp", &t_e2_collinearmass_CheckUESUp, &b_t_e2_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("t_e2_collinearmass_JetCheckTotalDown", &t_e2_collinearmass_JetCheckTotalDown, &b_t_e2_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("t_e2_collinearmass_JetCheckTotalUp", &t_e2_collinearmass_JetCheckTotalUp, &b_t_e2_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("t_e2_collinearmass_JetEnDown", &t_e2_collinearmass_JetEnDown, &b_t_e2_collinearmass_JetEnDown);
   fChain->SetBranchAddress("t_e2_collinearmass_JetEnUp", &t_e2_collinearmass_JetEnUp, &b_t_e2_collinearmass_JetEnUp);
   fChain->SetBranchAddress("t_e2_collinearmass_UnclusteredEnDown", &t_e2_collinearmass_UnclusteredEnDown, &b_t_e2_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("t_e2_collinearmass_UnclusteredEnUp", &t_e2_collinearmass_UnclusteredEnUp, &b_t_e2_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("t_m_collinearmass", &t_m_collinearmass, &b_t_m_collinearmass);
   fChain->SetBranchAddress("t_m_collinearmass_CheckUESDown", &t_m_collinearmass_CheckUESDown, &b_t_m_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("t_m_collinearmass_CheckUESUp", &t_m_collinearmass_CheckUESUp, &b_t_m_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("t_m_collinearmass_JetCheckTotalDown", &t_m_collinearmass_JetCheckTotalDown, &b_t_m_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("t_m_collinearmass_JetCheckTotalUp", &t_m_collinearmass_JetCheckTotalUp, &b_t_m_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("t_m_collinearmass_JetEnDown", &t_m_collinearmass_JetEnDown, &b_t_m_collinearmass_JetEnDown);
   fChain->SetBranchAddress("t_m_collinearmass_JetEnUp", &t_m_collinearmass_JetEnUp, &b_t_m_collinearmass_JetEnUp);
   fChain->SetBranchAddress("t_m_collinearmass_UnclusteredEnDown", &t_m_collinearmass_UnclusteredEnDown, &b_t_m_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("t_m_collinearmass_UnclusteredEnUp", &t_m_collinearmass_UnclusteredEnUp, &b_t_m_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("tauVetoPt20Loose3HitsVtx", &tauVetoPt20Loose3HitsVtx, &b_tauVetoPt20Loose3HitsVtx);
   fChain->SetBranchAddress("tauVetoPt20TightMVALTVtx", &tauVetoPt20TightMVALTVtx, &b_tauVetoPt20TightMVALTVtx);
   fChain->SetBranchAddress("topQuarkPt1", &topQuarkPt1, &b_topQuarkPt1);
   fChain->SetBranchAddress("topQuarkPt2", &topQuarkPt2, &b_topQuarkPt2);
   fChain->SetBranchAddress("tripleEGroup", &tripleEGroup, &b_tripleEGroup);
   fChain->SetBranchAddress("tripleEPass", &tripleEPass, &b_tripleEPass);
   fChain->SetBranchAddress("tripleEPrescale", &tripleEPrescale, &b_tripleEPrescale);
   fChain->SetBranchAddress("tripleMuGroup", &tripleMuGroup, &b_tripleMuGroup);
   fChain->SetBranchAddress("tripleMuPass", &tripleMuPass, &b_tripleMuPass);
   fChain->SetBranchAddress("tripleMuPrescale", &tripleMuPrescale, &b_tripleMuPrescale);
   fChain->SetBranchAddress("type1_pfMetEt", &type1_pfMetEt, &b_type1_pfMetEt);
   fChain->SetBranchAddress("type1_pfMetPhi", &type1_pfMetPhi, &b_type1_pfMetPhi);
   fChain->SetBranchAddress("vbfDeta", &vbfDeta, &b_vbfDeta);
   fChain->SetBranchAddress("vbfDetaZTT", &vbfDetaZTT, &b_vbfDetaZTT);
   fChain->SetBranchAddress("vbfDeta_JetEnDown", &vbfDeta_JetEnDown, &b_vbfDeta_JetEnDown);
   fChain->SetBranchAddress("vbfDeta_JetEnUp", &vbfDeta_JetEnUp, &b_vbfDeta_JetEnUp);
   fChain->SetBranchAddress("vbfDijetPtZTT", &vbfDijetPtZTT, &b_vbfDijetPtZTT);
   fChain->SetBranchAddress("vbfDijetrap", &vbfDijetrap, &b_vbfDijetrap);
   fChain->SetBranchAddress("vbfDijetrap_JetEnDown", &vbfDijetrap_JetEnDown, &b_vbfDijetrap_JetEnDown);
   fChain->SetBranchAddress("vbfDijetrap_JetEnUp", &vbfDijetrap_JetEnUp, &b_vbfDijetrap_JetEnUp);
   fChain->SetBranchAddress("vbfDphi", &vbfDphi, &b_vbfDphi);
   fChain->SetBranchAddress("vbfDphiZTT", &vbfDphiZTT, &b_vbfDphiZTT);
   fChain->SetBranchAddress("vbfDphi_JetEnDown", &vbfDphi_JetEnDown, &b_vbfDphi_JetEnDown);
   fChain->SetBranchAddress("vbfDphi_JetEnUp", &vbfDphi_JetEnUp, &b_vbfDphi_JetEnUp);
   fChain->SetBranchAddress("vbfDphihj", &vbfDphihj, &b_vbfDphihj);
   fChain->SetBranchAddress("vbfDphihj_JetEnDown", &vbfDphihj_JetEnDown, &b_vbfDphihj_JetEnDown);
   fChain->SetBranchAddress("vbfDphihj_JetEnUp", &vbfDphihj_JetEnUp, &b_vbfDphihj_JetEnUp);
   fChain->SetBranchAddress("vbfDphihjnomet", &vbfDphihjnomet, &b_vbfDphihjnomet);
   fChain->SetBranchAddress("vbfDphihjnomet_JetEnDown", &vbfDphihjnomet_JetEnDown, &b_vbfDphihjnomet_JetEnDown);
   fChain->SetBranchAddress("vbfDphihjnomet_JetEnUp", &vbfDphihjnomet_JetEnUp, &b_vbfDphihjnomet_JetEnUp);
   fChain->SetBranchAddress("vbfHrap", &vbfHrap, &b_vbfHrap);
   fChain->SetBranchAddress("vbfHrap_JetEnDown", &vbfHrap_JetEnDown, &b_vbfHrap_JetEnDown);
   fChain->SetBranchAddress("vbfHrap_JetEnUp", &vbfHrap_JetEnUp, &b_vbfHrap_JetEnUp);
   fChain->SetBranchAddress("vbfJetVeto20", &vbfJetVeto20, &b_vbfJetVeto20);
   fChain->SetBranchAddress("vbfJetVeto20ZTT", &vbfJetVeto20ZTT, &b_vbfJetVeto20ZTT);
   fChain->SetBranchAddress("vbfJetVeto20_JetEnDown", &vbfJetVeto20_JetEnDown, &b_vbfJetVeto20_JetEnDown);
   fChain->SetBranchAddress("vbfJetVeto20_JetEnUp", &vbfJetVeto20_JetEnUp, &b_vbfJetVeto20_JetEnUp);
   fChain->SetBranchAddress("vbfJetVeto30", &vbfJetVeto30, &b_vbfJetVeto30);
   fChain->SetBranchAddress("vbfJetVeto30ZTT", &vbfJetVeto30ZTT, &b_vbfJetVeto30ZTT);
   fChain->SetBranchAddress("vbfJetVeto30_JetEnDown", &vbfJetVeto30_JetEnDown, &b_vbfJetVeto30_JetEnDown);
   fChain->SetBranchAddress("vbfJetVeto30_JetEnUp", &vbfJetVeto30_JetEnUp, &b_vbfJetVeto30_JetEnUp);
   fChain->SetBranchAddress("vbfMVA", &vbfMVA, &b_vbfMVA);
   fChain->SetBranchAddress("vbfMVA_JetEnDown", &vbfMVA_JetEnDown, &b_vbfMVA_JetEnDown);
   fChain->SetBranchAddress("vbfMVA_JetEnUp", &vbfMVA_JetEnUp, &b_vbfMVA_JetEnUp);
   fChain->SetBranchAddress("vbfMass", &vbfMass, &b_vbfMass);
   fChain->SetBranchAddress("vbfMassZTT", &vbfMassZTT, &b_vbfMassZTT);
   fChain->SetBranchAddress("vbfMass_JetEnDown", &vbfMass_JetEnDown, &b_vbfMass_JetEnDown);
   fChain->SetBranchAddress("vbfMass_JetEnUp", &vbfMass_JetEnUp, &b_vbfMass_JetEnUp);
   fChain->SetBranchAddress("vbfNJets20", &vbfNJets20, &b_vbfNJets20);
   fChain->SetBranchAddress("vbfNJets20_JetEnDown", &vbfNJets20_JetEnDown, &b_vbfNJets20_JetEnDown);
   fChain->SetBranchAddress("vbfNJets20_JetEnUp", &vbfNJets20_JetEnUp, &b_vbfNJets20_JetEnUp);
   fChain->SetBranchAddress("vbfNJets30", &vbfNJets30, &b_vbfNJets30);
   fChain->SetBranchAddress("vbfNJets30_JetEnDown", &vbfNJets30_JetEnDown, &b_vbfNJets30_JetEnDown);
   fChain->SetBranchAddress("vbfNJets30_JetEnUp", &vbfNJets30_JetEnUp, &b_vbfNJets30_JetEnUp);
   fChain->SetBranchAddress("vbfVispt", &vbfVispt, &b_vbfVispt);
   fChain->SetBranchAddress("vbfVispt_JetEnDown", &vbfVispt_JetEnDown, &b_vbfVispt_JetEnDown);
   fChain->SetBranchAddress("vbfVispt_JetEnUp", &vbfVispt_JetEnUp, &b_vbfVispt_JetEnUp);
   fChain->SetBranchAddress("vbfdijetpt", &vbfdijetpt, &b_vbfdijetpt);
   fChain->SetBranchAddress("vbfdijetpt_JetEnDown", &vbfdijetpt_JetEnDown, &b_vbfdijetpt_JetEnDown);
   fChain->SetBranchAddress("vbfdijetpt_JetEnUp", &vbfdijetpt_JetEnUp, &b_vbfdijetpt_JetEnUp);
   fChain->SetBranchAddress("vbfj1eta", &vbfj1eta, &b_vbfj1eta);
   fChain->SetBranchAddress("vbfj1eta_JetEnDown", &vbfj1eta_JetEnDown, &b_vbfj1eta_JetEnDown);
   fChain->SetBranchAddress("vbfj1eta_JetEnUp", &vbfj1eta_JetEnUp, &b_vbfj1eta_JetEnUp);
   fChain->SetBranchAddress("vbfj1pt", &vbfj1pt, &b_vbfj1pt);
   fChain->SetBranchAddress("vbfj1pt_JetEnDown", &vbfj1pt_JetEnDown, &b_vbfj1pt_JetEnDown);
   fChain->SetBranchAddress("vbfj1pt_JetEnUp", &vbfj1pt_JetEnUp, &b_vbfj1pt_JetEnUp);
   fChain->SetBranchAddress("vbfj2eta", &vbfj2eta, &b_vbfj2eta);
   fChain->SetBranchAddress("vbfj2eta_JetEnDown", &vbfj2eta_JetEnDown, &b_vbfj2eta_JetEnDown);
   fChain->SetBranchAddress("vbfj2eta_JetEnUp", &vbfj2eta_JetEnUp, &b_vbfj2eta_JetEnUp);
   fChain->SetBranchAddress("vbfj2pt", &vbfj2pt, &b_vbfj2pt);
   fChain->SetBranchAddress("vbfj2pt_JetEnDown", &vbfj2pt_JetEnDown, &b_vbfj2pt_JetEnDown);
   fChain->SetBranchAddress("vbfj2pt_JetEnUp", &vbfj2pt_JetEnUp, &b_vbfj2pt_JetEnUp);
   fChain->SetBranchAddress("vispX", &vispX, &b_vispX);
   fChain->SetBranchAddress("vispY", &vispY, &b_vispY);
   fChain->SetBranchAddress("idx", &idx, &b_idx);
   Notify();
}

Bool_t runchannelEEMT::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void runchannelEEMT::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t runchannelEEMT::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef runchannelEEMT_cxx
