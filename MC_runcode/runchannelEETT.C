#define runchannelEETT_cxx
#include "runchannelEETT.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <cmath>
void runchannelEETT::Loop(const std::string SampleName,const int maxEvents)
{
//   In a ROOT session, you can do:
//      Root > .L runchannelEETT.C
//      Root > runchannelEETT t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries
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
   Int_t nAnalyze = -1; 
   Long64_t nentries = fChain->GetEntriesFast();
   if (maxEvents < 0) {nAnalyze = nentries;}
   else {nAnalyze = maxEvents;}
   Long64_t nbytes = 0, nb = 0;

   runchannelEETT::EETT_PartInfo aParticle;

   Float_t H_Phi=0;
   Float_t H_Eta=0;
   Float_t Z_Phi=0;
   Float_t Z_Eta=0;
   
     // Z var
   Float_t m_vis=0;
   Float_t Z_Pt=0;
   Float_t Z_DR=0;
   
   //H_var
   Float_t H_vis=0; 	
   Float_t H_Pt=0; 	 
   Float_t H_DR=0;
   Float_t H_charge=0;
   // A_var
   Float_t Mass_1=0;
   
   // leptons var
   Float_t pt_1=0;
   Float_t pt_2=0;
   Float_t pt_3=0;
   Float_t pt_4=0;
   Float_t eta_1=0;
   Float_t eta_2=0;
   Float_t eta_3=0;
   Float_t eta_4=0;
   Float_t phi_1=0;
   Float_t phi_2=0;
   Float_t phi_3=0;
   Float_t phi_4=0;
   // New Var
   Float_t Njets20=0;
   Float_t ZLPT=0;
   Float_t HLPT=0;
   Float_t TotalLPT=0;
   Float_t mt_vis=0;
   Float_t H_visMt=0;
   Float_t IsoDB_1=0;
   Float_t IsoDB_2=0;
   Float_t IsoDB_3=0;
   Float_t IsoDB_4=0;
   
   Float_t Jetpt_1=0;
   Float_t Jetpt_2=0;
   Float_t Jetpt_3=0;
   Float_t Jetpt_4=0;
   Float_t ZdPhi   =0;
   Float_t TotalMt =0;
   // Float_t ZdEta   =0;
   Float_t vbfdEta =0;
   Float_t vbfdPhi =0;
   Float_t RelIsoDB_1=0;
   Float_t RelIsoDB_2=0;
   Float_t RelIsoDB_3=0;
   Float_t RelIsoDB_4=0;
   // Float_t PFMet   =0;
   // Event ID Var 	 
   Int_t run_1=0;
   Int_t lumi_1=0; 	 
   ULong64_t evt_1=0; 	 
   // Pile Up Var 	 
   Float_t npv=0;
   Float_t npu=0;
   Float_t rho_1=0;
   
   Float_t PVDXY_1 =0;
   Float_t PVDXY_2 =0;
   Float_t PVDXY_3 =0;
   Float_t PVDXY_4 =0;
   Float_t PVDZ_1 =0;
   Float_t PVDZ_2 =0;
   Float_t PVDZ_3 =0;
   Float_t PVDZ_4 =0;

   Float_t pfMetEt  =0;
   Float_t pfMetPhi =0; 
   Float_t recoilMet =0;

   Float_t IDLoose_1=0;
   Float_t IDLoose_2=0;
   Float_t IDLoose_3=0;
   Float_t IDLoose_4=0;

   Float_t IDMedium_1=0;
   Float_t IDMedium_2=0;
   Float_t IDMedium_3=0;
   Float_t IDMedium_4=0;

   Float_t IDTight_1=0;
   Float_t IDTight_2=0;
   Float_t IDTight_3=0;
   Float_t IDTight_4=0;
     
   Float_t Z_MvaMet=0;
   Float_t H_MvaMet=0;
   
   Float_t MtToPfMet_1=0;
   Float_t MtToPfMet_2=0;
   Float_t MtToPfMet_3=0;
   Float_t MtToPfMet_4=0;

   Float_t costhetastar_1_2 =0;
   Float_t costhetastar_1_3 =0;
   Float_t costhetastar_1_4 =0;
   Float_t costhetastar_2_3 =0;
   Float_t costhetastar_2_4 =0;
   Float_t costhetastar_3_4 =0;

   Float_t MvaMetCovMatrix00_1_2 = 0;
   Float_t MvaMetCovMatrix01_1_2 = 0;
   Float_t MvaMetCovMatrix10_1_2 = 0;
   Float_t MvaMetCovMatrix11_1_2 = 0;
   
   Float_t MvaMetCovMatrix00_1_3 = 0;
   Float_t MvaMetCovMatrix01_1_3 = 0;
   Float_t MvaMetCovMatrix10_1_3 = 0;
   Float_t MvaMetCovMatrix11_1_3 = 0;

   Float_t MvaMetCovMatrix00_1_4 = 0;
   Float_t MvaMetCovMatrix01_1_4 = 0;
   Float_t MvaMetCovMatrix10_1_4 = 0;
   Float_t MvaMetCovMatrix11_1_4 = 0;

   Float_t MvaMetCovMatrix00_2_3 = 0;
   Float_t MvaMetCovMatrix01_2_3 = 0;
   Float_t MvaMetCovMatrix10_2_3 = 0;
   Float_t MvaMetCovMatrix11_2_3 = 0;
   
   Float_t MvaMetCovMatrix00_2_4 = 0;
   Float_t MvaMetCovMatrix01_2_4 = 0;
   Float_t MvaMetCovMatrix10_2_4 = 0;
   Float_t MvaMetCovMatrix11_2_4 = 0;

   Float_t MvaMetCovMatrix00_3_4 = 0;
   Float_t MvaMetCovMatrix01_3_4 = 0;
   Float_t MvaMetCovMatrix10_3_4 = 0;
   Float_t MvaMetCovMatrix11_3_4 = 0;

   Float_t HadronicOverEM_1 = 0;
   Float_t HadronicOverEM_2 = 0;
   Float_t HadronicOverEM_3 = 0;
   Float_t HadronicOverEM_4 = 0;

   Float_t metcov00_1 = 0;
   Float_t metcov01_1 = 0;
   Float_t metcov10_1 = 0;
   Float_t metcov11_1 = 0;

   Float_t Charge_1 = 0;
   Float_t ChargeIdLoose_1 = 0;
   Float_t ChargeIdMed_1 = 0;
   Float_t ChargeIdTight_1 = 0;

   Float_t PFChargedIso_1 = 0;
   Float_t PFNeutralIso_1 = 0;
   Float_t PFPUChargedIso_1 = 0;
   Float_t PFPhotonIso_1 = 0;
   
   Float_t Charge_2 = 0;
   Float_t ChargeIdLoose_2 = 0;
   Float_t ChargeIdMed_2 = 0;
   Float_t ChargeIdTight_2 = 0;

   Float_t PFChargedIso_2 = 0;
   Float_t PFNeutralIso_2 = 0;
   Float_t PFPUChargedIso_2 = 0;
   Float_t PFPhotonIso_2 = 0;
   
   Float_t Charge_3 = 0;
   Float_t ChargeIdLoose_3 = 0;
   Float_t ChargeIdMed_3 = 0;
   Float_t ChargeIdTight_3 = 0;

   Float_t PFChargedIso_3 = 0;
   Float_t PFNeutralIso_3 = 0;
   Float_t PFPUChargedIso_3 = 0;
   Float_t PFPhotonIso_3 = 0;
   
   Float_t Charge_4 = 0;
   Float_t ChargeIdLoose_4 = 0;
   Float_t ChargeIdMed_4 = 0;
   Float_t ChargeIdTight_4 = 0;

   Float_t PFChargedIso_4 = 0;
   Float_t PFNeutralIso_4 = 0;
   Float_t PFPUChargedIso_4 = 0;
   Float_t PFPhotonIso_4 = 0;

   Float_t GenWeight_1 = 0;

   Float_t DR_1_3 = 0;
   Float_t DR_1_4 = 0;
   Float_t DR_2_3 = 0;
   Float_t DR_2_4 = 0;
   Float_t Njets30=0;

   Float_t isTracker_1 = 0;
   Float_t isTracker_2 = 0;
   Float_t isTracker_3 = 0;
   Float_t isTracker_4 = 0;

   Float_t isGlobal_1 = 0;
   Float_t isGlobal_2 = 0;
   Float_t isGlobal_3 = 0;
   Float_t isGlobal_4 = 0;

   Float_t isPF_1 = 0;
   Float_t isPF_2 = 0;
   Float_t isPF_3 = 0;
   Float_t isPF_4 = 0;

   Float_t JetDR_1 = 0;
   Float_t JetDR_2 = 0;
   Float_t JetDR_3 = 0;
   Float_t JetDR_4 = 0;

   Float_t idRawMva_1=0;
   Float_t idRawMva_2=0;
   Float_t idRawMva_3=0;
   Float_t idRawMva_4=0;

   Float_t Mass_1_3 = 0;
   Float_t Mass_1_4 = 0;
   Float_t Mass_2_3 = 0;
   Float_t Mass_2_4 = 0;

   Float_t SS_1_3 = 0;
   Float_t SS_1_4 = 0;
   Float_t SS_2_3 = 0;
   Float_t SS_2_4 = 0;

   Float_t ZTTGenMatching_1 =0;
   Float_t ZTTGenMatching_2 =0;
   Float_t ZTTGenMatching_3 =0;
   Float_t ZTTGenMatching_4 =0;

   Float_t Closest_ZEE=0;
   Float_t Closest_ZMM=0;
   //Float_t Closest_ZEEPlus=0;
   //Float_t Closest_ZMMPlus=0;
   //Float_t Closest_ZEEPlus2=0;
   //Float_t Closest_ZMMPlus2=0;

   Float_t genMass_1=0;
   Float_t m_1=0;
   Float_t m_2=0;
   Float_t m_3=0;
   Float_t m_4=0;
   Float_t JetEtaEtaMoment_1=0;
   Float_t JetEtaPhiMoment_1=0;
   Float_t JetPhiPhiMoment_1=0;
   Float_t JetEtaEtaMoment_2=0;
   Float_t JetEtaPhiMoment_2=0;
   Float_t JetPhiPhiMoment_2=0;
   Float_t JetEtaEtaMoment_3=0;
   Float_t JetEtaPhiMoment_3=0;
   Float_t JetPhiPhiMoment_3=0;
   Float_t JetEtaEtaMoment_4=0;
   Float_t JetEtaPhiMoment_4=0;
   Float_t JetPhiPhiMoment_4=0;
   
   cout<<"RUNNING SAMPLE "<<SampleName<<"runchannel CHANNEL EETT"<<endl;
   TString fullName = SampleName+"EETT.root";
   TFile *fileout=new TFile(fullName,"RECREATE");
   TTree* Ntuple = new TTree ("Ntuple","SampleName tree");

   Ntuple -> Branch("H_Phi", &H_Phi);
   Ntuple -> Branch("H_Eta", &H_Eta);
   Ntuple -> Branch("Z_Phi", &Z_Phi);
   Ntuple -> Branch("Z_Eta", &Z_Eta);
   
   Ntuple -> Branch("m_vis", &m_vis);
   Ntuple -> Branch("Z_Pt",  &Z_Pt);
   Ntuple -> Branch("H_Pt",  &H_Pt);
   Ntuple -> Branch("H_vis", &H_vis);
   Ntuple -> Branch("Mass",  &Mass_1);
   Ntuple -> Branch("Z_DR",  &Z_DR);
   Ntuple -> Branch("H_DR",  &H_DR);
   Ntuple -> Branch("H_charge",  &H_charge);
   Ntuple -> Branch("rho",   &rho_1);
   Ntuple -> Branch("npv",   &npv);
   Ntuple -> Branch("npu",   &npu);
   Ntuple -> Branch("lumi",  &lumi_1);
   Ntuple -> Branch("evt",   &evt_1);
   
   Ntuple -> Branch("pt_1",  &pt_1);
   Ntuple -> Branch("pt_2",  &pt_2);
   Ntuple -> Branch("pt_3",  &pt_3);
   Ntuple -> Branch("pt_4",  &pt_4);
   
   Ntuple -> Branch("eta_1",  &eta_1);
   Ntuple -> Branch("eta_2",  &eta_2);
   Ntuple -> Branch("eta_3",  &eta_3);
   Ntuple -> Branch("eta_4",  &eta_4);
   
   Ntuple -> Branch("phi_1",  &phi_1);
   Ntuple -> Branch("phi_2",  &phi_2);
   Ntuple -> Branch("phi_3",  &phi_3);
   Ntuple -> Branch("phi_4",  &phi_4);
     // extra var
   Ntuple -> Branch("Njets20", &Njets20);
   Ntuple -> Branch("Njets30", &Njets30);
   Ntuple -> Branch("ZLPT", &ZLPT);
   Ntuple -> Branch("HLPT", &HLPT);
   Ntuple -> Branch("TotalLPT", &TotalLPT);
   Ntuple -> Branch("mt_vis", &mt_vis);
   Ntuple -> Branch("H_visMt", &H_visMt);
   Ntuple -> Branch("IsoDB_1", &IsoDB_1);
   Ntuple -> Branch("IsoDB_2", &IsoDB_2);
   Ntuple -> Branch("IsoDB_3", &IsoDB_3);
   Ntuple -> Branch("IsoDB_4", &IsoDB_4);

   Ntuple -> Branch("Jetpt_1", &Jetpt_1);
   Ntuple -> Branch("Jetpt_2", &Jetpt_2);
   Ntuple -> Branch("Jetpt_3", &Jetpt_3);
   Ntuple -> Branch("Jetpt_4", &Jetpt_4);
   Ntuple -> Branch("ZdPhi",   &ZdPhi);
   //Ntuple -> Branch("ZdEta",&ZdEta);
   Ntuple -> Branch("TotalMt",&TotalMt);
   Ntuple -> Branch("vbfdEta",&vbfdEta);
   Ntuple -> Branch("vbfdPhi",&vbfdPhi);
   Ntuple -> Branch("RelIsoDB_1",&RelIsoDB_1);
   Ntuple -> Branch("RelIsoDB_2",&RelIsoDB_2);
   Ntuple -> Branch("RelIsoDB_3",&RelIsoDB_3);
   Ntuple -> Branch("RelIsoDB_4",&RelIsoDB_4);
   
   Ntuple -> Branch("PVDXY_1",&PVDXY_1);
   Ntuple -> Branch("PVDXY_2",&PVDXY_2);
   Ntuple -> Branch("PVDXY_3",&PVDXY_3);
   Ntuple -> Branch("PVDXY_4",&PVDXY_4);
   Ntuple -> Branch("PVDZ_1",&PVDZ_1);
   Ntuple -> Branch("PVDZ_2",&PVDZ_2);
   Ntuple -> Branch("PVDZ_3",&PVDZ_3);
   Ntuple -> Branch("PVDZ_4",&PVDZ_4);

   Ntuple -> Branch("pfMetEt",&pfMetEt);
   Ntuple -> Branch("pfMetPhi",&pfMetPhi);
   Ntuple -> Branch("recoilMet",&recoilMet);
   
   Ntuple -> Branch("IDLoose_1",&IDLoose_1);
   Ntuple -> Branch("IDLoose_2",&IDLoose_2);
   Ntuple -> Branch("IDLoose_3",&IDLoose_3);
   Ntuple -> Branch("IDLoose_4",&IDLoose_4);

   Ntuple -> Branch("IDMedium_1",&IDMedium_1);
   Ntuple -> Branch("IDMedium_2",&IDMedium_2);
   Ntuple -> Branch("IDMedium_3",&IDMedium_3);
   Ntuple -> Branch("IDMedium_4",&IDMedium_4);

   Ntuple -> Branch("IDTight_1",&IDTight_1);
   Ntuple -> Branch("IDTight_2",&IDTight_2);
   Ntuple -> Branch("IDTight_3",&IDTight_3);
   Ntuple -> Branch("IDTight_4",&IDTight_4);
   
   Ntuple -> Branch("Z_MvaMet",&Z_MvaMet);
   Ntuple -> Branch("H_MvaMet",&H_MvaMet);

   Ntuple -> Branch("MtToPfMet_1",&MtToPfMet_1);
   Ntuple -> Branch("MtToPfMet_2",&MtToPfMet_2);
   Ntuple -> Branch("MtToPfMet_3",&MtToPfMet_3);
   Ntuple -> Branch("MtToPfMet_4",&MtToPfMet_4);

   Ntuple -> Branch("costhetastar_1_2",&costhetastar_1_2);
   Ntuple -> Branch("costhetastar_1_3",&costhetastar_1_3);
   Ntuple -> Branch("costhetastar_1_4",&costhetastar_1_4);
   Ntuple -> Branch("costhetastar_2_3",&costhetastar_2_3);
   Ntuple -> Branch("costhetastar_2_4",&costhetastar_2_4);
   Ntuple -> Branch("costhetastar_3_4",&costhetastar_3_4);

   Ntuple -> Branch("MvaMetCovMatrix00_1_2",&MvaMetCovMatrix00_1_2);
   Ntuple -> Branch("MvaMetCovMatrix01_1_2",&MvaMetCovMatrix01_1_2);
   Ntuple -> Branch("MvaMetCovMatrix10_1_2",&MvaMetCovMatrix10_1_2);
   Ntuple -> Branch("MvaMetCovMatrix11_1_2",&MvaMetCovMatrix11_1_2);
   
   Ntuple -> Branch("MvaMetCovMatrix00_1_3",&MvaMetCovMatrix00_1_3);
   Ntuple -> Branch("MvaMetCovMatrix01_1_3",&MvaMetCovMatrix01_1_3);
   Ntuple -> Branch("MvaMetCovMatrix10_1_3",&MvaMetCovMatrix10_1_3);
   Ntuple -> Branch("MvaMetCovMatrix11_1_3",&MvaMetCovMatrix11_1_3);

   Ntuple -> Branch("MvaMetCovMatrix00_1_4",&MvaMetCovMatrix00_1_4);
   Ntuple -> Branch("MvaMetCovMatrix01_1_4",&MvaMetCovMatrix01_1_4);
   Ntuple -> Branch("MvaMetCovMatrix10_1_4",&MvaMetCovMatrix10_1_4);
   Ntuple -> Branch("MvaMetCovMatrix11_1_4",&MvaMetCovMatrix11_1_4);

   Ntuple -> Branch("MvaMetCovMatrix00_2_3",&MvaMetCovMatrix00_2_3);
   Ntuple -> Branch("MvaMetCovMatrix01_2_3",&MvaMetCovMatrix01_2_3);
   Ntuple -> Branch("MvaMetCovMatrix10_2_3",&MvaMetCovMatrix10_2_3);
   Ntuple -> Branch("MvaMetCovMatrix11_2_3",&MvaMetCovMatrix11_2_3);
   
   Ntuple -> Branch("MvaMetCovMatrix00_2_4",&MvaMetCovMatrix00_2_4);
   Ntuple -> Branch("MvaMetCovMatrix01_2_4",&MvaMetCovMatrix01_2_4);
   Ntuple -> Branch("MvaMetCovMatrix10_2_4",&MvaMetCovMatrix10_2_4);
   Ntuple -> Branch("MvaMetCovMatrix11_2_4",&MvaMetCovMatrix11_2_4);

   Ntuple -> Branch("MvaMetCovMatrix00_3_4",&MvaMetCovMatrix00_3_4);
   Ntuple -> Branch("MvaMetCovMatrix01_3_4",&MvaMetCovMatrix01_3_4);
   Ntuple -> Branch("MvaMetCovMatrix10_3_4",&MvaMetCovMatrix10_3_4);
   Ntuple -> Branch("MvaMetCovMatrix11_3_4",&MvaMetCovMatrix11_3_4);

   Ntuple -> Branch("HadronicOverEM_1",&HadronicOverEM_1);
   Ntuple -> Branch("HadronicOverEM_2",&HadronicOverEM_2);
   Ntuple -> Branch("HadronicOverEM_3",&HadronicOverEM_3);
   Ntuple -> Branch("HadronicOverEM_4",&HadronicOverEM_4);

   Ntuple -> Branch("metcov00",&metcov00_1);
   Ntuple -> Branch("metcov01",&metcov01_1);
   Ntuple -> Branch("metcov10",&metcov10_1);
   Ntuple -> Branch("metcov11",&metcov11_1);

   Ntuple -> Branch("Charge_1",&Charge_1);
   Ntuple -> Branch("ChargeIdLoose_1",&ChargeIdLoose_1);
   Ntuple -> Branch("ChargeIdMed_1",&ChargeIdMed_1);
   Ntuple -> Branch("ChargeIdTight_1",&ChargeIdTight_1);
   
   Ntuple -> Branch("PFChargedIso_1",&PFChargedIso_1);
   Ntuple -> Branch("PFNeutralIso_1",&PFNeutralIso_1);
   Ntuple -> Branch("PFPUChargedIso_1",&PFPUChargedIso_1);
   Ntuple -> Branch("PFPhotonIso_1",&PFPhotonIso_1);
   
   Ntuple -> Branch("Charge_2",&Charge_2);
   Ntuple -> Branch("ChargeIdLoose_2",&ChargeIdLoose_2);
   Ntuple -> Branch("ChargeIdMed_2",&ChargeIdMed_2);
   Ntuple -> Branch("ChargeIdTight_2",&ChargeIdTight_2);
   
   Ntuple -> Branch("PFChargedIso_2",&PFChargedIso_2);
   Ntuple -> Branch("PFNeutralIso_2",&PFNeutralIso_2);
   Ntuple -> Branch("PFPUChargedIso_2",&PFPUChargedIso_2);
   Ntuple -> Branch("PFPhotonIso_2",&PFPhotonIso_2);
   
   Ntuple -> Branch("Charge_3",&Charge_3);
   Ntuple -> Branch("ChargeIdLoose_3",&ChargeIdLoose_3);
   Ntuple -> Branch("ChargeIdMed_3",&ChargeIdMed_3);
   Ntuple -> Branch("ChargeIdTight_3",&ChargeIdTight_3);
   
   Ntuple -> Branch("PFChargedIso_3",&PFChargedIso_3);
   Ntuple -> Branch("PFNeutralIso_3",&PFNeutralIso_3);
   Ntuple -> Branch("PFPUChargedIso_3",&PFPUChargedIso_3);
    Ntuple -> Branch("PFPhotonIso_3",&PFPhotonIso_3);
   
   Ntuple -> Branch("Charge_4",&Charge_4);
   Ntuple -> Branch("ChargeIdLoose_4",&ChargeIdLoose_4);
   Ntuple -> Branch("ChargeIdMed_4",&ChargeIdMed_4);
   Ntuple -> Branch("ChargeIdTight_4",&ChargeIdTight_4);
   
   Ntuple -> Branch("PFChargedIso_4",&PFChargedIso_4);
   Ntuple -> Branch("PFNeutralIso_4",&PFNeutralIso_4);
   Ntuple -> Branch("PFPUChargedIso_4",&PFPUChargedIso_4);
   Ntuple -> Branch("PFPhotonIso_4",&PFPhotonIso_4);

   Ntuple -> Branch("GenWeight",&GenWeight_1);

   Ntuple -> Branch("DR_1_3",&DR_1_3);
   Ntuple -> Branch("DR_1_4",&DR_1_4);
   Ntuple -> Branch("DR_2_3",&DR_2_3);
   Ntuple -> Branch("DR_2_4",&DR_2_4);

   Ntuple -> Branch("isTracker_1",&isTracker_1);
   Ntuple -> Branch("isTracker_2",&isTracker_2);
   Ntuple -> Branch("isTracker_3",&isTracker_3);
   Ntuple -> Branch("isTracker_4",&isTracker_4);

   Ntuple -> Branch("isGlobal_1",&isGlobal_1);
   Ntuple -> Branch("isGlobal_2",&isGlobal_2);
   Ntuple -> Branch("isGlobal_3",&isGlobal_3);
   Ntuple -> Branch("isGlobal_4",&isGlobal_4);

   Ntuple -> Branch("isPF_1",&isPF_1);
   Ntuple -> Branch("isPF_2",&isPF_2);
   Ntuple -> Branch("isPF_3",&isPF_3);
   Ntuple -> Branch("isPF_4",&isPF_4);

   Ntuple -> Branch("JetDR_1",&JetDR_1);
   Ntuple -> Branch("JetDR_2",&JetDR_2);
   Ntuple -> Branch("JetDR_3",&JetDR_3);
   Ntuple -> Branch("JetDR_4",&JetDR_4);
   Ntuple -> Branch("run",&run_1);
   Ntuple -> Branch("idRawMva_1",&idRawMva_1);
   Ntuple -> Branch("idRawMva_2",&idRawMva_2);
   Ntuple -> Branch("idRawMva_3",&idRawMva_3);
   Ntuple -> Branch("idRawMva_4",&idRawMva_4);

   Ntuple -> Branch("Mass_1_3",&Mass_1_3);
   Ntuple -> Branch("Mass_1_4",&Mass_1_4);
   Ntuple -> Branch("Mass_2_3",&Mass_2_3);
   Ntuple -> Branch("Mass_2_4",&Mass_2_4);

   Ntuple -> Branch("SS_1_3",&SS_1_3);
   Ntuple -> Branch("SS_1_4",&SS_1_4);
   Ntuple -> Branch("SS_2_3",&SS_2_3);
   Ntuple -> Branch("SS_2_4",&SS_2_4);

   Ntuple -> Branch("ZTTGenMatching_1",&ZTTGenMatching_1);
   Ntuple -> Branch("ZTTGenMatching_2",&ZTTGenMatching_2);
   Ntuple -> Branch("ZTTGenMatching_3",&ZTTGenMatching_3);
   Ntuple -> Branch("ZTTGenMatching_4",&ZTTGenMatching_4);

   Ntuple -> Branch("Closest_ZEE",&Closest_ZEE);
   Ntuple -> Branch("Closest_ZMM",&Closest_ZMM); 
   //Ntuple -> Branch("Closest_ZEEPlus",&Closest_ZEEPlus);
   //Ntuple -> Branch("Closest_ZMMPlus",&Closest_ZMMPlus);
   //Ntuple -> Branch("Closest_ZEEPlus2",&Closest_ZEEPlus2);
   //Ntuple -> Branch("Closest_ZMMPlus2",&Closest_ZMMPlus2);

    Ntuple -> Branch("genMass",&genMass_1);
   Ntuple -> Branch("m_1",&m_1);
   Ntuple -> Branch("m_2",&m_2);
   Ntuple -> Branch("m_3",&m_3);
   Ntuple -> Branch("m_4",&m_4);    

   Ntuple -> Branch("JetEtaEtaMoment_1",&JetEtaEtaMoment_1);
   Ntuple -> Branch("JetEtaPhiMoment_1",&JetEtaPhiMoment_1);
   Ntuple -> Branch("JetPhiPhiMoment_1",&JetPhiPhiMoment_1);
   Ntuple -> Branch("JetEtaEtaMoment_2",&JetEtaEtaMoment_2);
   Ntuple -> Branch("JetEtaPhiMoment_2",&JetEtaPhiMoment_2);
   Ntuple -> Branch("JetPhiPhiMoment_2",&JetPhiPhiMoment_2);
   Ntuple -> Branch("JetEtaEtaMoment_3",&JetEtaEtaMoment_3);
   Ntuple -> Branch("JetEtaPhiMoment_3",&JetEtaPhiMoment_3);
   Ntuple -> Branch("JetPhiPhiMoment_3",&JetPhiPhiMoment_3);
   Ntuple -> Branch("JetEtaEtaMoment_4",&JetEtaEtaMoment_4);
   Ntuple -> Branch("JetEtaPhiMoment_4",&JetEtaPhiMoment_4);
   Ntuple -> Branch("JetPhiPhiMoment_4",&JetPhiPhiMoment_4);

   int count = 0;
   
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      if (jentry%10000 == 0) cout << "Analysed " << jentry << " events"<<endl;
     
      // if (Cut(ientry) < 0) continue;

      if (e1_e2_SS != 0 ) continue; 
      if ((e1_e2_Mass < 60.0 || e1_e2_Mass > 120.0)) continue;
      if (eVetoAZHdR0>2 || muVetoAZHdR0 != 0) continue;
      if (doubleE_23_12Pass <= 0) continue;

      if(abs(e1Eta) >= 2.5 || abs(e1PVDXY)>=0.045 || abs(e1PVDZ)>=0.2 || e1PassesConversionVeto <= 0.5 || e1MissingHits >= 2 || e1_t1_DR <= 0.5 || e1_t2_DR <= 0.5 ) continue;

      if(abs(e2Eta) >= 2.5 || abs(e2PVDXY)>=0.045 || abs(e2PVDZ) >= 0.2 || e2PassesConversionVeto <= 0.5 || e2MissingHits >= 2 || e2_t1_DR <= 0.5 || e2_t2_DR <= 0.5) continue; 
           
      if(abs(t1Eta) >= 2.3  ||  t1Pt <= 19 || abs(t1PVDZ)>=0.2 || t1DecayModeFinding !=1 || t1AgainstElectronVLooseMVA6 !=1 || t1AgainstMuonLoose3 !=1 || abs(t1Charge) != 1 || t1_t2_DR <= 0.5 ) continue;
      
      if(abs(t2Eta) >= 2.3  ||  t2Pt <= 19 || abs(t2PVDZ)>=0.2 || t2DecayModeFinding !=1 || t2AgainstElectronVLooseMVA6 !=1 || t2AgainstMuonLoose3 !=1 || abs(t2Charge) != 1) continue; 

      
      aParticle.s_e1_Pt =e1Pt;
      aParticle.s_e2_Pt =e2Pt;
        
      aParticle.s_e1_MatchesDoubleE23_12Path=e1MatchesDoubleE23_12Path;
      aParticle.s_e2_MatchesDoubleE23_12Path=e2MatchesDoubleE23_12Path;
      aParticle.s_e1_MatchesDoubleE23_12Filter=e1MatchesDoubleE23_12Filter;
      aParticle.s_e2_MatchesDoubleE23_12Filter=e2MatchesDoubleE23_12Filter;
              
      if (!(EETT_ZEESelection(aParticle))) continue;
      
      count = count +1 ;

      H_Phi=t1_t2_Phi;
      H_Eta=t1_t2_Eta;
      Z_Phi=e1_e2_Phi;
      Z_Eta=e1_e2_Eta;
      
     m_vis=e1_e2_Mass;
     Z_Pt=e1_e2_Pt;
     Z_DR=e1_e2_DR;

      //H_var
     H_vis=t1_t2_Mass; 	
     H_Pt=t1_t2_Pt; 	 
     H_DR=t1_t2_DR;
     H_charge=t1_t2_SS;
     // A_var
     Mass_1=Mass;

  // leptons var
     pt_1=e1Pt;
     pt_2=e2Pt;
     pt_3=t1Pt;
     pt_4=t2Pt;
     eta_1=e1Eta;
     eta_2=e2Eta;
     eta_3=t1Eta;
     eta_4=t2Eta;

     phi_1=e1Phi;
     phi_2=e2Phi;
     phi_3=t1Phi;
     phi_4=t2Phi;
     
     Njets20=vbfNJets20;
     Njets30=vbfNJets30;
     
     TotalLPT=e1Pt+e2Pt+t1Pt+t2Pt;
     ZLPT=e1Pt+e2Pt;
     HLPT=t1Pt+t2Pt;
     mt_vis=e1_e2_Mt;
     H_visMt=t1_t2_Mt;
     IsoDB_1=e1IsoDB03;
     IsoDB_2=e2IsoDB03;
     IsoDB_3=t1ByIsolationMVArun2v1DBoldDMwLTraw;
     IsoDB_4=t2ByIsolationMVArun2v1DBoldDMwLTraw;

     Jetpt_1=e1JetPt;
     Jetpt_2=e2JetPt;
     Jetpt_3=t1JetPt;
     Jetpt_4=t2JetPt;
     ZdPhi  =e1_e2_DPhi;
     TotalMt =Mt;
     vbfdEta =vbfDeta;
     vbfdPhi =vbfDphi;
     RelIsoDB_1=e1RelPFIsoDB;
     RelIsoDB_2=e2RelPFIsoDB;
     RelIsoDB_3=-999.0;
     RelIsoDB_4=-999.0;
     
     // Event ID Var 	 
     run_1=run;
     lumi_1 = lumi; 	 
     evt_1 = evt; 	 
     // Pile Up Var 	 
     npv = nvtx;
     npu = nTruePU;
     rho_1 = rho;

     PVDXY_1 =e1PVDXY;
     PVDXY_2 =e2PVDXY;
     PVDXY_3 =t1PVDXY;
     PVDXY_4 =t2PVDXY;
     PVDZ_1 =e1PVDZ;
     PVDZ_2 =e2PVDZ;
     PVDZ_3 =t1PVDZ;
     PVDZ_4 =t2PVDZ;

      
     pfMetEt  =type1_pfMetEt;
     pfMetPhi =type1_pfMetPhi;
     recoilMet=recoilMet;

     Z_MvaMet=e1_e2_MvaMet;
     H_MvaMet=t1_t2_MvaMet;
     
     IDLoose_1=e1MVANonTrigWP90;
     IDLoose_2=e2MVANonTrigWP90;
     IDLoose_3=t1ByLooseIsolationMVArun2v1DBoldDMwLT;
     IDLoose_4=t2ByLooseIsolationMVArun2v1DBoldDMwLT;

     IDMedium_1=e1MVATrigWP90;
     IDMedium_2=e2MVATrigWP90;
     IDMedium_3=t1ByMediumIsolationMVArun2v1DBoldDMwLT;
     IDMedium_4=t2ByMediumIsolationMVArun2v1DBoldDMwLT;

     IDTight_1=e1MVANonTrigWP80;
     IDTight_2=e2MVANonTrigWP80;
     IDTight_3=t1ByTightIsolationMVArun2v1DBoldDMwLT;
     IDTight_4=t2ByTightIsolationMVArun2v1DBoldDMwLT;

          
     MtToPfMet_1=e1MtToPfMet_type1;
     MtToPfMet_2=e2MtToPfMet_type1;
     MtToPfMet_3=t1MtToPfMet_type1;
     MtToPfMet_4=t2MtToPfMet_type1;

     costhetastar_1_2 =e1_e2_CosThetaStar;
     costhetastar_1_3 =e1_t1_CosThetaStar;
     costhetastar_1_4 =e1_t2_CosThetaStar;
     costhetastar_2_3 =e2_t1_CosThetaStar;
     costhetastar_2_4 =e2_t2_CosThetaStar;
     costhetastar_3_4 =t1_t2_CosThetaStar;

     MvaMetCovMatrix00_1_2= e1_e2_MvaMetCovMatrix00;
     MvaMetCovMatrix01_1_2= e1_e2_MvaMetCovMatrix01;
     MvaMetCovMatrix10_1_2= e1_e2_MvaMetCovMatrix10;
     MvaMetCovMatrix11_1_2= e1_e2_MvaMetCovMatrix11;
     
     MvaMetCovMatrix00_1_3= e1_t1_MvaMetCovMatrix00;
     MvaMetCovMatrix01_1_3= e1_t1_MvaMetCovMatrix01;
     MvaMetCovMatrix10_1_3= e1_t1_MvaMetCovMatrix10;
     MvaMetCovMatrix11_1_3= e1_t1_MvaMetCovMatrix11;
	
     MvaMetCovMatrix00_1_4= e1_t2_MvaMetCovMatrix00;
     MvaMetCovMatrix01_1_4= e1_t2_MvaMetCovMatrix01;
     MvaMetCovMatrix10_1_4= e1_t2_MvaMetCovMatrix10;
     MvaMetCovMatrix11_1_4= e1_t2_MvaMetCovMatrix11;
      
     MvaMetCovMatrix00_2_3= e2_t1_MvaMetCovMatrix00;
     MvaMetCovMatrix01_2_3= e2_t1_MvaMetCovMatrix01;
     MvaMetCovMatrix10_2_3= e2_t1_MvaMetCovMatrix10;
     MvaMetCovMatrix11_2_3= e2_t1_MvaMetCovMatrix11;
      
     MvaMetCovMatrix00_2_4= e2_t2_MvaMetCovMatrix00;
     MvaMetCovMatrix01_2_4= e2_t2_MvaMetCovMatrix01;
     MvaMetCovMatrix10_2_4= e2_t2_MvaMetCovMatrix10;
     MvaMetCovMatrix11_2_4= e2_t2_MvaMetCovMatrix11;
	
     MvaMetCovMatrix00_3_4= t1_t2_MvaMetCovMatrix00;
     MvaMetCovMatrix01_3_4= t1_t2_MvaMetCovMatrix01;
     MvaMetCovMatrix10_3_4= t1_t2_MvaMetCovMatrix10;
     MvaMetCovMatrix11_3_4= t1_t2_MvaMetCovMatrix11;

     HadronicOverEM_1 = e1HadronicOverEM;
     HadronicOverEM_2 = e2HadronicOverEM;
     HadronicOverEM_3 = -9999;
     HadronicOverEM_4 = -9999.;

     metcov00_1 = metcov00;
     metcov01_1 = metcov01;
     metcov10_1 = metcov10;
     metcov11_1 = metcov11;
     
     Charge_1 = e1Charge;
     ChargeIdLoose_1 = e1ChargeIdLoose;
     ChargeIdMed_1 = e1ChargeIdMed;
     ChargeIdTight_1 = e1ChargeIdTight;
     
     PFChargedIso_1 = e1PFChargedIso;
     PFNeutralIso_1 = e1PFNeutralIso;
     PFPUChargedIso_1 = e1PFPUChargedIso;
     PFPhotonIso_1 = e1PFPhotonIso;
     
     Charge_2 = e2Charge;
     ChargeIdLoose_2 = e2ChargeIdLoose;
     ChargeIdMed_2 = e2ChargeIdMed;
     ChargeIdTight_2 = e2ChargeIdTight;
     
     PFChargedIso_2 = e2PFChargedIso;
     PFNeutralIso_2 = e2PFNeutralIso;
     PFPUChargedIso_2 = e2PFPUChargedIso;
     PFPhotonIso_2 = e2PFPhotonIso;

     Charge_3 = t1Charge;
     ChargeIdLoose_3 = -9999.0;
     ChargeIdMed_3 = -9999.0;
     ChargeIdTight_3 = -9999.0;
     
     PFChargedIso_3 = -9999;
     PFNeutralIso_3 = t1NeutralIsoPtSum;
     PFPUChargedIso_3 = -9999;
     PFPhotonIso_3 = -9999;
               
     Charge_4 = t2Charge;
     ChargeIdLoose_4 = -9999.0;
     ChargeIdMed_4 = -9999.0;
     ChargeIdTight_4 = -9999.0;
     
     PFChargedIso_4 = -9999;
     PFNeutralIso_4 = t2NeutralIsoPtSum;
     PFPUChargedIso_4 = -9999;
     PFPhotonIso_4 = -9999;
     GenWeight_1 = GenWeight;

     DR_1_3 = e1_t1_DR;
     DR_1_4 = e1_t2_DR;
     DR_2_3 = e2_t1_DR;
     DR_2_4 = e2_t2_DR;

     isTracker_1 = 1;
     isTracker_2 = 1;
     isTracker_3 = 1;
     isTracker_4 = 1;

     isGlobal_1 = 1;
     isGlobal_2 = 1;
     isGlobal_3 = 1;
     isGlobal_4 = 1;

     isPF_1 = 1;
     isPF_2 = 1;
     isPF_3 = 1;
     isPF_4 = 1;

     JetDR_1 = e1JetDR;
     JetDR_2 = e2JetDR;
     JetDR_3 = t1JetDR;
     JetDR_4 = t2JetDR;

     idRawMva_1=e1MVANonTrigID;
     idRawMva_2=e2MVANonTrigID;	
     idRawMva_3=-999;
     idRawMva_4=-999;

     Mass_1_3 = e1_t1_Mass;
     Mass_1_4 = e1_t2_Mass;
     Mass_2_3 = e2_t1_Mass;	
     Mass_2_4 = e2_t2_Mass;

     SS_1_3 = e1_t1_SS;
     SS_1_4 = e1_t2_SS;
     SS_2_3 = e2_t1_SS;	
     SS_2_4 = e2_t2_SS;
     
     ZTTGenMatching_1=e1ZTTGenMatching;
     ZTTGenMatching_2=e2ZTTGenMatching;
     ZTTGenMatching_3=t1ZTTGenMatching;
     ZTTGenMatching_4=t2ZTTGenMatching;

     Closest_ZEE=closestMassZEE;
     Closest_ZMM=closestMassZMM;
     //Closest_ZEEPlus=closestMassZEEPlus;
     //Closest_ZMMPlus=closestMassZMMPlus;
     //Closest_ZEEPlus2=closestMassZEEPlus;
     //Closest_ZMMPlus2=closestMassZMMPlus2;

     genMass_1=genMass;
     m_1=e1Mass;
     m_2=e2Mass;
     m_3=t1Mass;
     m_4=t2Mass;
     JetEtaEtaMoment_1=e1JetEtaEtaMoment;
     JetEtaPhiMoment_1=e1JetEtaPhiMoment;
     JetPhiPhiMoment_1=e1JetPhiPhiMoment;
     JetEtaEtaMoment_2=e2JetEtaEtaMoment;
     JetEtaPhiMoment_2=e2JetEtaPhiMoment;
     JetPhiPhiMoment_2=e2JetPhiPhiMoment;
     JetEtaEtaMoment_3=t1JetEtaEtaMoment;
     JetEtaPhiMoment_3=t1JetEtaPhiMoment;
     JetPhiPhiMoment_3=t1JetPhiPhiMoment;
     JetEtaEtaMoment_4=t2JetEtaEtaMoment;
     JetEtaPhiMoment_4=t2JetEtaPhiMoment;
     JetPhiPhiMoment_4=t2JetPhiPhiMoment;
     
     Ntuple ->Fill();
   }
   fileout->Write();
   fileout->Close();
   
   cout<<"count = "<<count<<endl;
}

bool runchannelEETT::EETT_ZEESelection(EETT_PartInfo aParticle)
{
  
  bool eeeTrig = false;
    
  if (aParticle.s_e1_MatchesDoubleE23_12Path > 0 &&  aParticle.s_e1_MatchesDoubleE23_12Filter > 0 && aParticle.s_e2_MatchesDoubleE23_12Path > 0 && aParticle.s_e2_MatchesDoubleE23_12Filter > 0 && ((aParticle.s_e1_Pt > 24 && aParticle.s_e2_Pt > 13) || (aParticle.s_e1_Pt > 13 && aParticle.s_e2_Pt > 24))) {eeeTrig=true;}  
  if (!(eeeTrig)) return false;
      
  return true ;
}



