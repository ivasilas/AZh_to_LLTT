//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Oct 18 00:26:59 2017 by ROOT version 6.11/01
// from TTree Ntuple/Expression Ntuple
// found on file: make_ntuples_cfg-0EF04163-2FE5-E611-9FAD-FA163E30BC70.root
//////////////////////////////////////////////////////////

#ifndef runchannelMMEM_h
#define runchannelMMEM_h

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

class runchannelMMEM {
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
   Float_t         eAbsEta;
   Float_t         eCBIDLoose;
   Float_t         eCBIDLooseNoIso;
   Float_t         eCBIDMedium;
   Float_t         eCBIDMediumNoIso;
   Float_t         eCBIDTight;
   Float_t         eCBIDTightNoIso;
   Float_t         eCBIDVeto;
   Float_t         eCBIDVetoNoIso;
   Float_t         eCharge;
   Float_t         eChargeIdLoose;
   Float_t         eChargeIdMed;
   Float_t         eChargeIdTight;
   Float_t         eComesFromHiggs;
   Float_t         eDPhiToPfMet_type1;
   Float_t         eE1x5;
   Float_t         eE2x5Max;
   Float_t         eE5x5;
   Float_t         eEcalIsoDR03;
   Float_t         eEffectiveArea2012Data;
   Float_t         eEffectiveAreaSpring15;
   Float_t         eEnergyError;
   Float_t         eEta;
   Float_t         eGenCharge;
   Float_t         eGenDirectPromptTauDecay;
   Float_t         eGenEnergy;
   Float_t         eGenEta;
   Float_t         eGenIsPrompt;
   Float_t         eGenMotherPdgId;
   Float_t         eGenParticle;
   Float_t         eGenPdgId;
   Float_t         eGenPhi;
   Float_t         eGenPrompt;
   Float_t         eGenPromptTauDecay;
   Float_t         eGenPt;
   Float_t         eGenTauDecay;
   Float_t         eGenVZ;
   Float_t         eGenVtxPVMatch;
   Float_t         eHadronicDepth1OverEm;
   Float_t         eHadronicDepth2OverEm;
   Float_t         eHadronicOverEM;
   Float_t         eHcalIsoDR03;
   Float_t         eIP3D;
   Float_t         eIP3DErr;
   Float_t         eIsoDB03;
   Float_t         eJetArea;
   Float_t         eJetBtag;
   Float_t         eJetDR;
   Float_t         eJetEtaEtaMoment;
   Float_t         eJetEtaPhiMoment;
   Float_t         eJetEtaPhiSpread;
   Float_t         eJetHadronFlavour;
   Float_t         eJetPFCISVBtag;
   Float_t         eJetPartonFlavour;
   Float_t         eJetPhiPhiMoment;
   Float_t         eJetPt;
   Float_t         eLowestMll;
   Float_t         eMVANonTrigCategory;
   Float_t         eMVANonTrigID;
   Float_t         eMVANonTrigWP80;
   Float_t         eMVANonTrigWP90;
   Float_t         eMVATrigCategory;
   Float_t         eMVATrigID;
   Float_t         eMVATrigWP80;
   Float_t         eMVATrigWP90;
   Float_t         eMass;
   Float_t         eMatchesDoubleE;
   Float_t         eMatchesDoubleE23_12Filter;
   Float_t         eMatchesDoubleE23_12Path;
   Float_t         eMatchesDoubleEFilter;
   Float_t         eMatchesDoubleEPath;
   Float_t         eMatchesDoubleESingleMu;
   Float_t         eMatchesDoubleMuSingleE;
   Float_t         eMatchesEle12LoosePath;
   Float_t         eMatchesEle17LoosePath;
   Float_t         eMatchesEle22eta2p1LoosePath;
   Float_t         eMatchesEle23LoosePath;
   Float_t         eMatchesEle25eta2p1LoosePath;
   Float_t         eMatchesEle25eta2p1TightPath;
   Float_t         eMatchesEle27TightPath;
   Float_t         eMatchesEle27eta2p1LoosePath;
   Float_t         eMatchesSingleE;
   Float_t         eMatchesSingleESingleMu;
   Float_t         eMatchesSingleETight27Filter;
   Float_t         eMatchesSingleE_leg1;
   Float_t         eMatchesSingleE_leg2;
   Float_t         eMatchesSingleMuSingleE;
   Float_t         eMatchesTripleE;
   Float_t         eMissingHits;
   Float_t         eMtToPfMet_type1;
   Float_t         eNearMuonVeto;
   Float_t         eNearestMuonDR;
   Float_t         eNearestZMass;
   Float_t         ePFChargedIso;
   Float_t         ePFNeutralIso;
   Float_t         ePFPUChargedIso;
   Float_t         ePFPhotonIso;
   Float_t         ePVDXY;
   Float_t         ePVDZ;
   Float_t         ePassesConversionVeto;
   Float_t         ePhi;
   Float_t         ePt;
   Float_t         ePt_ElectronResPhiDown;
   Float_t         ePt_ElectronResRhoDown;
   Float_t         ePt_ElectronResRhoUp;
   Float_t         ePt_ElectronScaleDown;
   Float_t         ePt_ElectronScaleUp;
   Float_t         ePt_ElectronUncorr;
   Float_t         eRank;
   Float_t         eRelIso;
   Float_t         eRelPFIsoDB;
   Float_t         eRelPFIsoRho;
   Float_t         eRho;
   Float_t         eSCEnergy;
   Float_t         eSCEta;
   Float_t         eSCEtaWidth;
   Float_t         eSCPhi;
   Float_t         eSCPhiWidth;
   Float_t         eSCPreshowerEnergy;
   Float_t         eSCRawEnergy;
   Float_t         eSIP2D;
   Float_t         eSIP3D;
   Float_t         eSigmaIEtaIEta;
   Float_t         eTrkIsoDR03;
   Float_t         eVZ;
   Float_t         eVetoAZHdR0;
   Float_t         eVetoLLTTp001dxyz;
   Float_t         eVetoLLTTp001dxyzR0;
   Float_t         eVetoMVAIso;
   Float_t         eVetoMVAIsoVtx;
   Float_t         eVetoZTTp001dxyz;
   Float_t         eVetoZTTp001dxyzR0;
   Float_t         eWWLoose;
   Float_t         eZTTGenMatching;
   Float_t         e_m1_CosThetaStar;
   Float_t         e_m1_DPhi;
   Float_t         e_m1_DR;
   Float_t         e_m1_Eta;
   Float_t         e_m1_Mass;
   Float_t         e_m1_Mass_TauEnDown;
   Float_t         e_m1_Mass_TauEnUp;
   Float_t         e_m1_Mt;
   Float_t         e_m1_MtTotal;
   Float_t         e_m1_Mt_TauEnDown;
   Float_t         e_m1_Mt_TauEnUp;
   Float_t         e_m1_MvaMet;
   Float_t         e_m1_MvaMetCovMatrix00;
   Float_t         e_m1_MvaMetCovMatrix01;
   Float_t         e_m1_MvaMetCovMatrix10;
   Float_t         e_m1_MvaMetCovMatrix11;
   Float_t         e_m1_MvaMetPhi;
   Float_t         e_m1_PZeta;
   Float_t         e_m1_PZetaLess0p85PZetaVis;
   Float_t         e_m1_PZetaVis;
   Float_t         e_m1_Phi;
   Float_t         e_m1_Pt;
   Float_t         e_m1_SS;
   Float_t         e_m1_ToMETDPhi_Ty1;
   Float_t         e_m1_collinearmass;
   Float_t         e_m1_collinearmass_CheckUESDown;
   Float_t         e_m1_collinearmass_CheckUESUp;
   Float_t         e_m1_collinearmass_EleEnDown;
   Float_t         e_m1_collinearmass_EleEnUp;
   Float_t         e_m1_collinearmass_JetCheckTotalDown;
   Float_t         e_m1_collinearmass_JetCheckTotalUp;
   Float_t         e_m1_collinearmass_JetEnDown;
   Float_t         e_m1_collinearmass_JetEnUp;
   Float_t         e_m1_collinearmass_MuEnDown;
   Float_t         e_m1_collinearmass_MuEnUp;
   Float_t         e_m1_collinearmass_TauEnDown;
   Float_t         e_m1_collinearmass_TauEnUp;
   Float_t         e_m1_collinearmass_UnclusteredEnDown;
   Float_t         e_m1_collinearmass_UnclusteredEnUp;
   Float_t         e_m1_pt_tt;
   Float_t         e_m2_CosThetaStar;
   Float_t         e_m2_DPhi;
   Float_t         e_m2_DR;
   Float_t         e_m2_Eta;
   Float_t         e_m2_Mass;
   Float_t         e_m2_Mass_TauEnDown;
   Float_t         e_m2_Mass_TauEnUp;
   Float_t         e_m2_Mt;
   Float_t         e_m2_MtTotal;
   Float_t         e_m2_Mt_TauEnDown;
   Float_t         e_m2_Mt_TauEnUp;
   Float_t         e_m2_MvaMet;
   Float_t         e_m2_MvaMetCovMatrix00;
   Float_t         e_m2_MvaMetCovMatrix01;
   Float_t         e_m2_MvaMetCovMatrix10;
   Float_t         e_m2_MvaMetCovMatrix11;
   Float_t         e_m2_MvaMetPhi;
   Float_t         e_m2_PZeta;
   Float_t         e_m2_PZetaLess0p85PZetaVis;
   Float_t         e_m2_PZetaVis;
   Float_t         e_m2_Phi;
   Float_t         e_m2_Pt;
   Float_t         e_m2_SS;
   Float_t         e_m2_ToMETDPhi_Ty1;
   Float_t         e_m2_collinearmass;
   Float_t         e_m2_collinearmass_CheckUESDown;
   Float_t         e_m2_collinearmass_CheckUESUp;
   Float_t         e_m2_collinearmass_EleEnDown;
   Float_t         e_m2_collinearmass_EleEnUp;
   Float_t         e_m2_collinearmass_JetCheckTotalDown;
   Float_t         e_m2_collinearmass_JetCheckTotalUp;
   Float_t         e_m2_collinearmass_JetEnDown;
   Float_t         e_m2_collinearmass_JetEnUp;
   Float_t         e_m2_collinearmass_MuEnDown;
   Float_t         e_m2_collinearmass_MuEnUp;
   Float_t         e_m2_collinearmass_TauEnDown;
   Float_t         e_m2_collinearmass_TauEnUp;
   Float_t         e_m2_collinearmass_UnclusteredEnDown;
   Float_t         e_m2_collinearmass_UnclusteredEnUp;
   Float_t         e_m2_pt_tt;
   Float_t         e_m3_CosThetaStar;
   Float_t         e_m3_DPhi;
   Float_t         e_m3_DR;
   Float_t         e_m3_Eta;
   Float_t         e_m3_Mass;
   Float_t         e_m3_Mass_TauEnDown;
   Float_t         e_m3_Mass_TauEnUp;
   Float_t         e_m3_Mt;
   Float_t         e_m3_MtTotal;
   Float_t         e_m3_Mt_TauEnDown;
   Float_t         e_m3_Mt_TauEnUp;
   Float_t         e_m3_MvaMet;
   Float_t         e_m3_MvaMetCovMatrix00;
   Float_t         e_m3_MvaMetCovMatrix01;
   Float_t         e_m3_MvaMetCovMatrix10;
   Float_t         e_m3_MvaMetCovMatrix11;
   Float_t         e_m3_MvaMetPhi;
   Float_t         e_m3_PZeta;
   Float_t         e_m3_PZetaLess0p85PZetaVis;
   Float_t         e_m3_PZetaVis;
   Float_t         e_m3_Phi;
   Float_t         e_m3_Pt;
   Float_t         e_m3_SS;
   Float_t         e_m3_ToMETDPhi_Ty1;
   Float_t         e_m3_collinearmass;
   Float_t         e_m3_collinearmass_CheckUESDown;
   Float_t         e_m3_collinearmass_CheckUESUp;
   Float_t         e_m3_collinearmass_EleEnDown;
   Float_t         e_m3_collinearmass_EleEnUp;
   Float_t         e_m3_collinearmass_JetCheckTotalDown;
   Float_t         e_m3_collinearmass_JetCheckTotalUp;
   Float_t         e_m3_collinearmass_JetEnDown;
   Float_t         e_m3_collinearmass_JetEnUp;
   Float_t         e_m3_collinearmass_MuEnDown;
   Float_t         e_m3_collinearmass_MuEnUp;
   Float_t         e_m3_collinearmass_TauEnDown;
   Float_t         e_m3_collinearmass_TauEnUp;
   Float_t         e_m3_collinearmass_UnclusteredEnDown;
   Float_t         e_m3_collinearmass_UnclusteredEnUp;
   Float_t         e_m3_pt_tt;
   Float_t         edeltaEtaSuperClusterTrackAtVtx;
   Float_t         edeltaPhiSuperClusterTrackAtVtx;
   Float_t         eeSuperClusterOverP;
   Float_t         eecalEnergy;
   Float_t         efBrem;
   Float_t         etrackMomentumAtVtxP;
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
   Float_t         m1AbsEta;
   Float_t         m1BestTrackType;
   Float_t         m1Charge;
   Float_t         m1Chi2LocalPosition;
   Float_t         m1ComesFromHiggs;
   Float_t         m1DPhiToPfMet_type1;
   Float_t         m1EcalIsoDR03;
   Float_t         m1EffectiveArea2011;
   Float_t         m1EffectiveArea2012;
   Float_t         m1Eta;
   Float_t         m1Eta_MuonEnDown;
   Float_t         m1Eta_MuonEnUp;
   Float_t         m1GenCharge;
   Float_t         m1GenDirectPromptTauDecayFinalState;
   Float_t         m1GenEnergy;
   Float_t         m1GenEta;
   Float_t         m1GenIsPrompt;
   Float_t         m1GenMotherPdgId;
   Float_t         m1GenParticle;
   Float_t         m1GenPdgId;
   Float_t         m1GenPhi;
   Float_t         m1GenPrompt;
   Float_t         m1GenPromptFinalState;
   Float_t         m1GenPromptTauDecay;
   Float_t         m1GenPt;
   Float_t         m1GenTauDecay;
   Float_t         m1GenVZ;
   Float_t         m1GenVtxPVMatch;
   Float_t         m1HcalIsoDR03;
   Float_t         m1IP3D;
   Float_t         m1IP3DErr;
   Float_t         m1IsGlobal;
   Float_t         m1IsPFMuon;
   Float_t         m1IsTracker;
   Float_t         m1IsoDB03;
   Float_t         m1IsoDB04;
   Float_t         m1JetArea;
   Float_t         m1JetBtag;
   Float_t         m1JetDR;
   Float_t         m1JetEtaEtaMoment;
   Float_t         m1JetEtaPhiMoment;
   Float_t         m1JetEtaPhiSpread;
   Float_t         m1JetHadronFlavour;
   Float_t         m1JetPFCISVBtag;
   Float_t         m1JetPartonFlavour;
   Float_t         m1JetPhiPhiMoment;
   Float_t         m1JetPt;
   Float_t         m1LowestMll;
   Float_t         m1Mass;
   Float_t         m1MatchedStations;
   Float_t         m1MatchesDoubleESingleMu;
   Float_t         m1MatchesDoubleMu;
   Float_t         m1MatchesDoubleMuFilter1;
   Float_t         m1MatchesDoubleMuFilter2;
   Float_t         m1MatchesDoubleMuNoDZFilter1;
   Float_t         m1MatchesDoubleMuNoDZFilter2;
   Float_t         m1MatchesDoubleMuPath1;
   Float_t         m1MatchesDoubleMuPath2;
   Float_t         m1MatchesDoubleMuSingleE;
   Float_t         m1MatchesIsoMu17eta2p1Path;
   Float_t         m1MatchesIsoMu18Path;
   Float_t         m1MatchesIsoMu20Path;
   Float_t         m1MatchesIsoMu22Path;
   Float_t         m1MatchesIsoMu22eta2p1Path;
   Float_t         m1MatchesIsoMu24Filter;
   Float_t         m1MatchesIsoMu27Path;
   Float_t         m1MatchesIsoTkMu20Path;
   Float_t         m1MatchesIsoTkMu22Path;
   Float_t         m1MatchesIsoTkMu24Filter;
   Float_t         m1MatchesMu17Path;
   Float_t         m1MatchesMu17VVLPath;
   Float_t         m1MatchesMu50Path;
   Float_t         m1MatchesMu8Path;
   Float_t         m1MatchesMu8VVLPath;
   Float_t         m1MatchesSingleESingleMu;
   Float_t         m1MatchesSingleMu;
   Float_t         m1MatchesSingleMuIso20;
   Float_t         m1MatchesSingleMuIsoTk20;
   Float_t         m1MatchesSingleMuSingleE;
   Float_t         m1MatchesSingleMu_leg1;
   Float_t         m1MatchesSingleMu_leg1_noiso;
   Float_t         m1MatchesSingleMu_leg2;
   Float_t         m1MatchesSingleMu_leg2_noiso;
   Float_t         m1MatchesTripleMu;
   Float_t         m1MtToPfMet_type1;
   Float_t         m1MuonHits;
   Float_t         m1NearestZMass;
   Float_t         m1NormTrkChi2;
   Float_t         m1NormalizedChi2;
   Float_t         m1PFChargedHadronIsoR04;
   Float_t         m1PFChargedIso;
   Float_t         m1PFIDLoose;
   Float_t         m1PFIDMedium;
   Float_t         m1PFIDTight;
   Float_t         m1PFNeutralHadronIsoR04;
   Float_t         m1PFNeutralIso;
   Float_t         m1PFPUChargedIso;
   Float_t         m1PFPhotonIso;
   Float_t         m1PFPhotonIsoR04;
   Float_t         m1PFPileupIsoR04;
   Float_t         m1PVDXY;
   Float_t         m1PVDZ;
   Float_t         m1Phi;
   Float_t         m1Phi_MuonEnDown;
   Float_t         m1Phi_MuonEnUp;
   Float_t         m1PixHits;
   Float_t         m1Pt;
   Float_t         m1Pt_MuonEnDown;
   Float_t         m1Pt_MuonEnUp;
   Float_t         m1Rank;
   Float_t         m1RelPFIsoDBDefault;
   Float_t         m1RelPFIsoDBDefaultR04;
   Float_t         m1RelPFIsoRho;
   Float_t         m1Rho;
   Float_t         m1SIP2D;
   Float_t         m1SIP3D;
   Float_t         m1SegmentCompatibility;
   Float_t         m1TkLayersWithMeasurement;
   Float_t         m1TrkIsoDR03;
   Float_t         m1TrkKink;
   Int_t           m1TypeCode;
   Float_t         m1VZ;
   Float_t         m1ValidFraction;
   Float_t         m1ZTTGenMatching;
   Float_t         m1_e_collinearmass;
   Float_t         m1_e_collinearmass_CheckUESDown;
   Float_t         m1_e_collinearmass_CheckUESUp;
   Float_t         m1_e_collinearmass_JetCheckTotalDown;
   Float_t         m1_e_collinearmass_JetCheckTotalUp;
   Float_t         m1_e_collinearmass_JetEnDown;
   Float_t         m1_e_collinearmass_JetEnUp;
   Float_t         m1_e_collinearmass_UnclusteredEnDown;
   Float_t         m1_e_collinearmass_UnclusteredEnUp;
   Float_t         m1_m2_CosThetaStar;
   Float_t         m1_m2_DPhi;
   Float_t         m1_m2_DR;
   Float_t         m1_m2_Eta;
   Float_t         m1_m2_Mass;
   Float_t         m1_m2_Mass_TauEnDown;
   Float_t         m1_m2_Mass_TauEnUp;
   Float_t         m1_m2_Mt;
   Float_t         m1_m2_MtTotal;
   Float_t         m1_m2_Mt_TauEnDown;
   Float_t         m1_m2_Mt_TauEnUp;
   Float_t         m1_m2_MvaMet;
   Float_t         m1_m2_MvaMetCovMatrix00;
   Float_t         m1_m2_MvaMetCovMatrix01;
   Float_t         m1_m2_MvaMetCovMatrix10;
   Float_t         m1_m2_MvaMetCovMatrix11;
   Float_t         m1_m2_MvaMetPhi;
   Float_t         m1_m2_PZeta;
   Float_t         m1_m2_PZetaLess0p85PZetaVis;
   Float_t         m1_m2_PZetaVis;
   Float_t         m1_m2_Phi;
   Float_t         m1_m2_Pt;
   Float_t         m1_m2_SS;
   Float_t         m1_m2_ToMETDPhi_Ty1;
   Float_t         m1_m2_collinearmass;
   Float_t         m1_m2_collinearmass_CheckUESDown;
   Float_t         m1_m2_collinearmass_CheckUESUp;
   Float_t         m1_m2_collinearmass_EleEnDown;
   Float_t         m1_m2_collinearmass_EleEnUp;
   Float_t         m1_m2_collinearmass_JetCheckTotalDown;
   Float_t         m1_m2_collinearmass_JetCheckTotalUp;
   Float_t         m1_m2_collinearmass_JetEnDown;
   Float_t         m1_m2_collinearmass_JetEnUp;
   Float_t         m1_m2_collinearmass_MuEnDown;
   Float_t         m1_m2_collinearmass_MuEnUp;
   Float_t         m1_m2_collinearmass_TauEnDown;
   Float_t         m1_m2_collinearmass_TauEnUp;
   Float_t         m1_m2_collinearmass_UnclusteredEnDown;
   Float_t         m1_m2_collinearmass_UnclusteredEnUp;
   Float_t         m1_m2_pt_tt;
   Float_t         m1_m3_CosThetaStar;
   Float_t         m1_m3_DPhi;
   Float_t         m1_m3_DR;
   Float_t         m1_m3_Eta;
   Float_t         m1_m3_Mass;
   Float_t         m1_m3_Mass_TauEnDown;
   Float_t         m1_m3_Mass_TauEnUp;
   Float_t         m1_m3_Mt;
   Float_t         m1_m3_MtTotal;
   Float_t         m1_m3_Mt_TauEnDown;
   Float_t         m1_m3_Mt_TauEnUp;
   Float_t         m1_m3_MvaMet;
   Float_t         m1_m3_MvaMetCovMatrix00;
   Float_t         m1_m3_MvaMetCovMatrix01;
   Float_t         m1_m3_MvaMetCovMatrix10;
   Float_t         m1_m3_MvaMetCovMatrix11;
   Float_t         m1_m3_MvaMetPhi;
   Float_t         m1_m3_PZeta;
   Float_t         m1_m3_PZetaLess0p85PZetaVis;
   Float_t         m1_m3_PZetaVis;
   Float_t         m1_m3_Phi;
   Float_t         m1_m3_Pt;
   Float_t         m1_m3_SS;
   Float_t         m1_m3_ToMETDPhi_Ty1;
   Float_t         m1_m3_collinearmass;
   Float_t         m1_m3_collinearmass_CheckUESDown;
   Float_t         m1_m3_collinearmass_CheckUESUp;
   Float_t         m1_m3_collinearmass_EleEnDown;
   Float_t         m1_m3_collinearmass_EleEnUp;
   Float_t         m1_m3_collinearmass_JetCheckTotalDown;
   Float_t         m1_m3_collinearmass_JetCheckTotalUp;
   Float_t         m1_m3_collinearmass_JetEnDown;
   Float_t         m1_m3_collinearmass_JetEnUp;
   Float_t         m1_m3_collinearmass_MuEnDown;
   Float_t         m1_m3_collinearmass_MuEnUp;
   Float_t         m1_m3_collinearmass_TauEnDown;
   Float_t         m1_m3_collinearmass_TauEnUp;
   Float_t         m1_m3_collinearmass_UnclusteredEnDown;
   Float_t         m1_m3_collinearmass_UnclusteredEnUp;
   Float_t         m1_m3_pt_tt;
   Float_t         m2AbsEta;
   Float_t         m2BestTrackType;
   Float_t         m2Charge;
   Float_t         m2Chi2LocalPosition;
   Float_t         m2ComesFromHiggs;
   Float_t         m2DPhiToPfMet_type1;
   Float_t         m2EcalIsoDR03;
   Float_t         m2EffectiveArea2011;
   Float_t         m2EffectiveArea2012;
   Float_t         m2Eta;
   Float_t         m2Eta_MuonEnDown;
   Float_t         m2Eta_MuonEnUp;
   Float_t         m2GenCharge;
   Float_t         m2GenDirectPromptTauDecayFinalState;
   Float_t         m2GenEnergy;
   Float_t         m2GenEta;
   Float_t         m2GenIsPrompt;
   Float_t         m2GenMotherPdgId;
   Float_t         m2GenParticle;
   Float_t         m2GenPdgId;
   Float_t         m2GenPhi;
   Float_t         m2GenPrompt;
   Float_t         m2GenPromptFinalState;
   Float_t         m2GenPromptTauDecay;
   Float_t         m2GenPt;
   Float_t         m2GenTauDecay;
   Float_t         m2GenVZ;
   Float_t         m2GenVtxPVMatch;
   Float_t         m2HcalIsoDR03;
   Float_t         m2IP3D;
   Float_t         m2IP3DErr;
   Float_t         m2IsGlobal;
   Float_t         m2IsPFMuon;
   Float_t         m2IsTracker;
   Float_t         m2IsoDB03;
   Float_t         m2IsoDB04;
   Float_t         m2JetArea;
   Float_t         m2JetBtag;
   Float_t         m2JetDR;
   Float_t         m2JetEtaEtaMoment;
   Float_t         m2JetEtaPhiMoment;
   Float_t         m2JetEtaPhiSpread;
   Float_t         m2JetHadronFlavour;
   Float_t         m2JetPFCISVBtag;
   Float_t         m2JetPartonFlavour;
   Float_t         m2JetPhiPhiMoment;
   Float_t         m2JetPt;
   Float_t         m2LowestMll;
   Float_t         m2Mass;
   Float_t         m2MatchedStations;
   Float_t         m2MatchesDoubleESingleMu;
   Float_t         m2MatchesDoubleMu;
   Float_t         m2MatchesDoubleMuFilter1;
   Float_t         m2MatchesDoubleMuFilter2;
   Float_t         m2MatchesDoubleMuNoDZFilter1;
   Float_t         m2MatchesDoubleMuNoDZFilter2;
   Float_t         m2MatchesDoubleMuPath1;
   Float_t         m2MatchesDoubleMuPath2;
   Float_t         m2MatchesDoubleMuSingleE;
   Float_t         m2MatchesIsoMu17eta2p1Path;
   Float_t         m2MatchesIsoMu18Path;
   Float_t         m2MatchesIsoMu20Path;
   Float_t         m2MatchesIsoMu22Path;
   Float_t         m2MatchesIsoMu22eta2p1Path;
   Float_t         m2MatchesIsoMu24Filter;
   Float_t         m2MatchesIsoMu27Path;
   Float_t         m2MatchesIsoTkMu20Path;
   Float_t         m2MatchesIsoTkMu22Path;
   Float_t         m2MatchesIsoTkMu24Filter;
   Float_t         m2MatchesMu17Path;
   Float_t         m2MatchesMu17VVLPath;
   Float_t         m2MatchesMu50Path;
   Float_t         m2MatchesMu8Path;
   Float_t         m2MatchesMu8VVLPath;
   Float_t         m2MatchesSingleESingleMu;
   Float_t         m2MatchesSingleMu;
   Float_t         m2MatchesSingleMuIso20;
   Float_t         m2MatchesSingleMuIsoTk20;
   Float_t         m2MatchesSingleMuSingleE;
   Float_t         m2MatchesSingleMu_leg1;
   Float_t         m2MatchesSingleMu_leg1_noiso;
   Float_t         m2MatchesSingleMu_leg2;
   Float_t         m2MatchesSingleMu_leg2_noiso;
   Float_t         m2MatchesTripleMu;
   Float_t         m2MtToPfMet_type1;
   Float_t         m2MuonHits;
   Float_t         m2NearestZMass;
   Float_t         m2NormTrkChi2;
   Float_t         m2NormalizedChi2;
   Float_t         m2PFChargedHadronIsoR04;
   Float_t         m2PFChargedIso;
   Float_t         m2PFIDLoose;
   Float_t         m2PFIDMedium;
   Float_t         m2PFIDTight;
   Float_t         m2PFNeutralHadronIsoR04;
   Float_t         m2PFNeutralIso;
   Float_t         m2PFPUChargedIso;
   Float_t         m2PFPhotonIso;
   Float_t         m2PFPhotonIsoR04;
   Float_t         m2PFPileupIsoR04;
   Float_t         m2PVDXY;
   Float_t         m2PVDZ;
   Float_t         m2Phi;
   Float_t         m2Phi_MuonEnDown;
   Float_t         m2Phi_MuonEnUp;
   Float_t         m2PixHits;
   Float_t         m2Pt;
   Float_t         m2Pt_MuonEnDown;
   Float_t         m2Pt_MuonEnUp;
   Float_t         m2Rank;
   Float_t         m2RelPFIsoDBDefault;
   Float_t         m2RelPFIsoDBDefaultR04;
   Float_t         m2RelPFIsoRho;
   Float_t         m2Rho;
   Float_t         m2SIP2D;
   Float_t         m2SIP3D;
   Float_t         m2SegmentCompatibility;
   Float_t         m2TkLayersWithMeasurement;
   Float_t         m2TrkIsoDR03;
   Float_t         m2TrkKink;
   Int_t           m2TypeCode;
   Float_t         m2VZ;
   Float_t         m2ValidFraction;
   Float_t         m2ZTTGenMatching;
   Float_t         m2_e_collinearmass;
   Float_t         m2_e_collinearmass_CheckUESDown;
   Float_t         m2_e_collinearmass_CheckUESUp;
   Float_t         m2_e_collinearmass_JetCheckTotalDown;
   Float_t         m2_e_collinearmass_JetCheckTotalUp;
   Float_t         m2_e_collinearmass_JetEnDown;
   Float_t         m2_e_collinearmass_JetEnUp;
   Float_t         m2_e_collinearmass_UnclusteredEnDown;
   Float_t         m2_e_collinearmass_UnclusteredEnUp;
   Float_t         m2_m1_collinearmass;
   Float_t         m2_m1_collinearmass_CheckUESDown;
   Float_t         m2_m1_collinearmass_CheckUESUp;
   Float_t         m2_m1_collinearmass_JetCheckTotalDown;
   Float_t         m2_m1_collinearmass_JetCheckTotalUp;
   Float_t         m2_m1_collinearmass_JetEnDown;
   Float_t         m2_m1_collinearmass_JetEnUp;
   Float_t         m2_m1_collinearmass_UnclusteredEnDown;
   Float_t         m2_m1_collinearmass_UnclusteredEnUp;
   Float_t         m2_m3_CosThetaStar;
   Float_t         m2_m3_DPhi;
   Float_t         m2_m3_DR;
   Float_t         m2_m3_Eta;
   Float_t         m2_m3_Mass;
   Float_t         m2_m3_Mass_TauEnDown;
   Float_t         m2_m3_Mass_TauEnUp;
   Float_t         m2_m3_Mt;
   Float_t         m2_m3_MtTotal;
   Float_t         m2_m3_Mt_TauEnDown;
   Float_t         m2_m3_Mt_TauEnUp;
   Float_t         m2_m3_MvaMet;
   Float_t         m2_m3_MvaMetCovMatrix00;
   Float_t         m2_m3_MvaMetCovMatrix01;
   Float_t         m2_m3_MvaMetCovMatrix10;
   Float_t         m2_m3_MvaMetCovMatrix11;
   Float_t         m2_m3_MvaMetPhi;
   Float_t         m2_m3_PZeta;
   Float_t         m2_m3_PZetaLess0p85PZetaVis;
   Float_t         m2_m3_PZetaVis;
   Float_t         m2_m3_Phi;
   Float_t         m2_m3_Pt;
   Float_t         m2_m3_SS;
   Float_t         m2_m3_ToMETDPhi_Ty1;
   Float_t         m2_m3_collinearmass;
   Float_t         m2_m3_collinearmass_CheckUESDown;
   Float_t         m2_m3_collinearmass_CheckUESUp;
   Float_t         m2_m3_collinearmass_EleEnDown;
   Float_t         m2_m3_collinearmass_EleEnUp;
   Float_t         m2_m3_collinearmass_JetCheckTotalDown;
   Float_t         m2_m3_collinearmass_JetCheckTotalUp;
   Float_t         m2_m3_collinearmass_JetEnDown;
   Float_t         m2_m3_collinearmass_JetEnUp;
   Float_t         m2_m3_collinearmass_MuEnDown;
   Float_t         m2_m3_collinearmass_MuEnUp;
   Float_t         m2_m3_collinearmass_TauEnDown;
   Float_t         m2_m3_collinearmass_TauEnUp;
   Float_t         m2_m3_collinearmass_UnclusteredEnDown;
   Float_t         m2_m3_collinearmass_UnclusteredEnUp;
   Float_t         m2_m3_pt_tt;
   Float_t         m3AbsEta;
   Float_t         m3BestTrackType;
   Float_t         m3Charge;
   Float_t         m3Chi2LocalPosition;
   Float_t         m3ComesFromHiggs;
   Float_t         m3DPhiToPfMet_type1;
   Float_t         m3EcalIsoDR03;
   Float_t         m3EffectiveArea2011;
   Float_t         m3EffectiveArea2012;
   Float_t         m3Eta;
   Float_t         m3Eta_MuonEnDown;
   Float_t         m3Eta_MuonEnUp;
   Float_t         m3GenCharge;
   Float_t         m3GenDirectPromptTauDecayFinalState;
   Float_t         m3GenEnergy;
   Float_t         m3GenEta;
   Float_t         m3GenIsPrompt;
   Float_t         m3GenMotherPdgId;
   Float_t         m3GenParticle;
   Float_t         m3GenPdgId;
   Float_t         m3GenPhi;
   Float_t         m3GenPrompt;
   Float_t         m3GenPromptFinalState;
   Float_t         m3GenPromptTauDecay;
   Float_t         m3GenPt;
   Float_t         m3GenTauDecay;
   Float_t         m3GenVZ;
   Float_t         m3GenVtxPVMatch;
   Float_t         m3HcalIsoDR03;
   Float_t         m3IP3D;
   Float_t         m3IP3DErr;
   Float_t         m3IsGlobal;
   Float_t         m3IsPFMuon;
   Float_t         m3IsTracker;
   Float_t         m3IsoDB03;
   Float_t         m3IsoDB04;
   Float_t         m3JetArea;
   Float_t         m3JetBtag;
   Float_t         m3JetDR;
   Float_t         m3JetEtaEtaMoment;
   Float_t         m3JetEtaPhiMoment;
   Float_t         m3JetEtaPhiSpread;
   Float_t         m3JetHadronFlavour;
   Float_t         m3JetPFCISVBtag;
   Float_t         m3JetPartonFlavour;
   Float_t         m3JetPhiPhiMoment;
   Float_t         m3JetPt;
   Float_t         m3LowestMll;
   Float_t         m3Mass;
   Float_t         m3MatchedStations;
   Float_t         m3MatchesDoubleESingleMu;
   Float_t         m3MatchesDoubleMu;
   Float_t         m3MatchesDoubleMuFilter1;
   Float_t         m3MatchesDoubleMuFilter2;
   Float_t         m3MatchesDoubleMuNoDZFilter1;
   Float_t         m3MatchesDoubleMuNoDZFilter2;
   Float_t         m3MatchesDoubleMuPath1;
   Float_t         m3MatchesDoubleMuPath2;
   Float_t         m3MatchesDoubleMuSingleE;
   Float_t         m3MatchesIsoMu17eta2p1Path;
   Float_t         m3MatchesIsoMu18Path;
   Float_t         m3MatchesIsoMu20Path;
   Float_t         m3MatchesIsoMu22Path;
   Float_t         m3MatchesIsoMu22eta2p1Path;
   Float_t         m3MatchesIsoMu24Filter;
   Float_t         m3MatchesIsoMu27Path;
   Float_t         m3MatchesIsoTkMu20Path;
   Float_t         m3MatchesIsoTkMu22Path;
   Float_t         m3MatchesIsoTkMu24Filter;
   Float_t         m3MatchesMu17Path;
   Float_t         m3MatchesMu17VVLPath;
   Float_t         m3MatchesMu50Path;
   Float_t         m3MatchesMu8Path;
   Float_t         m3MatchesMu8VVLPath;
   Float_t         m3MatchesSingleESingleMu;
   Float_t         m3MatchesSingleMu;
   Float_t         m3MatchesSingleMuIso20;
   Float_t         m3MatchesSingleMuIsoTk20;
   Float_t         m3MatchesSingleMuSingleE;
   Float_t         m3MatchesSingleMu_leg1;
   Float_t         m3MatchesSingleMu_leg1_noiso;
   Float_t         m3MatchesSingleMu_leg2;
   Float_t         m3MatchesSingleMu_leg2_noiso;
   Float_t         m3MatchesTripleMu;
   Float_t         m3MtToPfMet_type1;
   Float_t         m3MuonHits;
   Float_t         m3NearestZMass;
   Float_t         m3NormTrkChi2;
   Float_t         m3NormalizedChi2;
   Float_t         m3PFChargedHadronIsoR04;
   Float_t         m3PFChargedIso;
   Float_t         m3PFIDLoose;
   Float_t         m3PFIDMedium;
   Float_t         m3PFIDTight;
   Float_t         m3PFNeutralHadronIsoR04;
   Float_t         m3PFNeutralIso;
   Float_t         m3PFPUChargedIso;
   Float_t         m3PFPhotonIso;
   Float_t         m3PFPhotonIsoR04;
   Float_t         m3PFPileupIsoR04;
   Float_t         m3PVDXY;
   Float_t         m3PVDZ;
   Float_t         m3Phi;
   Float_t         m3Phi_MuonEnDown;
   Float_t         m3Phi_MuonEnUp;
   Float_t         m3PixHits;
   Float_t         m3Pt;
   Float_t         m3Pt_MuonEnDown;
   Float_t         m3Pt_MuonEnUp;
   Float_t         m3Rank;
   Float_t         m3RelPFIsoDBDefault;
   Float_t         m3RelPFIsoDBDefaultR04;
   Float_t         m3RelPFIsoRho;
   Float_t         m3Rho;
   Float_t         m3SIP2D;
   Float_t         m3SIP3D;
   Float_t         m3SegmentCompatibility;
   Float_t         m3TkLayersWithMeasurement;
   Float_t         m3TrkIsoDR03;
   Float_t         m3TrkKink;
   Int_t           m3TypeCode;
   Float_t         m3VZ;
   Float_t         m3ValidFraction;
   Float_t         m3ZTTGenMatching;
   Float_t         m3_e_collinearmass;
   Float_t         m3_e_collinearmass_CheckUESDown;
   Float_t         m3_e_collinearmass_CheckUESUp;
   Float_t         m3_e_collinearmass_JetCheckTotalDown;
   Float_t         m3_e_collinearmass_JetCheckTotalUp;
   Float_t         m3_e_collinearmass_JetEnDown;
   Float_t         m3_e_collinearmass_JetEnUp;
   Float_t         m3_e_collinearmass_UnclusteredEnDown;
   Float_t         m3_e_collinearmass_UnclusteredEnUp;
   Float_t         m3_m1_collinearmass;
   Float_t         m3_m1_collinearmass_CheckUESDown;
   Float_t         m3_m1_collinearmass_CheckUESUp;
   Float_t         m3_m1_collinearmass_JetCheckTotalDown;
   Float_t         m3_m1_collinearmass_JetCheckTotalUp;
   Float_t         m3_m1_collinearmass_JetEnDown;
   Float_t         m3_m1_collinearmass_JetEnUp;
   Float_t         m3_m1_collinearmass_UnclusteredEnDown;
   Float_t         m3_m1_collinearmass_UnclusteredEnUp;
   Float_t         m3_m2_collinearmass;
   Float_t         m3_m2_collinearmass_CheckUESDown;
   Float_t         m3_m2_collinearmass_CheckUESUp;
   Float_t         m3_m2_collinearmass_JetCheckTotalDown;
   Float_t         m3_m2_collinearmass_JetCheckTotalUp;
   Float_t         m3_m2_collinearmass_JetEnDown;
   Float_t         m3_m2_collinearmass_JetEnUp;
   Float_t         m3_m2_collinearmass_UnclusteredEnDown;
   Float_t         m3_m2_collinearmass_UnclusteredEnUp;
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
   TBranch        *b_eAbsEta;   //!
   TBranch        *b_eCBIDLoose;   //!
   TBranch        *b_eCBIDLooseNoIso;   //!
   TBranch        *b_eCBIDMedium;   //!
   TBranch        *b_eCBIDMediumNoIso;   //!
   TBranch        *b_eCBIDTight;   //!
   TBranch        *b_eCBIDTightNoIso;   //!
   TBranch        *b_eCBIDVeto;   //!
   TBranch        *b_eCBIDVetoNoIso;   //!
   TBranch        *b_eCharge;   //!
   TBranch        *b_eChargeIdLoose;   //!
   TBranch        *b_eChargeIdMed;   //!
   TBranch        *b_eChargeIdTight;   //!
   TBranch        *b_eComesFromHiggs;   //!
   TBranch        *b_eDPhiToPfMet_type1;   //!
   TBranch        *b_eE1x5;   //!
   TBranch        *b_eE2x5Max;   //!
   TBranch        *b_eE5x5;   //!
   TBranch        *b_eEcalIsoDR03;   //!
   TBranch        *b_eEffectiveArea2012Data;   //!
   TBranch        *b_eEffectiveAreaSpring15;   //!
   TBranch        *b_eEnergyError;   //!
   TBranch        *b_eEta;   //!
   TBranch        *b_eGenCharge;   //!
   TBranch        *b_eGenDirectPromptTauDecay;   //!
   TBranch        *b_eGenEnergy;   //!
   TBranch        *b_eGenEta;   //!
   TBranch        *b_eGenIsPrompt;   //!
   TBranch        *b_eGenMotherPdgId;   //!
   TBranch        *b_eGenParticle;   //!
   TBranch        *b_eGenPdgId;   //!
   TBranch        *b_eGenPhi;   //!
   TBranch        *b_eGenPrompt;   //!
   TBranch        *b_eGenPromptTauDecay;   //!
   TBranch        *b_eGenPt;   //!
   TBranch        *b_eGenTauDecay;   //!
   TBranch        *b_eGenVZ;   //!
   TBranch        *b_eGenVtxPVMatch;   //!
   TBranch        *b_eHadronicDepth1OverEm;   //!
   TBranch        *b_eHadronicDepth2OverEm;   //!
   TBranch        *b_eHadronicOverEM;   //!
   TBranch        *b_eHcalIsoDR03;   //!
   TBranch        *b_eIP3D;   //!
   TBranch        *b_eIP3DErr;   //!
   TBranch        *b_eIsoDB03;   //!
   TBranch        *b_eJetArea;   //!
   TBranch        *b_eJetBtag;   //!
   TBranch        *b_eJetDR;   //!
   TBranch        *b_eJetEtaEtaMoment;   //!
   TBranch        *b_eJetEtaPhiMoment;   //!
   TBranch        *b_eJetEtaPhiSpread;   //!
   TBranch        *b_eJetHadronFlavour;   //!
   TBranch        *b_eJetPFCISVBtag;   //!
   TBranch        *b_eJetPartonFlavour;   //!
   TBranch        *b_eJetPhiPhiMoment;   //!
   TBranch        *b_eJetPt;   //!
   TBranch        *b_eLowestMll;   //!
   TBranch        *b_eMVANonTrigCategory;   //!
   TBranch        *b_eMVANonTrigID;   //!
   TBranch        *b_eMVANonTrigWP80;   //!
   TBranch        *b_eMVANonTrigWP90;   //!
   TBranch        *b_eMVATrigCategory;   //!
   TBranch        *b_eMVATrigID;   //!
   TBranch        *b_eMVATrigWP80;   //!
   TBranch        *b_eMVATrigWP90;   //!
   TBranch        *b_eMass;   //!
   TBranch        *b_eMatchesDoubleE;   //!
   TBranch        *b_eMatchesDoubleE23_12Filter;   //!
   TBranch        *b_eMatchesDoubleE23_12Path;   //!
   TBranch        *b_eMatchesDoubleEFilter;   //!
   TBranch        *b_eMatchesDoubleEPath;   //!
   TBranch        *b_eMatchesDoubleESingleMu;   //!
   TBranch        *b_eMatchesDoubleMuSingleE;   //!
   TBranch        *b_eMatchesEle12LoosePath;   //!
   TBranch        *b_eMatchesEle17LoosePath;   //!
   TBranch        *b_eMatchesEle22eta2p1LoosePath;   //!
   TBranch        *b_eMatchesEle23LoosePath;   //!
   TBranch        *b_eMatchesEle25eta2p1LoosePath;   //!
   TBranch        *b_eMatchesEle25eta2p1TightPath;   //!
   TBranch        *b_eMatchesEle27TightPath;   //!
   TBranch        *b_eMatchesEle27eta2p1LoosePath;   //!
   TBranch        *b_eMatchesSingleE;   //!
   TBranch        *b_eMatchesSingleESingleMu;   //!
   TBranch        *b_eMatchesSingleETight27Filter;   //!
   TBranch        *b_eMatchesSingleE_leg1;   //!
   TBranch        *b_eMatchesSingleE_leg2;   //!
   TBranch        *b_eMatchesSingleMuSingleE;   //!
   TBranch        *b_eMatchesTripleE;   //!
   TBranch        *b_eMissingHits;   //!
   TBranch        *b_eMtToPfMet_type1;   //!
   TBranch        *b_eNearMuonVeto;   //!
   TBranch        *b_eNearestMuonDR;   //!
   TBranch        *b_eNearestZMass;   //!
   TBranch        *b_ePFChargedIso;   //!
   TBranch        *b_ePFNeutralIso;   //!
   TBranch        *b_ePFPUChargedIso;   //!
   TBranch        *b_ePFPhotonIso;   //!
   TBranch        *b_ePVDXY;   //!
   TBranch        *b_ePVDZ;   //!
   TBranch        *b_ePassesConversionVeto;   //!
   TBranch        *b_ePhi;   //!
   TBranch        *b_ePt;   //!
   TBranch        *b_ePt_ElectronResPhiDown;   //!
   TBranch        *b_ePt_ElectronResRhoDown;   //!
   TBranch        *b_ePt_ElectronResRhoUp;   //!
   TBranch        *b_ePt_ElectronScaleDown;   //!
   TBranch        *b_ePt_ElectronScaleUp;   //!
   TBranch        *b_ePt_ElectronUncorr;   //!
   TBranch        *b_eRank;   //!
   TBranch        *b_eRelIso;   //!
   TBranch        *b_eRelPFIsoDB;   //!
   TBranch        *b_eRelPFIsoRho;   //!
   TBranch        *b_eRho;   //!
   TBranch        *b_eSCEnergy;   //!
   TBranch        *b_eSCEta;   //!
   TBranch        *b_eSCEtaWidth;   //!
   TBranch        *b_eSCPhi;   //!
   TBranch        *b_eSCPhiWidth;   //!
   TBranch        *b_eSCPreshowerEnergy;   //!
   TBranch        *b_eSCRawEnergy;   //!
   TBranch        *b_eSIP2D;   //!
   TBranch        *b_eSIP3D;   //!
   TBranch        *b_eSigmaIEtaIEta;   //!
   TBranch        *b_eTrkIsoDR03;   //!
   TBranch        *b_eVZ;   //!
   TBranch        *b_eVetoAZHdR0;   //!
   TBranch        *b_eVetoLLTTp001dxyz;   //!
   TBranch        *b_eVetoLLTTp001dxyzR0;   //!
   TBranch        *b_eVetoMVAIso;   //!
   TBranch        *b_eVetoMVAIsoVtx;   //!
   TBranch        *b_eVetoZTTp001dxyz;   //!
   TBranch        *b_eVetoZTTp001dxyzR0;   //!
   TBranch        *b_eWWLoose;   //!
   TBranch        *b_eZTTGenMatching;   //!
   TBranch        *b_e_m1_CosThetaStar;   //!
   TBranch        *b_e_m1_DPhi;   //!
   TBranch        *b_e_m1_DR;   //!
   TBranch        *b_e_m1_Eta;   //!
   TBranch        *b_e_m1_Mass;   //!
   TBranch        *b_e_m1_Mass_TauEnDown;   //!
   TBranch        *b_e_m1_Mass_TauEnUp;   //!
   TBranch        *b_e_m1_Mt;   //!
   TBranch        *b_e_m1_MtTotal;   //!
   TBranch        *b_e_m1_Mt_TauEnDown;   //!
   TBranch        *b_e_m1_Mt_TauEnUp;   //!
   TBranch        *b_e_m1_MvaMet;   //!
   TBranch        *b_e_m1_MvaMetCovMatrix00;   //!
   TBranch        *b_e_m1_MvaMetCovMatrix01;   //!
   TBranch        *b_e_m1_MvaMetCovMatrix10;   //!
   TBranch        *b_e_m1_MvaMetCovMatrix11;   //!
   TBranch        *b_e_m1_MvaMetPhi;   //!
   TBranch        *b_e_m1_PZeta;   //!
   TBranch        *b_e_m1_PZetaLess0p85PZetaVis;   //!
   TBranch        *b_e_m1_PZetaVis;   //!
   TBranch        *b_e_m1_Phi;   //!
   TBranch        *b_e_m1_Pt;   //!
   TBranch        *b_e_m1_SS;   //!
   TBranch        *b_e_m1_ToMETDPhi_Ty1;   //!
   TBranch        *b_e_m1_collinearmass;   //!
   TBranch        *b_e_m1_collinearmass_CheckUESDown;   //!
   TBranch        *b_e_m1_collinearmass_CheckUESUp;   //!
   TBranch        *b_e_m1_collinearmass_EleEnDown;   //!
   TBranch        *b_e_m1_collinearmass_EleEnUp;   //!
   TBranch        *b_e_m1_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_e_m1_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_e_m1_collinearmass_JetEnDown;   //!
   TBranch        *b_e_m1_collinearmass_JetEnUp;   //!
   TBranch        *b_e_m1_collinearmass_MuEnDown;   //!
   TBranch        *b_e_m1_collinearmass_MuEnUp;   //!
   TBranch        *b_e_m1_collinearmass_TauEnDown;   //!
   TBranch        *b_e_m1_collinearmass_TauEnUp;   //!
   TBranch        *b_e_m1_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_e_m1_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_e_m1_pt_tt;   //!
   TBranch        *b_e_m2_CosThetaStar;   //!
   TBranch        *b_e_m2_DPhi;   //!
   TBranch        *b_e_m2_DR;   //!
   TBranch        *b_e_m2_Eta;   //!
   TBranch        *b_e_m2_Mass;   //!
   TBranch        *b_e_m2_Mass_TauEnDown;   //!
   TBranch        *b_e_m2_Mass_TauEnUp;   //!
   TBranch        *b_e_m2_Mt;   //!
   TBranch        *b_e_m2_MtTotal;   //!
   TBranch        *b_e_m2_Mt_TauEnDown;   //!
   TBranch        *b_e_m2_Mt_TauEnUp;   //!
   TBranch        *b_e_m2_MvaMet;   //!
   TBranch        *b_e_m2_MvaMetCovMatrix00;   //!
   TBranch        *b_e_m2_MvaMetCovMatrix01;   //!
   TBranch        *b_e_m2_MvaMetCovMatrix10;   //!
   TBranch        *b_e_m2_MvaMetCovMatrix11;   //!
   TBranch        *b_e_m2_MvaMetPhi;   //!
   TBranch        *b_e_m2_PZeta;   //!
   TBranch        *b_e_m2_PZetaLess0p85PZetaVis;   //!
   TBranch        *b_e_m2_PZetaVis;   //!
   TBranch        *b_e_m2_Phi;   //!
   TBranch        *b_e_m2_Pt;   //!
   TBranch        *b_e_m2_SS;   //!
   TBranch        *b_e_m2_ToMETDPhi_Ty1;   //!
   TBranch        *b_e_m2_collinearmass;   //!
   TBranch        *b_e_m2_collinearmass_CheckUESDown;   //!
   TBranch        *b_e_m2_collinearmass_CheckUESUp;   //!
   TBranch        *b_e_m2_collinearmass_EleEnDown;   //!
   TBranch        *b_e_m2_collinearmass_EleEnUp;   //!
   TBranch        *b_e_m2_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_e_m2_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_e_m2_collinearmass_JetEnDown;   //!
   TBranch        *b_e_m2_collinearmass_JetEnUp;   //!
   TBranch        *b_e_m2_collinearmass_MuEnDown;   //!
   TBranch        *b_e_m2_collinearmass_MuEnUp;   //!
   TBranch        *b_e_m2_collinearmass_TauEnDown;   //!
   TBranch        *b_e_m2_collinearmass_TauEnUp;   //!
   TBranch        *b_e_m2_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_e_m2_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_e_m2_pt_tt;   //!
   TBranch        *b_e_m3_CosThetaStar;   //!
   TBranch        *b_e_m3_DPhi;   //!
   TBranch        *b_e_m3_DR;   //!
   TBranch        *b_e_m3_Eta;   //!
   TBranch        *b_e_m3_Mass;   //!
   TBranch        *b_e_m3_Mass_TauEnDown;   //!
   TBranch        *b_e_m3_Mass_TauEnUp;   //!
   TBranch        *b_e_m3_Mt;   //!
   TBranch        *b_e_m3_MtTotal;   //!
   TBranch        *b_e_m3_Mt_TauEnDown;   //!
   TBranch        *b_e_m3_Mt_TauEnUp;   //!
   TBranch        *b_e_m3_MvaMet;   //!
   TBranch        *b_e_m3_MvaMetCovMatrix00;   //!
   TBranch        *b_e_m3_MvaMetCovMatrix01;   //!
   TBranch        *b_e_m3_MvaMetCovMatrix10;   //!
   TBranch        *b_e_m3_MvaMetCovMatrix11;   //!
   TBranch        *b_e_m3_MvaMetPhi;   //!
   TBranch        *b_e_m3_PZeta;   //!
   TBranch        *b_e_m3_PZetaLess0p85PZetaVis;   //!
   TBranch        *b_e_m3_PZetaVis;   //!
   TBranch        *b_e_m3_Phi;   //!
   TBranch        *b_e_m3_Pt;   //!
   TBranch        *b_e_m3_SS;   //!
   TBranch        *b_e_m3_ToMETDPhi_Ty1;   //!
   TBranch        *b_e_m3_collinearmass;   //!
   TBranch        *b_e_m3_collinearmass_CheckUESDown;   //!
   TBranch        *b_e_m3_collinearmass_CheckUESUp;   //!
   TBranch        *b_e_m3_collinearmass_EleEnDown;   //!
   TBranch        *b_e_m3_collinearmass_EleEnUp;   //!
   TBranch        *b_e_m3_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_e_m3_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_e_m3_collinearmass_JetEnDown;   //!
   TBranch        *b_e_m3_collinearmass_JetEnUp;   //!
   TBranch        *b_e_m3_collinearmass_MuEnDown;   //!
   TBranch        *b_e_m3_collinearmass_MuEnUp;   //!
   TBranch        *b_e_m3_collinearmass_TauEnDown;   //!
   TBranch        *b_e_m3_collinearmass_TauEnUp;   //!
   TBranch        *b_e_m3_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_e_m3_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_e_m3_pt_tt;   //!
   TBranch        *b_edeltaEtaSuperClusterTrackAtVtx;   //!
   TBranch        *b_edeltaPhiSuperClusterTrackAtVtx;   //!
   TBranch        *b_eeSuperClusterOverP;   //!
   TBranch        *b_eecalEnergy;   //!
   TBranch        *b_efBrem;   //!
   TBranch        *b_etrackMomentumAtVtxP;   //!
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
   TBranch        *b_m1AbsEta;   //!
   TBranch        *b_m1BestTrackType;   //!
   TBranch        *b_m1Charge;   //!
   TBranch        *b_m1Chi2LocalPosition;   //!
   TBranch        *b_m1ComesFromHiggs;   //!
   TBranch        *b_m1DPhiToPfMet_type1;   //!
   TBranch        *b_m1EcalIsoDR03;   //!
   TBranch        *b_m1EffectiveArea2011;   //!
   TBranch        *b_m1EffectiveArea2012;   //!
   TBranch        *b_m1Eta;   //!
   TBranch        *b_m1Eta_MuonEnDown;   //!
   TBranch        *b_m1Eta_MuonEnUp;   //!
   TBranch        *b_m1GenCharge;   //!
   TBranch        *b_m1GenDirectPromptTauDecayFinalState;   //!
   TBranch        *b_m1GenEnergy;   //!
   TBranch        *b_m1GenEta;   //!
   TBranch        *b_m1GenIsPrompt;   //!
   TBranch        *b_m1GenMotherPdgId;   //!
   TBranch        *b_m1GenParticle;   //!
   TBranch        *b_m1GenPdgId;   //!
   TBranch        *b_m1GenPhi;   //!
   TBranch        *b_m1GenPrompt;   //!
   TBranch        *b_m1GenPromptFinalState;   //!
   TBranch        *b_m1GenPromptTauDecay;   //!
   TBranch        *b_m1GenPt;   //!
   TBranch        *b_m1GenTauDecay;   //!
   TBranch        *b_m1GenVZ;   //!
   TBranch        *b_m1GenVtxPVMatch;   //!
   TBranch        *b_m1HcalIsoDR03;   //!
   TBranch        *b_m1IP3D;   //!
   TBranch        *b_m1IP3DErr;   //!
   TBranch        *b_m1IsGlobal;   //!
   TBranch        *b_m1IsPFMuon;   //!
   TBranch        *b_m1IsTracker;   //!
   TBranch        *b_m1IsoDB03;   //!
   TBranch        *b_m1IsoDB04;   //!
   TBranch        *b_m1JetArea;   //!
   TBranch        *b_m1JetBtag;   //!
   TBranch        *b_m1JetDR;   //!
   TBranch        *b_m1JetEtaEtaMoment;   //!
   TBranch        *b_m1JetEtaPhiMoment;   //!
   TBranch        *b_m1JetEtaPhiSpread;   //!
   TBranch        *b_m1JetHadronFlavour;   //!
   TBranch        *b_m1JetPFCISVBtag;   //!
   TBranch        *b_m1JetPartonFlavour;   //!
   TBranch        *b_m1JetPhiPhiMoment;   //!
   TBranch        *b_m1JetPt;   //!
   TBranch        *b_m1LowestMll;   //!
   TBranch        *b_m1Mass;   //!
   TBranch        *b_m1MatchedStations;   //!
   TBranch        *b_m1MatchesDoubleESingleMu;   //!
   TBranch        *b_m1MatchesDoubleMu;   //!
   TBranch        *b_m1MatchesDoubleMuFilter1;   //!
   TBranch        *b_m1MatchesDoubleMuFilter2;   //!
   TBranch        *b_m1MatchesDoubleMuNoDZFilter1;   //!
   TBranch        *b_m1MatchesDoubleMuNoDZFilter2;   //!
   TBranch        *b_m1MatchesDoubleMuPath1;   //!
   TBranch        *b_m1MatchesDoubleMuPath2;   //!
   TBranch        *b_m1MatchesDoubleMuSingleE;   //!
   TBranch        *b_m1MatchesIsoMu17eta2p1Path;   //!
   TBranch        *b_m1MatchesIsoMu18Path;   //!
   TBranch        *b_m1MatchesIsoMu20Path;   //!
   TBranch        *b_m1MatchesIsoMu22Path;   //!
   TBranch        *b_m1MatchesIsoMu22eta2p1Path;   //!
   TBranch        *b_m1MatchesIsoMu24Filter;   //!
   TBranch        *b_m1MatchesIsoMu27Path;   //!
   TBranch        *b_m1MatchesIsoTkMu20Path;   //!
   TBranch        *b_m1MatchesIsoTkMu22Path;   //!
   TBranch        *b_m1MatchesIsoTkMu24Filter;   //!
   TBranch        *b_m1MatchesMu17Path;   //!
   TBranch        *b_m1MatchesMu17VVLPath;   //!
   TBranch        *b_m1MatchesMu50Path;   //!
   TBranch        *b_m1MatchesMu8Path;   //!
   TBranch        *b_m1MatchesMu8VVLPath;   //!
   TBranch        *b_m1MatchesSingleESingleMu;   //!
   TBranch        *b_m1MatchesSingleMu;   //!
   TBranch        *b_m1MatchesSingleMuIso20;   //!
   TBranch        *b_m1MatchesSingleMuIsoTk20;   //!
   TBranch        *b_m1MatchesSingleMuSingleE;   //!
   TBranch        *b_m1MatchesSingleMu_leg1;   //!
   TBranch        *b_m1MatchesSingleMu_leg1_noiso;   //!
   TBranch        *b_m1MatchesSingleMu_leg2;   //!
   TBranch        *b_m1MatchesSingleMu_leg2_noiso;   //!
   TBranch        *b_m1MatchesTripleMu;   //!
   TBranch        *b_m1MtToPfMet_type1;   //!
   TBranch        *b_m1MuonHits;   //!
   TBranch        *b_m1NearestZMass;   //!
   TBranch        *b_m1NormTrkChi2;   //!
   TBranch        *b_m1NormalizedChi2;   //!
   TBranch        *b_m1PFChargedHadronIsoR04;   //!
   TBranch        *b_m1PFChargedIso;   //!
   TBranch        *b_m1PFIDLoose;   //!
   TBranch        *b_m1PFIDMedium;   //!
   TBranch        *b_m1PFIDTight;   //!
   TBranch        *b_m1PFNeutralHadronIsoR04;   //!
   TBranch        *b_m1PFNeutralIso;   //!
   TBranch        *b_m1PFPUChargedIso;   //!
   TBranch        *b_m1PFPhotonIso;   //!
   TBranch        *b_m1PFPhotonIsoR04;   //!
   TBranch        *b_m1PFPileupIsoR04;   //!
   TBranch        *b_m1PVDXY;   //!
   TBranch        *b_m1PVDZ;   //!
   TBranch        *b_m1Phi;   //!
   TBranch        *b_m1Phi_MuonEnDown;   //!
   TBranch        *b_m1Phi_MuonEnUp;   //!
   TBranch        *b_m1PixHits;   //!
   TBranch        *b_m1Pt;   //!
   TBranch        *b_m1Pt_MuonEnDown;   //!
   TBranch        *b_m1Pt_MuonEnUp;   //!
   TBranch        *b_m1Rank;   //!
   TBranch        *b_m1RelPFIsoDBDefault;   //!
   TBranch        *b_m1RelPFIsoDBDefaultR04;   //!
   TBranch        *b_m1RelPFIsoRho;   //!
   TBranch        *b_m1Rho;   //!
   TBranch        *b_m1SIP2D;   //!
   TBranch        *b_m1SIP3D;   //!
   TBranch        *b_m1SegmentCompatibility;   //!
   TBranch        *b_m1TkLayersWithMeasurement;   //!
   TBranch        *b_m1TrkIsoDR03;   //!
   TBranch        *b_m1TrkKink;   //!
   TBranch        *b_m1TypeCode;   //!
   TBranch        *b_m1VZ;   //!
   TBranch        *b_m1ValidFraction;   //!
   TBranch        *b_m1ZTTGenMatching;   //!
   TBranch        *b_m1_e_collinearmass;   //!
   TBranch        *b_m1_e_collinearmass_CheckUESDown;   //!
   TBranch        *b_m1_e_collinearmass_CheckUESUp;   //!
   TBranch        *b_m1_e_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_m1_e_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_m1_e_collinearmass_JetEnDown;   //!
   TBranch        *b_m1_e_collinearmass_JetEnUp;   //!
   TBranch        *b_m1_e_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_m1_e_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_m1_m2_CosThetaStar;   //!
   TBranch        *b_m1_m2_DPhi;   //!
   TBranch        *b_m1_m2_DR;   //!
   TBranch        *b_m1_m2_Eta;   //!
   TBranch        *b_m1_m2_Mass;   //!
   TBranch        *b_m1_m2_Mass_TauEnDown;   //!
   TBranch        *b_m1_m2_Mass_TauEnUp;   //!
   TBranch        *b_m1_m2_Mt;   //!
   TBranch        *b_m1_m2_MtTotal;   //!
   TBranch        *b_m1_m2_Mt_TauEnDown;   //!
   TBranch        *b_m1_m2_Mt_TauEnUp;   //!
   TBranch        *b_m1_m2_MvaMet;   //!
   TBranch        *b_m1_m2_MvaMetCovMatrix00;   //!
   TBranch        *b_m1_m2_MvaMetCovMatrix01;   //!
   TBranch        *b_m1_m2_MvaMetCovMatrix10;   //!
   TBranch        *b_m1_m2_MvaMetCovMatrix11;   //!
   TBranch        *b_m1_m2_MvaMetPhi;   //!
   TBranch        *b_m1_m2_PZeta;   //!
   TBranch        *b_m1_m2_PZetaLess0p85PZetaVis;   //!
   TBranch        *b_m1_m2_PZetaVis;   //!
   TBranch        *b_m1_m2_Phi;   //!
   TBranch        *b_m1_m2_Pt;   //!
   TBranch        *b_m1_m2_SS;   //!
   TBranch        *b_m1_m2_ToMETDPhi_Ty1;   //!
   TBranch        *b_m1_m2_collinearmass;   //!
   TBranch        *b_m1_m2_collinearmass_CheckUESDown;   //!
   TBranch        *b_m1_m2_collinearmass_CheckUESUp;   //!
   TBranch        *b_m1_m2_collinearmass_EleEnDown;   //!
   TBranch        *b_m1_m2_collinearmass_EleEnUp;   //!
   TBranch        *b_m1_m2_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_m1_m2_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_m1_m2_collinearmass_JetEnDown;   //!
   TBranch        *b_m1_m2_collinearmass_JetEnUp;   //!
   TBranch        *b_m1_m2_collinearmass_MuEnDown;   //!
   TBranch        *b_m1_m2_collinearmass_MuEnUp;   //!
   TBranch        *b_m1_m2_collinearmass_TauEnDown;   //!
   TBranch        *b_m1_m2_collinearmass_TauEnUp;   //!
   TBranch        *b_m1_m2_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_m1_m2_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_m1_m2_pt_tt;   //!
   TBranch        *b_m1_m3_CosThetaStar;   //!
   TBranch        *b_m1_m3_DPhi;   //!
   TBranch        *b_m1_m3_DR;   //!
   TBranch        *b_m1_m3_Eta;   //!
   TBranch        *b_m1_m3_Mass;   //!
   TBranch        *b_m1_m3_Mass_TauEnDown;   //!
   TBranch        *b_m1_m3_Mass_TauEnUp;   //!
   TBranch        *b_m1_m3_Mt;   //!
   TBranch        *b_m1_m3_MtTotal;   //!
   TBranch        *b_m1_m3_Mt_TauEnDown;   //!
   TBranch        *b_m1_m3_Mt_TauEnUp;   //!
   TBranch        *b_m1_m3_MvaMet;   //!
   TBranch        *b_m1_m3_MvaMetCovMatrix00;   //!
   TBranch        *b_m1_m3_MvaMetCovMatrix01;   //!
   TBranch        *b_m1_m3_MvaMetCovMatrix10;   //!
   TBranch        *b_m1_m3_MvaMetCovMatrix11;   //!
   TBranch        *b_m1_m3_MvaMetPhi;   //!
   TBranch        *b_m1_m3_PZeta;   //!
   TBranch        *b_m1_m3_PZetaLess0p85PZetaVis;   //!
   TBranch        *b_m1_m3_PZetaVis;   //!
   TBranch        *b_m1_m3_Phi;   //!
   TBranch        *b_m1_m3_Pt;   //!
   TBranch        *b_m1_m3_SS;   //!
   TBranch        *b_m1_m3_ToMETDPhi_Ty1;   //!
   TBranch        *b_m1_m3_collinearmass;   //!
   TBranch        *b_m1_m3_collinearmass_CheckUESDown;   //!
   TBranch        *b_m1_m3_collinearmass_CheckUESUp;   //!
   TBranch        *b_m1_m3_collinearmass_EleEnDown;   //!
   TBranch        *b_m1_m3_collinearmass_EleEnUp;   //!
   TBranch        *b_m1_m3_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_m1_m3_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_m1_m3_collinearmass_JetEnDown;   //!
   TBranch        *b_m1_m3_collinearmass_JetEnUp;   //!
   TBranch        *b_m1_m3_collinearmass_MuEnDown;   //!
   TBranch        *b_m1_m3_collinearmass_MuEnUp;   //!
   TBranch        *b_m1_m3_collinearmass_TauEnDown;   //!
   TBranch        *b_m1_m3_collinearmass_TauEnUp;   //!
   TBranch        *b_m1_m3_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_m1_m3_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_m1_m3_pt_tt;   //!
   TBranch        *b_m2AbsEta;   //!
   TBranch        *b_m2BestTrackType;   //!
   TBranch        *b_m2Charge;   //!
   TBranch        *b_m2Chi2LocalPosition;   //!
   TBranch        *b_m2ComesFromHiggs;   //!
   TBranch        *b_m2DPhiToPfMet_type1;   //!
   TBranch        *b_m2EcalIsoDR03;   //!
   TBranch        *b_m2EffectiveArea2011;   //!
   TBranch        *b_m2EffectiveArea2012;   //!
   TBranch        *b_m2Eta;   //!
   TBranch        *b_m2Eta_MuonEnDown;   //!
   TBranch        *b_m2Eta_MuonEnUp;   //!
   TBranch        *b_m2GenCharge;   //!
   TBranch        *b_m2GenDirectPromptTauDecayFinalState;   //!
   TBranch        *b_m2GenEnergy;   //!
   TBranch        *b_m2GenEta;   //!
   TBranch        *b_m2GenIsPrompt;   //!
   TBranch        *b_m2GenMotherPdgId;   //!
   TBranch        *b_m2GenParticle;   //!
   TBranch        *b_m2GenPdgId;   //!
   TBranch        *b_m2GenPhi;   //!
   TBranch        *b_m2GenPrompt;   //!
   TBranch        *b_m2GenPromptFinalState;   //!
   TBranch        *b_m2GenPromptTauDecay;   //!
   TBranch        *b_m2GenPt;   //!
   TBranch        *b_m2GenTauDecay;   //!
   TBranch        *b_m2GenVZ;   //!
   TBranch        *b_m2GenVtxPVMatch;   //!
   TBranch        *b_m2HcalIsoDR03;   //!
   TBranch        *b_m2IP3D;   //!
   TBranch        *b_m2IP3DErr;   //!
   TBranch        *b_m2IsGlobal;   //!
   TBranch        *b_m2IsPFMuon;   //!
   TBranch        *b_m2IsTracker;   //!
   TBranch        *b_m2IsoDB03;   //!
   TBranch        *b_m2IsoDB04;   //!
   TBranch        *b_m2JetArea;   //!
   TBranch        *b_m2JetBtag;   //!
   TBranch        *b_m2JetDR;   //!
   TBranch        *b_m2JetEtaEtaMoment;   //!
   TBranch        *b_m2JetEtaPhiMoment;   //!
   TBranch        *b_m2JetEtaPhiSpread;   //!
   TBranch        *b_m2JetHadronFlavour;   //!
   TBranch        *b_m2JetPFCISVBtag;   //!
   TBranch        *b_m2JetPartonFlavour;   //!
   TBranch        *b_m2JetPhiPhiMoment;   //!
   TBranch        *b_m2JetPt;   //!
   TBranch        *b_m2LowestMll;   //!
   TBranch        *b_m2Mass;   //!
   TBranch        *b_m2MatchedStations;   //!
   TBranch        *b_m2MatchesDoubleESingleMu;   //!
   TBranch        *b_m2MatchesDoubleMu;   //!
   TBranch        *b_m2MatchesDoubleMuFilter1;   //!
   TBranch        *b_m2MatchesDoubleMuFilter2;   //!
   TBranch        *b_m2MatchesDoubleMuNoDZFilter1;   //!
   TBranch        *b_m2MatchesDoubleMuNoDZFilter2;   //!
   TBranch        *b_m2MatchesDoubleMuPath1;   //!
   TBranch        *b_m2MatchesDoubleMuPath2;   //!
   TBranch        *b_m2MatchesDoubleMuSingleE;   //!
   TBranch        *b_m2MatchesIsoMu17eta2p1Path;   //!
   TBranch        *b_m2MatchesIsoMu18Path;   //!
   TBranch        *b_m2MatchesIsoMu20Path;   //!
   TBranch        *b_m2MatchesIsoMu22Path;   //!
   TBranch        *b_m2MatchesIsoMu22eta2p1Path;   //!
   TBranch        *b_m2MatchesIsoMu24Filter;   //!
   TBranch        *b_m2MatchesIsoMu27Path;   //!
   TBranch        *b_m2MatchesIsoTkMu20Path;   //!
   TBranch        *b_m2MatchesIsoTkMu22Path;   //!
   TBranch        *b_m2MatchesIsoTkMu24Filter;   //!
   TBranch        *b_m2MatchesMu17Path;   //!
   TBranch        *b_m2MatchesMu17VVLPath;   //!
   TBranch        *b_m2MatchesMu50Path;   //!
   TBranch        *b_m2MatchesMu8Path;   //!
   TBranch        *b_m2MatchesMu8VVLPath;   //!
   TBranch        *b_m2MatchesSingleESingleMu;   //!
   TBranch        *b_m2MatchesSingleMu;   //!
   TBranch        *b_m2MatchesSingleMuIso20;   //!
   TBranch        *b_m2MatchesSingleMuIsoTk20;   //!
   TBranch        *b_m2MatchesSingleMuSingleE;   //!
   TBranch        *b_m2MatchesSingleMu_leg1;   //!
   TBranch        *b_m2MatchesSingleMu_leg1_noiso;   //!
   TBranch        *b_m2MatchesSingleMu_leg2;   //!
   TBranch        *b_m2MatchesSingleMu_leg2_noiso;   //!
   TBranch        *b_m2MatchesTripleMu;   //!
   TBranch        *b_m2MtToPfMet_type1;   //!
   TBranch        *b_m2MuonHits;   //!
   TBranch        *b_m2NearestZMass;   //!
   TBranch        *b_m2NormTrkChi2;   //!
   TBranch        *b_m2NormalizedChi2;   //!
   TBranch        *b_m2PFChargedHadronIsoR04;   //!
   TBranch        *b_m2PFChargedIso;   //!
   TBranch        *b_m2PFIDLoose;   //!
   TBranch        *b_m2PFIDMedium;   //!
   TBranch        *b_m2PFIDTight;   //!
   TBranch        *b_m2PFNeutralHadronIsoR04;   //!
   TBranch        *b_m2PFNeutralIso;   //!
   TBranch        *b_m2PFPUChargedIso;   //!
   TBranch        *b_m2PFPhotonIso;   //!
   TBranch        *b_m2PFPhotonIsoR04;   //!
   TBranch        *b_m2PFPileupIsoR04;   //!
   TBranch        *b_m2PVDXY;   //!
   TBranch        *b_m2PVDZ;   //!
   TBranch        *b_m2Phi;   //!
   TBranch        *b_m2Phi_MuonEnDown;   //!
   TBranch        *b_m2Phi_MuonEnUp;   //!
   TBranch        *b_m2PixHits;   //!
   TBranch        *b_m2Pt;   //!
   TBranch        *b_m2Pt_MuonEnDown;   //!
   TBranch        *b_m2Pt_MuonEnUp;   //!
   TBranch        *b_m2Rank;   //!
   TBranch        *b_m2RelPFIsoDBDefault;   //!
   TBranch        *b_m2RelPFIsoDBDefaultR04;   //!
   TBranch        *b_m2RelPFIsoRho;   //!
   TBranch        *b_m2Rho;   //!
   TBranch        *b_m2SIP2D;   //!
   TBranch        *b_m2SIP3D;   //!
   TBranch        *b_m2SegmentCompatibility;   //!
   TBranch        *b_m2TkLayersWithMeasurement;   //!
   TBranch        *b_m2TrkIsoDR03;   //!
   TBranch        *b_m2TrkKink;   //!
   TBranch        *b_m2TypeCode;   //!
   TBranch        *b_m2VZ;   //!
   TBranch        *b_m2ValidFraction;   //!
   TBranch        *b_m2ZTTGenMatching;   //!
   TBranch        *b_m2_e_collinearmass;   //!
   TBranch        *b_m2_e_collinearmass_CheckUESDown;   //!
   TBranch        *b_m2_e_collinearmass_CheckUESUp;   //!
   TBranch        *b_m2_e_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_m2_e_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_m2_e_collinearmass_JetEnDown;   //!
   TBranch        *b_m2_e_collinearmass_JetEnUp;   //!
   TBranch        *b_m2_e_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_m2_e_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_m2_m1_collinearmass;   //!
   TBranch        *b_m2_m1_collinearmass_CheckUESDown;   //!
   TBranch        *b_m2_m1_collinearmass_CheckUESUp;   //!
   TBranch        *b_m2_m1_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_m2_m1_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_m2_m1_collinearmass_JetEnDown;   //!
   TBranch        *b_m2_m1_collinearmass_JetEnUp;   //!
   TBranch        *b_m2_m1_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_m2_m1_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_m2_m3_CosThetaStar;   //!
   TBranch        *b_m2_m3_DPhi;   //!
   TBranch        *b_m2_m3_DR;   //!
   TBranch        *b_m2_m3_Eta;   //!
   TBranch        *b_m2_m3_Mass;   //!
   TBranch        *b_m2_m3_Mass_TauEnDown;   //!
   TBranch        *b_m2_m3_Mass_TauEnUp;   //!
   TBranch        *b_m2_m3_Mt;   //!
   TBranch        *b_m2_m3_MtTotal;   //!
   TBranch        *b_m2_m3_Mt_TauEnDown;   //!
   TBranch        *b_m2_m3_Mt_TauEnUp;   //!
   TBranch        *b_m2_m3_MvaMet;   //!
   TBranch        *b_m2_m3_MvaMetCovMatrix00;   //!
   TBranch        *b_m2_m3_MvaMetCovMatrix01;   //!
   TBranch        *b_m2_m3_MvaMetCovMatrix10;   //!
   TBranch        *b_m2_m3_MvaMetCovMatrix11;   //!
   TBranch        *b_m2_m3_MvaMetPhi;   //!
   TBranch        *b_m2_m3_PZeta;   //!
   TBranch        *b_m2_m3_PZetaLess0p85PZetaVis;   //!
   TBranch        *b_m2_m3_PZetaVis;   //!
   TBranch        *b_m2_m3_Phi;   //!
   TBranch        *b_m2_m3_Pt;   //!
   TBranch        *b_m2_m3_SS;   //!
   TBranch        *b_m2_m3_ToMETDPhi_Ty1;   //!
   TBranch        *b_m2_m3_collinearmass;   //!
   TBranch        *b_m2_m3_collinearmass_CheckUESDown;   //!
   TBranch        *b_m2_m3_collinearmass_CheckUESUp;   //!
   TBranch        *b_m2_m3_collinearmass_EleEnDown;   //!
   TBranch        *b_m2_m3_collinearmass_EleEnUp;   //!
   TBranch        *b_m2_m3_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_m2_m3_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_m2_m3_collinearmass_JetEnDown;   //!
   TBranch        *b_m2_m3_collinearmass_JetEnUp;   //!
   TBranch        *b_m2_m3_collinearmass_MuEnDown;   //!
   TBranch        *b_m2_m3_collinearmass_MuEnUp;   //!
   TBranch        *b_m2_m3_collinearmass_TauEnDown;   //!
   TBranch        *b_m2_m3_collinearmass_TauEnUp;   //!
   TBranch        *b_m2_m3_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_m2_m3_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_m2_m3_pt_tt;   //!
   TBranch        *b_m3AbsEta;   //!
   TBranch        *b_m3BestTrackType;   //!
   TBranch        *b_m3Charge;   //!
   TBranch        *b_m3Chi2LocalPosition;   //!
   TBranch        *b_m3ComesFromHiggs;   //!
   TBranch        *b_m3DPhiToPfMet_type1;   //!
   TBranch        *b_m3EcalIsoDR03;   //!
   TBranch        *b_m3EffectiveArea2011;   //!
   TBranch        *b_m3EffectiveArea2012;   //!
   TBranch        *b_m3Eta;   //!
   TBranch        *b_m3Eta_MuonEnDown;   //!
   TBranch        *b_m3Eta_MuonEnUp;   //!
   TBranch        *b_m3GenCharge;   //!
   TBranch        *b_m3GenDirectPromptTauDecayFinalState;   //!
   TBranch        *b_m3GenEnergy;   //!
   TBranch        *b_m3GenEta;   //!
   TBranch        *b_m3GenIsPrompt;   //!
   TBranch        *b_m3GenMotherPdgId;   //!
   TBranch        *b_m3GenParticle;   //!
   TBranch        *b_m3GenPdgId;   //!
   TBranch        *b_m3GenPhi;   //!
   TBranch        *b_m3GenPrompt;   //!
   TBranch        *b_m3GenPromptFinalState;   //!
   TBranch        *b_m3GenPromptTauDecay;   //!
   TBranch        *b_m3GenPt;   //!
   TBranch        *b_m3GenTauDecay;   //!
   TBranch        *b_m3GenVZ;   //!
   TBranch        *b_m3GenVtxPVMatch;   //!
   TBranch        *b_m3HcalIsoDR03;   //!
   TBranch        *b_m3IP3D;   //!
   TBranch        *b_m3IP3DErr;   //!
   TBranch        *b_m3IsGlobal;   //!
   TBranch        *b_m3IsPFMuon;   //!
   TBranch        *b_m3IsTracker;   //!
   TBranch        *b_m3IsoDB03;   //!
   TBranch        *b_m3IsoDB04;   //!
   TBranch        *b_m3JetArea;   //!
   TBranch        *b_m3JetBtag;   //!
   TBranch        *b_m3JetDR;   //!
   TBranch        *b_m3JetEtaEtaMoment;   //!
   TBranch        *b_m3JetEtaPhiMoment;   //!
   TBranch        *b_m3JetEtaPhiSpread;   //!
   TBranch        *b_m3JetHadronFlavour;   //!
   TBranch        *b_m3JetPFCISVBtag;   //!
   TBranch        *b_m3JetPartonFlavour;   //!
   TBranch        *b_m3JetPhiPhiMoment;   //!
   TBranch        *b_m3JetPt;   //!
   TBranch        *b_m3LowestMll;   //!
   TBranch        *b_m3Mass;   //!
   TBranch        *b_m3MatchedStations;   //!
   TBranch        *b_m3MatchesDoubleESingleMu;   //!
   TBranch        *b_m3MatchesDoubleMu;   //!
   TBranch        *b_m3MatchesDoubleMuFilter1;   //!
   TBranch        *b_m3MatchesDoubleMuFilter2;   //!
   TBranch        *b_m3MatchesDoubleMuNoDZFilter1;   //!
   TBranch        *b_m3MatchesDoubleMuNoDZFilter2;   //!
   TBranch        *b_m3MatchesDoubleMuPath1;   //!
   TBranch        *b_m3MatchesDoubleMuPath2;   //!
   TBranch        *b_m3MatchesDoubleMuSingleE;   //!
   TBranch        *b_m3MatchesIsoMu17eta2p1Path;   //!
   TBranch        *b_m3MatchesIsoMu18Path;   //!
   TBranch        *b_m3MatchesIsoMu20Path;   //!
   TBranch        *b_m3MatchesIsoMu22Path;   //!
   TBranch        *b_m3MatchesIsoMu22eta2p1Path;   //!
   TBranch        *b_m3MatchesIsoMu24Filter;   //!
   TBranch        *b_m3MatchesIsoMu27Path;   //!
   TBranch        *b_m3MatchesIsoTkMu20Path;   //!
   TBranch        *b_m3MatchesIsoTkMu22Path;   //!
   TBranch        *b_m3MatchesIsoTkMu24Filter;   //!
   TBranch        *b_m3MatchesMu17Path;   //!
   TBranch        *b_m3MatchesMu17VVLPath;   //!
   TBranch        *b_m3MatchesMu50Path;   //!
   TBranch        *b_m3MatchesMu8Path;   //!
   TBranch        *b_m3MatchesMu8VVLPath;   //!
   TBranch        *b_m3MatchesSingleESingleMu;   //!
   TBranch        *b_m3MatchesSingleMu;   //!
   TBranch        *b_m3MatchesSingleMuIso20;   //!
   TBranch        *b_m3MatchesSingleMuIsoTk20;   //!
   TBranch        *b_m3MatchesSingleMuSingleE;   //!
   TBranch        *b_m3MatchesSingleMu_leg1;   //!
   TBranch        *b_m3MatchesSingleMu_leg1_noiso;   //!
   TBranch        *b_m3MatchesSingleMu_leg2;   //!
   TBranch        *b_m3MatchesSingleMu_leg2_noiso;   //!
   TBranch        *b_m3MatchesTripleMu;   //!
   TBranch        *b_m3MtToPfMet_type1;   //!
   TBranch        *b_m3MuonHits;   //!
   TBranch        *b_m3NearestZMass;   //!
   TBranch        *b_m3NormTrkChi2;   //!
   TBranch        *b_m3NormalizedChi2;   //!
   TBranch        *b_m3PFChargedHadronIsoR04;   //!
   TBranch        *b_m3PFChargedIso;   //!
   TBranch        *b_m3PFIDLoose;   //!
   TBranch        *b_m3PFIDMedium;   //!
   TBranch        *b_m3PFIDTight;   //!
   TBranch        *b_m3PFNeutralHadronIsoR04;   //!
   TBranch        *b_m3PFNeutralIso;   //!
   TBranch        *b_m3PFPUChargedIso;   //!
   TBranch        *b_m3PFPhotonIso;   //!
   TBranch        *b_m3PFPhotonIsoR04;   //!
   TBranch        *b_m3PFPileupIsoR04;   //!
   TBranch        *b_m3PVDXY;   //!
   TBranch        *b_m3PVDZ;   //!
   TBranch        *b_m3Phi;   //!
   TBranch        *b_m3Phi_MuonEnDown;   //!
   TBranch        *b_m3Phi_MuonEnUp;   //!
   TBranch        *b_m3PixHits;   //!
   TBranch        *b_m3Pt;   //!
   TBranch        *b_m3Pt_MuonEnDown;   //!
   TBranch        *b_m3Pt_MuonEnUp;   //!
   TBranch        *b_m3Rank;   //!
   TBranch        *b_m3RelPFIsoDBDefault;   //!
   TBranch        *b_m3RelPFIsoDBDefaultR04;   //!
   TBranch        *b_m3RelPFIsoRho;   //!
   TBranch        *b_m3Rho;   //!
   TBranch        *b_m3SIP2D;   //!
   TBranch        *b_m3SIP3D;   //!
   TBranch        *b_m3SegmentCompatibility;   //!
   TBranch        *b_m3TkLayersWithMeasurement;   //!
   TBranch        *b_m3TrkIsoDR03;   //!
   TBranch        *b_m3TrkKink;   //!
   TBranch        *b_m3TypeCode;   //!
   TBranch        *b_m3VZ;   //!
   TBranch        *b_m3ValidFraction;   //!
   TBranch        *b_m3ZTTGenMatching;   //!
   TBranch        *b_m3_e_collinearmass;   //!
   TBranch        *b_m3_e_collinearmass_CheckUESDown;   //!
   TBranch        *b_m3_e_collinearmass_CheckUESUp;   //!
   TBranch        *b_m3_e_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_m3_e_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_m3_e_collinearmass_JetEnDown;   //!
   TBranch        *b_m3_e_collinearmass_JetEnUp;   //!
   TBranch        *b_m3_e_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_m3_e_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_m3_m1_collinearmass;   //!
   TBranch        *b_m3_m1_collinearmass_CheckUESDown;   //!
   TBranch        *b_m3_m1_collinearmass_CheckUESUp;   //!
   TBranch        *b_m3_m1_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_m3_m1_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_m3_m1_collinearmass_JetEnDown;   //!
   TBranch        *b_m3_m1_collinearmass_JetEnUp;   //!
   TBranch        *b_m3_m1_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_m3_m1_collinearmass_UnclusteredEnUp;   //!
   TBranch        *b_m3_m2_collinearmass;   //!
   TBranch        *b_m3_m2_collinearmass_CheckUESDown;   //!
   TBranch        *b_m3_m2_collinearmass_CheckUESUp;   //!
   TBranch        *b_m3_m2_collinearmass_JetCheckTotalDown;   //!
   TBranch        *b_m3_m2_collinearmass_JetCheckTotalUp;   //!
   TBranch        *b_m3_m2_collinearmass_JetEnDown;   //!
   TBranch        *b_m3_m2_collinearmass_JetEnUp;   //!
   TBranch        *b_m3_m2_collinearmass_UnclusteredEnDown;   //!
   TBranch        *b_m3_m2_collinearmass_UnclusteredEnUp;   //!
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

   runchannelMMEM(const std::string SampleName,const int maxEvents, TTree *tree=0);
   virtual ~runchannelMMEM();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(const std::string SampleName,const int maxEvents);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   struct MMEM_PartInfo {

   float s_mu3_Pt;
   float s_mu1_Pt;
   float s_mu2_Pt;
 
   float s_mu1_MatchesDoubleMu;
   float s_mu2_MatchesDoubleMu;
   float s_mu3_MatchesDoubleMu;   
   float s_mu1_MatchesDoubleMuFilter1;
   float s_mu1_MatchesDoubleMuFilter2;
   float s_mu2_MatchesDoubleMuFilter1;
   float s_mu2_MatchesDoubleMuFilter2;
   float s_mu3_MatchesDoubleMuFilter1;
   float s_mu3_MatchesDoubleMuFilter2;
 
};
   bool MMEM_ZMMSelection(MMEM_PartInfo aParticle);
};

#endif

#ifdef runchannelMMEM_cxx
runchannelMMEM::runchannelMMEM(const std::string SampleName, const int maxEvents, TTree *tree) //: fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TChain *mychain = new TChain("emmm/final/Ntuple");
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

runchannelMMEM::~runchannelMMEM()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t runchannelMMEM::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t runchannelMMEM::LoadTree(Long64_t entry)
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

void runchannelMMEM::Init(TTree *tree)
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
   fChain->SetBranchAddress("eAbsEta", &eAbsEta, &b_eAbsEta);
   fChain->SetBranchAddress("eCBIDLoose", &eCBIDLoose, &b_eCBIDLoose);
   fChain->SetBranchAddress("eCBIDLooseNoIso", &eCBIDLooseNoIso, &b_eCBIDLooseNoIso);
   fChain->SetBranchAddress("eCBIDMedium", &eCBIDMedium, &b_eCBIDMedium);
   fChain->SetBranchAddress("eCBIDMediumNoIso", &eCBIDMediumNoIso, &b_eCBIDMediumNoIso);
   fChain->SetBranchAddress("eCBIDTight", &eCBIDTight, &b_eCBIDTight);
   fChain->SetBranchAddress("eCBIDTightNoIso", &eCBIDTightNoIso, &b_eCBIDTightNoIso);
   fChain->SetBranchAddress("eCBIDVeto", &eCBIDVeto, &b_eCBIDVeto);
   fChain->SetBranchAddress("eCBIDVetoNoIso", &eCBIDVetoNoIso, &b_eCBIDVetoNoIso);
   fChain->SetBranchAddress("eCharge", &eCharge, &b_eCharge);
   fChain->SetBranchAddress("eChargeIdLoose", &eChargeIdLoose, &b_eChargeIdLoose);
   fChain->SetBranchAddress("eChargeIdMed", &eChargeIdMed, &b_eChargeIdMed);
   fChain->SetBranchAddress("eChargeIdTight", &eChargeIdTight, &b_eChargeIdTight);
   fChain->SetBranchAddress("eComesFromHiggs", &eComesFromHiggs, &b_eComesFromHiggs);
   fChain->SetBranchAddress("eDPhiToPfMet_type1", &eDPhiToPfMet_type1, &b_eDPhiToPfMet_type1);
   fChain->SetBranchAddress("eE1x5", &eE1x5, &b_eE1x5);
   fChain->SetBranchAddress("eE2x5Max", &eE2x5Max, &b_eE2x5Max);
   fChain->SetBranchAddress("eE5x5", &eE5x5, &b_eE5x5);
   fChain->SetBranchAddress("eEcalIsoDR03", &eEcalIsoDR03, &b_eEcalIsoDR03);
   fChain->SetBranchAddress("eEffectiveArea2012Data", &eEffectiveArea2012Data, &b_eEffectiveArea2012Data);
   fChain->SetBranchAddress("eEffectiveAreaSpring15", &eEffectiveAreaSpring15, &b_eEffectiveAreaSpring15);
   fChain->SetBranchAddress("eEnergyError", &eEnergyError, &b_eEnergyError);
   fChain->SetBranchAddress("eEta", &eEta, &b_eEta);
   fChain->SetBranchAddress("eGenCharge", &eGenCharge, &b_eGenCharge);
   fChain->SetBranchAddress("eGenDirectPromptTauDecay", &eGenDirectPromptTauDecay, &b_eGenDirectPromptTauDecay);
   fChain->SetBranchAddress("eGenEnergy", &eGenEnergy, &b_eGenEnergy);
   fChain->SetBranchAddress("eGenEta", &eGenEta, &b_eGenEta);
   fChain->SetBranchAddress("eGenIsPrompt", &eGenIsPrompt, &b_eGenIsPrompt);
   fChain->SetBranchAddress("eGenMotherPdgId", &eGenMotherPdgId, &b_eGenMotherPdgId);
   fChain->SetBranchAddress("eGenParticle", &eGenParticle, &b_eGenParticle);
   fChain->SetBranchAddress("eGenPdgId", &eGenPdgId, &b_eGenPdgId);
   fChain->SetBranchAddress("eGenPhi", &eGenPhi, &b_eGenPhi);
   fChain->SetBranchAddress("eGenPrompt", &eGenPrompt, &b_eGenPrompt);
   fChain->SetBranchAddress("eGenPromptTauDecay", &eGenPromptTauDecay, &b_eGenPromptTauDecay);
   fChain->SetBranchAddress("eGenPt", &eGenPt, &b_eGenPt);
   fChain->SetBranchAddress("eGenTauDecay", &eGenTauDecay, &b_eGenTauDecay);
   fChain->SetBranchAddress("eGenVZ", &eGenVZ, &b_eGenVZ);
   fChain->SetBranchAddress("eGenVtxPVMatch", &eGenVtxPVMatch, &b_eGenVtxPVMatch);
   fChain->SetBranchAddress("eHadronicDepth1OverEm", &eHadronicDepth1OverEm, &b_eHadronicDepth1OverEm);
   fChain->SetBranchAddress("eHadronicDepth2OverEm", &eHadronicDepth2OverEm, &b_eHadronicDepth2OverEm);
   fChain->SetBranchAddress("eHadronicOverEM", &eHadronicOverEM, &b_eHadronicOverEM);
   fChain->SetBranchAddress("eHcalIsoDR03", &eHcalIsoDR03, &b_eHcalIsoDR03);
   fChain->SetBranchAddress("eIP3D", &eIP3D, &b_eIP3D);
   fChain->SetBranchAddress("eIP3DErr", &eIP3DErr, &b_eIP3DErr);
   fChain->SetBranchAddress("eIsoDB03", &eIsoDB03, &b_eIsoDB03);
   fChain->SetBranchAddress("eJetArea", &eJetArea, &b_eJetArea);
   fChain->SetBranchAddress("eJetBtag", &eJetBtag, &b_eJetBtag);
   fChain->SetBranchAddress("eJetDR", &eJetDR, &b_eJetDR);
   fChain->SetBranchAddress("eJetEtaEtaMoment", &eJetEtaEtaMoment, &b_eJetEtaEtaMoment);
   fChain->SetBranchAddress("eJetEtaPhiMoment", &eJetEtaPhiMoment, &b_eJetEtaPhiMoment);
   fChain->SetBranchAddress("eJetEtaPhiSpread", &eJetEtaPhiSpread, &b_eJetEtaPhiSpread);
   fChain->SetBranchAddress("eJetHadronFlavour", &eJetHadronFlavour, &b_eJetHadronFlavour);
   fChain->SetBranchAddress("eJetPFCISVBtag", &eJetPFCISVBtag, &b_eJetPFCISVBtag);
   fChain->SetBranchAddress("eJetPartonFlavour", &eJetPartonFlavour, &b_eJetPartonFlavour);
   fChain->SetBranchAddress("eJetPhiPhiMoment", &eJetPhiPhiMoment, &b_eJetPhiPhiMoment);
   fChain->SetBranchAddress("eJetPt", &eJetPt, &b_eJetPt);
   fChain->SetBranchAddress("eLowestMll", &eLowestMll, &b_eLowestMll);
   fChain->SetBranchAddress("eMVANonTrigCategory", &eMVANonTrigCategory, &b_eMVANonTrigCategory);
   fChain->SetBranchAddress("eMVANonTrigID", &eMVANonTrigID, &b_eMVANonTrigID);
   fChain->SetBranchAddress("eMVANonTrigWP80", &eMVANonTrigWP80, &b_eMVANonTrigWP80);
   fChain->SetBranchAddress("eMVANonTrigWP90", &eMVANonTrigWP90, &b_eMVANonTrigWP90);
   fChain->SetBranchAddress("eMVATrigCategory", &eMVATrigCategory, &b_eMVATrigCategory);
   fChain->SetBranchAddress("eMVATrigID", &eMVATrigID, &b_eMVATrigID);
   fChain->SetBranchAddress("eMVATrigWP80", &eMVATrigWP80, &b_eMVATrigWP80);
   fChain->SetBranchAddress("eMVATrigWP90", &eMVATrigWP90, &b_eMVATrigWP90);
   fChain->SetBranchAddress("eMass", &eMass, &b_eMass);
   fChain->SetBranchAddress("eMatchesDoubleE", &eMatchesDoubleE, &b_eMatchesDoubleE);
   fChain->SetBranchAddress("eMatchesDoubleE23_12Filter", &eMatchesDoubleE23_12Filter, &b_eMatchesDoubleE23_12Filter);
   fChain->SetBranchAddress("eMatchesDoubleE23_12Path", &eMatchesDoubleE23_12Path, &b_eMatchesDoubleE23_12Path);
   fChain->SetBranchAddress("eMatchesDoubleEFilter", &eMatchesDoubleEFilter, &b_eMatchesDoubleEFilter);
   fChain->SetBranchAddress("eMatchesDoubleEPath", &eMatchesDoubleEPath, &b_eMatchesDoubleEPath);
   fChain->SetBranchAddress("eMatchesDoubleESingleMu", &eMatchesDoubleESingleMu, &b_eMatchesDoubleESingleMu);
   fChain->SetBranchAddress("eMatchesDoubleMuSingleE", &eMatchesDoubleMuSingleE, &b_eMatchesDoubleMuSingleE);
   fChain->SetBranchAddress("eMatchesEle12LoosePath", &eMatchesEle12LoosePath, &b_eMatchesEle12LoosePath);
   fChain->SetBranchAddress("eMatchesEle17LoosePath", &eMatchesEle17LoosePath, &b_eMatchesEle17LoosePath);
   fChain->SetBranchAddress("eMatchesEle22eta2p1LoosePath", &eMatchesEle22eta2p1LoosePath, &b_eMatchesEle22eta2p1LoosePath);
   fChain->SetBranchAddress("eMatchesEle23LoosePath", &eMatchesEle23LoosePath, &b_eMatchesEle23LoosePath);
   fChain->SetBranchAddress("eMatchesEle25eta2p1LoosePath", &eMatchesEle25eta2p1LoosePath, &b_eMatchesEle25eta2p1LoosePath);
   fChain->SetBranchAddress("eMatchesEle25eta2p1TightPath", &eMatchesEle25eta2p1TightPath, &b_eMatchesEle25eta2p1TightPath);
   fChain->SetBranchAddress("eMatchesEle27TightPath", &eMatchesEle27TightPath, &b_eMatchesEle27TightPath);
   fChain->SetBranchAddress("eMatchesEle27eta2p1LoosePath", &eMatchesEle27eta2p1LoosePath, &b_eMatchesEle27eta2p1LoosePath);
   fChain->SetBranchAddress("eMatchesSingleE", &eMatchesSingleE, &b_eMatchesSingleE);
   fChain->SetBranchAddress("eMatchesSingleESingleMu", &eMatchesSingleESingleMu, &b_eMatchesSingleESingleMu);
   fChain->SetBranchAddress("eMatchesSingleETight27Filter", &eMatchesSingleETight27Filter, &b_eMatchesSingleETight27Filter);
   fChain->SetBranchAddress("eMatchesSingleE_leg1", &eMatchesSingleE_leg1, &b_eMatchesSingleE_leg1);
   fChain->SetBranchAddress("eMatchesSingleE_leg2", &eMatchesSingleE_leg2, &b_eMatchesSingleE_leg2);
   fChain->SetBranchAddress("eMatchesSingleMuSingleE", &eMatchesSingleMuSingleE, &b_eMatchesSingleMuSingleE);
   fChain->SetBranchAddress("eMatchesTripleE", &eMatchesTripleE, &b_eMatchesTripleE);
   fChain->SetBranchAddress("eMissingHits", &eMissingHits, &b_eMissingHits);
   fChain->SetBranchAddress("eMtToPfMet_type1", &eMtToPfMet_type1, &b_eMtToPfMet_type1);
   fChain->SetBranchAddress("eNearMuonVeto", &eNearMuonVeto, &b_eNearMuonVeto);
   fChain->SetBranchAddress("eNearestMuonDR", &eNearestMuonDR, &b_eNearestMuonDR);
   fChain->SetBranchAddress("eNearestZMass", &eNearestZMass, &b_eNearestZMass);
   fChain->SetBranchAddress("ePFChargedIso", &ePFChargedIso, &b_ePFChargedIso);
   fChain->SetBranchAddress("ePFNeutralIso", &ePFNeutralIso, &b_ePFNeutralIso);
   fChain->SetBranchAddress("ePFPUChargedIso", &ePFPUChargedIso, &b_ePFPUChargedIso);
   fChain->SetBranchAddress("ePFPhotonIso", &ePFPhotonIso, &b_ePFPhotonIso);
   fChain->SetBranchAddress("ePVDXY", &ePVDXY, &b_ePVDXY);
   fChain->SetBranchAddress("ePVDZ", &ePVDZ, &b_ePVDZ);
   fChain->SetBranchAddress("ePassesConversionVeto", &ePassesConversionVeto, &b_ePassesConversionVeto);
   fChain->SetBranchAddress("ePhi", &ePhi, &b_ePhi);
   fChain->SetBranchAddress("ePt", &ePt, &b_ePt);
   fChain->SetBranchAddress("ePt_ElectronResPhiDown", &ePt_ElectronResPhiDown, &b_ePt_ElectronResPhiDown);
   fChain->SetBranchAddress("ePt_ElectronResRhoDown", &ePt_ElectronResRhoDown, &b_ePt_ElectronResRhoDown);
   fChain->SetBranchAddress("ePt_ElectronResRhoUp", &ePt_ElectronResRhoUp, &b_ePt_ElectronResRhoUp);
   fChain->SetBranchAddress("ePt_ElectronScaleDown", &ePt_ElectronScaleDown, &b_ePt_ElectronScaleDown);
   fChain->SetBranchAddress("ePt_ElectronScaleUp", &ePt_ElectronScaleUp, &b_ePt_ElectronScaleUp);
   fChain->SetBranchAddress("ePt_ElectronUncorr", &ePt_ElectronUncorr, &b_ePt_ElectronUncorr);
   fChain->SetBranchAddress("eRank", &eRank, &b_eRank);
   fChain->SetBranchAddress("eRelIso", &eRelIso, &b_eRelIso);
   fChain->SetBranchAddress("eRelPFIsoDB", &eRelPFIsoDB, &b_eRelPFIsoDB);
   fChain->SetBranchAddress("eRelPFIsoRho", &eRelPFIsoRho, &b_eRelPFIsoRho);
   fChain->SetBranchAddress("eRho", &eRho, &b_eRho);
   fChain->SetBranchAddress("eSCEnergy", &eSCEnergy, &b_eSCEnergy);
   fChain->SetBranchAddress("eSCEta", &eSCEta, &b_eSCEta);
   fChain->SetBranchAddress("eSCEtaWidth", &eSCEtaWidth, &b_eSCEtaWidth);
   fChain->SetBranchAddress("eSCPhi", &eSCPhi, &b_eSCPhi);
   fChain->SetBranchAddress("eSCPhiWidth", &eSCPhiWidth, &b_eSCPhiWidth);
   fChain->SetBranchAddress("eSCPreshowerEnergy", &eSCPreshowerEnergy, &b_eSCPreshowerEnergy);
   fChain->SetBranchAddress("eSCRawEnergy", &eSCRawEnergy, &b_eSCRawEnergy);
   fChain->SetBranchAddress("eSIP2D", &eSIP2D, &b_eSIP2D);
   fChain->SetBranchAddress("eSIP3D", &eSIP3D, &b_eSIP3D);
   fChain->SetBranchAddress("eSigmaIEtaIEta", &eSigmaIEtaIEta, &b_eSigmaIEtaIEta);
   fChain->SetBranchAddress("eTrkIsoDR03", &eTrkIsoDR03, &b_eTrkIsoDR03);
   fChain->SetBranchAddress("eVZ", &eVZ, &b_eVZ);
   fChain->SetBranchAddress("eVetoAZHdR0", &eVetoAZHdR0, &b_eVetoAZHdR0);
   fChain->SetBranchAddress("eVetoLLTTp001dxyz", &eVetoLLTTp001dxyz, &b_eVetoLLTTp001dxyz);
   fChain->SetBranchAddress("eVetoLLTTp001dxyzR0", &eVetoLLTTp001dxyzR0, &b_eVetoLLTTp001dxyzR0);
   fChain->SetBranchAddress("eVetoMVAIso", &eVetoMVAIso, &b_eVetoMVAIso);
   fChain->SetBranchAddress("eVetoMVAIsoVtx", &eVetoMVAIsoVtx, &b_eVetoMVAIsoVtx);
   fChain->SetBranchAddress("eVetoZTTp001dxyz", &eVetoZTTp001dxyz, &b_eVetoZTTp001dxyz);
   fChain->SetBranchAddress("eVetoZTTp001dxyzR0", &eVetoZTTp001dxyzR0, &b_eVetoZTTp001dxyzR0);
   fChain->SetBranchAddress("eWWLoose", &eWWLoose, &b_eWWLoose);
   fChain->SetBranchAddress("eZTTGenMatching", &eZTTGenMatching, &b_eZTTGenMatching);
   fChain->SetBranchAddress("e_m1_CosThetaStar", &e_m1_CosThetaStar, &b_e_m1_CosThetaStar);
   fChain->SetBranchAddress("e_m1_DPhi", &e_m1_DPhi, &b_e_m1_DPhi);
   fChain->SetBranchAddress("e_m1_DR", &e_m1_DR, &b_e_m1_DR);
   fChain->SetBranchAddress("e_m1_Eta", &e_m1_Eta, &b_e_m1_Eta);
   fChain->SetBranchAddress("e_m1_Mass", &e_m1_Mass, &b_e_m1_Mass);
   fChain->SetBranchAddress("e_m1_Mass_TauEnDown", &e_m1_Mass_TauEnDown, &b_e_m1_Mass_TauEnDown);
   fChain->SetBranchAddress("e_m1_Mass_TauEnUp", &e_m1_Mass_TauEnUp, &b_e_m1_Mass_TauEnUp);
   fChain->SetBranchAddress("e_m1_Mt", &e_m1_Mt, &b_e_m1_Mt);
   fChain->SetBranchAddress("e_m1_MtTotal", &e_m1_MtTotal, &b_e_m1_MtTotal);
   fChain->SetBranchAddress("e_m1_Mt_TauEnDown", &e_m1_Mt_TauEnDown, &b_e_m1_Mt_TauEnDown);
   fChain->SetBranchAddress("e_m1_Mt_TauEnUp", &e_m1_Mt_TauEnUp, &b_e_m1_Mt_TauEnUp);
   fChain->SetBranchAddress("e_m1_MvaMet", &e_m1_MvaMet, &b_e_m1_MvaMet);
   fChain->SetBranchAddress("e_m1_MvaMetCovMatrix00", &e_m1_MvaMetCovMatrix00, &b_e_m1_MvaMetCovMatrix00);
   fChain->SetBranchAddress("e_m1_MvaMetCovMatrix01", &e_m1_MvaMetCovMatrix01, &b_e_m1_MvaMetCovMatrix01);
   fChain->SetBranchAddress("e_m1_MvaMetCovMatrix10", &e_m1_MvaMetCovMatrix10, &b_e_m1_MvaMetCovMatrix10);
   fChain->SetBranchAddress("e_m1_MvaMetCovMatrix11", &e_m1_MvaMetCovMatrix11, &b_e_m1_MvaMetCovMatrix11);
   fChain->SetBranchAddress("e_m1_MvaMetPhi", &e_m1_MvaMetPhi, &b_e_m1_MvaMetPhi);
   fChain->SetBranchAddress("e_m1_PZeta", &e_m1_PZeta, &b_e_m1_PZeta);
   fChain->SetBranchAddress("e_m1_PZetaLess0p85PZetaVis", &e_m1_PZetaLess0p85PZetaVis, &b_e_m1_PZetaLess0p85PZetaVis);
   fChain->SetBranchAddress("e_m1_PZetaVis", &e_m1_PZetaVis, &b_e_m1_PZetaVis);
   fChain->SetBranchAddress("e_m1_Phi", &e_m1_Phi, &b_e_m1_Phi);
   fChain->SetBranchAddress("e_m1_Pt", &e_m1_Pt, &b_e_m1_Pt);
   fChain->SetBranchAddress("e_m1_SS", &e_m1_SS, &b_e_m1_SS);
   fChain->SetBranchAddress("e_m1_ToMETDPhi_Ty1", &e_m1_ToMETDPhi_Ty1, &b_e_m1_ToMETDPhi_Ty1);
   fChain->SetBranchAddress("e_m1_collinearmass", &e_m1_collinearmass, &b_e_m1_collinearmass);
   fChain->SetBranchAddress("e_m1_collinearmass_CheckUESDown", &e_m1_collinearmass_CheckUESDown, &b_e_m1_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("e_m1_collinearmass_CheckUESUp", &e_m1_collinearmass_CheckUESUp, &b_e_m1_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("e_m1_collinearmass_EleEnDown", &e_m1_collinearmass_EleEnDown, &b_e_m1_collinearmass_EleEnDown);
   fChain->SetBranchAddress("e_m1_collinearmass_EleEnUp", &e_m1_collinearmass_EleEnUp, &b_e_m1_collinearmass_EleEnUp);
   fChain->SetBranchAddress("e_m1_collinearmass_JetCheckTotalDown", &e_m1_collinearmass_JetCheckTotalDown, &b_e_m1_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("e_m1_collinearmass_JetCheckTotalUp", &e_m1_collinearmass_JetCheckTotalUp, &b_e_m1_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("e_m1_collinearmass_JetEnDown", &e_m1_collinearmass_JetEnDown, &b_e_m1_collinearmass_JetEnDown);
   fChain->SetBranchAddress("e_m1_collinearmass_JetEnUp", &e_m1_collinearmass_JetEnUp, &b_e_m1_collinearmass_JetEnUp);
   fChain->SetBranchAddress("e_m1_collinearmass_MuEnDown", &e_m1_collinearmass_MuEnDown, &b_e_m1_collinearmass_MuEnDown);
   fChain->SetBranchAddress("e_m1_collinearmass_MuEnUp", &e_m1_collinearmass_MuEnUp, &b_e_m1_collinearmass_MuEnUp);
   fChain->SetBranchAddress("e_m1_collinearmass_TauEnDown", &e_m1_collinearmass_TauEnDown, &b_e_m1_collinearmass_TauEnDown);
   fChain->SetBranchAddress("e_m1_collinearmass_TauEnUp", &e_m1_collinearmass_TauEnUp, &b_e_m1_collinearmass_TauEnUp);
   fChain->SetBranchAddress("e_m1_collinearmass_UnclusteredEnDown", &e_m1_collinearmass_UnclusteredEnDown, &b_e_m1_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("e_m1_collinearmass_UnclusteredEnUp", &e_m1_collinearmass_UnclusteredEnUp, &b_e_m1_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("e_m1_pt_tt", &e_m1_pt_tt, &b_e_m1_pt_tt);
   fChain->SetBranchAddress("e_m2_CosThetaStar", &e_m2_CosThetaStar, &b_e_m2_CosThetaStar);
   fChain->SetBranchAddress("e_m2_DPhi", &e_m2_DPhi, &b_e_m2_DPhi);
   fChain->SetBranchAddress("e_m2_DR", &e_m2_DR, &b_e_m2_DR);
   fChain->SetBranchAddress("e_m2_Eta", &e_m2_Eta, &b_e_m2_Eta);
   fChain->SetBranchAddress("e_m2_Mass", &e_m2_Mass, &b_e_m2_Mass);
   fChain->SetBranchAddress("e_m2_Mass_TauEnDown", &e_m2_Mass_TauEnDown, &b_e_m2_Mass_TauEnDown);
   fChain->SetBranchAddress("e_m2_Mass_TauEnUp", &e_m2_Mass_TauEnUp, &b_e_m2_Mass_TauEnUp);
   fChain->SetBranchAddress("e_m2_Mt", &e_m2_Mt, &b_e_m2_Mt);
   fChain->SetBranchAddress("e_m2_MtTotal", &e_m2_MtTotal, &b_e_m2_MtTotal);
   fChain->SetBranchAddress("e_m2_Mt_TauEnDown", &e_m2_Mt_TauEnDown, &b_e_m2_Mt_TauEnDown);
   fChain->SetBranchAddress("e_m2_Mt_TauEnUp", &e_m2_Mt_TauEnUp, &b_e_m2_Mt_TauEnUp);
   fChain->SetBranchAddress("e_m2_MvaMet", &e_m2_MvaMet, &b_e_m2_MvaMet);
   fChain->SetBranchAddress("e_m2_MvaMetCovMatrix00", &e_m2_MvaMetCovMatrix00, &b_e_m2_MvaMetCovMatrix00);
   fChain->SetBranchAddress("e_m2_MvaMetCovMatrix01", &e_m2_MvaMetCovMatrix01, &b_e_m2_MvaMetCovMatrix01);
   fChain->SetBranchAddress("e_m2_MvaMetCovMatrix10", &e_m2_MvaMetCovMatrix10, &b_e_m2_MvaMetCovMatrix10);
   fChain->SetBranchAddress("e_m2_MvaMetCovMatrix11", &e_m2_MvaMetCovMatrix11, &b_e_m2_MvaMetCovMatrix11);
   fChain->SetBranchAddress("e_m2_MvaMetPhi", &e_m2_MvaMetPhi, &b_e_m2_MvaMetPhi);
   fChain->SetBranchAddress("e_m2_PZeta", &e_m2_PZeta, &b_e_m2_PZeta);
   fChain->SetBranchAddress("e_m2_PZetaLess0p85PZetaVis", &e_m2_PZetaLess0p85PZetaVis, &b_e_m2_PZetaLess0p85PZetaVis);
   fChain->SetBranchAddress("e_m2_PZetaVis", &e_m2_PZetaVis, &b_e_m2_PZetaVis);
   fChain->SetBranchAddress("e_m2_Phi", &e_m2_Phi, &b_e_m2_Phi);
   fChain->SetBranchAddress("e_m2_Pt", &e_m2_Pt, &b_e_m2_Pt);
   fChain->SetBranchAddress("e_m2_SS", &e_m2_SS, &b_e_m2_SS);
   fChain->SetBranchAddress("e_m2_ToMETDPhi_Ty1", &e_m2_ToMETDPhi_Ty1, &b_e_m2_ToMETDPhi_Ty1);
   fChain->SetBranchAddress("e_m2_collinearmass", &e_m2_collinearmass, &b_e_m2_collinearmass);
   fChain->SetBranchAddress("e_m2_collinearmass_CheckUESDown", &e_m2_collinearmass_CheckUESDown, &b_e_m2_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("e_m2_collinearmass_CheckUESUp", &e_m2_collinearmass_CheckUESUp, &b_e_m2_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("e_m2_collinearmass_EleEnDown", &e_m2_collinearmass_EleEnDown, &b_e_m2_collinearmass_EleEnDown);
   fChain->SetBranchAddress("e_m2_collinearmass_EleEnUp", &e_m2_collinearmass_EleEnUp, &b_e_m2_collinearmass_EleEnUp);
   fChain->SetBranchAddress("e_m2_collinearmass_JetCheckTotalDown", &e_m2_collinearmass_JetCheckTotalDown, &b_e_m2_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("e_m2_collinearmass_JetCheckTotalUp", &e_m2_collinearmass_JetCheckTotalUp, &b_e_m2_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("e_m2_collinearmass_JetEnDown", &e_m2_collinearmass_JetEnDown, &b_e_m2_collinearmass_JetEnDown);
   fChain->SetBranchAddress("e_m2_collinearmass_JetEnUp", &e_m2_collinearmass_JetEnUp, &b_e_m2_collinearmass_JetEnUp);
   fChain->SetBranchAddress("e_m2_collinearmass_MuEnDown", &e_m2_collinearmass_MuEnDown, &b_e_m2_collinearmass_MuEnDown);
   fChain->SetBranchAddress("e_m2_collinearmass_MuEnUp", &e_m2_collinearmass_MuEnUp, &b_e_m2_collinearmass_MuEnUp);
   fChain->SetBranchAddress("e_m2_collinearmass_TauEnDown", &e_m2_collinearmass_TauEnDown, &b_e_m2_collinearmass_TauEnDown);
   fChain->SetBranchAddress("e_m2_collinearmass_TauEnUp", &e_m2_collinearmass_TauEnUp, &b_e_m2_collinearmass_TauEnUp);
   fChain->SetBranchAddress("e_m2_collinearmass_UnclusteredEnDown", &e_m2_collinearmass_UnclusteredEnDown, &b_e_m2_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("e_m2_collinearmass_UnclusteredEnUp", &e_m2_collinearmass_UnclusteredEnUp, &b_e_m2_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("e_m2_pt_tt", &e_m2_pt_tt, &b_e_m2_pt_tt);
   fChain->SetBranchAddress("e_m3_CosThetaStar", &e_m3_CosThetaStar, &b_e_m3_CosThetaStar);
   fChain->SetBranchAddress("e_m3_DPhi", &e_m3_DPhi, &b_e_m3_DPhi);
   fChain->SetBranchAddress("e_m3_DR", &e_m3_DR, &b_e_m3_DR);
   fChain->SetBranchAddress("e_m3_Eta", &e_m3_Eta, &b_e_m3_Eta);
   fChain->SetBranchAddress("e_m3_Mass", &e_m3_Mass, &b_e_m3_Mass);
   fChain->SetBranchAddress("e_m3_Mass_TauEnDown", &e_m3_Mass_TauEnDown, &b_e_m3_Mass_TauEnDown);
   fChain->SetBranchAddress("e_m3_Mass_TauEnUp", &e_m3_Mass_TauEnUp, &b_e_m3_Mass_TauEnUp);
   fChain->SetBranchAddress("e_m3_Mt", &e_m3_Mt, &b_e_m3_Mt);
   fChain->SetBranchAddress("e_m3_MtTotal", &e_m3_MtTotal, &b_e_m3_MtTotal);
   fChain->SetBranchAddress("e_m3_Mt_TauEnDown", &e_m3_Mt_TauEnDown, &b_e_m3_Mt_TauEnDown);
   fChain->SetBranchAddress("e_m3_Mt_TauEnUp", &e_m3_Mt_TauEnUp, &b_e_m3_Mt_TauEnUp);
   fChain->SetBranchAddress("e_m3_MvaMet", &e_m3_MvaMet, &b_e_m3_MvaMet);
   fChain->SetBranchAddress("e_m3_MvaMetCovMatrix00", &e_m3_MvaMetCovMatrix00, &b_e_m3_MvaMetCovMatrix00);
   fChain->SetBranchAddress("e_m3_MvaMetCovMatrix01", &e_m3_MvaMetCovMatrix01, &b_e_m3_MvaMetCovMatrix01);
   fChain->SetBranchAddress("e_m3_MvaMetCovMatrix10", &e_m3_MvaMetCovMatrix10, &b_e_m3_MvaMetCovMatrix10);
   fChain->SetBranchAddress("e_m3_MvaMetCovMatrix11", &e_m3_MvaMetCovMatrix11, &b_e_m3_MvaMetCovMatrix11);
   fChain->SetBranchAddress("e_m3_MvaMetPhi", &e_m3_MvaMetPhi, &b_e_m3_MvaMetPhi);
   fChain->SetBranchAddress("e_m3_PZeta", &e_m3_PZeta, &b_e_m3_PZeta);
   fChain->SetBranchAddress("e_m3_PZetaLess0p85PZetaVis", &e_m3_PZetaLess0p85PZetaVis, &b_e_m3_PZetaLess0p85PZetaVis);
   fChain->SetBranchAddress("e_m3_PZetaVis", &e_m3_PZetaVis, &b_e_m3_PZetaVis);
   fChain->SetBranchAddress("e_m3_Phi", &e_m3_Phi, &b_e_m3_Phi);
   fChain->SetBranchAddress("e_m3_Pt", &e_m3_Pt, &b_e_m3_Pt);
   fChain->SetBranchAddress("e_m3_SS", &e_m3_SS, &b_e_m3_SS);
   fChain->SetBranchAddress("e_m3_ToMETDPhi_Ty1", &e_m3_ToMETDPhi_Ty1, &b_e_m3_ToMETDPhi_Ty1);
   fChain->SetBranchAddress("e_m3_collinearmass", &e_m3_collinearmass, &b_e_m3_collinearmass);
   fChain->SetBranchAddress("e_m3_collinearmass_CheckUESDown", &e_m3_collinearmass_CheckUESDown, &b_e_m3_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("e_m3_collinearmass_CheckUESUp", &e_m3_collinearmass_CheckUESUp, &b_e_m3_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("e_m3_collinearmass_EleEnDown", &e_m3_collinearmass_EleEnDown, &b_e_m3_collinearmass_EleEnDown);
   fChain->SetBranchAddress("e_m3_collinearmass_EleEnUp", &e_m3_collinearmass_EleEnUp, &b_e_m3_collinearmass_EleEnUp);
   fChain->SetBranchAddress("e_m3_collinearmass_JetCheckTotalDown", &e_m3_collinearmass_JetCheckTotalDown, &b_e_m3_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("e_m3_collinearmass_JetCheckTotalUp", &e_m3_collinearmass_JetCheckTotalUp, &b_e_m3_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("e_m3_collinearmass_JetEnDown", &e_m3_collinearmass_JetEnDown, &b_e_m3_collinearmass_JetEnDown);
   fChain->SetBranchAddress("e_m3_collinearmass_JetEnUp", &e_m3_collinearmass_JetEnUp, &b_e_m3_collinearmass_JetEnUp);
   fChain->SetBranchAddress("e_m3_collinearmass_MuEnDown", &e_m3_collinearmass_MuEnDown, &b_e_m3_collinearmass_MuEnDown);
   fChain->SetBranchAddress("e_m3_collinearmass_MuEnUp", &e_m3_collinearmass_MuEnUp, &b_e_m3_collinearmass_MuEnUp);
   fChain->SetBranchAddress("e_m3_collinearmass_TauEnDown", &e_m3_collinearmass_TauEnDown, &b_e_m3_collinearmass_TauEnDown);
   fChain->SetBranchAddress("e_m3_collinearmass_TauEnUp", &e_m3_collinearmass_TauEnUp, &b_e_m3_collinearmass_TauEnUp);
   fChain->SetBranchAddress("e_m3_collinearmass_UnclusteredEnDown", &e_m3_collinearmass_UnclusteredEnDown, &b_e_m3_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("e_m3_collinearmass_UnclusteredEnUp", &e_m3_collinearmass_UnclusteredEnUp, &b_e_m3_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("e_m3_pt_tt", &e_m3_pt_tt, &b_e_m3_pt_tt);
   fChain->SetBranchAddress("edeltaEtaSuperClusterTrackAtVtx", &edeltaEtaSuperClusterTrackAtVtx, &b_edeltaEtaSuperClusterTrackAtVtx);
   fChain->SetBranchAddress("edeltaPhiSuperClusterTrackAtVtx", &edeltaPhiSuperClusterTrackAtVtx, &b_edeltaPhiSuperClusterTrackAtVtx);
   fChain->SetBranchAddress("eeSuperClusterOverP", &eeSuperClusterOverP, &b_eeSuperClusterOverP);
   fChain->SetBranchAddress("eecalEnergy", &eecalEnergy, &b_eecalEnergy);
   fChain->SetBranchAddress("efBrem", &efBrem, &b_efBrem);
   fChain->SetBranchAddress("etrackMomentumAtVtxP", &etrackMomentumAtVtxP, &b_etrackMomentumAtVtxP);
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
   fChain->SetBranchAddress("m1AbsEta", &m1AbsEta, &b_m1AbsEta);
   fChain->SetBranchAddress("m1BestTrackType", &m1BestTrackType, &b_m1BestTrackType);
   fChain->SetBranchAddress("m1Charge", &m1Charge, &b_m1Charge);
   fChain->SetBranchAddress("m1Chi2LocalPosition", &m1Chi2LocalPosition, &b_m1Chi2LocalPosition);
   fChain->SetBranchAddress("m1ComesFromHiggs", &m1ComesFromHiggs, &b_m1ComesFromHiggs);
   fChain->SetBranchAddress("m1DPhiToPfMet_type1", &m1DPhiToPfMet_type1, &b_m1DPhiToPfMet_type1);
   fChain->SetBranchAddress("m1EcalIsoDR03", &m1EcalIsoDR03, &b_m1EcalIsoDR03);
   fChain->SetBranchAddress("m1EffectiveArea2011", &m1EffectiveArea2011, &b_m1EffectiveArea2011);
   fChain->SetBranchAddress("m1EffectiveArea2012", &m1EffectiveArea2012, &b_m1EffectiveArea2012);
   fChain->SetBranchAddress("m1Eta", &m1Eta, &b_m1Eta);
   fChain->SetBranchAddress("m1Eta_MuonEnDown", &m1Eta_MuonEnDown, &b_m1Eta_MuonEnDown);
   fChain->SetBranchAddress("m1Eta_MuonEnUp", &m1Eta_MuonEnUp, &b_m1Eta_MuonEnUp);
   fChain->SetBranchAddress("m1GenCharge", &m1GenCharge, &b_m1GenCharge);
   fChain->SetBranchAddress("m1GenDirectPromptTauDecayFinalState", &m1GenDirectPromptTauDecayFinalState, &b_m1GenDirectPromptTauDecayFinalState);
   fChain->SetBranchAddress("m1GenEnergy", &m1GenEnergy, &b_m1GenEnergy);
   fChain->SetBranchAddress("m1GenEta", &m1GenEta, &b_m1GenEta);
   fChain->SetBranchAddress("m1GenIsPrompt", &m1GenIsPrompt, &b_m1GenIsPrompt);
   fChain->SetBranchAddress("m1GenMotherPdgId", &m1GenMotherPdgId, &b_m1GenMotherPdgId);
   fChain->SetBranchAddress("m1GenParticle", &m1GenParticle, &b_m1GenParticle);
   fChain->SetBranchAddress("m1GenPdgId", &m1GenPdgId, &b_m1GenPdgId);
   fChain->SetBranchAddress("m1GenPhi", &m1GenPhi, &b_m1GenPhi);
   fChain->SetBranchAddress("m1GenPrompt", &m1GenPrompt, &b_m1GenPrompt);
   fChain->SetBranchAddress("m1GenPromptFinalState", &m1GenPromptFinalState, &b_m1GenPromptFinalState);
   fChain->SetBranchAddress("m1GenPromptTauDecay", &m1GenPromptTauDecay, &b_m1GenPromptTauDecay);
   fChain->SetBranchAddress("m1GenPt", &m1GenPt, &b_m1GenPt);
   fChain->SetBranchAddress("m1GenTauDecay", &m1GenTauDecay, &b_m1GenTauDecay);
   fChain->SetBranchAddress("m1GenVZ", &m1GenVZ, &b_m1GenVZ);
   fChain->SetBranchAddress("m1GenVtxPVMatch", &m1GenVtxPVMatch, &b_m1GenVtxPVMatch);
   fChain->SetBranchAddress("m1HcalIsoDR03", &m1HcalIsoDR03, &b_m1HcalIsoDR03);
   fChain->SetBranchAddress("m1IP3D", &m1IP3D, &b_m1IP3D);
   fChain->SetBranchAddress("m1IP3DErr", &m1IP3DErr, &b_m1IP3DErr);
   fChain->SetBranchAddress("m1IsGlobal", &m1IsGlobal, &b_m1IsGlobal);
   fChain->SetBranchAddress("m1IsPFMuon", &m1IsPFMuon, &b_m1IsPFMuon);
   fChain->SetBranchAddress("m1IsTracker", &m1IsTracker, &b_m1IsTracker);
   fChain->SetBranchAddress("m1IsoDB03", &m1IsoDB03, &b_m1IsoDB03);
   fChain->SetBranchAddress("m1IsoDB04", &m1IsoDB04, &b_m1IsoDB04);
   fChain->SetBranchAddress("m1JetArea", &m1JetArea, &b_m1JetArea);
   fChain->SetBranchAddress("m1JetBtag", &m1JetBtag, &b_m1JetBtag);
   fChain->SetBranchAddress("m1JetDR", &m1JetDR, &b_m1JetDR);
   fChain->SetBranchAddress("m1JetEtaEtaMoment", &m1JetEtaEtaMoment, &b_m1JetEtaEtaMoment);
   fChain->SetBranchAddress("m1JetEtaPhiMoment", &m1JetEtaPhiMoment, &b_m1JetEtaPhiMoment);
   fChain->SetBranchAddress("m1JetEtaPhiSpread", &m1JetEtaPhiSpread, &b_m1JetEtaPhiSpread);
   fChain->SetBranchAddress("m1JetHadronFlavour", &m1JetHadronFlavour, &b_m1JetHadronFlavour);
   fChain->SetBranchAddress("m1JetPFCISVBtag", &m1JetPFCISVBtag, &b_m1JetPFCISVBtag);
   fChain->SetBranchAddress("m1JetPartonFlavour", &m1JetPartonFlavour, &b_m1JetPartonFlavour);
   fChain->SetBranchAddress("m1JetPhiPhiMoment", &m1JetPhiPhiMoment, &b_m1JetPhiPhiMoment);
   fChain->SetBranchAddress("m1JetPt", &m1JetPt, &b_m1JetPt);
   fChain->SetBranchAddress("m1LowestMll", &m1LowestMll, &b_m1LowestMll);
   fChain->SetBranchAddress("m1Mass", &m1Mass, &b_m1Mass);
   fChain->SetBranchAddress("m1MatchedStations", &m1MatchedStations, &b_m1MatchedStations);
   fChain->SetBranchAddress("m1MatchesDoubleESingleMu", &m1MatchesDoubleESingleMu, &b_m1MatchesDoubleESingleMu);
   fChain->SetBranchAddress("m1MatchesDoubleMu", &m1MatchesDoubleMu, &b_m1MatchesDoubleMu);
   fChain->SetBranchAddress("m1MatchesDoubleMuFilter1", &m1MatchesDoubleMuFilter1, &b_m1MatchesDoubleMuFilter1);
   fChain->SetBranchAddress("m1MatchesDoubleMuFilter2", &m1MatchesDoubleMuFilter2, &b_m1MatchesDoubleMuFilter2);
   fChain->SetBranchAddress("m1MatchesDoubleMuNoDZFilter1", &m1MatchesDoubleMuNoDZFilter1, &b_m1MatchesDoubleMuNoDZFilter1);
   fChain->SetBranchAddress("m1MatchesDoubleMuNoDZFilter2", &m1MatchesDoubleMuNoDZFilter2, &b_m1MatchesDoubleMuNoDZFilter2);
   fChain->SetBranchAddress("m1MatchesDoubleMuPath1", &m1MatchesDoubleMuPath1, &b_m1MatchesDoubleMuPath1);
   fChain->SetBranchAddress("m1MatchesDoubleMuPath2", &m1MatchesDoubleMuPath2, &b_m1MatchesDoubleMuPath2);
   fChain->SetBranchAddress("m1MatchesDoubleMuSingleE", &m1MatchesDoubleMuSingleE, &b_m1MatchesDoubleMuSingleE);
   fChain->SetBranchAddress("m1MatchesIsoMu17eta2p1Path", &m1MatchesIsoMu17eta2p1Path, &b_m1MatchesIsoMu17eta2p1Path);
   fChain->SetBranchAddress("m1MatchesIsoMu18Path", &m1MatchesIsoMu18Path, &b_m1MatchesIsoMu18Path);
   fChain->SetBranchAddress("m1MatchesIsoMu20Path", &m1MatchesIsoMu20Path, &b_m1MatchesIsoMu20Path);
   fChain->SetBranchAddress("m1MatchesIsoMu22Path", &m1MatchesIsoMu22Path, &b_m1MatchesIsoMu22Path);
   fChain->SetBranchAddress("m1MatchesIsoMu22eta2p1Path", &m1MatchesIsoMu22eta2p1Path, &b_m1MatchesIsoMu22eta2p1Path);
   fChain->SetBranchAddress("m1MatchesIsoMu24Filter", &m1MatchesIsoMu24Filter, &b_m1MatchesIsoMu24Filter);
   fChain->SetBranchAddress("m1MatchesIsoMu27Path", &m1MatchesIsoMu27Path, &b_m1MatchesIsoMu27Path);
   fChain->SetBranchAddress("m1MatchesIsoTkMu20Path", &m1MatchesIsoTkMu20Path, &b_m1MatchesIsoTkMu20Path);
   fChain->SetBranchAddress("m1MatchesIsoTkMu22Path", &m1MatchesIsoTkMu22Path, &b_m1MatchesIsoTkMu22Path);
   fChain->SetBranchAddress("m1MatchesIsoTkMu24Filter", &m1MatchesIsoTkMu24Filter, &b_m1MatchesIsoTkMu24Filter);
   fChain->SetBranchAddress("m1MatchesMu17Path", &m1MatchesMu17Path, &b_m1MatchesMu17Path);
   fChain->SetBranchAddress("m1MatchesMu17VVLPath", &m1MatchesMu17VVLPath, &b_m1MatchesMu17VVLPath);
   fChain->SetBranchAddress("m1MatchesMu50Path", &m1MatchesMu50Path, &b_m1MatchesMu50Path);
   fChain->SetBranchAddress("m1MatchesMu8Path", &m1MatchesMu8Path, &b_m1MatchesMu8Path);
   fChain->SetBranchAddress("m1MatchesMu8VVLPath", &m1MatchesMu8VVLPath, &b_m1MatchesMu8VVLPath);
   fChain->SetBranchAddress("m1MatchesSingleESingleMu", &m1MatchesSingleESingleMu, &b_m1MatchesSingleESingleMu);
   fChain->SetBranchAddress("m1MatchesSingleMu", &m1MatchesSingleMu, &b_m1MatchesSingleMu);
   fChain->SetBranchAddress("m1MatchesSingleMuIso20", &m1MatchesSingleMuIso20, &b_m1MatchesSingleMuIso20);
   fChain->SetBranchAddress("m1MatchesSingleMuIsoTk20", &m1MatchesSingleMuIsoTk20, &b_m1MatchesSingleMuIsoTk20);
   fChain->SetBranchAddress("m1MatchesSingleMuSingleE", &m1MatchesSingleMuSingleE, &b_m1MatchesSingleMuSingleE);
   fChain->SetBranchAddress("m1MatchesSingleMu_leg1", &m1MatchesSingleMu_leg1, &b_m1MatchesSingleMu_leg1);
   fChain->SetBranchAddress("m1MatchesSingleMu_leg1_noiso", &m1MatchesSingleMu_leg1_noiso, &b_m1MatchesSingleMu_leg1_noiso);
   fChain->SetBranchAddress("m1MatchesSingleMu_leg2", &m1MatchesSingleMu_leg2, &b_m1MatchesSingleMu_leg2);
   fChain->SetBranchAddress("m1MatchesSingleMu_leg2_noiso", &m1MatchesSingleMu_leg2_noiso, &b_m1MatchesSingleMu_leg2_noiso);
   fChain->SetBranchAddress("m1MatchesTripleMu", &m1MatchesTripleMu, &b_m1MatchesTripleMu);
   fChain->SetBranchAddress("m1MtToPfMet_type1", &m1MtToPfMet_type1, &b_m1MtToPfMet_type1);
   fChain->SetBranchAddress("m1MuonHits", &m1MuonHits, &b_m1MuonHits);
   fChain->SetBranchAddress("m1NearestZMass", &m1NearestZMass, &b_m1NearestZMass);
   fChain->SetBranchAddress("m1NormTrkChi2", &m1NormTrkChi2, &b_m1NormTrkChi2);
   fChain->SetBranchAddress("m1NormalizedChi2", &m1NormalizedChi2, &b_m1NormalizedChi2);
   fChain->SetBranchAddress("m1PFChargedHadronIsoR04", &m1PFChargedHadronIsoR04, &b_m1PFChargedHadronIsoR04);
   fChain->SetBranchAddress("m1PFChargedIso", &m1PFChargedIso, &b_m1PFChargedIso);
   fChain->SetBranchAddress("m1PFIDLoose", &m1PFIDLoose, &b_m1PFIDLoose);
   fChain->SetBranchAddress("m1PFIDMedium", &m1PFIDMedium, &b_m1PFIDMedium);
   fChain->SetBranchAddress("m1PFIDTight", &m1PFIDTight, &b_m1PFIDTight);
   fChain->SetBranchAddress("m1PFNeutralHadronIsoR04", &m1PFNeutralHadronIsoR04, &b_m1PFNeutralHadronIsoR04);
   fChain->SetBranchAddress("m1PFNeutralIso", &m1PFNeutralIso, &b_m1PFNeutralIso);
   fChain->SetBranchAddress("m1PFPUChargedIso", &m1PFPUChargedIso, &b_m1PFPUChargedIso);
   fChain->SetBranchAddress("m1PFPhotonIso", &m1PFPhotonIso, &b_m1PFPhotonIso);
   fChain->SetBranchAddress("m1PFPhotonIsoR04", &m1PFPhotonIsoR04, &b_m1PFPhotonIsoR04);
   fChain->SetBranchAddress("m1PFPileupIsoR04", &m1PFPileupIsoR04, &b_m1PFPileupIsoR04);
   fChain->SetBranchAddress("m1PVDXY", &m1PVDXY, &b_m1PVDXY);
   fChain->SetBranchAddress("m1PVDZ", &m1PVDZ, &b_m1PVDZ);
   fChain->SetBranchAddress("m1Phi", &m1Phi, &b_m1Phi);
   fChain->SetBranchAddress("m1Phi_MuonEnDown", &m1Phi_MuonEnDown, &b_m1Phi_MuonEnDown);
   fChain->SetBranchAddress("m1Phi_MuonEnUp", &m1Phi_MuonEnUp, &b_m1Phi_MuonEnUp);
   fChain->SetBranchAddress("m1PixHits", &m1PixHits, &b_m1PixHits);
   fChain->SetBranchAddress("m1Pt", &m1Pt, &b_m1Pt);
   fChain->SetBranchAddress("m1Pt_MuonEnDown", &m1Pt_MuonEnDown, &b_m1Pt_MuonEnDown);
   fChain->SetBranchAddress("m1Pt_MuonEnUp", &m1Pt_MuonEnUp, &b_m1Pt_MuonEnUp);
   fChain->SetBranchAddress("m1Rank", &m1Rank, &b_m1Rank);
   fChain->SetBranchAddress("m1RelPFIsoDBDefault", &m1RelPFIsoDBDefault, &b_m1RelPFIsoDBDefault);
   fChain->SetBranchAddress("m1RelPFIsoDBDefaultR04", &m1RelPFIsoDBDefaultR04, &b_m1RelPFIsoDBDefaultR04);
   fChain->SetBranchAddress("m1RelPFIsoRho", &m1RelPFIsoRho, &b_m1RelPFIsoRho);
   fChain->SetBranchAddress("m1Rho", &m1Rho, &b_m1Rho);
   fChain->SetBranchAddress("m1SIP2D", &m1SIP2D, &b_m1SIP2D);
   fChain->SetBranchAddress("m1SIP3D", &m1SIP3D, &b_m1SIP3D);
   fChain->SetBranchAddress("m1SegmentCompatibility", &m1SegmentCompatibility, &b_m1SegmentCompatibility);
   fChain->SetBranchAddress("m1TkLayersWithMeasurement", &m1TkLayersWithMeasurement, &b_m1TkLayersWithMeasurement);
   fChain->SetBranchAddress("m1TrkIsoDR03", &m1TrkIsoDR03, &b_m1TrkIsoDR03);
   fChain->SetBranchAddress("m1TrkKink", &m1TrkKink, &b_m1TrkKink);
   fChain->SetBranchAddress("m1TypeCode", &m1TypeCode, &b_m1TypeCode);
   fChain->SetBranchAddress("m1VZ", &m1VZ, &b_m1VZ);
   fChain->SetBranchAddress("m1ValidFraction", &m1ValidFraction, &b_m1ValidFraction);
   fChain->SetBranchAddress("m1ZTTGenMatching", &m1ZTTGenMatching, &b_m1ZTTGenMatching);
   fChain->SetBranchAddress("m1_e_collinearmass", &m1_e_collinearmass, &b_m1_e_collinearmass);
   fChain->SetBranchAddress("m1_e_collinearmass_CheckUESDown", &m1_e_collinearmass_CheckUESDown, &b_m1_e_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("m1_e_collinearmass_CheckUESUp", &m1_e_collinearmass_CheckUESUp, &b_m1_e_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("m1_e_collinearmass_JetCheckTotalDown", &m1_e_collinearmass_JetCheckTotalDown, &b_m1_e_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("m1_e_collinearmass_JetCheckTotalUp", &m1_e_collinearmass_JetCheckTotalUp, &b_m1_e_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("m1_e_collinearmass_JetEnDown", &m1_e_collinearmass_JetEnDown, &b_m1_e_collinearmass_JetEnDown);
   fChain->SetBranchAddress("m1_e_collinearmass_JetEnUp", &m1_e_collinearmass_JetEnUp, &b_m1_e_collinearmass_JetEnUp);
   fChain->SetBranchAddress("m1_e_collinearmass_UnclusteredEnDown", &m1_e_collinearmass_UnclusteredEnDown, &b_m1_e_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("m1_e_collinearmass_UnclusteredEnUp", &m1_e_collinearmass_UnclusteredEnUp, &b_m1_e_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("m1_m2_CosThetaStar", &m1_m2_CosThetaStar, &b_m1_m2_CosThetaStar);
   fChain->SetBranchAddress("m1_m2_DPhi", &m1_m2_DPhi, &b_m1_m2_DPhi);
   fChain->SetBranchAddress("m1_m2_DR", &m1_m2_DR, &b_m1_m2_DR);
   fChain->SetBranchAddress("m1_m2_Eta", &m1_m2_Eta, &b_m1_m2_Eta);
   fChain->SetBranchAddress("m1_m2_Mass", &m1_m2_Mass, &b_m1_m2_Mass);
   fChain->SetBranchAddress("m1_m2_Mass_TauEnDown", &m1_m2_Mass_TauEnDown, &b_m1_m2_Mass_TauEnDown);
   fChain->SetBranchAddress("m1_m2_Mass_TauEnUp", &m1_m2_Mass_TauEnUp, &b_m1_m2_Mass_TauEnUp);
   fChain->SetBranchAddress("m1_m2_Mt", &m1_m2_Mt, &b_m1_m2_Mt);
   fChain->SetBranchAddress("m1_m2_MtTotal", &m1_m2_MtTotal, &b_m1_m2_MtTotal);
   fChain->SetBranchAddress("m1_m2_Mt_TauEnDown", &m1_m2_Mt_TauEnDown, &b_m1_m2_Mt_TauEnDown);
   fChain->SetBranchAddress("m1_m2_Mt_TauEnUp", &m1_m2_Mt_TauEnUp, &b_m1_m2_Mt_TauEnUp);
   fChain->SetBranchAddress("m1_m2_MvaMet", &m1_m2_MvaMet, &b_m1_m2_MvaMet);
   fChain->SetBranchAddress("m1_m2_MvaMetCovMatrix00", &m1_m2_MvaMetCovMatrix00, &b_m1_m2_MvaMetCovMatrix00);
   fChain->SetBranchAddress("m1_m2_MvaMetCovMatrix01", &m1_m2_MvaMetCovMatrix01, &b_m1_m2_MvaMetCovMatrix01);
   fChain->SetBranchAddress("m1_m2_MvaMetCovMatrix10", &m1_m2_MvaMetCovMatrix10, &b_m1_m2_MvaMetCovMatrix10);
   fChain->SetBranchAddress("m1_m2_MvaMetCovMatrix11", &m1_m2_MvaMetCovMatrix11, &b_m1_m2_MvaMetCovMatrix11);
   fChain->SetBranchAddress("m1_m2_MvaMetPhi", &m1_m2_MvaMetPhi, &b_m1_m2_MvaMetPhi);
   fChain->SetBranchAddress("m1_m2_PZeta", &m1_m2_PZeta, &b_m1_m2_PZeta);
   fChain->SetBranchAddress("m1_m2_PZetaLess0p85PZetaVis", &m1_m2_PZetaLess0p85PZetaVis, &b_m1_m2_PZetaLess0p85PZetaVis);
   fChain->SetBranchAddress("m1_m2_PZetaVis", &m1_m2_PZetaVis, &b_m1_m2_PZetaVis);
   fChain->SetBranchAddress("m1_m2_Phi", &m1_m2_Phi, &b_m1_m2_Phi);
   fChain->SetBranchAddress("m1_m2_Pt", &m1_m2_Pt, &b_m1_m2_Pt);
   fChain->SetBranchAddress("m1_m2_SS", &m1_m2_SS, &b_m1_m2_SS);
   fChain->SetBranchAddress("m1_m2_ToMETDPhi_Ty1", &m1_m2_ToMETDPhi_Ty1, &b_m1_m2_ToMETDPhi_Ty1);
   fChain->SetBranchAddress("m1_m2_collinearmass", &m1_m2_collinearmass, &b_m1_m2_collinearmass);
   fChain->SetBranchAddress("m1_m2_collinearmass_CheckUESDown", &m1_m2_collinearmass_CheckUESDown, &b_m1_m2_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("m1_m2_collinearmass_CheckUESUp", &m1_m2_collinearmass_CheckUESUp, &b_m1_m2_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("m1_m2_collinearmass_EleEnDown", &m1_m2_collinearmass_EleEnDown, &b_m1_m2_collinearmass_EleEnDown);
   fChain->SetBranchAddress("m1_m2_collinearmass_EleEnUp", &m1_m2_collinearmass_EleEnUp, &b_m1_m2_collinearmass_EleEnUp);
   fChain->SetBranchAddress("m1_m2_collinearmass_JetCheckTotalDown", &m1_m2_collinearmass_JetCheckTotalDown, &b_m1_m2_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("m1_m2_collinearmass_JetCheckTotalUp", &m1_m2_collinearmass_JetCheckTotalUp, &b_m1_m2_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("m1_m2_collinearmass_JetEnDown", &m1_m2_collinearmass_JetEnDown, &b_m1_m2_collinearmass_JetEnDown);
   fChain->SetBranchAddress("m1_m2_collinearmass_JetEnUp", &m1_m2_collinearmass_JetEnUp, &b_m1_m2_collinearmass_JetEnUp);
   fChain->SetBranchAddress("m1_m2_collinearmass_MuEnDown", &m1_m2_collinearmass_MuEnDown, &b_m1_m2_collinearmass_MuEnDown);
   fChain->SetBranchAddress("m1_m2_collinearmass_MuEnUp", &m1_m2_collinearmass_MuEnUp, &b_m1_m2_collinearmass_MuEnUp);
   fChain->SetBranchAddress("m1_m2_collinearmass_TauEnDown", &m1_m2_collinearmass_TauEnDown, &b_m1_m2_collinearmass_TauEnDown);
   fChain->SetBranchAddress("m1_m2_collinearmass_TauEnUp", &m1_m2_collinearmass_TauEnUp, &b_m1_m2_collinearmass_TauEnUp);
   fChain->SetBranchAddress("m1_m2_collinearmass_UnclusteredEnDown", &m1_m2_collinearmass_UnclusteredEnDown, &b_m1_m2_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("m1_m2_collinearmass_UnclusteredEnUp", &m1_m2_collinearmass_UnclusteredEnUp, &b_m1_m2_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("m1_m2_pt_tt", &m1_m2_pt_tt, &b_m1_m2_pt_tt);
   fChain->SetBranchAddress("m1_m3_CosThetaStar", &m1_m3_CosThetaStar, &b_m1_m3_CosThetaStar);
   fChain->SetBranchAddress("m1_m3_DPhi", &m1_m3_DPhi, &b_m1_m3_DPhi);
   fChain->SetBranchAddress("m1_m3_DR", &m1_m3_DR, &b_m1_m3_DR);
   fChain->SetBranchAddress("m1_m3_Eta", &m1_m3_Eta, &b_m1_m3_Eta);
   fChain->SetBranchAddress("m1_m3_Mass", &m1_m3_Mass, &b_m1_m3_Mass);
   fChain->SetBranchAddress("m1_m3_Mass_TauEnDown", &m1_m3_Mass_TauEnDown, &b_m1_m3_Mass_TauEnDown);
   fChain->SetBranchAddress("m1_m3_Mass_TauEnUp", &m1_m3_Mass_TauEnUp, &b_m1_m3_Mass_TauEnUp);
   fChain->SetBranchAddress("m1_m3_Mt", &m1_m3_Mt, &b_m1_m3_Mt);
   fChain->SetBranchAddress("m1_m3_MtTotal", &m1_m3_MtTotal, &b_m1_m3_MtTotal);
   fChain->SetBranchAddress("m1_m3_Mt_TauEnDown", &m1_m3_Mt_TauEnDown, &b_m1_m3_Mt_TauEnDown);
   fChain->SetBranchAddress("m1_m3_Mt_TauEnUp", &m1_m3_Mt_TauEnUp, &b_m1_m3_Mt_TauEnUp);
   fChain->SetBranchAddress("m1_m3_MvaMet", &m1_m3_MvaMet, &b_m1_m3_MvaMet);
   fChain->SetBranchAddress("m1_m3_MvaMetCovMatrix00", &m1_m3_MvaMetCovMatrix00, &b_m1_m3_MvaMetCovMatrix00);
   fChain->SetBranchAddress("m1_m3_MvaMetCovMatrix01", &m1_m3_MvaMetCovMatrix01, &b_m1_m3_MvaMetCovMatrix01);
   fChain->SetBranchAddress("m1_m3_MvaMetCovMatrix10", &m1_m3_MvaMetCovMatrix10, &b_m1_m3_MvaMetCovMatrix10);
   fChain->SetBranchAddress("m1_m3_MvaMetCovMatrix11", &m1_m3_MvaMetCovMatrix11, &b_m1_m3_MvaMetCovMatrix11);
   fChain->SetBranchAddress("m1_m3_MvaMetPhi", &m1_m3_MvaMetPhi, &b_m1_m3_MvaMetPhi);
   fChain->SetBranchAddress("m1_m3_PZeta", &m1_m3_PZeta, &b_m1_m3_PZeta);
   fChain->SetBranchAddress("m1_m3_PZetaLess0p85PZetaVis", &m1_m3_PZetaLess0p85PZetaVis, &b_m1_m3_PZetaLess0p85PZetaVis);
   fChain->SetBranchAddress("m1_m3_PZetaVis", &m1_m3_PZetaVis, &b_m1_m3_PZetaVis);
   fChain->SetBranchAddress("m1_m3_Phi", &m1_m3_Phi, &b_m1_m3_Phi);
   fChain->SetBranchAddress("m1_m3_Pt", &m1_m3_Pt, &b_m1_m3_Pt);
   fChain->SetBranchAddress("m1_m3_SS", &m1_m3_SS, &b_m1_m3_SS);
   fChain->SetBranchAddress("m1_m3_ToMETDPhi_Ty1", &m1_m3_ToMETDPhi_Ty1, &b_m1_m3_ToMETDPhi_Ty1);
   fChain->SetBranchAddress("m1_m3_collinearmass", &m1_m3_collinearmass, &b_m1_m3_collinearmass);
   fChain->SetBranchAddress("m1_m3_collinearmass_CheckUESDown", &m1_m3_collinearmass_CheckUESDown, &b_m1_m3_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("m1_m3_collinearmass_CheckUESUp", &m1_m3_collinearmass_CheckUESUp, &b_m1_m3_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("m1_m3_collinearmass_EleEnDown", &m1_m3_collinearmass_EleEnDown, &b_m1_m3_collinearmass_EleEnDown);
   fChain->SetBranchAddress("m1_m3_collinearmass_EleEnUp", &m1_m3_collinearmass_EleEnUp, &b_m1_m3_collinearmass_EleEnUp);
   fChain->SetBranchAddress("m1_m3_collinearmass_JetCheckTotalDown", &m1_m3_collinearmass_JetCheckTotalDown, &b_m1_m3_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("m1_m3_collinearmass_JetCheckTotalUp", &m1_m3_collinearmass_JetCheckTotalUp, &b_m1_m3_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("m1_m3_collinearmass_JetEnDown", &m1_m3_collinearmass_JetEnDown, &b_m1_m3_collinearmass_JetEnDown);
   fChain->SetBranchAddress("m1_m3_collinearmass_JetEnUp", &m1_m3_collinearmass_JetEnUp, &b_m1_m3_collinearmass_JetEnUp);
   fChain->SetBranchAddress("m1_m3_collinearmass_MuEnDown", &m1_m3_collinearmass_MuEnDown, &b_m1_m3_collinearmass_MuEnDown);
   fChain->SetBranchAddress("m1_m3_collinearmass_MuEnUp", &m1_m3_collinearmass_MuEnUp, &b_m1_m3_collinearmass_MuEnUp);
   fChain->SetBranchAddress("m1_m3_collinearmass_TauEnDown", &m1_m3_collinearmass_TauEnDown, &b_m1_m3_collinearmass_TauEnDown);
   fChain->SetBranchAddress("m1_m3_collinearmass_TauEnUp", &m1_m3_collinearmass_TauEnUp, &b_m1_m3_collinearmass_TauEnUp);
   fChain->SetBranchAddress("m1_m3_collinearmass_UnclusteredEnDown", &m1_m3_collinearmass_UnclusteredEnDown, &b_m1_m3_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("m1_m3_collinearmass_UnclusteredEnUp", &m1_m3_collinearmass_UnclusteredEnUp, &b_m1_m3_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("m1_m3_pt_tt", &m1_m3_pt_tt, &b_m1_m3_pt_tt);
   fChain->SetBranchAddress("m2AbsEta", &m2AbsEta, &b_m2AbsEta);
   fChain->SetBranchAddress("m2BestTrackType", &m2BestTrackType, &b_m2BestTrackType);
   fChain->SetBranchAddress("m2Charge", &m2Charge, &b_m2Charge);
   fChain->SetBranchAddress("m2Chi2LocalPosition", &m2Chi2LocalPosition, &b_m2Chi2LocalPosition);
   fChain->SetBranchAddress("m2ComesFromHiggs", &m2ComesFromHiggs, &b_m2ComesFromHiggs);
   fChain->SetBranchAddress("m2DPhiToPfMet_type1", &m2DPhiToPfMet_type1, &b_m2DPhiToPfMet_type1);
   fChain->SetBranchAddress("m2EcalIsoDR03", &m2EcalIsoDR03, &b_m2EcalIsoDR03);
   fChain->SetBranchAddress("m2EffectiveArea2011", &m2EffectiveArea2011, &b_m2EffectiveArea2011);
   fChain->SetBranchAddress("m2EffectiveArea2012", &m2EffectiveArea2012, &b_m2EffectiveArea2012);
   fChain->SetBranchAddress("m2Eta", &m2Eta, &b_m2Eta);
   fChain->SetBranchAddress("m2Eta_MuonEnDown", &m2Eta_MuonEnDown, &b_m2Eta_MuonEnDown);
   fChain->SetBranchAddress("m2Eta_MuonEnUp", &m2Eta_MuonEnUp, &b_m2Eta_MuonEnUp);
   fChain->SetBranchAddress("m2GenCharge", &m2GenCharge, &b_m2GenCharge);
   fChain->SetBranchAddress("m2GenDirectPromptTauDecayFinalState", &m2GenDirectPromptTauDecayFinalState, &b_m2GenDirectPromptTauDecayFinalState);
   fChain->SetBranchAddress("m2GenEnergy", &m2GenEnergy, &b_m2GenEnergy);
   fChain->SetBranchAddress("m2GenEta", &m2GenEta, &b_m2GenEta);
   fChain->SetBranchAddress("m2GenIsPrompt", &m2GenIsPrompt, &b_m2GenIsPrompt);
   fChain->SetBranchAddress("m2GenMotherPdgId", &m2GenMotherPdgId, &b_m2GenMotherPdgId);
   fChain->SetBranchAddress("m2GenParticle", &m2GenParticle, &b_m2GenParticle);
   fChain->SetBranchAddress("m2GenPdgId", &m2GenPdgId, &b_m2GenPdgId);
   fChain->SetBranchAddress("m2GenPhi", &m2GenPhi, &b_m2GenPhi);
   fChain->SetBranchAddress("m2GenPrompt", &m2GenPrompt, &b_m2GenPrompt);
   fChain->SetBranchAddress("m2GenPromptFinalState", &m2GenPromptFinalState, &b_m2GenPromptFinalState);
   fChain->SetBranchAddress("m2GenPromptTauDecay", &m2GenPromptTauDecay, &b_m2GenPromptTauDecay);
   fChain->SetBranchAddress("m2GenPt", &m2GenPt, &b_m2GenPt);
   fChain->SetBranchAddress("m2GenTauDecay", &m2GenTauDecay, &b_m2GenTauDecay);
   fChain->SetBranchAddress("m2GenVZ", &m2GenVZ, &b_m2GenVZ);
   fChain->SetBranchAddress("m2GenVtxPVMatch", &m2GenVtxPVMatch, &b_m2GenVtxPVMatch);
   fChain->SetBranchAddress("m2HcalIsoDR03", &m2HcalIsoDR03, &b_m2HcalIsoDR03);
   fChain->SetBranchAddress("m2IP3D", &m2IP3D, &b_m2IP3D);
   fChain->SetBranchAddress("m2IP3DErr", &m2IP3DErr, &b_m2IP3DErr);
   fChain->SetBranchAddress("m2IsGlobal", &m2IsGlobal, &b_m2IsGlobal);
   fChain->SetBranchAddress("m2IsPFMuon", &m2IsPFMuon, &b_m2IsPFMuon);
   fChain->SetBranchAddress("m2IsTracker", &m2IsTracker, &b_m2IsTracker);
   fChain->SetBranchAddress("m2IsoDB03", &m2IsoDB03, &b_m2IsoDB03);
   fChain->SetBranchAddress("m2IsoDB04", &m2IsoDB04, &b_m2IsoDB04);
   fChain->SetBranchAddress("m2JetArea", &m2JetArea, &b_m2JetArea);
   fChain->SetBranchAddress("m2JetBtag", &m2JetBtag, &b_m2JetBtag);
   fChain->SetBranchAddress("m2JetDR", &m2JetDR, &b_m2JetDR);
   fChain->SetBranchAddress("m2JetEtaEtaMoment", &m2JetEtaEtaMoment, &b_m2JetEtaEtaMoment);
   fChain->SetBranchAddress("m2JetEtaPhiMoment", &m2JetEtaPhiMoment, &b_m2JetEtaPhiMoment);
   fChain->SetBranchAddress("m2JetEtaPhiSpread", &m2JetEtaPhiSpread, &b_m2JetEtaPhiSpread);
   fChain->SetBranchAddress("m2JetHadronFlavour", &m2JetHadronFlavour, &b_m2JetHadronFlavour);
   fChain->SetBranchAddress("m2JetPFCISVBtag", &m2JetPFCISVBtag, &b_m2JetPFCISVBtag);
   fChain->SetBranchAddress("m2JetPartonFlavour", &m2JetPartonFlavour, &b_m2JetPartonFlavour);
   fChain->SetBranchAddress("m2JetPhiPhiMoment", &m2JetPhiPhiMoment, &b_m2JetPhiPhiMoment);
   fChain->SetBranchAddress("m2JetPt", &m2JetPt, &b_m2JetPt);
   fChain->SetBranchAddress("m2LowestMll", &m2LowestMll, &b_m2LowestMll);
   fChain->SetBranchAddress("m2Mass", &m2Mass, &b_m2Mass);
   fChain->SetBranchAddress("m2MatchedStations", &m2MatchedStations, &b_m2MatchedStations);
   fChain->SetBranchAddress("m2MatchesDoubleESingleMu", &m2MatchesDoubleESingleMu, &b_m2MatchesDoubleESingleMu);
   fChain->SetBranchAddress("m2MatchesDoubleMu", &m2MatchesDoubleMu, &b_m2MatchesDoubleMu);
   fChain->SetBranchAddress("m2MatchesDoubleMuFilter1", &m2MatchesDoubleMuFilter1, &b_m2MatchesDoubleMuFilter1);
   fChain->SetBranchAddress("m2MatchesDoubleMuFilter2", &m2MatchesDoubleMuFilter2, &b_m2MatchesDoubleMuFilter2);
   fChain->SetBranchAddress("m2MatchesDoubleMuNoDZFilter1", &m2MatchesDoubleMuNoDZFilter1, &b_m2MatchesDoubleMuNoDZFilter1);
   fChain->SetBranchAddress("m2MatchesDoubleMuNoDZFilter2", &m2MatchesDoubleMuNoDZFilter2, &b_m2MatchesDoubleMuNoDZFilter2);
   fChain->SetBranchAddress("m2MatchesDoubleMuPath1", &m2MatchesDoubleMuPath1, &b_m2MatchesDoubleMuPath1);
   fChain->SetBranchAddress("m2MatchesDoubleMuPath2", &m2MatchesDoubleMuPath2, &b_m2MatchesDoubleMuPath2);
   fChain->SetBranchAddress("m2MatchesDoubleMuSingleE", &m2MatchesDoubleMuSingleE, &b_m2MatchesDoubleMuSingleE);
   fChain->SetBranchAddress("m2MatchesIsoMu17eta2p1Path", &m2MatchesIsoMu17eta2p1Path, &b_m2MatchesIsoMu17eta2p1Path);
   fChain->SetBranchAddress("m2MatchesIsoMu18Path", &m2MatchesIsoMu18Path, &b_m2MatchesIsoMu18Path);
   fChain->SetBranchAddress("m2MatchesIsoMu20Path", &m2MatchesIsoMu20Path, &b_m2MatchesIsoMu20Path);
   fChain->SetBranchAddress("m2MatchesIsoMu22Path", &m2MatchesIsoMu22Path, &b_m2MatchesIsoMu22Path);
   fChain->SetBranchAddress("m2MatchesIsoMu22eta2p1Path", &m2MatchesIsoMu22eta2p1Path, &b_m2MatchesIsoMu22eta2p1Path);
   fChain->SetBranchAddress("m2MatchesIsoMu24Filter", &m2MatchesIsoMu24Filter, &b_m2MatchesIsoMu24Filter);
   fChain->SetBranchAddress("m2MatchesIsoMu27Path", &m2MatchesIsoMu27Path, &b_m2MatchesIsoMu27Path);
   fChain->SetBranchAddress("m2MatchesIsoTkMu20Path", &m2MatchesIsoTkMu20Path, &b_m2MatchesIsoTkMu20Path);
   fChain->SetBranchAddress("m2MatchesIsoTkMu22Path", &m2MatchesIsoTkMu22Path, &b_m2MatchesIsoTkMu22Path);
   fChain->SetBranchAddress("m2MatchesIsoTkMu24Filter", &m2MatchesIsoTkMu24Filter, &b_m2MatchesIsoTkMu24Filter);
   fChain->SetBranchAddress("m2MatchesMu17Path", &m2MatchesMu17Path, &b_m2MatchesMu17Path);
   fChain->SetBranchAddress("m2MatchesMu17VVLPath", &m2MatchesMu17VVLPath, &b_m2MatchesMu17VVLPath);
   fChain->SetBranchAddress("m2MatchesMu50Path", &m2MatchesMu50Path, &b_m2MatchesMu50Path);
   fChain->SetBranchAddress("m2MatchesMu8Path", &m2MatchesMu8Path, &b_m2MatchesMu8Path);
   fChain->SetBranchAddress("m2MatchesMu8VVLPath", &m2MatchesMu8VVLPath, &b_m2MatchesMu8VVLPath);
   fChain->SetBranchAddress("m2MatchesSingleESingleMu", &m2MatchesSingleESingleMu, &b_m2MatchesSingleESingleMu);
   fChain->SetBranchAddress("m2MatchesSingleMu", &m2MatchesSingleMu, &b_m2MatchesSingleMu);
   fChain->SetBranchAddress("m2MatchesSingleMuIso20", &m2MatchesSingleMuIso20, &b_m2MatchesSingleMuIso20);
   fChain->SetBranchAddress("m2MatchesSingleMuIsoTk20", &m2MatchesSingleMuIsoTk20, &b_m2MatchesSingleMuIsoTk20);
   fChain->SetBranchAddress("m2MatchesSingleMuSingleE", &m2MatchesSingleMuSingleE, &b_m2MatchesSingleMuSingleE);
   fChain->SetBranchAddress("m2MatchesSingleMu_leg1", &m2MatchesSingleMu_leg1, &b_m2MatchesSingleMu_leg1);
   fChain->SetBranchAddress("m2MatchesSingleMu_leg1_noiso", &m2MatchesSingleMu_leg1_noiso, &b_m2MatchesSingleMu_leg1_noiso);
   fChain->SetBranchAddress("m2MatchesSingleMu_leg2", &m2MatchesSingleMu_leg2, &b_m2MatchesSingleMu_leg2);
   fChain->SetBranchAddress("m2MatchesSingleMu_leg2_noiso", &m2MatchesSingleMu_leg2_noiso, &b_m2MatchesSingleMu_leg2_noiso);
   fChain->SetBranchAddress("m2MatchesTripleMu", &m2MatchesTripleMu, &b_m2MatchesTripleMu);
   fChain->SetBranchAddress("m2MtToPfMet_type1", &m2MtToPfMet_type1, &b_m2MtToPfMet_type1);
   fChain->SetBranchAddress("m2MuonHits", &m2MuonHits, &b_m2MuonHits);
   fChain->SetBranchAddress("m2NearestZMass", &m2NearestZMass, &b_m2NearestZMass);
   fChain->SetBranchAddress("m2NormTrkChi2", &m2NormTrkChi2, &b_m2NormTrkChi2);
   fChain->SetBranchAddress("m2NormalizedChi2", &m2NormalizedChi2, &b_m2NormalizedChi2);
   fChain->SetBranchAddress("m2PFChargedHadronIsoR04", &m2PFChargedHadronIsoR04, &b_m2PFChargedHadronIsoR04);
   fChain->SetBranchAddress("m2PFChargedIso", &m2PFChargedIso, &b_m2PFChargedIso);
   fChain->SetBranchAddress("m2PFIDLoose", &m2PFIDLoose, &b_m2PFIDLoose);
   fChain->SetBranchAddress("m2PFIDMedium", &m2PFIDMedium, &b_m2PFIDMedium);
   fChain->SetBranchAddress("m2PFIDTight", &m2PFIDTight, &b_m2PFIDTight);
   fChain->SetBranchAddress("m2PFNeutralHadronIsoR04", &m2PFNeutralHadronIsoR04, &b_m2PFNeutralHadronIsoR04);
   fChain->SetBranchAddress("m2PFNeutralIso", &m2PFNeutralIso, &b_m2PFNeutralIso);
   fChain->SetBranchAddress("m2PFPUChargedIso", &m2PFPUChargedIso, &b_m2PFPUChargedIso);
   fChain->SetBranchAddress("m2PFPhotonIso", &m2PFPhotonIso, &b_m2PFPhotonIso);
   fChain->SetBranchAddress("m2PFPhotonIsoR04", &m2PFPhotonIsoR04, &b_m2PFPhotonIsoR04);
   fChain->SetBranchAddress("m2PFPileupIsoR04", &m2PFPileupIsoR04, &b_m2PFPileupIsoR04);
   fChain->SetBranchAddress("m2PVDXY", &m2PVDXY, &b_m2PVDXY);
   fChain->SetBranchAddress("m2PVDZ", &m2PVDZ, &b_m2PVDZ);
   fChain->SetBranchAddress("m2Phi", &m2Phi, &b_m2Phi);
   fChain->SetBranchAddress("m2Phi_MuonEnDown", &m2Phi_MuonEnDown, &b_m2Phi_MuonEnDown);
   fChain->SetBranchAddress("m2Phi_MuonEnUp", &m2Phi_MuonEnUp, &b_m2Phi_MuonEnUp);
   fChain->SetBranchAddress("m2PixHits", &m2PixHits, &b_m2PixHits);
   fChain->SetBranchAddress("m2Pt", &m2Pt, &b_m2Pt);
   fChain->SetBranchAddress("m2Pt_MuonEnDown", &m2Pt_MuonEnDown, &b_m2Pt_MuonEnDown);
   fChain->SetBranchAddress("m2Pt_MuonEnUp", &m2Pt_MuonEnUp, &b_m2Pt_MuonEnUp);
   fChain->SetBranchAddress("m2Rank", &m2Rank, &b_m2Rank);
   fChain->SetBranchAddress("m2RelPFIsoDBDefault", &m2RelPFIsoDBDefault, &b_m2RelPFIsoDBDefault);
   fChain->SetBranchAddress("m2RelPFIsoDBDefaultR04", &m2RelPFIsoDBDefaultR04, &b_m2RelPFIsoDBDefaultR04);
   fChain->SetBranchAddress("m2RelPFIsoRho", &m2RelPFIsoRho, &b_m2RelPFIsoRho);
   fChain->SetBranchAddress("m2Rho", &m2Rho, &b_m2Rho);
   fChain->SetBranchAddress("m2SIP2D", &m2SIP2D, &b_m2SIP2D);
   fChain->SetBranchAddress("m2SIP3D", &m2SIP3D, &b_m2SIP3D);
   fChain->SetBranchAddress("m2SegmentCompatibility", &m2SegmentCompatibility, &b_m2SegmentCompatibility);
   fChain->SetBranchAddress("m2TkLayersWithMeasurement", &m2TkLayersWithMeasurement, &b_m2TkLayersWithMeasurement);
   fChain->SetBranchAddress("m2TrkIsoDR03", &m2TrkIsoDR03, &b_m2TrkIsoDR03);
   fChain->SetBranchAddress("m2TrkKink", &m2TrkKink, &b_m2TrkKink);
   fChain->SetBranchAddress("m2TypeCode", &m2TypeCode, &b_m2TypeCode);
   fChain->SetBranchAddress("m2VZ", &m2VZ, &b_m2VZ);
   fChain->SetBranchAddress("m2ValidFraction", &m2ValidFraction, &b_m2ValidFraction);
   fChain->SetBranchAddress("m2ZTTGenMatching", &m2ZTTGenMatching, &b_m2ZTTGenMatching);
   fChain->SetBranchAddress("m2_e_collinearmass", &m2_e_collinearmass, &b_m2_e_collinearmass);
   fChain->SetBranchAddress("m2_e_collinearmass_CheckUESDown", &m2_e_collinearmass_CheckUESDown, &b_m2_e_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("m2_e_collinearmass_CheckUESUp", &m2_e_collinearmass_CheckUESUp, &b_m2_e_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("m2_e_collinearmass_JetCheckTotalDown", &m2_e_collinearmass_JetCheckTotalDown, &b_m2_e_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("m2_e_collinearmass_JetCheckTotalUp", &m2_e_collinearmass_JetCheckTotalUp, &b_m2_e_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("m2_e_collinearmass_JetEnDown", &m2_e_collinearmass_JetEnDown, &b_m2_e_collinearmass_JetEnDown);
   fChain->SetBranchAddress("m2_e_collinearmass_JetEnUp", &m2_e_collinearmass_JetEnUp, &b_m2_e_collinearmass_JetEnUp);
   fChain->SetBranchAddress("m2_e_collinearmass_UnclusteredEnDown", &m2_e_collinearmass_UnclusteredEnDown, &b_m2_e_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("m2_e_collinearmass_UnclusteredEnUp", &m2_e_collinearmass_UnclusteredEnUp, &b_m2_e_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("m2_m1_collinearmass", &m2_m1_collinearmass, &b_m2_m1_collinearmass);
   fChain->SetBranchAddress("m2_m1_collinearmass_CheckUESDown", &m2_m1_collinearmass_CheckUESDown, &b_m2_m1_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("m2_m1_collinearmass_CheckUESUp", &m2_m1_collinearmass_CheckUESUp, &b_m2_m1_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("m2_m1_collinearmass_JetCheckTotalDown", &m2_m1_collinearmass_JetCheckTotalDown, &b_m2_m1_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("m2_m1_collinearmass_JetCheckTotalUp", &m2_m1_collinearmass_JetCheckTotalUp, &b_m2_m1_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("m2_m1_collinearmass_JetEnDown", &m2_m1_collinearmass_JetEnDown, &b_m2_m1_collinearmass_JetEnDown);
   fChain->SetBranchAddress("m2_m1_collinearmass_JetEnUp", &m2_m1_collinearmass_JetEnUp, &b_m2_m1_collinearmass_JetEnUp);
   fChain->SetBranchAddress("m2_m1_collinearmass_UnclusteredEnDown", &m2_m1_collinearmass_UnclusteredEnDown, &b_m2_m1_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("m2_m1_collinearmass_UnclusteredEnUp", &m2_m1_collinearmass_UnclusteredEnUp, &b_m2_m1_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("m2_m3_CosThetaStar", &m2_m3_CosThetaStar, &b_m2_m3_CosThetaStar);
   fChain->SetBranchAddress("m2_m3_DPhi", &m2_m3_DPhi, &b_m2_m3_DPhi);
   fChain->SetBranchAddress("m2_m3_DR", &m2_m3_DR, &b_m2_m3_DR);
   fChain->SetBranchAddress("m2_m3_Eta", &m2_m3_Eta, &b_m2_m3_Eta);
   fChain->SetBranchAddress("m2_m3_Mass", &m2_m3_Mass, &b_m2_m3_Mass);
   fChain->SetBranchAddress("m2_m3_Mass_TauEnDown", &m2_m3_Mass_TauEnDown, &b_m2_m3_Mass_TauEnDown);
   fChain->SetBranchAddress("m2_m3_Mass_TauEnUp", &m2_m3_Mass_TauEnUp, &b_m2_m3_Mass_TauEnUp);
   fChain->SetBranchAddress("m2_m3_Mt", &m2_m3_Mt, &b_m2_m3_Mt);
   fChain->SetBranchAddress("m2_m3_MtTotal", &m2_m3_MtTotal, &b_m2_m3_MtTotal);
   fChain->SetBranchAddress("m2_m3_Mt_TauEnDown", &m2_m3_Mt_TauEnDown, &b_m2_m3_Mt_TauEnDown);
   fChain->SetBranchAddress("m2_m3_Mt_TauEnUp", &m2_m3_Mt_TauEnUp, &b_m2_m3_Mt_TauEnUp);
   fChain->SetBranchAddress("m2_m3_MvaMet", &m2_m3_MvaMet, &b_m2_m3_MvaMet);
   fChain->SetBranchAddress("m2_m3_MvaMetCovMatrix00", &m2_m3_MvaMetCovMatrix00, &b_m2_m3_MvaMetCovMatrix00);
   fChain->SetBranchAddress("m2_m3_MvaMetCovMatrix01", &m2_m3_MvaMetCovMatrix01, &b_m2_m3_MvaMetCovMatrix01);
   fChain->SetBranchAddress("m2_m3_MvaMetCovMatrix10", &m2_m3_MvaMetCovMatrix10, &b_m2_m3_MvaMetCovMatrix10);
   fChain->SetBranchAddress("m2_m3_MvaMetCovMatrix11", &m2_m3_MvaMetCovMatrix11, &b_m2_m3_MvaMetCovMatrix11);
   fChain->SetBranchAddress("m2_m3_MvaMetPhi", &m2_m3_MvaMetPhi, &b_m2_m3_MvaMetPhi);
   fChain->SetBranchAddress("m2_m3_PZeta", &m2_m3_PZeta, &b_m2_m3_PZeta);
   fChain->SetBranchAddress("m2_m3_PZetaLess0p85PZetaVis", &m2_m3_PZetaLess0p85PZetaVis, &b_m2_m3_PZetaLess0p85PZetaVis);
   fChain->SetBranchAddress("m2_m3_PZetaVis", &m2_m3_PZetaVis, &b_m2_m3_PZetaVis);
   fChain->SetBranchAddress("m2_m3_Phi", &m2_m3_Phi, &b_m2_m3_Phi);
   fChain->SetBranchAddress("m2_m3_Pt", &m2_m3_Pt, &b_m2_m3_Pt);
   fChain->SetBranchAddress("m2_m3_SS", &m2_m3_SS, &b_m2_m3_SS);
   fChain->SetBranchAddress("m2_m3_ToMETDPhi_Ty1", &m2_m3_ToMETDPhi_Ty1, &b_m2_m3_ToMETDPhi_Ty1);
   fChain->SetBranchAddress("m2_m3_collinearmass", &m2_m3_collinearmass, &b_m2_m3_collinearmass);
   fChain->SetBranchAddress("m2_m3_collinearmass_CheckUESDown", &m2_m3_collinearmass_CheckUESDown, &b_m2_m3_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("m2_m3_collinearmass_CheckUESUp", &m2_m3_collinearmass_CheckUESUp, &b_m2_m3_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("m2_m3_collinearmass_EleEnDown", &m2_m3_collinearmass_EleEnDown, &b_m2_m3_collinearmass_EleEnDown);
   fChain->SetBranchAddress("m2_m3_collinearmass_EleEnUp", &m2_m3_collinearmass_EleEnUp, &b_m2_m3_collinearmass_EleEnUp);
   fChain->SetBranchAddress("m2_m3_collinearmass_JetCheckTotalDown", &m2_m3_collinearmass_JetCheckTotalDown, &b_m2_m3_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("m2_m3_collinearmass_JetCheckTotalUp", &m2_m3_collinearmass_JetCheckTotalUp, &b_m2_m3_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("m2_m3_collinearmass_JetEnDown", &m2_m3_collinearmass_JetEnDown, &b_m2_m3_collinearmass_JetEnDown);
   fChain->SetBranchAddress("m2_m3_collinearmass_JetEnUp", &m2_m3_collinearmass_JetEnUp, &b_m2_m3_collinearmass_JetEnUp);
   fChain->SetBranchAddress("m2_m3_collinearmass_MuEnDown", &m2_m3_collinearmass_MuEnDown, &b_m2_m3_collinearmass_MuEnDown);
   fChain->SetBranchAddress("m2_m3_collinearmass_MuEnUp", &m2_m3_collinearmass_MuEnUp, &b_m2_m3_collinearmass_MuEnUp);
   fChain->SetBranchAddress("m2_m3_collinearmass_TauEnDown", &m2_m3_collinearmass_TauEnDown, &b_m2_m3_collinearmass_TauEnDown);
   fChain->SetBranchAddress("m2_m3_collinearmass_TauEnUp", &m2_m3_collinearmass_TauEnUp, &b_m2_m3_collinearmass_TauEnUp);
   fChain->SetBranchAddress("m2_m3_collinearmass_UnclusteredEnDown", &m2_m3_collinearmass_UnclusteredEnDown, &b_m2_m3_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("m2_m3_collinearmass_UnclusteredEnUp", &m2_m3_collinearmass_UnclusteredEnUp, &b_m2_m3_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("m2_m3_pt_tt", &m2_m3_pt_tt, &b_m2_m3_pt_tt);
   fChain->SetBranchAddress("m3AbsEta", &m3AbsEta, &b_m3AbsEta);
   fChain->SetBranchAddress("m3BestTrackType", &m3BestTrackType, &b_m3BestTrackType);
   fChain->SetBranchAddress("m3Charge", &m3Charge, &b_m3Charge);
   fChain->SetBranchAddress("m3Chi2LocalPosition", &m3Chi2LocalPosition, &b_m3Chi2LocalPosition);
   fChain->SetBranchAddress("m3ComesFromHiggs", &m3ComesFromHiggs, &b_m3ComesFromHiggs);
   fChain->SetBranchAddress("m3DPhiToPfMet_type1", &m3DPhiToPfMet_type1, &b_m3DPhiToPfMet_type1);
   fChain->SetBranchAddress("m3EcalIsoDR03", &m3EcalIsoDR03, &b_m3EcalIsoDR03);
   fChain->SetBranchAddress("m3EffectiveArea2011", &m3EffectiveArea2011, &b_m3EffectiveArea2011);
   fChain->SetBranchAddress("m3EffectiveArea2012", &m3EffectiveArea2012, &b_m3EffectiveArea2012);
   fChain->SetBranchAddress("m3Eta", &m3Eta, &b_m3Eta);
   fChain->SetBranchAddress("m3Eta_MuonEnDown", &m3Eta_MuonEnDown, &b_m3Eta_MuonEnDown);
   fChain->SetBranchAddress("m3Eta_MuonEnUp", &m3Eta_MuonEnUp, &b_m3Eta_MuonEnUp);
   fChain->SetBranchAddress("m3GenCharge", &m3GenCharge, &b_m3GenCharge);
   fChain->SetBranchAddress("m3GenDirectPromptTauDecayFinalState", &m3GenDirectPromptTauDecayFinalState, &b_m3GenDirectPromptTauDecayFinalState);
   fChain->SetBranchAddress("m3GenEnergy", &m3GenEnergy, &b_m3GenEnergy);
   fChain->SetBranchAddress("m3GenEta", &m3GenEta, &b_m3GenEta);
   fChain->SetBranchAddress("m3GenIsPrompt", &m3GenIsPrompt, &b_m3GenIsPrompt);
   fChain->SetBranchAddress("m3GenMotherPdgId", &m3GenMotherPdgId, &b_m3GenMotherPdgId);
   fChain->SetBranchAddress("m3GenParticle", &m3GenParticle, &b_m3GenParticle);
   fChain->SetBranchAddress("m3GenPdgId", &m3GenPdgId, &b_m3GenPdgId);
   fChain->SetBranchAddress("m3GenPhi", &m3GenPhi, &b_m3GenPhi);
   fChain->SetBranchAddress("m3GenPrompt", &m3GenPrompt, &b_m3GenPrompt);
   fChain->SetBranchAddress("m3GenPromptFinalState", &m3GenPromptFinalState, &b_m3GenPromptFinalState);
   fChain->SetBranchAddress("m3GenPromptTauDecay", &m3GenPromptTauDecay, &b_m3GenPromptTauDecay);
   fChain->SetBranchAddress("m3GenPt", &m3GenPt, &b_m3GenPt);
   fChain->SetBranchAddress("m3GenTauDecay", &m3GenTauDecay, &b_m3GenTauDecay);
   fChain->SetBranchAddress("m3GenVZ", &m3GenVZ, &b_m3GenVZ);
   fChain->SetBranchAddress("m3GenVtxPVMatch", &m3GenVtxPVMatch, &b_m3GenVtxPVMatch);
   fChain->SetBranchAddress("m3HcalIsoDR03", &m3HcalIsoDR03, &b_m3HcalIsoDR03);
   fChain->SetBranchAddress("m3IP3D", &m3IP3D, &b_m3IP3D);
   fChain->SetBranchAddress("m3IP3DErr", &m3IP3DErr, &b_m3IP3DErr);
   fChain->SetBranchAddress("m3IsGlobal", &m3IsGlobal, &b_m3IsGlobal);
   fChain->SetBranchAddress("m3IsPFMuon", &m3IsPFMuon, &b_m3IsPFMuon);
   fChain->SetBranchAddress("m3IsTracker", &m3IsTracker, &b_m3IsTracker);
   fChain->SetBranchAddress("m3IsoDB03", &m3IsoDB03, &b_m3IsoDB03);
   fChain->SetBranchAddress("m3IsoDB04", &m3IsoDB04, &b_m3IsoDB04);
   fChain->SetBranchAddress("m3JetArea", &m3JetArea, &b_m3JetArea);
   fChain->SetBranchAddress("m3JetBtag", &m3JetBtag, &b_m3JetBtag);
   fChain->SetBranchAddress("m3JetDR", &m3JetDR, &b_m3JetDR);
   fChain->SetBranchAddress("m3JetEtaEtaMoment", &m3JetEtaEtaMoment, &b_m3JetEtaEtaMoment);
   fChain->SetBranchAddress("m3JetEtaPhiMoment", &m3JetEtaPhiMoment, &b_m3JetEtaPhiMoment);
   fChain->SetBranchAddress("m3JetEtaPhiSpread", &m3JetEtaPhiSpread, &b_m3JetEtaPhiSpread);
   fChain->SetBranchAddress("m3JetHadronFlavour", &m3JetHadronFlavour, &b_m3JetHadronFlavour);
   fChain->SetBranchAddress("m3JetPFCISVBtag", &m3JetPFCISVBtag, &b_m3JetPFCISVBtag);
   fChain->SetBranchAddress("m3JetPartonFlavour", &m3JetPartonFlavour, &b_m3JetPartonFlavour);
   fChain->SetBranchAddress("m3JetPhiPhiMoment", &m3JetPhiPhiMoment, &b_m3JetPhiPhiMoment);
   fChain->SetBranchAddress("m3JetPt", &m3JetPt, &b_m3JetPt);
   fChain->SetBranchAddress("m3LowestMll", &m3LowestMll, &b_m3LowestMll);
   fChain->SetBranchAddress("m3Mass", &m3Mass, &b_m3Mass);
   fChain->SetBranchAddress("m3MatchedStations", &m3MatchedStations, &b_m3MatchedStations);
   fChain->SetBranchAddress("m3MatchesDoubleESingleMu", &m3MatchesDoubleESingleMu, &b_m3MatchesDoubleESingleMu);
   fChain->SetBranchAddress("m3MatchesDoubleMu", &m3MatchesDoubleMu, &b_m3MatchesDoubleMu);
   fChain->SetBranchAddress("m3MatchesDoubleMuFilter1", &m3MatchesDoubleMuFilter1, &b_m3MatchesDoubleMuFilter1);
   fChain->SetBranchAddress("m3MatchesDoubleMuFilter2", &m3MatchesDoubleMuFilter2, &b_m3MatchesDoubleMuFilter2);
   fChain->SetBranchAddress("m3MatchesDoubleMuNoDZFilter1", &m3MatchesDoubleMuNoDZFilter1, &b_m3MatchesDoubleMuNoDZFilter1);
   fChain->SetBranchAddress("m3MatchesDoubleMuNoDZFilter2", &m3MatchesDoubleMuNoDZFilter2, &b_m3MatchesDoubleMuNoDZFilter2);
   fChain->SetBranchAddress("m3MatchesDoubleMuPath1", &m3MatchesDoubleMuPath1, &b_m3MatchesDoubleMuPath1);
   fChain->SetBranchAddress("m3MatchesDoubleMuPath2", &m3MatchesDoubleMuPath2, &b_m3MatchesDoubleMuPath2);
   fChain->SetBranchAddress("m3MatchesDoubleMuSingleE", &m3MatchesDoubleMuSingleE, &b_m3MatchesDoubleMuSingleE);
   fChain->SetBranchAddress("m3MatchesIsoMu17eta2p1Path", &m3MatchesIsoMu17eta2p1Path, &b_m3MatchesIsoMu17eta2p1Path);
   fChain->SetBranchAddress("m3MatchesIsoMu18Path", &m3MatchesIsoMu18Path, &b_m3MatchesIsoMu18Path);
   fChain->SetBranchAddress("m3MatchesIsoMu20Path", &m3MatchesIsoMu20Path, &b_m3MatchesIsoMu20Path);
   fChain->SetBranchAddress("m3MatchesIsoMu22Path", &m3MatchesIsoMu22Path, &b_m3MatchesIsoMu22Path);
   fChain->SetBranchAddress("m3MatchesIsoMu22eta2p1Path", &m3MatchesIsoMu22eta2p1Path, &b_m3MatchesIsoMu22eta2p1Path);
   fChain->SetBranchAddress("m3MatchesIsoMu24Filter", &m3MatchesIsoMu24Filter, &b_m3MatchesIsoMu24Filter);
   fChain->SetBranchAddress("m3MatchesIsoMu27Path", &m3MatchesIsoMu27Path, &b_m3MatchesIsoMu27Path);
   fChain->SetBranchAddress("m3MatchesIsoTkMu20Path", &m3MatchesIsoTkMu20Path, &b_m3MatchesIsoTkMu20Path);
   fChain->SetBranchAddress("m3MatchesIsoTkMu22Path", &m3MatchesIsoTkMu22Path, &b_m3MatchesIsoTkMu22Path);
   fChain->SetBranchAddress("m3MatchesIsoTkMu24Filter", &m3MatchesIsoTkMu24Filter, &b_m3MatchesIsoTkMu24Filter);
   fChain->SetBranchAddress("m3MatchesMu17Path", &m3MatchesMu17Path, &b_m3MatchesMu17Path);
   fChain->SetBranchAddress("m3MatchesMu17VVLPath", &m3MatchesMu17VVLPath, &b_m3MatchesMu17VVLPath);
   fChain->SetBranchAddress("m3MatchesMu50Path", &m3MatchesMu50Path, &b_m3MatchesMu50Path);
   fChain->SetBranchAddress("m3MatchesMu8Path", &m3MatchesMu8Path, &b_m3MatchesMu8Path);
   fChain->SetBranchAddress("m3MatchesMu8VVLPath", &m3MatchesMu8VVLPath, &b_m3MatchesMu8VVLPath);
   fChain->SetBranchAddress("m3MatchesSingleESingleMu", &m3MatchesSingleESingleMu, &b_m3MatchesSingleESingleMu);
   fChain->SetBranchAddress("m3MatchesSingleMu", &m3MatchesSingleMu, &b_m3MatchesSingleMu);
   fChain->SetBranchAddress("m3MatchesSingleMuIso20", &m3MatchesSingleMuIso20, &b_m3MatchesSingleMuIso20);
   fChain->SetBranchAddress("m3MatchesSingleMuIsoTk20", &m3MatchesSingleMuIsoTk20, &b_m3MatchesSingleMuIsoTk20);
   fChain->SetBranchAddress("m3MatchesSingleMuSingleE", &m3MatchesSingleMuSingleE, &b_m3MatchesSingleMuSingleE);
   fChain->SetBranchAddress("m3MatchesSingleMu_leg1", &m3MatchesSingleMu_leg1, &b_m3MatchesSingleMu_leg1);
   fChain->SetBranchAddress("m3MatchesSingleMu_leg1_noiso", &m3MatchesSingleMu_leg1_noiso, &b_m3MatchesSingleMu_leg1_noiso);
   fChain->SetBranchAddress("m3MatchesSingleMu_leg2", &m3MatchesSingleMu_leg2, &b_m3MatchesSingleMu_leg2);
   fChain->SetBranchAddress("m3MatchesSingleMu_leg2_noiso", &m3MatchesSingleMu_leg2_noiso, &b_m3MatchesSingleMu_leg2_noiso);
   fChain->SetBranchAddress("m3MatchesTripleMu", &m3MatchesTripleMu, &b_m3MatchesTripleMu);
   fChain->SetBranchAddress("m3MtToPfMet_type1", &m3MtToPfMet_type1, &b_m3MtToPfMet_type1);
   fChain->SetBranchAddress("m3MuonHits", &m3MuonHits, &b_m3MuonHits);
   fChain->SetBranchAddress("m3NearestZMass", &m3NearestZMass, &b_m3NearestZMass);
   fChain->SetBranchAddress("m3NormTrkChi2", &m3NormTrkChi2, &b_m3NormTrkChi2);
   fChain->SetBranchAddress("m3NormalizedChi2", &m3NormalizedChi2, &b_m3NormalizedChi2);
   fChain->SetBranchAddress("m3PFChargedHadronIsoR04", &m3PFChargedHadronIsoR04, &b_m3PFChargedHadronIsoR04);
   fChain->SetBranchAddress("m3PFChargedIso", &m3PFChargedIso, &b_m3PFChargedIso);
   fChain->SetBranchAddress("m3PFIDLoose", &m3PFIDLoose, &b_m3PFIDLoose);
   fChain->SetBranchAddress("m3PFIDMedium", &m3PFIDMedium, &b_m3PFIDMedium);
   fChain->SetBranchAddress("m3PFIDTight", &m3PFIDTight, &b_m3PFIDTight);
   fChain->SetBranchAddress("m3PFNeutralHadronIsoR04", &m3PFNeutralHadronIsoR04, &b_m3PFNeutralHadronIsoR04);
   fChain->SetBranchAddress("m3PFNeutralIso", &m3PFNeutralIso, &b_m3PFNeutralIso);
   fChain->SetBranchAddress("m3PFPUChargedIso", &m3PFPUChargedIso, &b_m3PFPUChargedIso);
   fChain->SetBranchAddress("m3PFPhotonIso", &m3PFPhotonIso, &b_m3PFPhotonIso);
   fChain->SetBranchAddress("m3PFPhotonIsoR04", &m3PFPhotonIsoR04, &b_m3PFPhotonIsoR04);
   fChain->SetBranchAddress("m3PFPileupIsoR04", &m3PFPileupIsoR04, &b_m3PFPileupIsoR04);
   fChain->SetBranchAddress("m3PVDXY", &m3PVDXY, &b_m3PVDXY);
   fChain->SetBranchAddress("m3PVDZ", &m3PVDZ, &b_m3PVDZ);
   fChain->SetBranchAddress("m3Phi", &m3Phi, &b_m3Phi);
   fChain->SetBranchAddress("m3Phi_MuonEnDown", &m3Phi_MuonEnDown, &b_m3Phi_MuonEnDown);
   fChain->SetBranchAddress("m3Phi_MuonEnUp", &m3Phi_MuonEnUp, &b_m3Phi_MuonEnUp);
   fChain->SetBranchAddress("m3PixHits", &m3PixHits, &b_m3PixHits);
   fChain->SetBranchAddress("m3Pt", &m3Pt, &b_m3Pt);
   fChain->SetBranchAddress("m3Pt_MuonEnDown", &m3Pt_MuonEnDown, &b_m3Pt_MuonEnDown);
   fChain->SetBranchAddress("m3Pt_MuonEnUp", &m3Pt_MuonEnUp, &b_m3Pt_MuonEnUp);
   fChain->SetBranchAddress("m3Rank", &m3Rank, &b_m3Rank);
   fChain->SetBranchAddress("m3RelPFIsoDBDefault", &m3RelPFIsoDBDefault, &b_m3RelPFIsoDBDefault);
   fChain->SetBranchAddress("m3RelPFIsoDBDefaultR04", &m3RelPFIsoDBDefaultR04, &b_m3RelPFIsoDBDefaultR04);
   fChain->SetBranchAddress("m3RelPFIsoRho", &m3RelPFIsoRho, &b_m3RelPFIsoRho);
   fChain->SetBranchAddress("m3Rho", &m3Rho, &b_m3Rho);
   fChain->SetBranchAddress("m3SIP2D", &m3SIP2D, &b_m3SIP2D);
   fChain->SetBranchAddress("m3SIP3D", &m3SIP3D, &b_m3SIP3D);
   fChain->SetBranchAddress("m3SegmentCompatibility", &m3SegmentCompatibility, &b_m3SegmentCompatibility);
   fChain->SetBranchAddress("m3TkLayersWithMeasurement", &m3TkLayersWithMeasurement, &b_m3TkLayersWithMeasurement);
   fChain->SetBranchAddress("m3TrkIsoDR03", &m3TrkIsoDR03, &b_m3TrkIsoDR03);
   fChain->SetBranchAddress("m3TrkKink", &m3TrkKink, &b_m3TrkKink);
   fChain->SetBranchAddress("m3TypeCode", &m3TypeCode, &b_m3TypeCode);
   fChain->SetBranchAddress("m3VZ", &m3VZ, &b_m3VZ);
   fChain->SetBranchAddress("m3ValidFraction", &m3ValidFraction, &b_m3ValidFraction);
   fChain->SetBranchAddress("m3ZTTGenMatching", &m3ZTTGenMatching, &b_m3ZTTGenMatching);
   fChain->SetBranchAddress("m3_e_collinearmass", &m3_e_collinearmass, &b_m3_e_collinearmass);
   fChain->SetBranchAddress("m3_e_collinearmass_CheckUESDown", &m3_e_collinearmass_CheckUESDown, &b_m3_e_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("m3_e_collinearmass_CheckUESUp", &m3_e_collinearmass_CheckUESUp, &b_m3_e_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("m3_e_collinearmass_JetCheckTotalDown", &m3_e_collinearmass_JetCheckTotalDown, &b_m3_e_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("m3_e_collinearmass_JetCheckTotalUp", &m3_e_collinearmass_JetCheckTotalUp, &b_m3_e_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("m3_e_collinearmass_JetEnDown", &m3_e_collinearmass_JetEnDown, &b_m3_e_collinearmass_JetEnDown);
   fChain->SetBranchAddress("m3_e_collinearmass_JetEnUp", &m3_e_collinearmass_JetEnUp, &b_m3_e_collinearmass_JetEnUp);
   fChain->SetBranchAddress("m3_e_collinearmass_UnclusteredEnDown", &m3_e_collinearmass_UnclusteredEnDown, &b_m3_e_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("m3_e_collinearmass_UnclusteredEnUp", &m3_e_collinearmass_UnclusteredEnUp, &b_m3_e_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("m3_m1_collinearmass", &m3_m1_collinearmass, &b_m3_m1_collinearmass);
   fChain->SetBranchAddress("m3_m1_collinearmass_CheckUESDown", &m3_m1_collinearmass_CheckUESDown, &b_m3_m1_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("m3_m1_collinearmass_CheckUESUp", &m3_m1_collinearmass_CheckUESUp, &b_m3_m1_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("m3_m1_collinearmass_JetCheckTotalDown", &m3_m1_collinearmass_JetCheckTotalDown, &b_m3_m1_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("m3_m1_collinearmass_JetCheckTotalUp", &m3_m1_collinearmass_JetCheckTotalUp, &b_m3_m1_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("m3_m1_collinearmass_JetEnDown", &m3_m1_collinearmass_JetEnDown, &b_m3_m1_collinearmass_JetEnDown);
   fChain->SetBranchAddress("m3_m1_collinearmass_JetEnUp", &m3_m1_collinearmass_JetEnUp, &b_m3_m1_collinearmass_JetEnUp);
   fChain->SetBranchAddress("m3_m1_collinearmass_UnclusteredEnDown", &m3_m1_collinearmass_UnclusteredEnDown, &b_m3_m1_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("m3_m1_collinearmass_UnclusteredEnUp", &m3_m1_collinearmass_UnclusteredEnUp, &b_m3_m1_collinearmass_UnclusteredEnUp);
   fChain->SetBranchAddress("m3_m2_collinearmass", &m3_m2_collinearmass, &b_m3_m2_collinearmass);
   fChain->SetBranchAddress("m3_m2_collinearmass_CheckUESDown", &m3_m2_collinearmass_CheckUESDown, &b_m3_m2_collinearmass_CheckUESDown);
   fChain->SetBranchAddress("m3_m2_collinearmass_CheckUESUp", &m3_m2_collinearmass_CheckUESUp, &b_m3_m2_collinearmass_CheckUESUp);
   fChain->SetBranchAddress("m3_m2_collinearmass_JetCheckTotalDown", &m3_m2_collinearmass_JetCheckTotalDown, &b_m3_m2_collinearmass_JetCheckTotalDown);
   fChain->SetBranchAddress("m3_m2_collinearmass_JetCheckTotalUp", &m3_m2_collinearmass_JetCheckTotalUp, &b_m3_m2_collinearmass_JetCheckTotalUp);
   fChain->SetBranchAddress("m3_m2_collinearmass_JetEnDown", &m3_m2_collinearmass_JetEnDown, &b_m3_m2_collinearmass_JetEnDown);
   fChain->SetBranchAddress("m3_m2_collinearmass_JetEnUp", &m3_m2_collinearmass_JetEnUp, &b_m3_m2_collinearmass_JetEnUp);
   fChain->SetBranchAddress("m3_m2_collinearmass_UnclusteredEnDown", &m3_m2_collinearmass_UnclusteredEnDown, &b_m3_m2_collinearmass_UnclusteredEnDown);
   fChain->SetBranchAddress("m3_m2_collinearmass_UnclusteredEnUp", &m3_m2_collinearmass_UnclusteredEnUp, &b_m3_m2_collinearmass_UnclusteredEnUp);
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

Bool_t runchannelMMEM::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void runchannelMMEM::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t runchannelMMEM::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef runchannelMMEM_cxx
