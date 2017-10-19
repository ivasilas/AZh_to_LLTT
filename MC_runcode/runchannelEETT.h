//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Oct 18 00:26:49 2017 by ROOT version 6.11/01
// from TTree Ntuple/Expression Ntuple
// found on file: make_ntuples_cfg-0EF04163-2FE5-E611-9FAD-FA163E30BC70.root
//////////////////////////////////////////////////////////

#ifndef runchannelEETT_h
#define runchannelEETT_h

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

class runchannelEETT {
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
   Float_t         e1_t1_CosThetaStar;
   Float_t         e1_t1_DPhi;
   Float_t         e1_t1_DR;
   Float_t         e1_t1_Eta;
   Float_t         e1_t1_Mass;
   Float_t         e1_t1_Mass_TauEnDown;
   Float_t         e1_t1_Mass_TauEnUp;
   Float_t         e1_t1_Mt;
   Float_t         e1_t1_MtTotal;
   Float_t         e1_t1_Mt_TauEnDown;
   Float_t         e1_t1_Mt_TauEnUp;
   Float_t         e1_t1_MvaMet;
   Float_t         e1_t1_MvaMetCovMatrix00;
   Float_t         e1_t1_MvaMetCovMatrix01;
   Float_t         e1_t1_MvaMetCovMatrix10;
   Float_t         e1_t1_MvaMetCovMatrix11;
   Float_t         e1_t1_MvaMetPhi;
   Float_t         e1_t1_PZeta;
   Float_t         e1_t1_PZetaLess0p85PZetaVis;
   Float_t         e1_t1_PZetaVis;
   Float_t         e1_t1_Phi;
   Float_t         e1_t1_Pt;
   Float_t         e1_t1_SS;
   Float_t         e1_t1_ToMETDPhi_Ty1;
   Float_t         e1_t1_collinearmass;
   Float_t         e1_t1_collinearmass_CheckUESDown;
   Float_t         e1_t1_collinearmass_CheckUESUp;
   Float_t         e1_t1_collinearmass_EleEnDown;
   Float_t         e1_t1_collinearmass_EleEnUp;
   Float_t         e1_t1_collinearmass_JetCheckTotalDown;
   Float_t         e1_t1_collinearmass_JetCheckTotalUp;
   Float_t         e1_t1_collinearmass_JetEnDown;
   Float_t         e1_t1_collinearmass_JetEnUp;
   Float_t         e1_t1_collinearmass_MuEnDown;
   Float_t         e1_t1_collinearmass_MuEnUp;
   Float_t         e1_t1_collinearmass_TauEnDown;
   Float_t         e1_t1_collinearmass_TauEnUp;
   Float_t         e1_t1_collinearmass_UnclusteredEnDown;
   Float_t         e1_t1_collinearmass_UnclusteredEnUp;
   Float_t         e1_t1_pt_tt;
   Float_t         e1_t2_CosThetaStar;
   Float_t         e1_t2_DPhi;
   Float_t         e1_t2_DR;
   Float_t         e1_t2_Eta;
   Float_t         e1_t2_Mass;
   Float_t         e1_t2_Mass_TauEnDown;
   Float_t         e1_t2_Mass_TauEnUp;
   Float_t         e1_t2_Mt;
   Float_t         e1_t2_MtTotal;
   Float_t         e1_t2_Mt_TauEnDown;
   Float_t         e1_t2_Mt_TauEnUp;
   Float_t         e1_t2_MvaMet;
   Float_t         e1_t2_MvaMetCovMatrix00;
   Float_t         e1_t2_MvaMetCovMatrix01;
   Float_t         e1_t2_MvaMetCovMatrix10;
   Float_t         e1_t2_MvaMetCovMatrix11;
   Float_t         e1_t2_MvaMetPhi;
   Float_t         e1_t2_PZeta;
   Float_t         e1_t2_PZetaLess0p85PZetaVis;
   Float_t         e1_t2_PZetaVis;
   Float_t         e1_t2_Phi;
   Float_t         e1_t2_Pt;
   Float_t         e1_t2_SS;
   Float_t         e1_t2_ToMETDPhi_Ty1;
   Float_t         e1_t2_collinearmass;
   Float_t         e1_t2_collinearmass_CheckUESDown;
   Float_t         e1_t2_collinearmass_CheckUESUp;
   Float_t         e1_t2_collinearmass_EleEnDown;
   Float_t         e1_t2_collinearmass_EleEnUp;
   Float_t         e1_t2_collinearmass_JetCheckTotalDown;
   Float_t         e1_t2_collinearmass_JetCheckTotalUp;
   Float_t         e1_t2_collinearmass_JetEnDown;
   Float_t         e1_t2_collinearmass_JetEnUp;
   Float_t         e1_t2_collinearmass_MuEnDown;
   Float_t         e1_t2_collinearmass_MuEnUp;
   Float_t         e1_t2_collinearmass_TauEnDown;
   Float_t         e1_t2_collinearmass_TauEnUp;
   Float_t         e1_t2_collinearmass_UnclusteredEnDown;
   Float_t         e1_t2_collinearmass_UnclusteredEnUp;
   Float_t         e1_t2_pt_tt;
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
   Float_t         e2_t1_CosThetaStar;
   Float_t         e2_t1_DPhi;
   Float_t         e2_t1_DR;
   Float_t         e2_t1_Eta;
   Float_t         e2_t1_Mass;
   Float_t         e2_t1_Mass_TauEnDown;
   Float_t         e2_t1_Mass_TauEnUp;
   Float_t         e2_t1_Mt;
   Float_t         e2_t1_MtTotal;
   Float_t         e2_t1_Mt_TauEnDown;
   Float_t         e2_t1_Mt_TauEnUp;
   Float_t         e2_t1_MvaMet;
   Float_t         e2_t1_MvaMetCovMatrix00;
   Float_t         e2_t1_MvaMetCovMatrix01;
   Float_t         e2_t1_MvaMetCovMatrix10;
   Float_t         e2_t1_MvaMetCovMatrix11;
   Float_t         e2_t1_MvaMetPhi;
   Float_t         e2_t1_PZeta;
   Float_t         e2_t1_PZetaLess0p85PZetaVis;
   Float_t         e2_t1_PZetaVis;
   Float_t         e2_t1_Phi;
   Float_t         e2_t1_Pt;
   Float_t         e2_t1_SS;
   Float_t         e2_t1_ToMETDPhi_Ty1;
   Float_t         e2_t1_collinearmass;
   Float_t         e2_t1_collinearmass_CheckUESDown;
   Float_t         e2_t1_collinearmass_CheckUESUp;
   Float_t         e2_t1_collinearmass_EleEnDown;
   Float_t         e2_t1_collinearmass_EleEnUp;
   Float_t         e2_t1_collinearmass_JetCheckTotalDown;
   Float_t         e2_t1_collinearmass_JetCheckTotalUp;
   Float_t         e2_t1_collinearmass_JetEnDown;
   Float_t         e2_t1_collinearmass_JetEnUp;
   Float_t         e2_t1_collinearmass_MuEnDown;
   Float_t         e2_t1_collinearmass_MuEnUp;
   Float_t         e2_t1_collinearmass_TauEnDown;
   Float_t         e2_t1_collinearmass_TauEnUp;
   Float_t         e2_t1_collinearmass_UnclusteredEnDown;
   Float_t         e2_t1_collinearmass_UnclusteredEnUp;
   Float_t         e2_t1_pt_tt;
   Float_t         e2_t2_CosThetaStar;
   Float_t         e2_t2_DPhi;
   Float_t         e2_t2_DR;
   Float_t         e2_t2_Eta;
   Float_t         e2_t2_Mass;
   Float_t         e2_t2_Mass_TauEnDown;
   Float_t         e2_t2_Mass_TauEnUp;
   Float_t         e2_t2_Mt;
   Float_t         e2_t2_MtTotal;
   Float_t         e2_t2_Mt_TauEnDown;
   Float_t         e2_t2_Mt_TauEnUp;
   Float_t         e2_t2_MvaMet;
   Float_t         e2_t2_MvaMetCovMatrix00;
   Float_t         e2_t2_MvaMetCovMatrix01;
   Float_t         e2_t2_MvaMetCovMatrix10;
   Float_t         e2_t2_MvaMetCovMatrix11;
   Float_t         e2_t2_MvaMetPhi;
   Float_t         e2_t2_PZeta;
   Float_t         e2_t2_PZetaLess0p85PZetaVis;
   Float_t         e2_t2_PZetaVis;
   Float_t         e2_t2_Phi;
   Float_t         e2_t2_Pt;
   Float_t         e2_t2_SS;
   Float_t         e2_t2_ToMETDPhi_Ty1;
   Float_t         e2_t2_collinearmass;
   Float_t         e2_t2_collinearmass_CheckUESDown;
   Float_t         e2_t2_collinearmass_CheckUESUp;
   Float_t         e2_t2_collinearmass_EleEnDown;
   Float_t         e2_t2_collinearmass_EleEnUp;
   Float_t         e2_t2_collinearmass_JetCheckTotalDown;
   Float_t         e2_t2_collinearmass_JetCheckTotalUp;
   Float_t         e2_t2_collinearmass_JetEnDown;
   Float_t         e2_t2_collinearmass_JetEnUp;
   Float_t         e2_t2_collinearmass_MuEnDown;
   Float_t         e2_t2_collinearmass_MuEnUp;
   Float_t         e2_t2_collinearmass_TauEnDown;
   Float_t         e2_t2_collinearmass_TauEnUp;
   Float_t         e2_t2_collinearmass_UnclusteredEnDown;
   Float_t         e2_t2_collinearmass_UnclusteredEnUp;
   Float_t         e2_t2_pt_tt;
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
   Float_t         t1AbsEta;
   Float_t         t1AgainstElectronLooseMVA6;
   Float_t         t1AgainstElectronMVA6Raw;
   Float_t         t1AgainstElectronMVA6category;
   Float_t         t1AgainstElectronMediumMVA6;
   Float_t         t1AgainstElectronTightMVA6;
   Float_t         t1AgainstElectronVLooseMVA6;
   Float_t         t1AgainstElectronVTightMVA6;
   Float_t         t1AgainstMuonLoose3;
   Float_t         t1AgainstMuonTight3;
   Float_t         t1ByCombinedIsolationDeltaBetaCorrRaw3Hits;
   Float_t         t1ByIsolationMVArun2v1DBdR03oldDMwLTraw;
   Float_t         t1ByIsolationMVArun2v1DBnewDMwLTraw;
   Float_t         t1ByIsolationMVArun2v1DBoldDMwLTraw;
   Float_t         t1ByIsolationMVArun2v1PWdR03oldDMwLTraw;
   Float_t         t1ByIsolationMVArun2v1PWnewDMwLTraw;
   Float_t         t1ByIsolationMVArun2v1PWoldDMwLTraw;
   Float_t         t1ByLooseCombinedIsolationDeltaBetaCorr3Hits;
   Float_t         t1ByLooseIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         t1ByLooseIsolationMVArun2v1DBnewDMwLT;
   Float_t         t1ByLooseIsolationMVArun2v1DBoldDMwLT;
   Float_t         t1ByLooseIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         t1ByLooseIsolationMVArun2v1PWnewDMwLT;
   Float_t         t1ByLooseIsolationMVArun2v1PWoldDMwLT;
   Float_t         t1ByMediumCombinedIsolationDeltaBetaCorr3Hits;
   Float_t         t1ByMediumIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         t1ByMediumIsolationMVArun2v1DBnewDMwLT;
   Float_t         t1ByMediumIsolationMVArun2v1DBoldDMwLT;
   Float_t         t1ByMediumIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         t1ByMediumIsolationMVArun2v1PWnewDMwLT;
   Float_t         t1ByMediumIsolationMVArun2v1PWoldDMwLT;
   Float_t         t1ByPhotonPtSumOutsideSignalCone;
   Float_t         t1ByTightCombinedIsolationDeltaBetaCorr3Hits;
   Float_t         t1ByTightIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         t1ByTightIsolationMVArun2v1DBnewDMwLT;
   Float_t         t1ByTightIsolationMVArun2v1DBoldDMwLT;
   Float_t         t1ByTightIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         t1ByTightIsolationMVArun2v1PWnewDMwLT;
   Float_t         t1ByTightIsolationMVArun2v1PWoldDMwLT;
   Float_t         t1ByVLooseIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         t1ByVLooseIsolationMVArun2v1DBnewDMwLT;
   Float_t         t1ByVLooseIsolationMVArun2v1DBoldDMwLT;
   Float_t         t1ByVLooseIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         t1ByVLooseIsolationMVArun2v1PWnewDMwLT;
   Float_t         t1ByVLooseIsolationMVArun2v1PWoldDMwLT;
   Float_t         t1ByVTightIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         t1ByVTightIsolationMVArun2v1DBnewDMwLT;
   Float_t         t1ByVTightIsolationMVArun2v1DBoldDMwLT;
   Float_t         t1ByVTightIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         t1ByVTightIsolationMVArun2v1PWnewDMwLT;
   Float_t         t1ByVTightIsolationMVArun2v1PWoldDMwLT;
   Float_t         t1ByVVTightIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         t1ByVVTightIsolationMVArun2v1DBnewDMwLT;
   Float_t         t1ByVVTightIsolationMVArun2v1DBoldDMwLT;
   Float_t         t1ByVVTightIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         t1ByVVTightIsolationMVArun2v1PWnewDMwLT;
   Float_t         t1ByVVTightIsolationMVArun2v1PWoldDMwLT;
   Float_t         t1Charge;
   Float_t         t1ChargedIsoPtSum;
   Float_t         t1ChargedIsoPtSumdR03;
   Float_t         t1ComesFromHiggs;
   Float_t         t1DPhiToPfMet_type1;
   Float_t         t1DecayMode;
   Float_t         t1DecayModeFinding;
   Float_t         t1DecayModeFindingNewDMs;
   Float_t         t1DoubleTau32Filter;
   Float_t         t1DoubleTau35Filter;
   Float_t         t1DoubleTau40Filter;
   Float_t         t1ElecOverlap;
   Float_t         t1Eta;
   Float_t         t1Eta_TauEnDown;
   Float_t         t1Eta_TauEnUp;
   Float_t         t1FootprintCorrection;
   Float_t         t1FootprintCorrectiondR03;
   Float_t         t1GenCharge;
   Float_t         t1GenDecayMode;
   Float_t         t1GenEnergy;
   Float_t         t1GenEta;
   Float_t         t1GenIsPrompt;
   Float_t         t1GenJetEta;
   Float_t         t1GenJetPt;
   Float_t         t1GenMotherEnergy;
   Float_t         t1GenMotherEta;
   Float_t         t1GenMotherPdgId;
   Float_t         t1GenMotherPhi;
   Float_t         t1GenMotherPt;
   Float_t         t1GenPdgId;
   Float_t         t1GenPhi;
   Float_t         t1GenPt;
   Float_t         t1GenStatus;
   Float_t         t1GlobalMuonVtxOverlap;
   Float_t         t1JetArea;
   Float_t         t1JetBtag;
   Float_t         t1JetDR;
   Float_t         t1JetEtaEtaMoment;
   Float_t         t1JetEtaPhiMoment;
   Float_t         t1JetEtaPhiSpread;
   Float_t         t1JetHadronFlavour;
   Float_t         t1JetPFCISVBtag;
   Float_t         t1JetPartonFlavour;
   Float_t         t1JetPhiPhiMoment;
   Float_t         t1JetPt;
   Float_t         t1LeadTrackPt;
   Float_t         t1LowestMll;
   Float_t         t1Mass;
   Float_t         t1Mass_TauEnDown;
   Float_t         t1Mass_TauEnUp;
   Float_t         t1MatchesDoubleTau32Path;
   Float_t         t1MatchesDoubleTau35Path;
   Float_t         t1MatchesDoubleTau40Path;
   Float_t         t1MtToPfMet_type1;
   Float_t         t1MuOverlap;
   Float_t         t1MuonIdIsoStdVtxOverlap;
   Float_t         t1MuonIdIsoVtxOverlap;
   Float_t         t1MuonIdVtxOverlap;
   Float_t         t1NChrgHadrIsolationCands;
   Float_t         t1NChrgHadrSignalCands;
   Float_t         t1NGammaSignalCands;
   Float_t         t1NNeutralHadrSignalCands;
   Float_t         t1NSignalCands;
   Float_t         t1NearestZMass;
   Float_t         t1NeutralIsoPtSum;
   Float_t         t1NeutralIsoPtSumWeight;
   Float_t         t1NeutralIsoPtSumWeightdR03;
   Float_t         t1NeutralIsoPtSumdR03;
   Float_t         t1PVDXY;
   Float_t         t1PVDZ;
   Float_t         t1Phi;
   Float_t         t1Phi_TauEnDown;
   Float_t         t1Phi_TauEnUp;
   Float_t         t1PhotonPtSumOutsideSignalCone;
   Float_t         t1PhotonPtSumOutsideSignalConedR03;
   Float_t         t1Pt;
   Float_t         t1Pt_TauEnDown;
   Float_t         t1Pt_TauEnUp;
   Float_t         t1PuCorrPtSum;
   Float_t         t1Rank;
   Float_t         t1VZ;
   Float_t         t1ZTTGenDR;
   Float_t         t1ZTTGenEta;
   Float_t         t1ZTTGenMatching;
   Float_t         t1ZTTGenPhi;
   Float_t         t1ZTTGenPt;
   Float_t         t1_e1_collinearmass;
   Float_t         t1_e1_collinearmass_CheckUESDown;
   Float_t         t1_e1_collinearmass_CheckUESUp;
   Float_t         t1_e1_collinearmass_JetCheckTotalDown;
   Float_t         t1_e1_collinearmass_JetCheckTotalUp;
   Float_t         t1_e1_collinearmass_JetEnDown;
   Float_t         t1_e1_collinearmass_JetEnUp;
   Float_t         t1_e1_collinearmass_UnclusteredEnDown;
   Float_t         t1_e1_collinearmass_UnclusteredEnUp;
   Float_t         t1_e2_collinearmass;
   Float_t         t1_e2_collinearmass_CheckUESDown;
   Float_t         t1_e2_collinearmass_CheckUESUp;
   Float_t         t1_e2_collinearmass_JetCheckTotalDown;
   Float_t         t1_e2_collinearmass_JetCheckTotalUp;
   Float_t         t1_e2_collinearmass_JetEnDown;
   Float_t         t1_e2_collinearmass_JetEnUp;
   Float_t         t1_e2_collinearmass_UnclusteredEnDown;
   Float_t         t1_e2_collinearmass_UnclusteredEnUp;
   Float_t         t1_t2_CosThetaStar;
   Float_t         t1_t2_DPhi;
   Float_t         t1_t2_DR;
   Float_t         t1_t2_Eta;
   Float_t         t1_t2_Mass;
   Float_t         t1_t2_Mass_TauEnDown;
   Float_t         t1_t2_Mass_TauEnUp;
   Float_t         t1_t2_Mt;
   Float_t         t1_t2_MtTotal;
   Float_t         t1_t2_Mt_TauEnDown;
   Float_t         t1_t2_Mt_TauEnUp;
   Float_t         t1_t2_MvaMet;
   Float_t         t1_t2_MvaMetCovMatrix00;
   Float_t         t1_t2_MvaMetCovMatrix01;
   Float_t         t1_t2_MvaMetCovMatrix10;
   Float_t         t1_t2_MvaMetCovMatrix11;
   Float_t         t1_t2_MvaMetPhi;
   Float_t         t1_t2_PZeta;
   Float_t         t1_t2_PZetaLess0p85PZetaVis;
   Float_t         t1_t2_PZetaVis;
   Float_t         t1_t2_Phi;
   Float_t         t1_t2_Pt;
   Float_t         t1_t2_SS;
   Float_t         t1_t2_ToMETDPhi_Ty1;
   Float_t         t1_t2_collinearmass;
   Float_t         t1_t2_collinearmass_CheckUESDown;
   Float_t         t1_t2_collinearmass_CheckUESUp;
   Float_t         t1_t2_collinearmass_EleEnDown;
   Float_t         t1_t2_collinearmass_EleEnUp;
   Float_t         t1_t2_collinearmass_JetCheckTotalDown;
   Float_t         t1_t2_collinearmass_JetCheckTotalUp;
   Float_t         t1_t2_collinearmass_JetEnDown;
   Float_t         t1_t2_collinearmass_JetEnUp;
   Float_t         t1_t2_collinearmass_MuEnDown;
   Float_t         t1_t2_collinearmass_MuEnUp;
   Float_t         t1_t2_collinearmass_TauEnDown;
   Float_t         t1_t2_collinearmass_TauEnUp;
   Float_t         t1_t2_collinearmass_UnclusteredEnDown;
   Float_t         t1_t2_collinearmass_UnclusteredEnUp;
   Float_t         t1_t2_pt_tt;
   Float_t         t2AbsEta;
   Float_t         t2AgainstElectronLooseMVA6;
   Float_t         t2AgainstElectronMVA6Raw;
   Float_t         t2AgainstElectronMVA6category;
   Float_t         t2AgainstElectronMediumMVA6;
   Float_t         t2AgainstElectronTightMVA6;
   Float_t         t2AgainstElectronVLooseMVA6;
   Float_t         t2AgainstElectronVTightMVA6;
   Float_t         t2AgainstMuonLoose3;
   Float_t         t2AgainstMuonTight3;
   Float_t         t2ByCombinedIsolationDeltaBetaCorrRaw3Hits;
   Float_t         t2ByIsolationMVArun2v1DBdR03oldDMwLTraw;
   Float_t         t2ByIsolationMVArun2v1DBnewDMwLTraw;
   Float_t         t2ByIsolationMVArun2v1DBoldDMwLTraw;
   Float_t         t2ByIsolationMVArun2v1PWdR03oldDMwLTraw;
   Float_t         t2ByIsolationMVArun2v1PWnewDMwLTraw;
   Float_t         t2ByIsolationMVArun2v1PWoldDMwLTraw;
   Float_t         t2ByLooseCombinedIsolationDeltaBetaCorr3Hits;
   Float_t         t2ByLooseIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         t2ByLooseIsolationMVArun2v1DBnewDMwLT;
   Float_t         t2ByLooseIsolationMVArun2v1DBoldDMwLT;
   Float_t         t2ByLooseIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         t2ByLooseIsolationMVArun2v1PWnewDMwLT;
   Float_t         t2ByLooseIsolationMVArun2v1PWoldDMwLT;
   Float_t         t2ByMediumCombinedIsolationDeltaBetaCorr3Hits;
   Float_t         t2ByMediumIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         t2ByMediumIsolationMVArun2v1DBnewDMwLT;
   Float_t         t2ByMediumIsolationMVArun2v1DBoldDMwLT;
   Float_t         t2ByMediumIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         t2ByMediumIsolationMVArun2v1PWnewDMwLT;
   Float_t         t2ByMediumIsolationMVArun2v1PWoldDMwLT;
   Float_t         t2ByPhotonPtSumOutsideSignalCone;
   Float_t         t2ByTightCombinedIsolationDeltaBetaCorr3Hits;
   Float_t         t2ByTightIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         t2ByTightIsolationMVArun2v1DBnewDMwLT;
   Float_t         t2ByTightIsolationMVArun2v1DBoldDMwLT;
   Float_t         t2ByTightIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         t2ByTightIsolationMVArun2v1PWnewDMwLT;
   Float_t         t2ByTightIsolationMVArun2v1PWoldDMwLT;
   Float_t         t2ByVLooseIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         t2ByVLooseIsolationMVArun2v1DBnewDMwLT;
   Float_t         t2ByVLooseIsolationMVArun2v1DBoldDMwLT;
   Float_t         t2ByVLooseIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         t2ByVLooseIsolationMVArun2v1PWnewDMwLT;
   Float_t         t2ByVLooseIsolationMVArun2v1PWoldDMwLT;
   Float_t         t2ByVTightIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         t2ByVTightIsolationMVArun2v1DBnewDMwLT;
   Float_t         t2ByVTightIsolationMVArun2v1DBoldDMwLT;
   Float_t         t2ByVTightIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         t2ByVTightIsolationMVArun2v1PWnewDMwLT;
   Float_t         t2ByVTightIsolationMVArun2v1PWoldDMwLT;
   Float_t         t2ByVVTightIsolationMVArun2v1DBdR03oldDMwLT;
   Float_t         t2ByVVTightIsolationMVArun2v1DBnewDMwLT;
   Float_t         t2ByVVTightIsolationMVArun2v1DBoldDMwLT;
   Float_t         t2ByVVTightIsolationMVArun2v1PWdR03oldDMwLT;
   Float_t         t2ByVVTightIsolationMVArun2v1PWnewDMwLT;
   Float_t         t2ByVVTightIsolationMVArun2v1PWoldDMwLT;
   Float_t         t2Charge;
   Float_t         t2ChargedIsoPtSum;
   Float_t         t2ChargedIsoPtSumdR03;
   Float_t         t2ComesFromHiggs;
   Float_t         t2DPhiToPfMet_type1;
   Float_t         t2DecayMode;
   Float_t         t2DecayModeFinding;
   Float_t         t2DecayModeFindingNewDMs;
   Float_t         t2DoubleTau32Filter;
   Float_t         t2DoubleTau35Filter;
   Float_t         t2DoubleTau40Filter;
   Float_t         t2ElecOverlap;
   Float_t         t2Eta;
   Float_t         t2Eta_TauEnDown;
   Float_t         t2Eta_TauEnUp;
   Float_t         t2FootprintCorrection;
   Float_t         t2FootprintCorrectiondR03;
   Float_t         t2GenCharge;
   Float_t         t2GenDecayMode;
   Float_t         t2GenEnergy;
   Float_t         t2GenEta;
   Float_t         t2GenIsPrompt;
   Float_t         t2GenJetEta;
   Float_t         t2GenJetPt;
   Float_t         t2GenMotherEnergy;
   Float_t         t2GenMotherEta;
   Float_t         t2GenMotherPdgId;
   Float_t         t2GenMotherPhi;
   Float_t         t2GenMotherPt;
   Float_t         t2GenPdgId;
   Float_t         t2GenPhi;
   Float_t         t2GenPt;
   Float_t         t2GenStatus;
   Float_t         t2GlobalMuonVtxOverlap;
   Float_t         t2JetArea;
   Float_t         t2JetBtag;
   Float_t         t2JetDR;
   Float_t         t2JetEtaEtaMoment;
   Float_t         t2JetEtaPhiMoment;
   Float_t         t2JetEtaPhiSpread;
   Float_t         t2JetHadronFlavour;
   Float_t         t2JetPFCISVBtag;
   Float_t         t2JetPartonFlavour;
   Float_t         t2JetPhiPhiMoment;
   Float_t         t2JetPt;
   Float_t         t2LeadTrackPt;
   Float_t         t2LowestMll;
   Float_t         t2Mass;
   Float_t         t2Mass_TauEnDown;
   Float_t         t2Mass_TauEnUp;
   Float_t         t2MatchesDoubleTau32Path;
   Float_t         t2MatchesDoubleTau35Path;
   Float_t         t2MatchesDoubleTau40Path;
   Float_t         t2MtToPfMet_type1;
   Float_t         t2MuOverlap;
   Float_t         t2MuonIdIsoStdVtxOverlap;
   Float_t         t2MuonIdIsoVtxOverlap;
   Float_t         t2MuonIdVtxOverlap;
   Float_t         t2NChrgHadrIsolationCands;
   Float_t         t2NChrgHadrSignalCands;
   Float_t         t2NGammaSignalCands;
   Float_t         t2NNeutralHadrSignalCands;
   Float_t         t2NSignalCands;
   Float_t         t2NearestZMass;
   Float_t         t2NeutralIsoPtSum;
   Float_t         t2NeutralIsoPtSumWeight;
   Float_t         t2NeutralIsoPtSumWeightdR03;
   Float_t         t2NeutralIsoPtSumdR03;
   Float_t         t2PVDXY;
   Float_t         t2PVDZ;
   Float_t         t2Phi;
   Float_t         t2Phi_TauEnDown;
   Float_t         t2Phi_TauEnUp;
   Float_t         t2PhotonPtSumOutsideSignalCone;
   Float_t         t2PhotonPtSumOutsideSignalConedR03;
   Float_t         t2Pt;
   Float_t         t2Pt_TauEnDown;
   Float_t         t2Pt_TauEnUp;
   Float_t         t2PuCorrPtSum;
   Float_t         t2Rank;
   Float_t         t2VZ;
   Float_t         t2ZTTGenDR;
   Float_t         t2ZTTGenEta;
   Float_t         t2ZTTGenMatching;
   Float_t         t2ZTTGenPhi;
   Float_t         t2ZTTGenPt;
   Float_t         t2_e1_collinearmass;
   Float_t         t2_e1_collinearmass_CheckUESDown;
   Float_t         t2_e1_collinearmass_CheckUESUp;
   Float_t         t2_e1_collinearmass_JetCheckTotalDown;
   Float_t         t2_e1_collinearmass_JetCheckTotalUp;
   Float_t         t2_e1_collinearmass_JetEnDown;
   Float_t         t2_e1_collinearmass_JetEnUp;
   Float_t         t2_e1_collinearmass_UnclusteredEnDown;
   Float_t         t2_e1_collinearmass_UnclusteredEnUp;
   Float_t         t2_e2_collinearmass;
   Float_t         t2_e2_collinearmass_CheckUESDown;
   Float_t         t2_e2_collinearmass_CheckUESUp;
   Float_t         t2_e2_collinearmass_JetCheckTotalDown;
   Float_t         t2_e2_collinearmass_JetCheckTotalUp;
   Float_t         t2_e2_collinearmass_JetEnDown;
   Float_t         t2_e2_collinearmass_JetEnUp;
   Float_t         t2_e2_collinearmass_UnclusteredEnDown;
   Float_t         t2_e2_collinearmass_UnclusteredEnUp;
   Float_t         t2_t1_collinearmass;
   Float_t         t2_t1_collinearmass_CheckUESDown;
   Float_t         t2_t1_collinearmass_CheckUESUp;
   Float_t         t2_t1_collinearmass_JetCheckTotalDown;
   Float_t         t2_t1_collinearmass_JetCheckTotalUp;
   Float_t         t2_t1_collinearmass_JetEnDown;
   Float_t         t2_t1_collinearmass_JetEnUp;
   Float_t         t2_t1_collinearmass_UnclusteredEnDown;
   Float_t         t2_t1_collinearmass_UnclusteredEnUp;
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
   TBranch        *b_e1_t1_CosThetaStar;   //!
   TBranch        *b_e1_t1_DPhi;   //!
   TBranch        *b_e1_t1_DR;   //!
   TBranch        *b_e1_t1_Eta;   //!
   TBranch        *b_e1_t1_Mass;   //!
   TBranch        *b_e1_t1_Mass_TauEnDown;   //!
   TBranch        *b_e1_t1_Mass_TauEnUp;   //!
   TBranch        *b_e1_t1_Mt;   //!
   TBranch        *b_e1_t1_MtTotal;   //!
   TBranch        *b_e1_t1_Mt_TauEnDown;   //!
   TBranch        *b_e1_t1_Mt_TauEnUp;   //!
   TBranch        *b_e1_t1_MvaMet;   //!
   TBranch        *b_e1_t1_MvaMetCovMatrix00;   //!
   TBranch        *b_e1_t1_MvaMetCovMatrix01;   //!
   TBranch        *b_e1_t1_MvaMetCovMatrix10;   //!
   TBranch        *b_e1_t1_MvaMetCovMatrix11;   //!
   TBranch        *b_e1_t1_MvaMetPhi;   //!
   TBranch        *b_e1_t1_PZeta;   //!
   TBranch        *b_e1_t1_PZetaLess0p85PZetaVis;   //!
   TBranch        *b_e1_t1_PZetaVis;   //!
   TBranch        *b_e1_t1_Phi;   //!
   TBranch        *b_e1_t1_Pt;   //!
   TBranch        *b_e1_t1_SS;   //!
   TBranch        *b_e1_t1_ToMETDPhi_Ty1;   //!
   TBranch        *b_e1_t1_collinearmass;   //!
   TBranch        *b_e1_t1_collinearmass_CheckUESDown;   //!
   TBranch        *b_e1_t1_collinearmass_CheckUESUp;   //!
   TBranch        *b_e1_t1_collinearmass_EleEnDown;   //!
   TBranch        *b_e1_t1_collinearmass_EleEnUp;   //!
   TBranch        *b_e1_t1_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_e1_t1_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_e1_t1_collinearmass_JetEnDown;   //!
   TBranch        *b_e1_t1_collinearmass_JetEnUp;   //!
   TBranch        *b_e1_t1_collinearmass_MuEnDown;   //!
   TBranch        *b_e1_t1_collinearmass_MuEnUp;   //!
   TBranch        *b_e1_t1_collinearmass_TauEnDown;   //!
   TBranch        *b_e1_t1_collinearmass_TauEnUp;   //!
   TBranch        *b_e1_t1_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_e1_t1_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_e1_t1_pt_tt;   //!
   TBranch        *b_e1_t2_CosThetaStar;   //!
   TBranch        *b_e1_t2_DPhi;   //!
   TBranch        *b_e1_t2_DR;   //!
   TBranch        *b_e1_t2_Eta;   //!
   TBranch        *b_e1_t2_Mass;   //!
   TBranch        *b_e1_t2_Mass_TauEnDown;   //!
   TBranch        *b_e1_t2_Mass_TauEnUp;   //!
   TBranch        *b_e1_t2_Mt;   //!
   TBranch        *b_e1_t2_MtTotal;   //!
   TBranch        *b_e1_t2_Mt_TauEnDown;   //!
   TBranch        *b_e1_t2_Mt_TauEnUp;   //!
   TBranch        *b_e1_t2_MvaMet;   //!
   TBranch        *b_e1_t2_MvaMetCovMatrix00;   //!
   TBranch        *b_e1_t2_MvaMetCovMatrix01;   //!
   TBranch        *b_e1_t2_MvaMetCovMatrix10;   //!
   TBranch        *b_e1_t2_MvaMetCovMatrix11;   //!
   TBranch        *b_e1_t2_MvaMetPhi;   //!
   TBranch        *b_e1_t2_PZeta;   //!
   TBranch        *b_e1_t2_PZetaLess0p85PZetaVis;   //!
   TBranch        *b_e1_t2_PZetaVis;   //!
   TBranch        *b_e1_t2_Phi;   //!
   TBranch        *b_e1_t2_Pt;   //!
   TBranch        *b_e1_t2_SS;   //!
   TBranch        *b_e1_t2_ToMETDPhi_Ty1;   //!
   TBranch        *b_e1_t2_collinearmass;   //!
   TBranch        *b_e1_t2_collinearmass_CheckUESDown;   //!
   TBranch        *b_e1_t2_collinearmass_CheckUESUp;   //!
   TBranch        *b_e1_t2_collinearmass_EleEnDown;   //!
   TBranch        *b_e1_t2_collinearmass_EleEnUp;   //!
   TBranch        *b_e1_t2_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_e1_t2_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_e1_t2_collinearmass_JetEnDown;   //!
   TBranch        *b_e1_t2_collinearmass_JetEnUp;   //!
   TBranch        *b_e1_t2_collinearmass_MuEnDown;   //!
   TBranch        *b_e1_t2_collinearmass_MuEnUp;   //!
   TBranch        *b_e1_t2_collinearmass_TauEnDown;   //!
   TBranch        *b_e1_t2_collinearmass_TauEnUp;   //!
   TBranch        *b_e1_t2_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_e1_t2_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_e1_t2_pt_tt;   //!
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
   TBranch        *b_e2_t1_CosThetaStar;   //!
   TBranch        *b_e2_t1_DPhi;   //!
   TBranch        *b_e2_t1_DR;   //!
   TBranch        *b_e2_t1_Eta;   //!
   TBranch        *b_e2_t1_Mass;   //!
   TBranch        *b_e2_t1_Mass_TauEnDown;   //!
   TBranch        *b_e2_t1_Mass_TauEnUp;   //!
   TBranch        *b_e2_t1_Mt;   //!
   TBranch        *b_e2_t1_MtTotal;   //!
   TBranch        *b_e2_t1_Mt_TauEnDown;   //!
   TBranch        *b_e2_t1_Mt_TauEnUp;   //!
   TBranch        *b_e2_t1_MvaMet;   //!
   TBranch        *b_e2_t1_MvaMetCovMatrix00;   //!
   TBranch        *b_e2_t1_MvaMetCovMatrix01;   //!
   TBranch        *b_e2_t1_MvaMetCovMatrix10;   //!
   TBranch        *b_e2_t1_MvaMetCovMatrix11;   //!
   TBranch        *b_e2_t1_MvaMetPhi;   //!
   TBranch        *b_e2_t1_PZeta;   //!
   TBranch        *b_e2_t1_PZetaLess0p85PZetaVis;   //!
   TBranch        *b_e2_t1_PZetaVis;   //!
   TBranch        *b_e2_t1_Phi;   //!
   TBranch        *b_e2_t1_Pt;   //!
   TBranch        *b_e2_t1_SS;   //!
   TBranch        *b_e2_t1_ToMETDPhi_Ty1;   //!
   TBranch        *b_e2_t1_collinearmass;   //!
   TBranch        *b_e2_t1_collinearmass_CheckUESDown;   //!
   TBranch        *b_e2_t1_collinearmass_CheckUESUp;   //!
   TBranch        *b_e2_t1_collinearmass_EleEnDown;   //!
   TBranch        *b_e2_t1_collinearmass_EleEnUp;   //!
   TBranch        *b_e2_t1_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_e2_t1_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_e2_t1_collinearmass_JetEnDown;   //!
   TBranch        *b_e2_t1_collinearmass_JetEnUp;   //!
   TBranch        *b_e2_t1_collinearmass_MuEnDown;   //!
   TBranch        *b_e2_t1_collinearmass_MuEnUp;   //!
   TBranch        *b_e2_t1_collinearmass_TauEnDown;   //!
   TBranch        *b_e2_t1_collinearmass_TauEnUp;   //!
   TBranch        *b_e2_t1_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_e2_t1_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_e2_t1_pt_tt;   //!
   TBranch        *b_e2_t2_CosThetaStar;   //!
   TBranch        *b_e2_t2_DPhi;   //!
   TBranch        *b_e2_t2_DR;   //!
   TBranch        *b_e2_t2_Eta;   //!
   TBranch        *b_e2_t2_Mass;   //!
   TBranch        *b_e2_t2_Mass_TauEnDown;   //!
   TBranch        *b_e2_t2_Mass_TauEnUp;   //!
   TBranch        *b_e2_t2_Mt;   //!
   TBranch        *b_e2_t2_MtTotal;   //!
   TBranch        *b_e2_t2_Mt_TauEnDown;   //!
   TBranch        *b_e2_t2_Mt_TauEnUp;   //!
   TBranch        *b_e2_t2_MvaMet;   //!
   TBranch        *b_e2_t2_MvaMetCovMatrix00;   //!
   TBranch        *b_e2_t2_MvaMetCovMatrix01;   //!
   TBranch        *b_e2_t2_MvaMetCovMatrix10;   //!
   TBranch        *b_e2_t2_MvaMetCovMatrix11;   //!
   TBranch        *b_e2_t2_MvaMetPhi;   //!
   TBranch        *b_e2_t2_PZeta;   //!
   TBranch        *b_e2_t2_PZetaLess0p85PZetaVis;   //!
   TBranch        *b_e2_t2_PZetaVis;   //!
   TBranch        *b_e2_t2_Phi;   //!
   TBranch        *b_e2_t2_Pt;   //!
   TBranch        *b_e2_t2_SS;   //!
   TBranch        *b_e2_t2_ToMETDPhi_Ty1;   //!
   TBranch        *b_e2_t2_collinearmass;   //!
   TBranch        *b_e2_t2_collinearmass_CheckUESDown;   //!
   TBranch        *b_e2_t2_collinearmass_CheckUESUp;   //!
   TBranch        *b_e2_t2_collinearmass_EleEnDown;   //!
   TBranch        *b_e2_t2_collinearmass_EleEnUp;   //!
   TBranch        *b_e2_t2_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_e2_t2_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_e2_t2_collinearmass_JetEnDown;   //!
   TBranch        *b_e2_t2_collinearmass_JetEnUp;   //!
   TBranch        *b_e2_t2_collinearmass_MuEnDown;   //!
   TBranch        *b_e2_t2_collinearmass_MuEnUp;   //!
   TBranch        *b_e2_t2_collinearmass_TauEnDown;   //!
   TBranch        *b_e2_t2_collinearmass_TauEnUp;   //!
   TBranch        *b_e2_t2_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_e2_t2_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_e2_t2_pt_tt;   //!
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
   TBranch        *b_t1AbsEta;   //!
   TBranch        *b_t1AgainstElectronLooseMVA6;   //!
   TBranch        *b_t1AgainstElectronMVA6Raw;   //!
   TBranch        *b_t1AgainstElectronMVA6category;   //!
   TBranch        *b_t1AgainstElectronMediumMVA6;   //!
   TBranch        *b_t1AgainstElectronTightMVA6;   //!
   TBranch        *b_t1AgainstElectronVLooseMVA6;   //!
   TBranch        *b_t1AgainstElectronVTightMVA6;   //!
   TBranch        *b_t1AgainstMuonLoose3;   //!
   TBranch        *b_t1AgainstMuonTight3;   //!
   TBranch        *b_t1ByCombinedIsolationDeltaBetaCorrRaw3Hits;   //!
   TBranch        *b_t1ByIsolationMVArun2v1DBdR03oldDMwLTraw;   //!
   TBranch        *b_t1ByIsolationMVArun2v1DBnewDMwLTraw;   //!
   TBranch        *b_t1ByIsolationMVArun2v1DBoldDMwLTraw;   //!
   TBranch        *b_t1ByIsolationMVArun2v1PWdR03oldDMwLTraw;   //!
   TBranch        *b_t1ByIsolationMVArun2v1PWnewDMwLTraw;   //!
   TBranch        *b_t1ByIsolationMVArun2v1PWoldDMwLTraw;   //!
   TBranch        *b_t1ByLooseCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_t1ByLooseIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_t1ByLooseIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_t1ByLooseIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_t1ByLooseIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_t1ByLooseIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_t1ByLooseIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_t1ByMediumCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_t1ByMediumIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_t1ByMediumIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_t1ByMediumIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_t1ByMediumIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_t1ByMediumIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_t1ByMediumIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_t1ByPhotonPtSumOutsideSignalCone;   //!
   TBranch        *b_t1ByTightCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_t1ByTightIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_t1ByTightIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_t1ByTightIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_t1ByTightIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_t1ByTightIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_t1ByTightIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_t1ByVLooseIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_t1ByVLooseIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_t1ByVLooseIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_t1ByVLooseIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_t1ByVLooseIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_t1ByVLooseIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_t1ByVTightIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_t1ByVTightIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_t1ByVTightIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_t1ByVTightIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_t1ByVTightIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_t1ByVTightIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_t1ByVVTightIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_t1ByVVTightIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_t1ByVVTightIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_t1ByVVTightIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_t1ByVVTightIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_t1ByVVTightIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_t1Charge;   //!
   TBranch        *b_t1ChargedIsoPtSum;   //!
   TBranch        *b_t1ChargedIsoPtSumdR03;   //!
   TBranch        *b_t1ComesFromHiggs;   //!
   TBranch        *b_t1DPhiToPfMet_type1;   //!
   TBranch        *b_t1DecayMode;   //!
   TBranch        *b_t1DecayModeFinding;   //!
   TBranch        *b_t1DecayModeFindingNewDMs;   //!
   TBranch        *b_t1DoubleTau32Filter;   //!
   TBranch        *b_t1DoubleTau35Filter;   //!
   TBranch        *b_t1DoubleTau40Filter;   //!
   TBranch        *b_t1ElecOverlap;   //!
   TBranch        *b_t1Eta;   //!
   TBranch        *b_t1Eta_TauEnDown;   //!
   TBranch        *b_t1Eta_TauEnUp;   //!
   TBranch        *b_t1FootprintCorrection;   //!
   TBranch        *b_t1FootprintCorrectiondR03;   //!
   TBranch        *b_t1GenCharge;   //!
   TBranch        *b_t1GenDecayMode;   //!
   TBranch        *b_t1GenEnergy;   //!
   TBranch        *b_t1GenEta;   //!
   TBranch        *b_t1GenIsPrompt;   //!
   TBranch        *b_t1GenJetEta;   //!
   TBranch        *b_t1GenJetPt;   //!
   TBranch        *b_t1GenMotherEnergy;   //!
   TBranch        *b_t1GenMotherEta;   //!
   TBranch        *b_t1GenMotherPdgId;   //!
   TBranch        *b_t1GenMotherPhi;   //!
   TBranch        *b_t1GenMotherPt;   //!
   TBranch        *b_t1GenPdgId;   //!
   TBranch        *b_t1GenPhi;   //!
   TBranch        *b_t1GenPt;   //!
   TBranch        *b_t1GenStatus;   //!
   TBranch        *b_t1GlobalMuonVtxOverlap;   //!
   TBranch        *b_t1JetArea;   //!
   TBranch        *b_t1JetBtag;   //!
   TBranch        *b_t1JetDR;   //!
   TBranch        *b_t1JetEtaEtaMoment;   //!
   TBranch        *b_t1JetEtaPhiMoment;   //!
   TBranch        *b_t1JetEtaPhiSpread;   //!
   TBranch        *b_t1JetHadronFlavour;   //!
   TBranch        *b_t1JetPFCISVBtag;   //!
   TBranch        *b_t1JetPartonFlavour;   //!
   TBranch        *b_t1JetPhiPhiMoment;   //!
   TBranch        *b_t1JetPt;   //!
   TBranch        *b_t1LeadTrackPt;   //!
   TBranch        *b_t1LowestMll;   //!
   TBranch        *b_t1Mass;   //!
   TBranch        *b_t1Mass_TauEnDown;   //!
   TBranch        *b_t1Mass_TauEnUp;   //!
   TBranch        *b_t1MatchesDoubleTau32Path;   //!
   TBranch        *b_t1MatchesDoubleTau35Path;   //!
   TBranch        *b_t1MatchesDoubleTau40Path;   //!
   TBranch        *b_t1MtToPfMet_type1;   //!
   TBranch        *b_t1MuOverlap;   //!
   TBranch        *b_t1MuonIdIsoStdVtxOverlap;   //!
   TBranch        *b_t1MuonIdIsoVtxOverlap;   //!
   TBranch        *b_t1MuonIdVtxOverlap;   //!
   TBranch        *b_t1NChrgHadrIsolationCands;   //!
   TBranch        *b_t1NChrgHadrSignalCands;   //!
   TBranch        *b_t1NGammaSignalCands;   //!
   TBranch        *b_t1NNeutralHadrSignalCands;   //!
   TBranch        *b_t1NSignalCands;   //!
   TBranch        *b_t1NearestZMass;   //!
   TBranch        *b_t1NeutralIsoPtSum;   //!
   TBranch        *b_t1NeutralIsoPtSumWeight;   //!
   TBranch        *b_t1NeutralIsoPtSumWeightdR03;   //!
   TBranch        *b_t1NeutralIsoPtSumdR03;   //!
   TBranch        *b_t1PVDXY;   //!
   TBranch        *b_t1PVDZ;   //!
   TBranch        *b_t1Phi;   //!
   TBranch        *b_t1Phi_TauEnDown;   //!
   TBranch        *b_t1Phi_TauEnUp;   //!
   TBranch        *b_t1PhotonPtSumOutsideSignalCone;   //!
   TBranch        *b_t1PhotonPtSumOutsideSignalConedR03;   //!
   TBranch        *b_t1Pt;   //!
   TBranch        *b_t1Pt_TauEnDown;   //!
   TBranch        *b_t1Pt_TauEnUp;   //!
   TBranch        *b_t1PuCorrPtSum;   //!
   TBranch        *b_t1Rank;   //!
   TBranch        *b_t1VZ;   //!
   TBranch        *b_t1ZTTGenDR;   //!
   TBranch        *b_t1ZTTGenEta;   //!
   TBranch        *b_t1ZTTGenMatching;   //!
   TBranch        *b_t1ZTTGenPhi;   //!
   TBranch        *b_t1ZTTGenPt;   //!
   TBranch        *b_t1_e1_collinearmass;   //!
   TBranch        *b_t1_e1_collinearmass_CheckUESDown;   //!
   TBranch        *b_t1_e1_collinearmass_CheckUESUp;   //!
   TBranch        *b_t1_e1_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_t1_e1_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_t1_e1_collinearmass_JetEnDown;   //!
   TBranch        *b_t1_e1_collinearmass_JetEnUp;   //!
   TBranch        *b_t1_e1_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_t1_e1_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_t1_e2_collinearmass;   //!
   TBranch        *b_t1_e2_collinearmass_CheckUESDown;   //!
   TBranch        *b_t1_e2_collinearmass_CheckUESUp;   //!
   TBranch        *b_t1_e2_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_t1_e2_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_t1_e2_collinearmass_JetEnDown;   //!
   TBranch        *b_t1_e2_collinearmass_JetEnUp;   //!
   TBranch        *b_t1_e2_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_t1_e2_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_t1_t2_CosThetaStar;   //!
   TBranch        *b_t1_t2_DPhi;   //!
   TBranch        *b_t1_t2_DR;   //!
   TBranch        *b_t1_t2_Eta;   //!
   TBranch        *b_t1_t2_Mass;   //!
   TBranch        *b_t1_t2_Mass_TauEnDown;   //!
   TBranch        *b_t1_t2_Mass_TauEnUp;   //!
   TBranch        *b_t1_t2_Mt;   //!
   TBranch        *b_t1_t2_MtTotal;   //!
   TBranch        *b_t1_t2_Mt_TauEnDown;   //!
   TBranch        *b_t1_t2_Mt_TauEnUp;   //!
   TBranch        *b_t1_t2_MvaMet;   //!
   TBranch        *b_t1_t2_MvaMetCovMatrix00;   //!
   TBranch        *b_t1_t2_MvaMetCovMatrix01;   //!
   TBranch        *b_t1_t2_MvaMetCovMatrix10;   //!
   TBranch        *b_t1_t2_MvaMetCovMatrix11;   //!
   TBranch        *b_t1_t2_MvaMetPhi;   //!
   TBranch        *b_t1_t2_PZeta;   //!
   TBranch        *b_t1_t2_PZetaLess0p85PZetaVis;   //!
   TBranch        *b_t1_t2_PZetaVis;   //!
   TBranch        *b_t1_t2_Phi;   //!
   TBranch        *b_t1_t2_Pt;   //!
   TBranch        *b_t1_t2_SS;   //!
   TBranch        *b_t1_t2_ToMETDPhi_Ty1;   //!
   TBranch        *b_t1_t2_collinearmass;   //!
   TBranch        *b_t1_t2_collinearmass_CheckUESDown;   //!
   TBranch        *b_t1_t2_collinearmass_CheckUESUp;   //!
   TBranch        *b_t1_t2_collinearmass_EleEnDown;   //!
   TBranch        *b_t1_t2_collinearmass_EleEnUp;   //!
   TBranch        *b_t1_t2_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_t1_t2_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_t1_t2_collinearmass_JetEnDown;   //!
   TBranch        *b_t1_t2_collinearmass_JetEnUp;   //!
   TBranch        *b_t1_t2_collinearmass_MuEnDown;   //!
   TBranch        *b_t1_t2_collinearmass_MuEnUp;   //!
   TBranch        *b_t1_t2_collinearmass_TauEnDown;   //!
   TBranch        *b_t1_t2_collinearmass_TauEnUp;   //!
   TBranch        *b_t1_t2_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_t1_t2_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_t1_t2_pt_tt;   //!
   TBranch        *b_t2AbsEta;   //!
   TBranch        *b_t2AgainstElectronLooseMVA6;   //!
   TBranch        *b_t2AgainstElectronMVA6Raw;   //!
   TBranch        *b_t2AgainstElectronMVA6category;   //!
   TBranch        *b_t2AgainstElectronMediumMVA6;   //!
   TBranch        *b_t2AgainstElectronTightMVA6;   //!
   TBranch        *b_t2AgainstElectronVLooseMVA6;   //!
   TBranch        *b_t2AgainstElectronVTightMVA6;   //!
   TBranch        *b_t2AgainstMuonLoose3;   //!
   TBranch        *b_t2AgainstMuonTight3;   //!
   TBranch        *b_t2ByCombinedIsolationDeltaBetaCorrRaw3Hits;   //!
   TBranch        *b_t2ByIsolationMVArun2v1DBdR03oldDMwLTraw;   //!
   TBranch        *b_t2ByIsolationMVArun2v1DBnewDMwLTraw;   //!
   TBranch        *b_t2ByIsolationMVArun2v1DBoldDMwLTraw;   //!
   TBranch        *b_t2ByIsolationMVArun2v1PWdR03oldDMwLTraw;   //!
   TBranch        *b_t2ByIsolationMVArun2v1PWnewDMwLTraw;   //!
   TBranch        *b_t2ByIsolationMVArun2v1PWoldDMwLTraw;   //!
   TBranch        *b_t2ByLooseCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_t2ByLooseIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_t2ByLooseIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_t2ByLooseIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_t2ByLooseIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_t2ByLooseIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_t2ByLooseIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_t2ByMediumCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_t2ByMediumIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_t2ByMediumIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_t2ByMediumIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_t2ByMediumIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_t2ByMediumIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_t2ByMediumIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_t2ByPhotonPtSumOutsideSignalCone;   //!
   TBranch        *b_t2ByTightCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_t2ByTightIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_t2ByTightIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_t2ByTightIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_t2ByTightIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_t2ByTightIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_t2ByTightIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_t2ByVLooseIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_t2ByVLooseIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_t2ByVLooseIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_t2ByVLooseIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_t2ByVLooseIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_t2ByVLooseIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_t2ByVTightIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_t2ByVTightIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_t2ByVTightIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_t2ByVTightIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_t2ByVTightIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_t2ByVTightIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_t2ByVVTightIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_t2ByVVTightIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_t2ByVVTightIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_t2ByVVTightIsolationMVArun2v1PWdR03oldDMwLT;   //!
   TBranch        *b_t2ByVVTightIsolationMVArun2v1PWnewDMwLT;   //!
   TBranch        *b_t2ByVVTightIsolationMVArun2v1PWoldDMwLT;   //!
   TBranch        *b_t2Charge;   //!
   TBranch        *b_t2ChargedIsoPtSum;   //!
   TBranch        *b_t2ChargedIsoPtSumdR03;   //!
   TBranch        *b_t2ComesFromHiggs;   //!
   TBranch        *b_t2DPhiToPfMet_type1;   //!
   TBranch        *b_t2DecayMode;   //!
   TBranch        *b_t2DecayModeFinding;   //!
   TBranch        *b_t2DecayModeFindingNewDMs;   //!
   TBranch        *b_t2DoubleTau32Filter;   //!
   TBranch        *b_t2DoubleTau35Filter;   //!
   TBranch        *b_t2DoubleTau40Filter;   //!
   TBranch        *b_t2ElecOverlap;   //!
   TBranch        *b_t2Eta;   //!
   TBranch        *b_t2Eta_TauEnDown;   //!
   TBranch        *b_t2Eta_TauEnUp;   //!
   TBranch        *b_t2FootprintCorrection;   //!
   TBranch        *b_t2FootprintCorrectiondR03;   //!
   TBranch        *b_t2GenCharge;   //!
   TBranch        *b_t2GenDecayMode;   //!
   TBranch        *b_t2GenEnergy;   //!
   TBranch        *b_t2GenEta;   //!
   TBranch        *b_t2GenIsPrompt;   //!
   TBranch        *b_t2GenJetEta;   //!
   TBranch        *b_t2GenJetPt;   //!
   TBranch        *b_t2GenMotherEnergy;   //!
   TBranch        *b_t2GenMotherEta;   //!
   TBranch        *b_t2GenMotherPdgId;   //!
   TBranch        *b_t2GenMotherPhi;   //!
   TBranch        *b_t2GenMotherPt;   //!
   TBranch        *b_t2GenPdgId;   //!
   TBranch        *b_t2GenPhi;   //!
   TBranch        *b_t2GenPt;   //!
   TBranch        *b_t2GenStatus;   //!
   TBranch        *b_t2GlobalMuonVtxOverlap;   //!
   TBranch        *b_t2JetArea;   //!
   TBranch        *b_t2JetBtag;   //!
   TBranch        *b_t2JetDR;   //!
   TBranch        *b_t2JetEtaEtaMoment;   //!
   TBranch        *b_t2JetEtaPhiMoment;   //!
   TBranch        *b_t2JetEtaPhiSpread;   //!
   TBranch        *b_t2JetHadronFlavour;   //!
   TBranch        *b_t2JetPFCISVBtag;   //!
   TBranch        *b_t2JetPartonFlavour;   //!
   TBranch        *b_t2JetPhiPhiMoment;   //!
   TBranch        *b_t2JetPt;   //!
   TBranch        *b_t2LeadTrackPt;   //!
   TBranch        *b_t2LowestMll;   //!
   TBranch        *b_t2Mass;   //!
   TBranch        *b_t2Mass_TauEnDown;   //!
   TBranch        *b_t2Mass_TauEnUp;   //!
   TBranch        *b_t2MatchesDoubleTau32Path;   //!
   TBranch        *b_t2MatchesDoubleTau35Path;   //!
   TBranch        *b_t2MatchesDoubleTau40Path;   //!
   TBranch        *b_t2MtToPfMet_type1;   //!
   TBranch        *b_t2MuOverlap;   //!
   TBranch        *b_t2MuonIdIsoStdVtxOverlap;   //!
   TBranch        *b_t2MuonIdIsoVtxOverlap;   //!
   TBranch        *b_t2MuonIdVtxOverlap;   //!
   TBranch        *b_t2NChrgHadrIsolationCands;   //!
   TBranch        *b_t2NChrgHadrSignalCands;   //!
   TBranch        *b_t2NGammaSignalCands;   //!
   TBranch        *b_t2NNeutralHadrSignalCands;   //!
   TBranch        *b_t2NSignalCands;   //!
   TBranch        *b_t2NearestZMass;   //!
   TBranch        *b_t2NeutralIsoPtSum;   //!
   TBranch        *b_t2NeutralIsoPtSumWeight;   //!
   TBranch        *b_t2NeutralIsoPtSumWeightdR03;   //!
   TBranch        *b_t2NeutralIsoPtSumdR03;   //!
   TBranch        *b_t2PVDXY;   //!
   TBranch        *b_t2PVDZ;   //!
   TBranch        *b_t2Phi;   //!
   TBranch        *b_t2Phi_TauEnDown;   //!
   TBranch        *b_t2Phi_TauEnUp;   //!
   TBranch        *b_t2PhotonPtSumOutsideSignalCone;   //!
   TBranch        *b_t2PhotonPtSumOutsideSignalConedR03;   //!
   TBranch        *b_t2Pt;   //!
   TBranch        *b_t2Pt_TauEnDown;   //!
   TBranch        *b_t2Pt_TauEnUp;   //!
   TBranch        *b_t2PuCorrPtSum;   //!
   TBranch        *b_t2Rank;   //!
   TBranch        *b_t2VZ;   //!
   TBranch        *b_t2ZTTGenDR;   //!
   TBranch        *b_t2ZTTGenEta;   //!
   TBranch        *b_t2ZTTGenMatching;   //!
   TBranch        *b_t2ZTTGenPhi;   //!
   TBranch        *b_t2ZTTGenPt;   //!
   TBranch        *b_t2_e1_collinearmass;   //!
   TBranch        *b_t2_e1_collinearmass_CheckUESDown;   //!
   TBranch        *b_t2_e1_collinearmass_CheckUESUp;   //!
   TBranch        *b_t2_e1_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_t2_e1_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_t2_e1_collinearmass_JetEnDown;   //!
   TBranch        *b_t2_e1_collinearmass_JetEnUp;   //!
   TBranch        *b_t2_e1_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_t2_e1_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_t2_e2_collinearmass;   //!
   TBranch        *b_t2_e2_collinearmass_CheckUESDown;   //!
   TBranch        *b_t2_e2_collinearmass_CheckUESUp;   //!
   TBranch        *b_t2_e2_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_t2_e2_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_t2_e2_collinearmass_JetEnDown;   //!
   TBranch        *b_t2_e2_collinearmass_JetEnUp;   //!
   TBranch        *b_t2_e2_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_t2_e2_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_t2_t1_collinearmass;   //!
   TBranch        *b_t2_t1_collinearmass_CheckUESDown;   //!
   TBranch        *b_t2_t1_collinearmass_CheckUESUp;   //!
   TBranch        *b_t2_t1_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_t2_t1_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_t2_t1_collinearmass_JetEnDown;   //!
   TBranch        *b_t2_t1_collinearmass_JetEnUp;   //!
   TBranch        *b_t2_t1_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_t2_t1_collinearmass_UnclusteredEnUp;   //!
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

   runchannelEETT(const std::string SampleName,const int maxEvents, TTree *tree=0);
   virtual ~runchannelEETT();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(const std::string SampleName,const int maxEvents);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   struct EETT_PartInfo {  
 
  
   float s_e2_Pt;
   float s_e1_Pt;
  
   float s_e1_MatchesDoubleE23_12Path;
   float s_e2_MatchesDoubleE23_12Path;
   float s_e1_MatchesDoubleE23_12Filter;
   float s_e2_MatchesDoubleE23_12Filter;
   
};

 bool EETT_ZEESelection(EETT_PartInfo aParticle);
 
};

#endif

#ifdef runchannelEETT_cxx
runchannelEETT::runchannelEETT(const std::string SampleName, const int maxEvents, TTree *tree) //: fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
     TChain *mychain = new TChain("eett/final/Ntuple");
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

runchannelEETT::~runchannelEETT()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t runchannelEETT::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t runchannelEETT::LoadTree(Long64_t entry)
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

void runchannelEETT::Init(TTree *tree)
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
   fChain->SetBranchAddress("e1_t1_CosThetaStar", &e1_t1_CosThetaStar, &b_e1_t1_CosThetaStar);
   fChain->SetBranchAddress("e1_t1_DPhi", &e1_t1_DPhi, &b_e1_t1_DPhi);
   fChain->SetBranchAddress("e1_t1_DR", &e1_t1_DR, &b_e1_t1_DR);
   fChain->SetBranchAddress("e1_t1_Eta", &e1_t1_Eta, &b_e1_t1_Eta);
   fChain->SetBranchAddress("e1_t1_Mass", &e1_t1_Mass, &b_e1_t1_Mass);
   fChain->SetBranchAddress("e1_t1_Mass_TauEnDown", &e1_t1_Mass_TauEnDown, &b_e1_t1_Mass_TauEnDown);
   fChain->SetBranchAddress("e1_t1_Mass_TauEnUp", &e1_t1_Mass_TauEnUp, &b_e1_t1_Mass_TauEnUp);
   fChain->SetBranchAddress("e1_t1_Mt", &e1_t1_Mt, &b_e1_t1_Mt);
   fChain->SetBranchAddress("e1_t1_MtTotal", &e1_t1_MtTotal, &b_e1_t1_MtTotal);
   fChain->SetBranchAddress("e1_t1_Mt_TauEnDown", &e1_t1_Mt_TauEnDown, &b_e1_t1_Mt_TauEnDown);
   fChain->SetBranchAddress("e1_t1_Mt_TauEnUp", &e1_t1_Mt_TauEnUp, &b_e1_t1_Mt_TauEnUp);
   fChain->SetBranchAddress("e1_t1_MvaMet", &e1_t1_MvaMet, &b_e1_t1_MvaMet);
   fChain->SetBranchAddress("e1_t1_MvaMetCovMatrix00", &e1_t1_MvaMetCovMatrix00, &b_e1_t1_MvaMetCovMatrix00);
   fChain->SetBranchAddress("e1_t1_MvaMetCovMatrix01", &e1_t1_MvaMetCovMatrix01, &b_e1_t1_MvaMetCovMatrix01);
   fChain->SetBranchAddress("e1_t1_MvaMetCovMatrix10", &e1_t1_MvaMetCovMatrix10, &b_e1_t1_MvaMetCovMatrix10);
   fChain->SetBranchAddress("e1_t1_MvaMetCovMatrix11", &e1_t1_MvaMetCovMatrix11, &b_e1_t1_MvaMetCovMatrix11);
   fChain->SetBranchAddress("e1_t1_MvaMetPhi", &e1_t1_MvaMetPhi, &b_e1_t1_MvaMetPhi);
   fChain->SetBranchAddress("e1_t1_PZeta", &e1_t1_PZeta, &b_e1_t1_PZeta);
   fChain->SetBranchAddress("e1_t1_PZetaLess0p85PZetaVis", &e1_t1_PZetaLess0p85PZetaVis, &b_e1_t1_PZetaLess0p85PZetaVis);
   fChain->SetBranchAddress("e1_t1_PZetaVis", &e1_t1_PZetaVis, &b_e1_t1_PZetaVis);
   fChain->SetBranchAddress("e1_t1_Phi", &e1_t1_Phi, &b_e1_t1_Phi);
   fChain->SetBranchAddress("e1_t1_Pt", &e1_t1_Pt, &b_e1_t1_Pt);
   fChain->SetBranchAddress("e1_t1_SS", &e1_t1_SS, &b_e1_t1_SS);
   fChain->SetBranchAddress("e1_t1_ToMETDPhi_Ty1", &e1_t1_ToMETDPhi_Ty1, &b_e1_t1_ToMETDPhi_Ty1);
   fChain->SetBranchAddress("e1_t1_collinearmass", &e1_t1_collinearmass, &b_e1_t1_collinearmass);
   fChain->SetBranchAddress("e1_t1_collinearmass_CheckUESDown", &e1_t1_collinearmass_CheckUESDown, &b_e1_t1_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("e1_t1_collinearmass_CheckUESUp", &e1_t1_collinearmass_CheckUESUp, &b_e1_t1_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("e1_t1_collinearmass_EleEnDown", &e1_t1_collinearmass_EleEnDown, &b_e1_t1_collinearmass_EleEnDown);
   fChain->SetBranchAddress("e1_t1_collinearmass_EleEnUp", &e1_t1_collinearmass_EleEnUp, &b_e1_t1_collinearmass_EleEnUp);
   fChain->SetBranchAddress("e1_t1_collinearmass_JetCheckTotalDown", &e1_t1_collinearmass_JetCheckTotalDown, &b_e1_t1_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("e1_t1_collinearmass_JetCheckTotalUp", &e1_t1_collinearmass_JetCheckTotalUp, &b_e1_t1_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("e1_t1_collinearmass_JetEnDown", &e1_t1_collinearmass_JetEnDown, &b_e1_t1_collinearmass_JetEnDown);
   fChain->SetBranchAddress("e1_t1_collinearmass_JetEnUp", &e1_t1_collinearmass_JetEnUp, &b_e1_t1_collinearmass_JetEnUp);
   fChain->SetBranchAddress("e1_t1_collinearmass_MuEnDown", &e1_t1_collinearmass_MuEnDown, &b_e1_t1_collinearmass_MuEnDown);
   fChain->SetBranchAddress("e1_t1_collinearmass_MuEnUp", &e1_t1_collinearmass_MuEnUp, &b_e1_t1_collinearmass_MuEnUp);
   fChain->SetBranchAddress("e1_t1_collinearmass_TauEnDown", &e1_t1_collinearmass_TauEnDown, &b_e1_t1_collinearmass_TauEnDown);
   fChain->SetBranchAddress("e1_t1_collinearmass_TauEnUp", &e1_t1_collinearmass_TauEnUp, &b_e1_t1_collinearmass_TauEnUp);
   fChain->SetBranchAddress("e1_t1_collinearmass_UnclusteredEnDown", &e1_t1_collinearmass_UnclusteredEnDown, &b_e1_t1_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("e1_t1_collinearmass_UnclusteredEnUp", &e1_t1_collinearmass_UnclusteredEnUp, &b_e1_t1_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("e1_t1_pt_tt", &e1_t1_pt_tt, &b_e1_t1_pt_tt);
   fChain->SetBranchAddress("e1_t2_CosThetaStar", &e1_t2_CosThetaStar, &b_e1_t2_CosThetaStar);
   fChain->SetBranchAddress("e1_t2_DPhi", &e1_t2_DPhi, &b_e1_t2_DPhi);
   fChain->SetBranchAddress("e1_t2_DR", &e1_t2_DR, &b_e1_t2_DR);
   fChain->SetBranchAddress("e1_t2_Eta", &e1_t2_Eta, &b_e1_t2_Eta);
   fChain->SetBranchAddress("e1_t2_Mass", &e1_t2_Mass, &b_e1_t2_Mass);
   fChain->SetBranchAddress("e1_t2_Mass_TauEnDown", &e1_t2_Mass_TauEnDown, &b_e1_t2_Mass_TauEnDown);
   fChain->SetBranchAddress("e1_t2_Mass_TauEnUp", &e1_t2_Mass_TauEnUp, &b_e1_t2_Mass_TauEnUp);
   fChain->SetBranchAddress("e1_t2_Mt", &e1_t2_Mt, &b_e1_t2_Mt);
   fChain->SetBranchAddress("e1_t2_MtTotal", &e1_t2_MtTotal, &b_e1_t2_MtTotal);
   fChain->SetBranchAddress("e1_t2_Mt_TauEnDown", &e1_t2_Mt_TauEnDown, &b_e1_t2_Mt_TauEnDown);
   fChain->SetBranchAddress("e1_t2_Mt_TauEnUp", &e1_t2_Mt_TauEnUp, &b_e1_t2_Mt_TauEnUp);
   fChain->SetBranchAddress("e1_t2_MvaMet", &e1_t2_MvaMet, &b_e1_t2_MvaMet);
   fChain->SetBranchAddress("e1_t2_MvaMetCovMatrix00", &e1_t2_MvaMetCovMatrix00, &b_e1_t2_MvaMetCovMatrix00);
   fChain->SetBranchAddress("e1_t2_MvaMetCovMatrix01", &e1_t2_MvaMetCovMatrix01, &b_e1_t2_MvaMetCovMatrix01);
   fChain->SetBranchAddress("e1_t2_MvaMetCovMatrix10", &e1_t2_MvaMetCovMatrix10, &b_e1_t2_MvaMetCovMatrix10);
   fChain->SetBranchAddress("e1_t2_MvaMetCovMatrix11", &e1_t2_MvaMetCovMatrix11, &b_e1_t2_MvaMetCovMatrix11);
   fChain->SetBranchAddress("e1_t2_MvaMetPhi", &e1_t2_MvaMetPhi, &b_e1_t2_MvaMetPhi);
   fChain->SetBranchAddress("e1_t2_PZeta", &e1_t2_PZeta, &b_e1_t2_PZeta);
   fChain->SetBranchAddress("e1_t2_PZetaLess0p85PZetaVis", &e1_t2_PZetaLess0p85PZetaVis, &b_e1_t2_PZetaLess0p85PZetaVis);
   fChain->SetBranchAddress("e1_t2_PZetaVis", &e1_t2_PZetaVis, &b_e1_t2_PZetaVis);
   fChain->SetBranchAddress("e1_t2_Phi", &e1_t2_Phi, &b_e1_t2_Phi);
   fChain->SetBranchAddress("e1_t2_Pt", &e1_t2_Pt, &b_e1_t2_Pt);
   fChain->SetBranchAddress("e1_t2_SS", &e1_t2_SS, &b_e1_t2_SS);
   fChain->SetBranchAddress("e1_t2_ToMETDPhi_Ty1", &e1_t2_ToMETDPhi_Ty1, &b_e1_t2_ToMETDPhi_Ty1);
   fChain->SetBranchAddress("e1_t2_collinearmass", &e1_t2_collinearmass, &b_e1_t2_collinearmass);
   fChain->SetBranchAddress("e1_t2_collinearmass_CheckUESDown", &e1_t2_collinearmass_CheckUESDown, &b_e1_t2_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("e1_t2_collinearmass_CheckUESUp", &e1_t2_collinearmass_CheckUESUp, &b_e1_t2_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("e1_t2_collinearmass_EleEnDown", &e1_t2_collinearmass_EleEnDown, &b_e1_t2_collinearmass_EleEnDown);
   fChain->SetBranchAddress("e1_t2_collinearmass_EleEnUp", &e1_t2_collinearmass_EleEnUp, &b_e1_t2_collinearmass_EleEnUp);
   fChain->SetBranchAddress("e1_t2_collinearmass_JetCheckTotalDown", &e1_t2_collinearmass_JetCheckTotalDown, &b_e1_t2_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("e1_t2_collinearmass_JetCheckTotalUp", &e1_t2_collinearmass_JetCheckTotalUp, &b_e1_t2_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("e1_t2_collinearmass_JetEnDown", &e1_t2_collinearmass_JetEnDown, &b_e1_t2_collinearmass_JetEnDown);
   fChain->SetBranchAddress("e1_t2_collinearmass_JetEnUp", &e1_t2_collinearmass_JetEnUp, &b_e1_t2_collinearmass_JetEnUp);
   fChain->SetBranchAddress("e1_t2_collinearmass_MuEnDown", &e1_t2_collinearmass_MuEnDown, &b_e1_t2_collinearmass_MuEnDown);
   fChain->SetBranchAddress("e1_t2_collinearmass_MuEnUp", &e1_t2_collinearmass_MuEnUp, &b_e1_t2_collinearmass_MuEnUp);
   fChain->SetBranchAddress("e1_t2_collinearmass_TauEnDown", &e1_t2_collinearmass_TauEnDown, &b_e1_t2_collinearmass_TauEnDown);
   fChain->SetBranchAddress("e1_t2_collinearmass_TauEnUp", &e1_t2_collinearmass_TauEnUp, &b_e1_t2_collinearmass_TauEnUp);
   fChain->SetBranchAddress("e1_t2_collinearmass_UnclusteredEnDown", &e1_t2_collinearmass_UnclusteredEnDown, &b_e1_t2_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("e1_t2_collinearmass_UnclusteredEnUp", &e1_t2_collinearmass_UnclusteredEnUp, &b_e1_t2_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("e1_t2_pt_tt", &e1_t2_pt_tt, &b_e1_t2_pt_tt);
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
   fChain->SetBranchAddress("e2_t1_CosThetaStar", &e2_t1_CosThetaStar, &b_e2_t1_CosThetaStar);
   fChain->SetBranchAddress("e2_t1_DPhi", &e2_t1_DPhi, &b_e2_t1_DPhi);
   fChain->SetBranchAddress("e2_t1_DR", &e2_t1_DR, &b_e2_t1_DR);
   fChain->SetBranchAddress("e2_t1_Eta", &e2_t1_Eta, &b_e2_t1_Eta);
   fChain->SetBranchAddress("e2_t1_Mass", &e2_t1_Mass, &b_e2_t1_Mass);
   fChain->SetBranchAddress("e2_t1_Mass_TauEnDown", &e2_t1_Mass_TauEnDown, &b_e2_t1_Mass_TauEnDown);
   fChain->SetBranchAddress("e2_t1_Mass_TauEnUp", &e2_t1_Mass_TauEnUp, &b_e2_t1_Mass_TauEnUp);
   fChain->SetBranchAddress("e2_t1_Mt", &e2_t1_Mt, &b_e2_t1_Mt);
   fChain->SetBranchAddress("e2_t1_MtTotal", &e2_t1_MtTotal, &b_e2_t1_MtTotal);
   fChain->SetBranchAddress("e2_t1_Mt_TauEnDown", &e2_t1_Mt_TauEnDown, &b_e2_t1_Mt_TauEnDown);
   fChain->SetBranchAddress("e2_t1_Mt_TauEnUp", &e2_t1_Mt_TauEnUp, &b_e2_t1_Mt_TauEnUp);
   fChain->SetBranchAddress("e2_t1_MvaMet", &e2_t1_MvaMet, &b_e2_t1_MvaMet);
   fChain->SetBranchAddress("e2_t1_MvaMetCovMatrix00", &e2_t1_MvaMetCovMatrix00, &b_e2_t1_MvaMetCovMatrix00);
   fChain->SetBranchAddress("e2_t1_MvaMetCovMatrix01", &e2_t1_MvaMetCovMatrix01, &b_e2_t1_MvaMetCovMatrix01);
   fChain->SetBranchAddress("e2_t1_MvaMetCovMatrix10", &e2_t1_MvaMetCovMatrix10, &b_e2_t1_MvaMetCovMatrix10);
   fChain->SetBranchAddress("e2_t1_MvaMetCovMatrix11", &e2_t1_MvaMetCovMatrix11, &b_e2_t1_MvaMetCovMatrix11);
   fChain->SetBranchAddress("e2_t1_MvaMetPhi", &e2_t1_MvaMetPhi, &b_e2_t1_MvaMetPhi);
   fChain->SetBranchAddress("e2_t1_PZeta", &e2_t1_PZeta, &b_e2_t1_PZeta);
   fChain->SetBranchAddress("e2_t1_PZetaLess0p85PZetaVis", &e2_t1_PZetaLess0p85PZetaVis, &b_e2_t1_PZetaLess0p85PZetaVis);
   fChain->SetBranchAddress("e2_t1_PZetaVis", &e2_t1_PZetaVis, &b_e2_t1_PZetaVis);
   fChain->SetBranchAddress("e2_t1_Phi", &e2_t1_Phi, &b_e2_t1_Phi);
   fChain->SetBranchAddress("e2_t1_Pt", &e2_t1_Pt, &b_e2_t1_Pt);
   fChain->SetBranchAddress("e2_t1_SS", &e2_t1_SS, &b_e2_t1_SS);
   fChain->SetBranchAddress("e2_t1_ToMETDPhi_Ty1", &e2_t1_ToMETDPhi_Ty1, &b_e2_t1_ToMETDPhi_Ty1);
   fChain->SetBranchAddress("e2_t1_collinearmass", &e2_t1_collinearmass, &b_e2_t1_collinearmass);
   fChain->SetBranchAddress("e2_t1_collinearmass_CheckUESDown", &e2_t1_collinearmass_CheckUESDown, &b_e2_t1_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("e2_t1_collinearmass_CheckUESUp", &e2_t1_collinearmass_CheckUESUp, &b_e2_t1_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("e2_t1_collinearmass_EleEnDown", &e2_t1_collinearmass_EleEnDown, &b_e2_t1_collinearmass_EleEnDown);
   fChain->SetBranchAddress("e2_t1_collinearmass_EleEnUp", &e2_t1_collinearmass_EleEnUp, &b_e2_t1_collinearmass_EleEnUp);
   fChain->SetBranchAddress("e2_t1_collinearmass_JetCheckTotalDown", &e2_t1_collinearmass_JetCheckTotalDown, &b_e2_t1_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("e2_t1_collinearmass_JetCheckTotalUp", &e2_t1_collinearmass_JetCheckTotalUp, &b_e2_t1_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("e2_t1_collinearmass_JetEnDown", &e2_t1_collinearmass_JetEnDown, &b_e2_t1_collinearmass_JetEnDown);
   fChain->SetBranchAddress("e2_t1_collinearmass_JetEnUp", &e2_t1_collinearmass_JetEnUp, &b_e2_t1_collinearmass_JetEnUp);
   fChain->SetBranchAddress("e2_t1_collinearmass_MuEnDown", &e2_t1_collinearmass_MuEnDown, &b_e2_t1_collinearmass_MuEnDown);
   fChain->SetBranchAddress("e2_t1_collinearmass_MuEnUp", &e2_t1_collinearmass_MuEnUp, &b_e2_t1_collinearmass_MuEnUp);
   fChain->SetBranchAddress("e2_t1_collinearmass_TauEnDown", &e2_t1_collinearmass_TauEnDown, &b_e2_t1_collinearmass_TauEnDown);
   fChain->SetBranchAddress("e2_t1_collinearmass_TauEnUp", &e2_t1_collinearmass_TauEnUp, &b_e2_t1_collinearmass_TauEnUp);
   fChain->SetBranchAddress("e2_t1_collinearmass_UnclusteredEnDown", &e2_t1_collinearmass_UnclusteredEnDown, &b_e2_t1_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("e2_t1_collinearmass_UnclusteredEnUp", &e2_t1_collinearmass_UnclusteredEnUp, &b_e2_t1_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("e2_t1_pt_tt", &e2_t1_pt_tt, &b_e2_t1_pt_tt);
   fChain->SetBranchAddress("e2_t2_CosThetaStar", &e2_t2_CosThetaStar, &b_e2_t2_CosThetaStar);
   fChain->SetBranchAddress("e2_t2_DPhi", &e2_t2_DPhi, &b_e2_t2_DPhi);
   fChain->SetBranchAddress("e2_t2_DR", &e2_t2_DR, &b_e2_t2_DR);
   fChain->SetBranchAddress("e2_t2_Eta", &e2_t2_Eta, &b_e2_t2_Eta);
   fChain->SetBranchAddress("e2_t2_Mass", &e2_t2_Mass, &b_e2_t2_Mass);
   fChain->SetBranchAddress("e2_t2_Mass_TauEnDown", &e2_t2_Mass_TauEnDown, &b_e2_t2_Mass_TauEnDown);
   fChain->SetBranchAddress("e2_t2_Mass_TauEnUp", &e2_t2_Mass_TauEnUp, &b_e2_t2_Mass_TauEnUp);
   fChain->SetBranchAddress("e2_t2_Mt", &e2_t2_Mt, &b_e2_t2_Mt);
   fChain->SetBranchAddress("e2_t2_MtTotal", &e2_t2_MtTotal, &b_e2_t2_MtTotal);
   fChain->SetBranchAddress("e2_t2_Mt_TauEnDown", &e2_t2_Mt_TauEnDown, &b_e2_t2_Mt_TauEnDown);
   fChain->SetBranchAddress("e2_t2_Mt_TauEnUp", &e2_t2_Mt_TauEnUp, &b_e2_t2_Mt_TauEnUp);
   fChain->SetBranchAddress("e2_t2_MvaMet", &e2_t2_MvaMet, &b_e2_t2_MvaMet);
   fChain->SetBranchAddress("e2_t2_MvaMetCovMatrix00", &e2_t2_MvaMetCovMatrix00, &b_e2_t2_MvaMetCovMatrix00);
   fChain->SetBranchAddress("e2_t2_MvaMetCovMatrix01", &e2_t2_MvaMetCovMatrix01, &b_e2_t2_MvaMetCovMatrix01);
   fChain->SetBranchAddress("e2_t2_MvaMetCovMatrix10", &e2_t2_MvaMetCovMatrix10, &b_e2_t2_MvaMetCovMatrix10);
   fChain->SetBranchAddress("e2_t2_MvaMetCovMatrix11", &e2_t2_MvaMetCovMatrix11, &b_e2_t2_MvaMetCovMatrix11);
   fChain->SetBranchAddress("e2_t2_MvaMetPhi", &e2_t2_MvaMetPhi, &b_e2_t2_MvaMetPhi);
   fChain->SetBranchAddress("e2_t2_PZeta", &e2_t2_PZeta, &b_e2_t2_PZeta);
   fChain->SetBranchAddress("e2_t2_PZetaLess0p85PZetaVis", &e2_t2_PZetaLess0p85PZetaVis, &b_e2_t2_PZetaLess0p85PZetaVis);
   fChain->SetBranchAddress("e2_t2_PZetaVis", &e2_t2_PZetaVis, &b_e2_t2_PZetaVis);
   fChain->SetBranchAddress("e2_t2_Phi", &e2_t2_Phi, &b_e2_t2_Phi);
   fChain->SetBranchAddress("e2_t2_Pt", &e2_t2_Pt, &b_e2_t2_Pt);
   fChain->SetBranchAddress("e2_t2_SS", &e2_t2_SS, &b_e2_t2_SS);
   fChain->SetBranchAddress("e2_t2_ToMETDPhi_Ty1", &e2_t2_ToMETDPhi_Ty1, &b_e2_t2_ToMETDPhi_Ty1);
   fChain->SetBranchAddress("e2_t2_collinearmass", &e2_t2_collinearmass, &b_e2_t2_collinearmass);
   fChain->SetBranchAddress("e2_t2_collinearmass_CheckUESDown", &e2_t2_collinearmass_CheckUESDown, &b_e2_t2_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("e2_t2_collinearmass_CheckUESUp", &e2_t2_collinearmass_CheckUESUp, &b_e2_t2_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("e2_t2_collinearmass_EleEnDown", &e2_t2_collinearmass_EleEnDown, &b_e2_t2_collinearmass_EleEnDown);
   fChain->SetBranchAddress("e2_t2_collinearmass_EleEnUp", &e2_t2_collinearmass_EleEnUp, &b_e2_t2_collinearmass_EleEnUp);
   fChain->SetBranchAddress("e2_t2_collinearmass_JetCheckTotalDown", &e2_t2_collinearmass_JetCheckTotalDown, &b_e2_t2_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("e2_t2_collinearmass_JetCheckTotalUp", &e2_t2_collinearmass_JetCheckTotalUp, &b_e2_t2_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("e2_t2_collinearmass_JetEnDown", &e2_t2_collinearmass_JetEnDown, &b_e2_t2_collinearmass_JetEnDown);
   fChain->SetBranchAddress("e2_t2_collinearmass_JetEnUp", &e2_t2_collinearmass_JetEnUp, &b_e2_t2_collinearmass_JetEnUp);
   fChain->SetBranchAddress("e2_t2_collinearmass_MuEnDown", &e2_t2_collinearmass_MuEnDown, &b_e2_t2_collinearmass_MuEnDown);
   fChain->SetBranchAddress("e2_t2_collinearmass_MuEnUp", &e2_t2_collinearmass_MuEnUp, &b_e2_t2_collinearmass_MuEnUp);
   fChain->SetBranchAddress("e2_t2_collinearmass_TauEnDown", &e2_t2_collinearmass_TauEnDown, &b_e2_t2_collinearmass_TauEnDown);
   fChain->SetBranchAddress("e2_t2_collinearmass_TauEnUp", &e2_t2_collinearmass_TauEnUp, &b_e2_t2_collinearmass_TauEnUp);
   fChain->SetBranchAddress("e2_t2_collinearmass_UnclusteredEnDown", &e2_t2_collinearmass_UnclusteredEnDown, &b_e2_t2_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("e2_t2_collinearmass_UnclusteredEnUp", &e2_t2_collinearmass_UnclusteredEnUp, &b_e2_t2_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("e2_t2_pt_tt", &e2_t2_pt_tt, &b_e2_t2_pt_tt);
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
   fChain->SetBranchAddress("t1AbsEta", &t1AbsEta, &b_t1AbsEta);
   fChain->SetBranchAddress("t1AgainstElectronLooseMVA6", &t1AgainstElectronLooseMVA6, &b_t1AgainstElectronLooseMVA6);
   fChain->SetBranchAddress("t1AgainstElectronMVA6Raw", &t1AgainstElectronMVA6Raw, &b_t1AgainstElectronMVA6Raw);
   fChain->SetBranchAddress("t1AgainstElectronMVA6category", &t1AgainstElectronMVA6category, &b_t1AgainstElectronMVA6category);
   fChain->SetBranchAddress("t1AgainstElectronMediumMVA6", &t1AgainstElectronMediumMVA6, &b_t1AgainstElectronMediumMVA6);
   fChain->SetBranchAddress("t1AgainstElectronTightMVA6", &t1AgainstElectronTightMVA6, &b_t1AgainstElectronTightMVA6);
   fChain->SetBranchAddress("t1AgainstElectronVLooseMVA6", &t1AgainstElectronVLooseMVA6, &b_t1AgainstElectronVLooseMVA6);
   fChain->SetBranchAddress("t1AgainstElectronVTightMVA6", &t1AgainstElectronVTightMVA6, &b_t1AgainstElectronVTightMVA6);
   fChain->SetBranchAddress("t1AgainstMuonLoose3", &t1AgainstMuonLoose3, &b_t1AgainstMuonLoose3);
   fChain->SetBranchAddress("t1AgainstMuonTight3", &t1AgainstMuonTight3, &b_t1AgainstMuonTight3);
   fChain->SetBranchAddress("t1ByCombinedIsolationDeltaBetaCorrRaw3Hits", &t1ByCombinedIsolationDeltaBetaCorrRaw3Hits, &b_t1ByCombinedIsolationDeltaBetaCorrRaw3Hits);
   fChain->SetBranchAddress("t1ByIsolationMVArun2v1DBdR03oldDMwLTraw", &t1ByIsolationMVArun2v1DBdR03oldDMwLTraw, &b_t1ByIsolationMVArun2v1DBdR03oldDMwLTraw);
   fChain->SetBranchAddress("t1ByIsolationMVArun2v1DBnewDMwLTraw", &t1ByIsolationMVArun2v1DBnewDMwLTraw, &b_t1ByIsolationMVArun2v1DBnewDMwLTraw);
   fChain->SetBranchAddress("t1ByIsolationMVArun2v1DBoldDMwLTraw", &t1ByIsolationMVArun2v1DBoldDMwLTraw, &b_t1ByIsolationMVArun2v1DBoldDMwLTraw);
   fChain->SetBranchAddress("t1ByIsolationMVArun2v1PWdR03oldDMwLTraw", &t1ByIsolationMVArun2v1PWdR03oldDMwLTraw, &b_t1ByIsolationMVArun2v1PWdR03oldDMwLTraw);
   fChain->SetBranchAddress("t1ByIsolationMVArun2v1PWnewDMwLTraw", &t1ByIsolationMVArun2v1PWnewDMwLTraw, &b_t1ByIsolationMVArun2v1PWnewDMwLTraw);
   fChain->SetBranchAddress("t1ByIsolationMVArun2v1PWoldDMwLTraw", &t1ByIsolationMVArun2v1PWoldDMwLTraw, &b_t1ByIsolationMVArun2v1PWoldDMwLTraw);
   fChain->SetBranchAddress("t1ByLooseCombinedIsolationDeltaBetaCorr3Hits", &t1ByLooseCombinedIsolationDeltaBetaCorr3Hits, &b_t1ByLooseCombinedIsolationDeltaBetaCorr3Hits);
   fChain->SetBranchAddress("t1ByLooseIsolationMVArun2v1DBdR03oldDMwLT", &t1ByLooseIsolationMVArun2v1DBdR03oldDMwLT, &b_t1ByLooseIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("t1ByLooseIsolationMVArun2v1DBnewDMwLT", &t1ByLooseIsolationMVArun2v1DBnewDMwLT, &b_t1ByLooseIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("t1ByLooseIsolationMVArun2v1DBoldDMwLT", &t1ByLooseIsolationMVArun2v1DBoldDMwLT, &b_t1ByLooseIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("t1ByLooseIsolationMVArun2v1PWdR03oldDMwLT", &t1ByLooseIsolationMVArun2v1PWdR03oldDMwLT, &b_t1ByLooseIsolationMVArun2v1PWdR03oldDMwLT);
   fChain->SetBranchAddress("t1ByLooseIsolationMVArun2v1PWnewDMwLT", &t1ByLooseIsolationMVArun2v1PWnewDMwLT, &b_t1ByLooseIsolationMVArun2v1PWnewDMwLT);
   fChain->SetBranchAddress("t1ByLooseIsolationMVArun2v1PWoldDMwLT", &t1ByLooseIsolationMVArun2v1PWoldDMwLT, &b_t1ByLooseIsolationMVArun2v1PWoldDMwLT);
   fChain->SetBranchAddress("t1ByMediumCombinedIsolationDeltaBetaCorr3Hits", &t1ByMediumCombinedIsolationDeltaBetaCorr3Hits, &b_t1ByMediumCombinedIsolationDeltaBetaCorr3Hits);
   fChain->SetBranchAddress("t1ByMediumIsolationMVArun2v1DBdR03oldDMwLT", &t1ByMediumIsolationMVArun2v1DBdR03oldDMwLT, &b_t1ByMediumIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("t1ByMediumIsolationMVArun2v1DBnewDMwLT", &t1ByMediumIsolationMVArun2v1DBnewDMwLT, &b_t1ByMediumIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("t1ByMediumIsolationMVArun2v1DBoldDMwLT", &t1ByMediumIsolationMVArun2v1DBoldDMwLT, &b_t1ByMediumIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("t1ByMediumIsolationMVArun2v1PWdR03oldDMwLT", &t1ByMediumIsolationMVArun2v1PWdR03oldDMwLT, &b_t1ByMediumIsolationMVArun2v1PWdR03oldDMwLT);
   fChain->SetBranchAddress("t1ByMediumIsolationMVArun2v1PWnewDMwLT", &t1ByMediumIsolationMVArun2v1PWnewDMwLT, &b_t1ByMediumIsolationMVArun2v1PWnewDMwLT);
   fChain->SetBranchAddress("t1ByMediumIsolationMVArun2v1PWoldDMwLT", &t1ByMediumIsolationMVArun2v1PWoldDMwLT, &b_t1ByMediumIsolationMVArun2v1PWoldDMwLT);
   fChain->SetBranchAddress("t1ByPhotonPtSumOutsideSignalCone", &t1ByPhotonPtSumOutsideSignalCone, &b_t1ByPhotonPtSumOutsideSignalCone);
   fChain->SetBranchAddress("t1ByTightCombinedIsolationDeltaBetaCorr3Hits", &t1ByTightCombinedIsolationDeltaBetaCorr3Hits, &b_t1ByTightCombinedIsolationDeltaBetaCorr3Hits);
   fChain->SetBranchAddress("t1ByTightIsolationMVArun2v1DBdR03oldDMwLT", &t1ByTightIsolationMVArun2v1DBdR03oldDMwLT, &b_t1ByTightIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("t1ByTightIsolationMVArun2v1DBnewDMwLT", &t1ByTightIsolationMVArun2v1DBnewDMwLT, &b_t1ByTightIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("t1ByTightIsolationMVArun2v1DBoldDMwLT", &t1ByTightIsolationMVArun2v1DBoldDMwLT, &b_t1ByTightIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("t1ByTightIsolationMVArun2v1PWdR03oldDMwLT", &t1ByTightIsolationMVArun2v1PWdR03oldDMwLT, &b_t1ByTightIsolationMVArun2v1PWdR03oldDMwLT);
   fChain->SetBranchAddress("t1ByTightIsolationMVArun2v1PWnewDMwLT", &t1ByTightIsolationMVArun2v1PWnewDMwLT, &b_t1ByTightIsolationMVArun2v1PWnewDMwLT);
   fChain->SetBranchAddress("t1ByTightIsolationMVArun2v1PWoldDMwLT", &t1ByTightIsolationMVArun2v1PWoldDMwLT, &b_t1ByTightIsolationMVArun2v1PWoldDMwLT);
   fChain->SetBranchAddress("t1ByVLooseIsolationMVArun2v1DBdR03oldDMwLT", &t1ByVLooseIsolationMVArun2v1DBdR03oldDMwLT, &b_t1ByVLooseIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("t1ByVLooseIsolationMVArun2v1DBnewDMwLT", &t1ByVLooseIsolationMVArun2v1DBnewDMwLT, &b_t1ByVLooseIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("t1ByVLooseIsolationMVArun2v1DBoldDMwLT", &t1ByVLooseIsolationMVArun2v1DBoldDMwLT, &b_t1ByVLooseIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("t1ByVLooseIsolationMVArun2v1PWdR03oldDMwLT", &t1ByVLooseIsolationMVArun2v1PWdR03oldDMwLT, &b_t1ByVLooseIsolationMVArun2v1PWdR03oldDMwLT);
   fChain->SetBranchAddress("t1ByVLooseIsolationMVArun2v1PWnewDMwLT", &t1ByVLooseIsolationMVArun2v1PWnewDMwLT, &b_t1ByVLooseIsolationMVArun2v1PWnewDMwLT);
   fChain->SetBranchAddress("t1ByVLooseIsolationMVArun2v1PWoldDMwLT", &t1ByVLooseIsolationMVArun2v1PWoldDMwLT, &b_t1ByVLooseIsolationMVArun2v1PWoldDMwLT);
   fChain->SetBranchAddress("t1ByVTightIsolationMVArun2v1DBdR03oldDMwLT", &t1ByVTightIsolationMVArun2v1DBdR03oldDMwLT, &b_t1ByVTightIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("t1ByVTightIsolationMVArun2v1DBnewDMwLT", &t1ByVTightIsolationMVArun2v1DBnewDMwLT, &b_t1ByVTightIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("t1ByVTightIsolationMVArun2v1DBoldDMwLT", &t1ByVTightIsolationMVArun2v1DBoldDMwLT, &b_t1ByVTightIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("t1ByVTightIsolationMVArun2v1PWdR03oldDMwLT", &t1ByVTightIsolationMVArun2v1PWdR03oldDMwLT, &b_t1ByVTightIsolationMVArun2v1PWdR03oldDMwLT);
   fChain->SetBranchAddress("t1ByVTightIsolationMVArun2v1PWnewDMwLT", &t1ByVTightIsolationMVArun2v1PWnewDMwLT, &b_t1ByVTightIsolationMVArun2v1PWnewDMwLT);
   fChain->SetBranchAddress("t1ByVTightIsolationMVArun2v1PWoldDMwLT", &t1ByVTightIsolationMVArun2v1PWoldDMwLT, &b_t1ByVTightIsolationMVArun2v1PWoldDMwLT);
   fChain->SetBranchAddress("t1ByVVTightIsolationMVArun2v1DBdR03oldDMwLT", &t1ByVVTightIsolationMVArun2v1DBdR03oldDMwLT, &b_t1ByVVTightIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("t1ByVVTightIsolationMVArun2v1DBnewDMwLT", &t1ByVVTightIsolationMVArun2v1DBnewDMwLT, &b_t1ByVVTightIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("t1ByVVTightIsolationMVArun2v1DBoldDMwLT", &t1ByVVTightIsolationMVArun2v1DBoldDMwLT, &b_t1ByVVTightIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("t1ByVVTightIsolationMVArun2v1PWdR03oldDMwLT", &t1ByVVTightIsolationMVArun2v1PWdR03oldDMwLT, &b_t1ByVVTightIsolationMVArun2v1PWdR03oldDMwLT);
   fChain->SetBranchAddress("t1ByVVTightIsolationMVArun2v1PWnewDMwLT", &t1ByVVTightIsolationMVArun2v1PWnewDMwLT, &b_t1ByVVTightIsolationMVArun2v1PWnewDMwLT);
   fChain->SetBranchAddress("t1ByVVTightIsolationMVArun2v1PWoldDMwLT", &t1ByVVTightIsolationMVArun2v1PWoldDMwLT, &b_t1ByVVTightIsolationMVArun2v1PWoldDMwLT);
   fChain->SetBranchAddress("t1Charge", &t1Charge, &b_t1Charge);
   fChain->SetBranchAddress("t1ChargedIsoPtSum", &t1ChargedIsoPtSum, &b_t1ChargedIsoPtSum);
   fChain->SetBranchAddress("t1ChargedIsoPtSumdR03", &t1ChargedIsoPtSumdR03, &b_t1ChargedIsoPtSumdR03);
   fChain->SetBranchAddress("t1ComesFromHiggs", &t1ComesFromHiggs, &b_t1ComesFromHiggs);
   fChain->SetBranchAddress("t1DPhiToPfMet_type1", &t1DPhiToPfMet_type1, &b_t1DPhiToPfMet_type1);
   fChain->SetBranchAddress("t1DecayMode", &t1DecayMode, &b_t1DecayMode);
   fChain->SetBranchAddress("t1DecayModeFinding", &t1DecayModeFinding, &b_t1DecayModeFinding);
   fChain->SetBranchAddress("t1DecayModeFindingNewDMs", &t1DecayModeFindingNewDMs, &b_t1DecayModeFindingNewDMs);
   fChain->SetBranchAddress("t1DoubleTau32Filter", &t1DoubleTau32Filter, &b_t1DoubleTau32Filter);
   fChain->SetBranchAddress("t1DoubleTau35Filter", &t1DoubleTau35Filter, &b_t1DoubleTau35Filter);
   fChain->SetBranchAddress("t1DoubleTau40Filter", &t1DoubleTau40Filter, &b_t1DoubleTau40Filter);
   fChain->SetBranchAddress("t1ElecOverlap", &t1ElecOverlap, &b_t1ElecOverlap);
   fChain->SetBranchAddress("t1Eta", &t1Eta, &b_t1Eta);
   fChain->SetBranchAddress("t1Eta_TauEnDown", &t1Eta_TauEnDown, &b_t1Eta_TauEnDown);
   fChain->SetBranchAddress("t1Eta_TauEnUp", &t1Eta_TauEnUp, &b_t1Eta_TauEnUp);
   fChain->SetBranchAddress("t1FootprintCorrection", &t1FootprintCorrection, &b_t1FootprintCorrection);
   fChain->SetBranchAddress("t1FootprintCorrectiondR03", &t1FootprintCorrectiondR03, &b_t1FootprintCorrectiondR03);
   fChain->SetBranchAddress("t1GenCharge", &t1GenCharge, &b_t1GenCharge);
   fChain->SetBranchAddress("t1GenDecayMode", &t1GenDecayMode, &b_t1GenDecayMode);
   fChain->SetBranchAddress("t1GenEnergy", &t1GenEnergy, &b_t1GenEnergy);
   fChain->SetBranchAddress("t1GenEta", &t1GenEta, &b_t1GenEta);
   fChain->SetBranchAddress("t1GenIsPrompt", &t1GenIsPrompt, &b_t1GenIsPrompt);
   fChain->SetBranchAddress("t1GenJetEta", &t1GenJetEta, &b_t1GenJetEta);
   fChain->SetBranchAddress("t1GenJetPt", &t1GenJetPt, &b_t1GenJetPt);
   fChain->SetBranchAddress("t1GenMotherEnergy", &t1GenMotherEnergy, &b_t1GenMotherEnergy);
   fChain->SetBranchAddress("t1GenMotherEta", &t1GenMotherEta, &b_t1GenMotherEta);
   fChain->SetBranchAddress("t1GenMotherPdgId", &t1GenMotherPdgId, &b_t1GenMotherPdgId);
   fChain->SetBranchAddress("t1GenMotherPhi", &t1GenMotherPhi, &b_t1GenMotherPhi);
   fChain->SetBranchAddress("t1GenMotherPt", &t1GenMotherPt, &b_t1GenMotherPt);
   fChain->SetBranchAddress("t1GenPdgId", &t1GenPdgId, &b_t1GenPdgId);
   fChain->SetBranchAddress("t1GenPhi", &t1GenPhi, &b_t1GenPhi);
   fChain->SetBranchAddress("t1GenPt", &t1GenPt, &b_t1GenPt);
   fChain->SetBranchAddress("t1GenStatus", &t1GenStatus, &b_t1GenStatus);
   fChain->SetBranchAddress("t1GlobalMuonVtxOverlap", &t1GlobalMuonVtxOverlap, &b_t1GlobalMuonVtxOverlap);
   fChain->SetBranchAddress("t1JetArea", &t1JetArea, &b_t1JetArea);
   fChain->SetBranchAddress("t1JetBtag", &t1JetBtag, &b_t1JetBtag);
   fChain->SetBranchAddress("t1JetDR", &t1JetDR, &b_t1JetDR);
   fChain->SetBranchAddress("t1JetEtaEtaMoment", &t1JetEtaEtaMoment, &b_t1JetEtaEtaMoment);
   fChain->SetBranchAddress("t1JetEtaPhiMoment", &t1JetEtaPhiMoment, &b_t1JetEtaPhiMoment);
   fChain->SetBranchAddress("t1JetEtaPhiSpread", &t1JetEtaPhiSpread, &b_t1JetEtaPhiSpread);
   fChain->SetBranchAddress("t1JetHadronFlavour", &t1JetHadronFlavour, &b_t1JetHadronFlavour);
   fChain->SetBranchAddress("t1JetPFCISVBtag", &t1JetPFCISVBtag, &b_t1JetPFCISVBtag);
   fChain->SetBranchAddress("t1JetPartonFlavour", &t1JetPartonFlavour, &b_t1JetPartonFlavour);
   fChain->SetBranchAddress("t1JetPhiPhiMoment", &t1JetPhiPhiMoment, &b_t1JetPhiPhiMoment);
   fChain->SetBranchAddress("t1JetPt", &t1JetPt, &b_t1JetPt);
   fChain->SetBranchAddress("t1LeadTrackPt", &t1LeadTrackPt, &b_t1LeadTrackPt);
   fChain->SetBranchAddress("t1LowestMll", &t1LowestMll, &b_t1LowestMll);
   fChain->SetBranchAddress("t1Mass", &t1Mass, &b_t1Mass);
   fChain->SetBranchAddress("t1Mass_TauEnDown", &t1Mass_TauEnDown, &b_t1Mass_TauEnDown);
   fChain->SetBranchAddress("t1Mass_TauEnUp", &t1Mass_TauEnUp, &b_t1Mass_TauEnUp);
   fChain->SetBranchAddress("t1MatchesDoubleTau32Path", &t1MatchesDoubleTau32Path, &b_t1MatchesDoubleTau32Path);
   fChain->SetBranchAddress("t1MatchesDoubleTau35Path", &t1MatchesDoubleTau35Path, &b_t1MatchesDoubleTau35Path);
   fChain->SetBranchAddress("t1MatchesDoubleTau40Path", &t1MatchesDoubleTau40Path, &b_t1MatchesDoubleTau40Path);
   fChain->SetBranchAddress("t1MtToPfMet_type1", &t1MtToPfMet_type1, &b_t1MtToPfMet_type1);
   fChain->SetBranchAddress("t1MuOverlap", &t1MuOverlap, &b_t1MuOverlap);
   fChain->SetBranchAddress("t1MuonIdIsoStdVtxOverlap", &t1MuonIdIsoStdVtxOverlap, &b_t1MuonIdIsoStdVtxOverlap);
   fChain->SetBranchAddress("t1MuonIdIsoVtxOverlap", &t1MuonIdIsoVtxOverlap, &b_t1MuonIdIsoVtxOverlap);
   fChain->SetBranchAddress("t1MuonIdVtxOverlap", &t1MuonIdVtxOverlap, &b_t1MuonIdVtxOverlap);
   fChain->SetBranchAddress("t1NChrgHadrIsolationCands", &t1NChrgHadrIsolationCands, &b_t1NChrgHadrIsolationCands);
   fChain->SetBranchAddress("t1NChrgHadrSignalCands", &t1NChrgHadrSignalCands, &b_t1NChrgHadrSignalCands);
   fChain->SetBranchAddress("t1NGammaSignalCands", &t1NGammaSignalCands, &b_t1NGammaSignalCands);
   fChain->SetBranchAddress("t1NNeutralHadrSignalCands", &t1NNeutralHadrSignalCands, &b_t1NNeutralHadrSignalCands);
   fChain->SetBranchAddress("t1NSignalCands", &t1NSignalCands, &b_t1NSignalCands);
   fChain->SetBranchAddress("t1NearestZMass", &t1NearestZMass, &b_t1NearestZMass);
   fChain->SetBranchAddress("t1NeutralIsoPtSum", &t1NeutralIsoPtSum, &b_t1NeutralIsoPtSum);
   fChain->SetBranchAddress("t1NeutralIsoPtSumWeight", &t1NeutralIsoPtSumWeight, &b_t1NeutralIsoPtSumWeight);
   fChain->SetBranchAddress("t1NeutralIsoPtSumWeightdR03", &t1NeutralIsoPtSumWeightdR03, &b_t1NeutralIsoPtSumWeightdR03);
   fChain->SetBranchAddress("t1NeutralIsoPtSumdR03", &t1NeutralIsoPtSumdR03, &b_t1NeutralIsoPtSumdR03);
   fChain->SetBranchAddress("t1PVDXY", &t1PVDXY, &b_t1PVDXY);
   fChain->SetBranchAddress("t1PVDZ", &t1PVDZ, &b_t1PVDZ);
   fChain->SetBranchAddress("t1Phi", &t1Phi, &b_t1Phi);
   fChain->SetBranchAddress("t1Phi_TauEnDown", &t1Phi_TauEnDown, &b_t1Phi_TauEnDown);
   fChain->SetBranchAddress("t1Phi_TauEnUp", &t1Phi_TauEnUp, &b_t1Phi_TauEnUp);
   fChain->SetBranchAddress("t1PhotonPtSumOutsideSignalCone", &t1PhotonPtSumOutsideSignalCone, &b_t1PhotonPtSumOutsideSignalCone);
   fChain->SetBranchAddress("t1PhotonPtSumOutsideSignalConedR03", &t1PhotonPtSumOutsideSignalConedR03, &b_t1PhotonPtSumOutsideSignalConedR03);
   fChain->SetBranchAddress("t1Pt", &t1Pt, &b_t1Pt);
   fChain->SetBranchAddress("t1Pt_TauEnDown", &t1Pt_TauEnDown, &b_t1Pt_TauEnDown);
   fChain->SetBranchAddress("t1Pt_TauEnUp", &t1Pt_TauEnUp, &b_t1Pt_TauEnUp);
   fChain->SetBranchAddress("t1PuCorrPtSum", &t1PuCorrPtSum, &b_t1PuCorrPtSum);
   fChain->SetBranchAddress("t1Rank", &t1Rank, &b_t1Rank);
   fChain->SetBranchAddress("t1VZ", &t1VZ, &b_t1VZ);
   fChain->SetBranchAddress("t1ZTTGenDR", &t1ZTTGenDR, &b_t1ZTTGenDR);
   fChain->SetBranchAddress("t1ZTTGenEta", &t1ZTTGenEta, &b_t1ZTTGenEta);
   fChain->SetBranchAddress("t1ZTTGenMatching", &t1ZTTGenMatching, &b_t1ZTTGenMatching);
   fChain->SetBranchAddress("t1ZTTGenPhi", &t1ZTTGenPhi, &b_t1ZTTGenPhi);
   fChain->SetBranchAddress("t1ZTTGenPt", &t1ZTTGenPt, &b_t1ZTTGenPt);
   fChain->SetBranchAddress("t1_e1_collinearmass", &t1_e1_collinearmass, &b_t1_e1_collinearmass);
   fChain->SetBranchAddress("t1_e1_collinearmass_CheckUESDown", &t1_e1_collinearmass_CheckUESDown, &b_t1_e1_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("t1_e1_collinearmass_CheckUESUp", &t1_e1_collinearmass_CheckUESUp, &b_t1_e1_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("t1_e1_collinearmass_JetCheckTotalDown", &t1_e1_collinearmass_JetCheckTotalDown, &b_t1_e1_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("t1_e1_collinearmass_JetCheckTotalUp", &t1_e1_collinearmass_JetCheckTotalUp, &b_t1_e1_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("t1_e1_collinearmass_JetEnDown", &t1_e1_collinearmass_JetEnDown, &b_t1_e1_collinearmass_JetEnDown);
   fChain->SetBranchAddress("t1_e1_collinearmass_JetEnUp", &t1_e1_collinearmass_JetEnUp, &b_t1_e1_collinearmass_JetEnUp);
   fChain->SetBranchAddress("t1_e1_collinearmass_UnclusteredEnDown", &t1_e1_collinearmass_UnclusteredEnDown, &b_t1_e1_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("t1_e1_collinearmass_UnclusteredEnUp", &t1_e1_collinearmass_UnclusteredEnUp, &b_t1_e1_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("t1_e2_collinearmass", &t1_e2_collinearmass, &b_t1_e2_collinearmass);
   fChain->SetBranchAddress("t1_e2_collinearmass_CheckUESDown", &t1_e2_collinearmass_CheckUESDown, &b_t1_e2_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("t1_e2_collinearmass_CheckUESUp", &t1_e2_collinearmass_CheckUESUp, &b_t1_e2_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("t1_e2_collinearmass_JetCheckTotalDown", &t1_e2_collinearmass_JetCheckTotalDown, &b_t1_e2_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("t1_e2_collinearmass_JetCheckTotalUp", &t1_e2_collinearmass_JetCheckTotalUp, &b_t1_e2_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("t1_e2_collinearmass_JetEnDown", &t1_e2_collinearmass_JetEnDown, &b_t1_e2_collinearmass_JetEnDown);
   fChain->SetBranchAddress("t1_e2_collinearmass_JetEnUp", &t1_e2_collinearmass_JetEnUp, &b_t1_e2_collinearmass_JetEnUp);
   fChain->SetBranchAddress("t1_e2_collinearmass_UnclusteredEnDown", &t1_e2_collinearmass_UnclusteredEnDown, &b_t1_e2_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("t1_e2_collinearmass_UnclusteredEnUp", &t1_e2_collinearmass_UnclusteredEnUp, &b_t1_e2_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("t1_t2_CosThetaStar", &t1_t2_CosThetaStar, &b_t1_t2_CosThetaStar);
   fChain->SetBranchAddress("t1_t2_DPhi", &t1_t2_DPhi, &b_t1_t2_DPhi);
   fChain->SetBranchAddress("t1_t2_DR", &t1_t2_DR, &b_t1_t2_DR);
   fChain->SetBranchAddress("t1_t2_Eta", &t1_t2_Eta, &b_t1_t2_Eta);
   fChain->SetBranchAddress("t1_t2_Mass", &t1_t2_Mass, &b_t1_t2_Mass);
   fChain->SetBranchAddress("t1_t2_Mass_TauEnDown", &t1_t2_Mass_TauEnDown, &b_t1_t2_Mass_TauEnDown);
   fChain->SetBranchAddress("t1_t2_Mass_TauEnUp", &t1_t2_Mass_TauEnUp, &b_t1_t2_Mass_TauEnUp);
   fChain->SetBranchAddress("t1_t2_Mt", &t1_t2_Mt, &b_t1_t2_Mt);
   fChain->SetBranchAddress("t1_t2_MtTotal", &t1_t2_MtTotal, &b_t1_t2_MtTotal);
   fChain->SetBranchAddress("t1_t2_Mt_TauEnDown", &t1_t2_Mt_TauEnDown, &b_t1_t2_Mt_TauEnDown);
   fChain->SetBranchAddress("t1_t2_Mt_TauEnUp", &t1_t2_Mt_TauEnUp, &b_t1_t2_Mt_TauEnUp);
   fChain->SetBranchAddress("t1_t2_MvaMet", &t1_t2_MvaMet, &b_t1_t2_MvaMet);
   fChain->SetBranchAddress("t1_t2_MvaMetCovMatrix00", &t1_t2_MvaMetCovMatrix00, &b_t1_t2_MvaMetCovMatrix00);
   fChain->SetBranchAddress("t1_t2_MvaMetCovMatrix01", &t1_t2_MvaMetCovMatrix01, &b_t1_t2_MvaMetCovMatrix01);
   fChain->SetBranchAddress("t1_t2_MvaMetCovMatrix10", &t1_t2_MvaMetCovMatrix10, &b_t1_t2_MvaMetCovMatrix10);
   fChain->SetBranchAddress("t1_t2_MvaMetCovMatrix11", &t1_t2_MvaMetCovMatrix11, &b_t1_t2_MvaMetCovMatrix11);
   fChain->SetBranchAddress("t1_t2_MvaMetPhi", &t1_t2_MvaMetPhi, &b_t1_t2_MvaMetPhi);
   fChain->SetBranchAddress("t1_t2_PZeta", &t1_t2_PZeta, &b_t1_t2_PZeta);
   fChain->SetBranchAddress("t1_t2_PZetaLess0p85PZetaVis", &t1_t2_PZetaLess0p85PZetaVis, &b_t1_t2_PZetaLess0p85PZetaVis);
   fChain->SetBranchAddress("t1_t2_PZetaVis", &t1_t2_PZetaVis, &b_t1_t2_PZetaVis);
   fChain->SetBranchAddress("t1_t2_Phi", &t1_t2_Phi, &b_t1_t2_Phi);
   fChain->SetBranchAddress("t1_t2_Pt", &t1_t2_Pt, &b_t1_t2_Pt);
   fChain->SetBranchAddress("t1_t2_SS", &t1_t2_SS, &b_t1_t2_SS);
   fChain->SetBranchAddress("t1_t2_ToMETDPhi_Ty1", &t1_t2_ToMETDPhi_Ty1, &b_t1_t2_ToMETDPhi_Ty1);
   fChain->SetBranchAddress("t1_t2_collinearmass", &t1_t2_collinearmass, &b_t1_t2_collinearmass);
   fChain->SetBranchAddress("t1_t2_collinearmass_CheckUESDown", &t1_t2_collinearmass_CheckUESDown, &b_t1_t2_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("t1_t2_collinearmass_CheckUESUp", &t1_t2_collinearmass_CheckUESUp, &b_t1_t2_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("t1_t2_collinearmass_EleEnDown", &t1_t2_collinearmass_EleEnDown, &b_t1_t2_collinearmass_EleEnDown);
   fChain->SetBranchAddress("t1_t2_collinearmass_EleEnUp", &t1_t2_collinearmass_EleEnUp, &b_t1_t2_collinearmass_EleEnUp);
   fChain->SetBranchAddress("t1_t2_collinearmass_JetCheckTotalDown", &t1_t2_collinearmass_JetCheckTotalDown, &b_t1_t2_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("t1_t2_collinearmass_JetCheckTotalUp", &t1_t2_collinearmass_JetCheckTotalUp, &b_t1_t2_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("t1_t2_collinearmass_JetEnDown", &t1_t2_collinearmass_JetEnDown, &b_t1_t2_collinearmass_JetEnDown);
   fChain->SetBranchAddress("t1_t2_collinearmass_JetEnUp", &t1_t2_collinearmass_JetEnUp, &b_t1_t2_collinearmass_JetEnUp);
   fChain->SetBranchAddress("t1_t2_collinearmass_MuEnDown", &t1_t2_collinearmass_MuEnDown, &b_t1_t2_collinearmass_MuEnDown);
   fChain->SetBranchAddress("t1_t2_collinearmass_MuEnUp", &t1_t2_collinearmass_MuEnUp, &b_t1_t2_collinearmass_MuEnUp);
   fChain->SetBranchAddress("t1_t2_collinearmass_TauEnDown", &t1_t2_collinearmass_TauEnDown, &b_t1_t2_collinearmass_TauEnDown);
   fChain->SetBranchAddress("t1_t2_collinearmass_TauEnUp", &t1_t2_collinearmass_TauEnUp, &b_t1_t2_collinearmass_TauEnUp);
   fChain->SetBranchAddress("t1_t2_collinearmass_UnclusteredEnDown", &t1_t2_collinearmass_UnclusteredEnDown, &b_t1_t2_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("t1_t2_collinearmass_UnclusteredEnUp", &t1_t2_collinearmass_UnclusteredEnUp, &b_t1_t2_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("t1_t2_pt_tt", &t1_t2_pt_tt, &b_t1_t2_pt_tt);
   fChain->SetBranchAddress("t2AbsEta", &t2AbsEta, &b_t2AbsEta);
   fChain->SetBranchAddress("t2AgainstElectronLooseMVA6", &t2AgainstElectronLooseMVA6, &b_t2AgainstElectronLooseMVA6);
   fChain->SetBranchAddress("t2AgainstElectronMVA6Raw", &t2AgainstElectronMVA6Raw, &b_t2AgainstElectronMVA6Raw);
   fChain->SetBranchAddress("t2AgainstElectronMVA6category", &t2AgainstElectronMVA6category, &b_t2AgainstElectronMVA6category);
   fChain->SetBranchAddress("t2AgainstElectronMediumMVA6", &t2AgainstElectronMediumMVA6, &b_t2AgainstElectronMediumMVA6);
   fChain->SetBranchAddress("t2AgainstElectronTightMVA6", &t2AgainstElectronTightMVA6, &b_t2AgainstElectronTightMVA6);
   fChain->SetBranchAddress("t2AgainstElectronVLooseMVA6", &t2AgainstElectronVLooseMVA6, &b_t2AgainstElectronVLooseMVA6);
   fChain->SetBranchAddress("t2AgainstElectronVTightMVA6", &t2AgainstElectronVTightMVA6, &b_t2AgainstElectronVTightMVA6);
   fChain->SetBranchAddress("t2AgainstMuonLoose3", &t2AgainstMuonLoose3, &b_t2AgainstMuonLoose3);
   fChain->SetBranchAddress("t2AgainstMuonTight3", &t2AgainstMuonTight3, &b_t2AgainstMuonTight3);
   fChain->SetBranchAddress("t2ByCombinedIsolationDeltaBetaCorrRaw3Hits", &t2ByCombinedIsolationDeltaBetaCorrRaw3Hits, &b_t2ByCombinedIsolationDeltaBetaCorrRaw3Hits);
   fChain->SetBranchAddress("t2ByIsolationMVArun2v1DBdR03oldDMwLTraw", &t2ByIsolationMVArun2v1DBdR03oldDMwLTraw, &b_t2ByIsolationMVArun2v1DBdR03oldDMwLTraw);
   fChain->SetBranchAddress("t2ByIsolationMVArun2v1DBnewDMwLTraw", &t2ByIsolationMVArun2v1DBnewDMwLTraw, &b_t2ByIsolationMVArun2v1DBnewDMwLTraw);
   fChain->SetBranchAddress("t2ByIsolationMVArun2v1DBoldDMwLTraw", &t2ByIsolationMVArun2v1DBoldDMwLTraw, &b_t2ByIsolationMVArun2v1DBoldDMwLTraw);
   fChain->SetBranchAddress("t2ByIsolationMVArun2v1PWdR03oldDMwLTraw", &t2ByIsolationMVArun2v1PWdR03oldDMwLTraw, &b_t2ByIsolationMVArun2v1PWdR03oldDMwLTraw);
   fChain->SetBranchAddress("t2ByIsolationMVArun2v1PWnewDMwLTraw", &t2ByIsolationMVArun2v1PWnewDMwLTraw, &b_t2ByIsolationMVArun2v1PWnewDMwLTraw);
   fChain->SetBranchAddress("t2ByIsolationMVArun2v1PWoldDMwLTraw", &t2ByIsolationMVArun2v1PWoldDMwLTraw, &b_t2ByIsolationMVArun2v1PWoldDMwLTraw);
   fChain->SetBranchAddress("t2ByLooseCombinedIsolationDeltaBetaCorr3Hits", &t2ByLooseCombinedIsolationDeltaBetaCorr3Hits, &b_t2ByLooseCombinedIsolationDeltaBetaCorr3Hits);
   fChain->SetBranchAddress("t2ByLooseIsolationMVArun2v1DBdR03oldDMwLT", &t2ByLooseIsolationMVArun2v1DBdR03oldDMwLT, &b_t2ByLooseIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("t2ByLooseIsolationMVArun2v1DBnewDMwLT", &t2ByLooseIsolationMVArun2v1DBnewDMwLT, &b_t2ByLooseIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("t2ByLooseIsolationMVArun2v1DBoldDMwLT", &t2ByLooseIsolationMVArun2v1DBoldDMwLT, &b_t2ByLooseIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("t2ByLooseIsolationMVArun2v1PWdR03oldDMwLT", &t2ByLooseIsolationMVArun2v1PWdR03oldDMwLT, &b_t2ByLooseIsolationMVArun2v1PWdR03oldDMwLT);
   fChain->SetBranchAddress("t2ByLooseIsolationMVArun2v1PWnewDMwLT", &t2ByLooseIsolationMVArun2v1PWnewDMwLT, &b_t2ByLooseIsolationMVArun2v1PWnewDMwLT);
   fChain->SetBranchAddress("t2ByLooseIsolationMVArun2v1PWoldDMwLT", &t2ByLooseIsolationMVArun2v1PWoldDMwLT, &b_t2ByLooseIsolationMVArun2v1PWoldDMwLT);
   fChain->SetBranchAddress("t2ByMediumCombinedIsolationDeltaBetaCorr3Hits", &t2ByMediumCombinedIsolationDeltaBetaCorr3Hits, &b_t2ByMediumCombinedIsolationDeltaBetaCorr3Hits);
   fChain->SetBranchAddress("t2ByMediumIsolationMVArun2v1DBdR03oldDMwLT", &t2ByMediumIsolationMVArun2v1DBdR03oldDMwLT, &b_t2ByMediumIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("t2ByMediumIsolationMVArun2v1DBnewDMwLT", &t2ByMediumIsolationMVArun2v1DBnewDMwLT, &b_t2ByMediumIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("t2ByMediumIsolationMVArun2v1DBoldDMwLT", &t2ByMediumIsolationMVArun2v1DBoldDMwLT, &b_t2ByMediumIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("t2ByMediumIsolationMVArun2v1PWdR03oldDMwLT", &t2ByMediumIsolationMVArun2v1PWdR03oldDMwLT, &b_t2ByMediumIsolationMVArun2v1PWdR03oldDMwLT);
   fChain->SetBranchAddress("t2ByMediumIsolationMVArun2v1PWnewDMwLT", &t2ByMediumIsolationMVArun2v1PWnewDMwLT, &b_t2ByMediumIsolationMVArun2v1PWnewDMwLT);
   fChain->SetBranchAddress("t2ByMediumIsolationMVArun2v1PWoldDMwLT", &t2ByMediumIsolationMVArun2v1PWoldDMwLT, &b_t2ByMediumIsolationMVArun2v1PWoldDMwLT);
   fChain->SetBranchAddress("t2ByPhotonPtSumOutsideSignalCone", &t2ByPhotonPtSumOutsideSignalCone, &b_t2ByPhotonPtSumOutsideSignalCone);
   fChain->SetBranchAddress("t2ByTightCombinedIsolationDeltaBetaCorr3Hits", &t2ByTightCombinedIsolationDeltaBetaCorr3Hits, &b_t2ByTightCombinedIsolationDeltaBetaCorr3Hits);
   fChain->SetBranchAddress("t2ByTightIsolationMVArun2v1DBdR03oldDMwLT", &t2ByTightIsolationMVArun2v1DBdR03oldDMwLT, &b_t2ByTightIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("t2ByTightIsolationMVArun2v1DBnewDMwLT", &t2ByTightIsolationMVArun2v1DBnewDMwLT, &b_t2ByTightIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("t2ByTightIsolationMVArun2v1DBoldDMwLT", &t2ByTightIsolationMVArun2v1DBoldDMwLT, &b_t2ByTightIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("t2ByTightIsolationMVArun2v1PWdR03oldDMwLT", &t2ByTightIsolationMVArun2v1PWdR03oldDMwLT, &b_t2ByTightIsolationMVArun2v1PWdR03oldDMwLT);
   fChain->SetBranchAddress("t2ByTightIsolationMVArun2v1PWnewDMwLT", &t2ByTightIsolationMVArun2v1PWnewDMwLT, &b_t2ByTightIsolationMVArun2v1PWnewDMwLT);
   fChain->SetBranchAddress("t2ByTightIsolationMVArun2v1PWoldDMwLT", &t2ByTightIsolationMVArun2v1PWoldDMwLT, &b_t2ByTightIsolationMVArun2v1PWoldDMwLT);
   fChain->SetBranchAddress("t2ByVLooseIsolationMVArun2v1DBdR03oldDMwLT", &t2ByVLooseIsolationMVArun2v1DBdR03oldDMwLT, &b_t2ByVLooseIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("t2ByVLooseIsolationMVArun2v1DBnewDMwLT", &t2ByVLooseIsolationMVArun2v1DBnewDMwLT, &b_t2ByVLooseIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("t2ByVLooseIsolationMVArun2v1DBoldDMwLT", &t2ByVLooseIsolationMVArun2v1DBoldDMwLT, &b_t2ByVLooseIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("t2ByVLooseIsolationMVArun2v1PWdR03oldDMwLT", &t2ByVLooseIsolationMVArun2v1PWdR03oldDMwLT, &b_t2ByVLooseIsolationMVArun2v1PWdR03oldDMwLT);
   fChain->SetBranchAddress("t2ByVLooseIsolationMVArun2v1PWnewDMwLT", &t2ByVLooseIsolationMVArun2v1PWnewDMwLT, &b_t2ByVLooseIsolationMVArun2v1PWnewDMwLT);
   fChain->SetBranchAddress("t2ByVLooseIsolationMVArun2v1PWoldDMwLT", &t2ByVLooseIsolationMVArun2v1PWoldDMwLT, &b_t2ByVLooseIsolationMVArun2v1PWoldDMwLT);
   fChain->SetBranchAddress("t2ByVTightIsolationMVArun2v1DBdR03oldDMwLT", &t2ByVTightIsolationMVArun2v1DBdR03oldDMwLT, &b_t2ByVTightIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("t2ByVTightIsolationMVArun2v1DBnewDMwLT", &t2ByVTightIsolationMVArun2v1DBnewDMwLT, &b_t2ByVTightIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("t2ByVTightIsolationMVArun2v1DBoldDMwLT", &t2ByVTightIsolationMVArun2v1DBoldDMwLT, &b_t2ByVTightIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("t2ByVTightIsolationMVArun2v1PWdR03oldDMwLT", &t2ByVTightIsolationMVArun2v1PWdR03oldDMwLT, &b_t2ByVTightIsolationMVArun2v1PWdR03oldDMwLT);
   fChain->SetBranchAddress("t2ByVTightIsolationMVArun2v1PWnewDMwLT", &t2ByVTightIsolationMVArun2v1PWnewDMwLT, &b_t2ByVTightIsolationMVArun2v1PWnewDMwLT);
   fChain->SetBranchAddress("t2ByVTightIsolationMVArun2v1PWoldDMwLT", &t2ByVTightIsolationMVArun2v1PWoldDMwLT, &b_t2ByVTightIsolationMVArun2v1PWoldDMwLT);
   fChain->SetBranchAddress("t2ByVVTightIsolationMVArun2v1DBdR03oldDMwLT", &t2ByVVTightIsolationMVArun2v1DBdR03oldDMwLT, &b_t2ByVVTightIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("t2ByVVTightIsolationMVArun2v1DBnewDMwLT", &t2ByVVTightIsolationMVArun2v1DBnewDMwLT, &b_t2ByVVTightIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("t2ByVVTightIsolationMVArun2v1DBoldDMwLT", &t2ByVVTightIsolationMVArun2v1DBoldDMwLT, &b_t2ByVVTightIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("t2ByVVTightIsolationMVArun2v1PWdR03oldDMwLT", &t2ByVVTightIsolationMVArun2v1PWdR03oldDMwLT, &b_t2ByVVTightIsolationMVArun2v1PWdR03oldDMwLT);
   fChain->SetBranchAddress("t2ByVVTightIsolationMVArun2v1PWnewDMwLT", &t2ByVVTightIsolationMVArun2v1PWnewDMwLT, &b_t2ByVVTightIsolationMVArun2v1PWnewDMwLT);
   fChain->SetBranchAddress("t2ByVVTightIsolationMVArun2v1PWoldDMwLT", &t2ByVVTightIsolationMVArun2v1PWoldDMwLT, &b_t2ByVVTightIsolationMVArun2v1PWoldDMwLT);
   fChain->SetBranchAddress("t2Charge", &t2Charge, &b_t2Charge);
   fChain->SetBranchAddress("t2ChargedIsoPtSum", &t2ChargedIsoPtSum, &b_t2ChargedIsoPtSum);
   fChain->SetBranchAddress("t2ChargedIsoPtSumdR03", &t2ChargedIsoPtSumdR03, &b_t2ChargedIsoPtSumdR03);
   fChain->SetBranchAddress("t2ComesFromHiggs", &t2ComesFromHiggs, &b_t2ComesFromHiggs);
   fChain->SetBranchAddress("t2DPhiToPfMet_type1", &t2DPhiToPfMet_type1, &b_t2DPhiToPfMet_type1);
   fChain->SetBranchAddress("t2DecayMode", &t2DecayMode, &b_t2DecayMode);
   fChain->SetBranchAddress("t2DecayModeFinding", &t2DecayModeFinding, &b_t2DecayModeFinding);
   fChain->SetBranchAddress("t2DecayModeFindingNewDMs", &t2DecayModeFindingNewDMs, &b_t2DecayModeFindingNewDMs);
   fChain->SetBranchAddress("t2DoubleTau32Filter", &t2DoubleTau32Filter, &b_t2DoubleTau32Filter);
   fChain->SetBranchAddress("t2DoubleTau35Filter", &t2DoubleTau35Filter, &b_t2DoubleTau35Filter);
   fChain->SetBranchAddress("t2DoubleTau40Filter", &t2DoubleTau40Filter, &b_t2DoubleTau40Filter);
   fChain->SetBranchAddress("t2ElecOverlap", &t2ElecOverlap, &b_t2ElecOverlap);
   fChain->SetBranchAddress("t2Eta", &t2Eta, &b_t2Eta);
   fChain->SetBranchAddress("t2Eta_TauEnDown", &t2Eta_TauEnDown, &b_t2Eta_TauEnDown);
   fChain->SetBranchAddress("t2Eta_TauEnUp", &t2Eta_TauEnUp, &b_t2Eta_TauEnUp);
   fChain->SetBranchAddress("t2FootprintCorrection", &t2FootprintCorrection, &b_t2FootprintCorrection);
   fChain->SetBranchAddress("t2FootprintCorrectiondR03", &t2FootprintCorrectiondR03, &b_t2FootprintCorrectiondR03);
   fChain->SetBranchAddress("t2GenCharge", &t2GenCharge, &b_t2GenCharge);
   fChain->SetBranchAddress("t2GenDecayMode", &t2GenDecayMode, &b_t2GenDecayMode);
   fChain->SetBranchAddress("t2GenEnergy", &t2GenEnergy, &b_t2GenEnergy);
   fChain->SetBranchAddress("t2GenEta", &t2GenEta, &b_t2GenEta);
   fChain->SetBranchAddress("t2GenIsPrompt", &t2GenIsPrompt, &b_t2GenIsPrompt);
   fChain->SetBranchAddress("t2GenJetEta", &t2GenJetEta, &b_t2GenJetEta);
   fChain->SetBranchAddress("t2GenJetPt", &t2GenJetPt, &b_t2GenJetPt);
   fChain->SetBranchAddress("t2GenMotherEnergy", &t2GenMotherEnergy, &b_t2GenMotherEnergy);
   fChain->SetBranchAddress("t2GenMotherEta", &t2GenMotherEta, &b_t2GenMotherEta);
   fChain->SetBranchAddress("t2GenMotherPdgId", &t2GenMotherPdgId, &b_t2GenMotherPdgId);
   fChain->SetBranchAddress("t2GenMotherPhi", &t2GenMotherPhi, &b_t2GenMotherPhi);
   fChain->SetBranchAddress("t2GenMotherPt", &t2GenMotherPt, &b_t2GenMotherPt);
   fChain->SetBranchAddress("t2GenPdgId", &t2GenPdgId, &b_t2GenPdgId);
   fChain->SetBranchAddress("t2GenPhi", &t2GenPhi, &b_t2GenPhi);
   fChain->SetBranchAddress("t2GenPt", &t2GenPt, &b_t2GenPt);
   fChain->SetBranchAddress("t2GenStatus", &t2GenStatus, &b_t2GenStatus);
   fChain->SetBranchAddress("t2GlobalMuonVtxOverlap", &t2GlobalMuonVtxOverlap, &b_t2GlobalMuonVtxOverlap);
   fChain->SetBranchAddress("t2JetArea", &t2JetArea, &b_t2JetArea);
   fChain->SetBranchAddress("t2JetBtag", &t2JetBtag, &b_t2JetBtag);
   fChain->SetBranchAddress("t2JetDR", &t2JetDR, &b_t2JetDR);
   fChain->SetBranchAddress("t2JetEtaEtaMoment", &t2JetEtaEtaMoment, &b_t2JetEtaEtaMoment);
   fChain->SetBranchAddress("t2JetEtaPhiMoment", &t2JetEtaPhiMoment, &b_t2JetEtaPhiMoment);
   fChain->SetBranchAddress("t2JetEtaPhiSpread", &t2JetEtaPhiSpread, &b_t2JetEtaPhiSpread);
   fChain->SetBranchAddress("t2JetHadronFlavour", &t2JetHadronFlavour, &b_t2JetHadronFlavour);
   fChain->SetBranchAddress("t2JetPFCISVBtag", &t2JetPFCISVBtag, &b_t2JetPFCISVBtag);
   fChain->SetBranchAddress("t2JetPartonFlavour", &t2JetPartonFlavour, &b_t2JetPartonFlavour);
   fChain->SetBranchAddress("t2JetPhiPhiMoment", &t2JetPhiPhiMoment, &b_t2JetPhiPhiMoment);
   fChain->SetBranchAddress("t2JetPt", &t2JetPt, &b_t2JetPt);
   fChain->SetBranchAddress("t2LeadTrackPt", &t2LeadTrackPt, &b_t2LeadTrackPt);
   fChain->SetBranchAddress("t2LowestMll", &t2LowestMll, &b_t2LowestMll);
   fChain->SetBranchAddress("t2Mass", &t2Mass, &b_t2Mass);
   fChain->SetBranchAddress("t2Mass_TauEnDown", &t2Mass_TauEnDown, &b_t2Mass_TauEnDown);
   fChain->SetBranchAddress("t2Mass_TauEnUp", &t2Mass_TauEnUp, &b_t2Mass_TauEnUp);
   fChain->SetBranchAddress("t2MatchesDoubleTau32Path", &t2MatchesDoubleTau32Path, &b_t2MatchesDoubleTau32Path);
   fChain->SetBranchAddress("t2MatchesDoubleTau35Path", &t2MatchesDoubleTau35Path, &b_t2MatchesDoubleTau35Path);
   fChain->SetBranchAddress("t2MatchesDoubleTau40Path", &t2MatchesDoubleTau40Path, &b_t2MatchesDoubleTau40Path);
   fChain->SetBranchAddress("t2MtToPfMet_type1", &t2MtToPfMet_type1, &b_t2MtToPfMet_type1);
   fChain->SetBranchAddress("t2MuOverlap", &t2MuOverlap, &b_t2MuOverlap);
   fChain->SetBranchAddress("t2MuonIdIsoStdVtxOverlap", &t2MuonIdIsoStdVtxOverlap, &b_t2MuonIdIsoStdVtxOverlap);
   fChain->SetBranchAddress("t2MuonIdIsoVtxOverlap", &t2MuonIdIsoVtxOverlap, &b_t2MuonIdIsoVtxOverlap);
   fChain->SetBranchAddress("t2MuonIdVtxOverlap", &t2MuonIdVtxOverlap, &b_t2MuonIdVtxOverlap);
   fChain->SetBranchAddress("t2NChrgHadrIsolationCands", &t2NChrgHadrIsolationCands, &b_t2NChrgHadrIsolationCands);
   fChain->SetBranchAddress("t2NChrgHadrSignalCands", &t2NChrgHadrSignalCands, &b_t2NChrgHadrSignalCands);
   fChain->SetBranchAddress("t2NGammaSignalCands", &t2NGammaSignalCands, &b_t2NGammaSignalCands);
   fChain->SetBranchAddress("t2NNeutralHadrSignalCands", &t2NNeutralHadrSignalCands, &b_t2NNeutralHadrSignalCands);
   fChain->SetBranchAddress("t2NSignalCands", &t2NSignalCands, &b_t2NSignalCands);
   fChain->SetBranchAddress("t2NearestZMass", &t2NearestZMass, &b_t2NearestZMass);
   fChain->SetBranchAddress("t2NeutralIsoPtSum", &t2NeutralIsoPtSum, &b_t2NeutralIsoPtSum);
   fChain->SetBranchAddress("t2NeutralIsoPtSumWeight", &t2NeutralIsoPtSumWeight, &b_t2NeutralIsoPtSumWeight);
   fChain->SetBranchAddress("t2NeutralIsoPtSumWeightdR03", &t2NeutralIsoPtSumWeightdR03, &b_t2NeutralIsoPtSumWeightdR03);
   fChain->SetBranchAddress("t2NeutralIsoPtSumdR03", &t2NeutralIsoPtSumdR03, &b_t2NeutralIsoPtSumdR03);
   fChain->SetBranchAddress("t2PVDXY", &t2PVDXY, &b_t2PVDXY);
   fChain->SetBranchAddress("t2PVDZ", &t2PVDZ, &b_t2PVDZ);
   fChain->SetBranchAddress("t2Phi", &t2Phi, &b_t2Phi);
   fChain->SetBranchAddress("t2Phi_TauEnDown", &t2Phi_TauEnDown, &b_t2Phi_TauEnDown);
   fChain->SetBranchAddress("t2Phi_TauEnUp", &t2Phi_TauEnUp, &b_t2Phi_TauEnUp);
   fChain->SetBranchAddress("t2PhotonPtSumOutsideSignalCone", &t2PhotonPtSumOutsideSignalCone, &b_t2PhotonPtSumOutsideSignalCone);
   fChain->SetBranchAddress("t2PhotonPtSumOutsideSignalConedR03", &t2PhotonPtSumOutsideSignalConedR03, &b_t2PhotonPtSumOutsideSignalConedR03);
   fChain->SetBranchAddress("t2Pt", &t2Pt, &b_t2Pt);
   fChain->SetBranchAddress("t2Pt_TauEnDown", &t2Pt_TauEnDown, &b_t2Pt_TauEnDown);
   fChain->SetBranchAddress("t2Pt_TauEnUp", &t2Pt_TauEnUp, &b_t2Pt_TauEnUp);
   fChain->SetBranchAddress("t2PuCorrPtSum", &t2PuCorrPtSum, &b_t2PuCorrPtSum);
   fChain->SetBranchAddress("t2Rank", &t2Rank, &b_t2Rank);
   fChain->SetBranchAddress("t2VZ", &t2VZ, &b_t2VZ);
   fChain->SetBranchAddress("t2ZTTGenDR", &t2ZTTGenDR, &b_t2ZTTGenDR);
   fChain->SetBranchAddress("t2ZTTGenEta", &t2ZTTGenEta, &b_t2ZTTGenEta);
   fChain->SetBranchAddress("t2ZTTGenMatching", &t2ZTTGenMatching, &b_t2ZTTGenMatching);
   fChain->SetBranchAddress("t2ZTTGenPhi", &t2ZTTGenPhi, &b_t2ZTTGenPhi);
   fChain->SetBranchAddress("t2ZTTGenPt", &t2ZTTGenPt, &b_t2ZTTGenPt);
   fChain->SetBranchAddress("t2_e1_collinearmass", &t2_e1_collinearmass, &b_t2_e1_collinearmass);
   fChain->SetBranchAddress("t2_e1_collinearmass_CheckUESDown", &t2_e1_collinearmass_CheckUESDown, &b_t2_e1_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("t2_e1_collinearmass_CheckUESUp", &t2_e1_collinearmass_CheckUESUp, &b_t2_e1_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("t2_e1_collinearmass_JetCheckTotalDown", &t2_e1_collinearmass_JetCheckTotalDown, &b_t2_e1_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("t2_e1_collinearmass_JetCheckTotalUp", &t2_e1_collinearmass_JetCheckTotalUp, &b_t2_e1_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("t2_e1_collinearmass_JetEnDown", &t2_e1_collinearmass_JetEnDown, &b_t2_e1_collinearmass_JetEnDown);
   fChain->SetBranchAddress("t2_e1_collinearmass_JetEnUp", &t2_e1_collinearmass_JetEnUp, &b_t2_e1_collinearmass_JetEnUp);
   fChain->SetBranchAddress("t2_e1_collinearmass_UnclusteredEnDown", &t2_e1_collinearmass_UnclusteredEnDown, &b_t2_e1_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("t2_e1_collinearmass_UnclusteredEnUp", &t2_e1_collinearmass_UnclusteredEnUp, &b_t2_e1_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("t2_e2_collinearmass", &t2_e2_collinearmass, &b_t2_e2_collinearmass);
   fChain->SetBranchAddress("t2_e2_collinearmass_CheckUESDown", &t2_e2_collinearmass_CheckUESDown, &b_t2_e2_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("t2_e2_collinearmass_CheckUESUp", &t2_e2_collinearmass_CheckUESUp, &b_t2_e2_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("t2_e2_collinearmass_JetCheckTotalDown", &t2_e2_collinearmass_JetCheckTotalDown, &b_t2_e2_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("t2_e2_collinearmass_JetCheckTotalUp", &t2_e2_collinearmass_JetCheckTotalUp, &b_t2_e2_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("t2_e2_collinearmass_JetEnDown", &t2_e2_collinearmass_JetEnDown, &b_t2_e2_collinearmass_JetEnDown);
   fChain->SetBranchAddress("t2_e2_collinearmass_JetEnUp", &t2_e2_collinearmass_JetEnUp, &b_t2_e2_collinearmass_JetEnUp);
   fChain->SetBranchAddress("t2_e2_collinearmass_UnclusteredEnDown", &t2_e2_collinearmass_UnclusteredEnDown, &b_t2_e2_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("t2_e2_collinearmass_UnclusteredEnUp", &t2_e2_collinearmass_UnclusteredEnUp, &b_t2_e2_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("t2_t1_collinearmass", &t2_t1_collinearmass, &b_t2_t1_collinearmass);
   fChain->SetBranchAddress("t2_t1_collinearmass_CheckUESDown", &t2_t1_collinearmass_CheckUESDown, &b_t2_t1_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("t2_t1_collinearmass_CheckUESUp", &t2_t1_collinearmass_CheckUESUp, &b_t2_t1_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("t2_t1_collinearmass_JetCheckTotalDown", &t2_t1_collinearmass_JetCheckTotalDown, &b_t2_t1_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("t2_t1_collinearmass_JetCheckTotalUp", &t2_t1_collinearmass_JetCheckTotalUp, &b_t2_t1_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("t2_t1_collinearmass_JetEnDown", &t2_t1_collinearmass_JetEnDown, &b_t2_t1_collinearmass_JetEnDown);
   fChain->SetBranchAddress("t2_t1_collinearmass_JetEnUp", &t2_t1_collinearmass_JetEnUp, &b_t2_t1_collinearmass_JetEnUp);
   fChain->SetBranchAddress("t2_t1_collinearmass_UnclusteredEnDown", &t2_t1_collinearmass_UnclusteredEnDown, &b_t2_t1_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("t2_t1_collinearmass_UnclusteredEnUp", &t2_t1_collinearmass_UnclusteredEnUp, &b_t2_t1_collinearmass_UnclusteredEnUp);
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

Bool_t runchannelEETT::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void runchannelEETT::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t runchannelEETT::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef runchannelEETT_cxx
