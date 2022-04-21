#include "config.h"
#include <stdio.h>
#include <string.h>
#if (MACHINE==ATARI)
   #include <tos.h>
   #include <ext.h>
#endif
#if (MACHINE==SH3)||(MACHINE==GNU_PC)
//   #include "atariext.h"
#endif
#if (MACHINE==GNU_PC)
   #include <stddef.h>
#endif

#include <sys/time.h>
#include "typedefs.h"
#include "midi.h"
#include "perf.h"
#if (MACHINE==GNU_PC)
   #include "a_system.h"
//   #include "midi_w32api.h"
   #include "sys/time.h"
#endif
extern int   DebugMode;

typedef struct tt_perfcommon {
   UINT8  ExclStat_____;
   UINT8  ManuID_______;
   UINT8  DeviceID_____;
   UINT8  ModelID______;
   UINT8  CmdID________;
   UINT8  Adress3______;
   UINT8  Adress2______;
   UINT8  Adress1______;
   UINT8  Adress0______;
   UINT8  PerfName1____;
   UINT8  PerfName2____;
   UINT8  PerfName3____;
   UINT8  PerfName4____;
   UINT8  PerfName5____;
   UINT8  PerfName6____;
   UINT8  PerfName7____;
   UINT8  PerfName8____;
   UINT8  PerfName9____;
   UINT8  PerfName10___;
   UINT8  PerfName11___;
   UINT8  PerfName12___;
   UINT8  EFXSource____;
   UINT8  EFXType______;
   UINT8  EFXPar1______;
   UINT8  EFXPar2______;
   UINT8  EFXPar3______;
   UINT8  EFXPar4______;
   UINT8  EFXPar5______;
   UINT8  EFXPar6______;
   UINT8  EFXPar7______;
   UINT8  EFXPar8______;
   UINT8  EFXPar9______;
   UINT8  EFXPar10_____;
   UINT8  EFXPar11_____;
   UINT8  EFXPar12_____;
   UINT8  EFXOutAss____;
   UINT8  EFXOutLev____;
   UINT8  EFXChSendLev_;
   UINT8  EFXRevSendLev;
   UINT8  EFXCtrlS1____;
   UINT8  EFXCtrlD1____;
   UINT8  EFXCtrlS2____;
   UINT8  EFXCtrlD2____;
   UINT8  ChorLev______;
   UINT8  ChorRate_____;
   UINT8  ChorDepth____;
   UINT8  ChorPreDel___;
   UINT8  ChorFdback___;
   UINT8  ChorOutAss___;
   UINT8  RevType______;
   UINT8  RevLevel_____;
   UINT8  RevTime______;
   UINT8  RevHFDamp____;
   UINT8  RevFdback____;
   UINT8  DefTempo1____;
   UINT8  DefTempo2____;
   UINT8  KeyRngSw_____;
   UINT8  PartVceRes1__;
   UINT8  PartVceRes2__;
   UINT8  PartVceRes3__;
   UINT8  PartVceRes4__;
   UINT8  PartVceRes5__;
   UINT8  PartVceRes6__;
   UINT8  PartVceRes7__;
   UINT8  PartVceRes8__;
   UINT8  PartVceRes9__;
   UINT8  PartVceRes10_;
   UINT8  PartVceRes11_;
   UINT8  PartVceRes12_;
   UINT8  PartVceRes13_;
   UINT8  PartVceRes14_;
   UINT8  PartVceRes15_;
   UINT8  PartVceRes16_;
   UINT8  CheckSum_____;
   UINT8  EOX__________;
} t_perfcommon;
typedef struct tt_perfpart {
   UINT8  ExclStat_____;
   UINT8  ManuID_______;
   UINT8  DeviceID_____;
   UINT8  ModelID______;
   UINT8  CmdID________;
   UINT8  Adress3______;
   UINT8  Adress2______;
   UINT8  Adress1______;
   UINT8  Adress0______;
   UINT8  MidiRecSW____;
   UINT8  MidiCh_______;
   UINT8  PatchGrp_____;
   UINT8  PatchGrpID___;
   UINT8  PatchNum0____;
   UINT8  PatchNum1____;
   UINT8  PartLevel____;
   UINT8  PartPan______;
   UINT8  PitchCoar____;
   UINT8  PitchFine____;
   UINT8  OutAss_______;
   UINT8  OutLev_______;
   UINT8  ChSndLev_____;
   UINT8  RevSndLev____;
   UINT8  RecPgmChg____;
   UINT8  RecVol_______;
   UINT8  RecHold______;
   UINT8  KeyLow_______;
   UINT8  KeyHigh______;
   UINT8  CheckSum_____;
   UINT8  EOX__________;
} t_perfpart;
typedef struct tt_patchcommon {
   UINT8  ExclStat_____;
   UINT8  ManuID_______;
   UINT8  DeviceID_____;
   UINT8  ModelID______;
   UINT8  CmdID________;
   UINT8  Adress3______;
   UINT8  Adress2______;
   UINT8  Adress1______;
   UINT8  Adress0______;
   UINT8  PatchName1___;
   UINT8  PatchName2___;
   UINT8  PatchName3___;
   UINT8  PatchName4___;
   UINT8  PatchName5___;
   UINT8  PatchName6___;
   UINT8  PatchName7___;
   UINT8  PatchName8___;
   UINT8  PatchName9___;
   UINT8  PatchName10__;
   UINT8  PatchName11__;
   UINT8  PatchName12__;
   UINT8  EFXType______;
   UINT8  EFXPar1______;
   UINT8  EFXPar2______;
   UINT8  EFXPar3______;
   UINT8  EFXPar4______;
   UINT8  EFXPar5______;
   UINT8  EFXPar6______;
   UINT8  EFXPar7______;
   UINT8  EFXPar8______;
   UINT8  EFXPar9______;
   UINT8  EFXPar10_____;
   UINT8  EFXPar11_____;
   UINT8  EFXPar12_____;
   UINT8  EFXOutAss____;
   UINT8  EFXOutLev____;
   UINT8  EFXChSendLev_;
   UINT8  EFXRevSendLev;
   UINT8  EFXCtrlS1____;
   UINT8  EFXCtrlD1____;
   UINT8  EFXCtrlS2____;
   UINT8  EFXCtrlD2____;
   UINT8  ChorLev______;
   UINT8  ChorRate_____;
   UINT8  ChorDepth____;
   UINT8  ChorPreDel___;
   UINT8  ChorFdback___;
   UINT8  ChorOutAss___;
   UINT8  RevType______;
   UINT8  RevLevel_____;
   UINT8  RevTime______;
   UINT8  RevHFDamp____;
   UINT8  RevFdback____;
   UINT8  DefTempo1____;
   UINT8  DefTempo2____;
   UINT8  PatchLevel___;
   UINT8  PatchPan_____;
   UINT8  AnalogFeel___;
   UINT8  BendRngUp____;
   UINT8  BendRngDown__;
   UINT8  KeyAssMode___;
   UINT8  SoloLegato___;
   UINT8  PortaSw______;
   UINT8  PortaMode____;
   UINT8  PortaType____;
   UINT8  PortaStart___;
   UINT8  PortaTime____;
   UINT8  PtchCtrlSrc2_;
   UINT8  PtchCtrlSrc3_;
   UINT8  EFXCtrl_H_P__;
   UINT8  Ctrl1_H_P____;
   UINT8  Ctrl2_H_P____;
   UINT8  Ctrl3_H_P____;
   UINT8  VelRangeSw___;
   UINT8  OctaveSh_____;
   UINT8  StrTuneDepth_;
   UINT8  VoicePrio____;
   UINT8  StructType1_2;
   UINT8  BoostLevel1_2;
   UINT8  StructType3_4;
   UINT8  BoostLevel3_4;
   UINT8  CheckSum_____;
   UINT8  EOX__________;
} t_patchcommon;
typedef struct tt_patchtone {
   UINT8  ExclStat_____;
   UINT8  ManuID_______;
   UINT8  DeviceID_____;
   UINT8  ModelID______;
   UINT8  CmdID________;
   UINT8  Adress3______;
   UINT8  Adress2______;
   UINT8  Adress1______;
   UINT8  Adress0______;
   UINT8  ToneSW_______;
   UINT8  WaveGrp______;
   UINT8  WaveGrpId____;
   UINT8  WaveNumber1__;
   UINT8  WaveNumber2__;
   UINT8  WaveGain_____;
   UINT8  FXMswitch____;
   UINT8  FXMcolor_____;
   UINT8  FXMdepth_____;
   UINT8  ToneDelMode__;
   UINT8  ToneDelTime__;
   UINT8  VelCrossFade_;
   UINT8  VelRngLow____;
   UINT8  VelRngUp_____;
   UINT8  KeyRngLow____;
   UINT8  KeyRngUp_____;
   UINT8  RedamperSw___;
   UINT8  VolCtrlSw____;
   UINT8  Hold1CtrlSw__;
   UINT8  BendCtrlSw___;
   UINT8  PanCtrlSw____;
   UINT8  Ctrl1Dest1___;
   UINT8  Ctrl1Dpth1___;
   UINT8  Ctrl1Dest2___;
   UINT8  Ctrl1Dpth2___;
   UINT8  Ctrl1Dest3___;
   UINT8  Ctrl1Dpth3___;
   UINT8  Ctrl1Dest4___;
   UINT8  Ctrl1Dpth4___;
   UINT8  Ctrl2Dest1___;
   UINT8  Ctrl2Dpth1___;
   UINT8  Ctrl2Dest2___;
   UINT8  Ctrl2Dpth2___;
   UINT8  Ctrl2Dest3___;
   UINT8  Ctrl2Dpth3___;
   UINT8  Ctrl2Dest4___;
   UINT8  Ctrl2Dpth4___;
   UINT8  Ctrl3Dest1___;
   UINT8  Ctrl3Dpth1___;
   UINT8  Ctrl3Dest2___;
   UINT8  Ctrl3Dpth2___;
   UINT8  Ctrl3Dest3___;
   UINT8  Ctrl3Dpth3___;
   UINT8  Ctrl3Dest4___;
   UINT8  Ctrl3Dpth4___;
   UINT8  LFO1WaveForm_;
   UINT8  LFO1KeyTrig__;
   UINT8  LFO1Rate_____;
   UINT8  LFO1LevOffs__;
   UINT8  LFO1DelTime__;
   UINT8  LFO1FadeMode_;
   UINT8  LFO1FadeTime_;
   UINT8  LFO1ExtSync__;
   UINT8  LFO2WaveForm_;
   UINT8  LFO2KeyTrig__;
   UINT8  LFO2Rate_____;
   UINT8  LFO2LevOffs__;
   UINT8  LFO2DelTime__;
   UINT8  LFO2FadeMode_;
   UINT8  LFO2FadeTime_;
   UINT8  LFO2ExtSync__;
   UINT8  PtchCoarseTn_;
   UINT8  PtchFineTn___;
   UINT8  PtchRndDepth_;
   UINT8  PtchKeyFoll__;
   UINT8  PtchEnvDepth_;
   UINT8  PtchVelSens__;
   UINT8  PtchVelT1Sen_;
   UINT8  PtchVelT4Sen_;
   UINT8  PtchTimKeyFo_;
   UINT8  PtchTime1____;
   UINT8  PtchTime2____;
   UINT8  PtchTime3____;
   UINT8  PtchTime4____;
   UINT8  PtchLevel1___;
   UINT8  PtchLevel2___;
   UINT8  PtchLevel3___;
   UINT8  PtchLevel4___;
   UINT8  PtchLFO1Dpth_;
   UINT8  PtchLFO2Dpth_;
   UINT8  FltType______;
   UINT8  FltCutoffFrq_;
   UINT8  FltCutoffFol_;
   UINT8  FltResonance_;
   UINT8  FltResVelSns_;
   UINT8  FltEnvDepth__;
   UINT8  FltEnvVelCur_;
   UINT8  FltEnvVelSns_;
   UINT8  FltEnvVelT1__;
   UINT8  FltEnvVelT4__;
   UINT8  FltEnvTKeyFl_;
   UINT8  FltTime1_____;
   UINT8  FltTime2_____;
   UINT8  FltTime3_____;
   UINT8  FltTime4_____;
   UINT8  FltLevel1____;
   UINT8  FltLevel2____;
   UINT8  FltLevel3____;
   UINT8  FltLevel4____;
   UINT8  FltLFO1Depth_;
   UINT8  FltLFO2Depth_;
   UINT8  ToneLevel____;
   UINT8  BiasDirect___;
   UINT8  BiasPoint____;
   UINT8  BiasLevel____;
   UINT8  A_EnvVelCurv_;
   UINT8  A_EnvVelSens_;
   UINT8  A_EnvT1Sens__;
   UINT8  A_EnvT4Sens__;
   UINT8  A_EnvTKeyFol_;
   UINT8  A_EnvTime1___;
   UINT8  A_EnvTime2___;
   UINT8  A_EnvTime3___;
   UINT8  A_EnvTime4___;
   UINT8  A_EnvLevel1__;
   UINT8  A_EnvLevel2__;
   UINT8  A_EnvLevel3__;
   UINT8  AmplLFO1Dpth_;
   UINT8  AmplLFO2Dpth_;
   UINT8  TonePan______;
   UINT8  PanKeyFollow_;
   UINT8  PanRndDepth__;
   UINT8  PanAltDepth__;
   UINT8  PanLFO1Depth_;
   UINT8  PanLFO2Depth_;
   UINT8  OutAssign____;
   UINT8  OutLevel_____;
   UINT8  ChSendLevel__;
   UINT8  RevSendLevel_;
   UINT8  CheckSum_____;
   UINT8  EOX__________;
} t_patchtone;

/* Parameternamen */
/* Performance Common */
	char PerfComm[64][14]={
		"PerfName1----","PerfName2----","PerfName3----",
		"PerfName4----","PerfName5----","PerfName6----",
		"PerfName7----","PerfName8----","PerfName9----",
		"PerfName10---","PerfName11---","PerfName12---",
		"EFXSource----","EFXType------","EFXPar1------",
		"EFXPar2------","EFXPar3------","EFXPar4------",
		"EFXPar5------","EFXPar6------","EFXPar7------",
		"EFXPar8------","EFXPar9------","EFXPar10-----",
		"EFXPar11-----","EFXPar12-----","EFXOutAss----",
		"EFXOutLev----","EFXChSendLev-","EFXRevSendLev",
		"EFXCtrlS1----","EFXCtrlD1----","EFXCtrlS2----",
		"EFXCtrlD2----","ChorLev------","ChorRate-----",
		"ChorDepth----","ChorPreDel---","ChorFdback---",
		"ChorOutAss---","RevType------","RevLevel-----",
		"RevTime------","RevHFDamp----","RevFdback----",
		"DefTempo1----","DefTempo2----","KeyRngSw-----",
		"PartVceRes1--","PartVceRes2--","PartVceRes3--",
		"PartVceRes4--","PartVceRes5--","PartVceRes6--",
		"PartVceRes7--","PartVceRes8--","PartVceRes9--",
		"PartVceRes10-","PartVceRes11-","PartVceRes12-",
		"PartVceRes13-","PartVceRes14-","PartVceRes15-",
		"PartVceRes16-"};

/* Performance Part */
	char PerfPart[20][12]={
		"MidiRecSW-","MidiCh----","PatchGrp--","PatchGrpID",
		"PatchNum0-","PatchNum1-","PartLevel-","PartPan---",
		"PitchCoar-","PitchFine-","OutAss----","OutLev----",
		"ChSndLev--","RevSndLev-","RecPgmChg-","RecVol----",
		"RecHold---","KeyLow----","KeyHigh---"};


/* Patch Common */
	char PatchComm[72][14]={
        "PatchName1---", "PatchName2---", "PatchName3---", "PatchName4---",
        "PatchName5---", "PatchName6---", "PatchName7---", "PatchName8---",
        "PatchName9---", "PatchName10--", "PatchName11--", "PatchName12--",
        "EFXType------", "EFXPar1------", "EFXPar2------", "EFXPar3------",
        "EFXPar4------", "EFXPar5------", "EFXPar6------", "EFXPar7------",
        "EFXPar8------", "EFXPar9------", "EFXPar10-----", "EFXPar11-----",
        "EFXPar12-----", "EFXOutAss----", "EFXOutLev----", "EFXChSendLev-",
        "EFXRevSendLev", "EFXCtrlS1----", "EFXCtrlD1----", "EFXCtrlS2----",
        "EFXCtrlD2----", "ChorLev------", "ChorRate-----", "ChorDepth----",
        "ChorPreDel---", "ChorFdback---", "ChorOutAss---", "RevType------",
        "RevLevel-----", "RevTime------", "RevHFDamp----", "RevFdback----",
        "DefTempo1----", "DefTempo2----", "PatchLevel---", "PatchPan-----",
        "AnalogFeel---", "BendRngUp----", "BendRngDown--", "KeyAssMode---",
        "SoloLegato---", "PortaSw------", "PortaMode----", "PortaType----",
        "PortaStart---", "PortaTime----", "PtchCtrlSrc2-", "PtchCtrlSrc3-",
        "EFXCtrl-H_P--", "Ctrl1-H_P----", "Ctrl2-H_P----", "Ctrl3-H_P----",
        "VelRangeSw---", "OctaveSh-----", "StrTuneDepth-", "VoicePrio----",
        "StructType1_2", "BoostLevel1_2", "StructType3_4", "BoostLevel3_4"
	};



/* Patch Tone */
	char PatchTone[129][14]={
        "ToneSW      ", "WaveGrp     ", "WaveGrpId   ", "WaveNumber1 ",
        "WaveNumber2 ", "WaveGain    ", "FXMswitch   ", "FXMcolor    ",
        "FXMdepth    ", "ToneDelMode ", "ToneDelTime ", "VelCrossFade",
        "VelRngLow   ", "VelRngUp    ", "KeyRngLow   ", "KeyRngUp    ",
        "RedamperSw  ", "VolCtrlSw   ", "Hold1CtrlSw ", "BendCtrlSw  ",
        "PanCtrlSw   ", "Ctrl1Dest1  ", "Ctrl1Dpth1  ", "Ctrl1Dest2  ",
        "Ctrl1Dpth2  ", "Ctrl1Dest3  ", "Ctrl1Dpth3  ", "Ctrl1Dest4  ",
        "Ctrl1Dpth4  ", "Ctrl2Dest1  ", "Ctrl2Dpth1  ", "Ctrl2Dest2  ",
        "Ctrl2Dpth2  ", "Ctrl2Dest3  ", "Ctrl2Dpth3  ", "Ctrl2Dest4  ",
        "Ctrl2Dpth4  ", "Ctrl3Dest1  ", "Ctrl3Dpth1  ", "Ctrl3Dest2  ",
        "Ctrl3Dpth2  ", "Ctrl3Dest3  ", "Ctrl3Dpth3  ", "Ctrl3Dest4  ",
        "Ctrl3Dpth4  ", "LFO1WaveForm", "LFO1KeyTrig ", "LFO1Rate    ",
        "LFO1LevOffs ", "LFO1DelTime ", "LFO1FadeMode", "LFO1FadeTime",
        "LFO1ExtSync ", "LFO2WaveForm", "LFO2KeyTrig ", "LFO2Rate    ",
        "LFO2LevOffs ", "LFO2DelTime ", "LFO2FadeMode", "LFO2FadeTime",
        "LFO2ExtSync ", "PtchCoarseTn", "PtchFineTn  ", "PtchRndDepth",
        "PtchKeyFoll ", "PtchEnvDepth", "PtchVelSens ", "PtchVelT1Sen",
        "PtchVelT4Sen", "PtchTimKeyFo", "PtchTime1   ", "PtchTime2   ",
        "PtchTime3   ", "PtchTime4   ", "PtchLevel1  ", "PtchLevel2  ",
        "PtchLevel3  ", "PtchLevel4  ", "PtchLFO1Dpth", "PtchLFO2Dpth",
        "FltType     ", "FltCutoffFrq", "FltCutoffFol", "FltResonance",
        "FltResVelSns", "FltEnvDepth ", "FltEnvVelCur", "FltEnvVelSns",
        "FltEnvVelT1 ", "FltEnvVelT4 ", "FltEnvTKeyFl", "FltTime1    ",
        "FltTime2    ", "FltTime3    ", "FltTime4    ", "FltLevel1   ",
        "FltLevel2   ", "FltLevel3   ", "FltLevel4   ", "FltLFO1Depth",
        "FltLFO2Depth", "ToneLevel   ", "BiasDirect  ", "BiasPoint   ",
        "BiasLevel   ", "A_EnvVelCurv", "A_EnvVelSens", "A_EnvT1Sens ",
        "A_EnvT4Sens ", "A_EnvTKeyFol", "A_EnvTime1  ", "A_EnvTime2  ",
        "A_EnvTime3  ", "A_EnvTime4  ", "A_EnvLevel1 ", "A_EnvLevel2 ",
        "A_EnvLevel3 ", "AmplLFO1Dpth", "AmplLFO2Dpth", "TonePan     ",
        "PanKeyFollow", "PanRndDepth ", "PanAltDepth ", "PanLFO1Depth",
        "PanLFO2Depth", "OutAssign   ", "OutLevel    ", "ChSendLevel ",
        "RevSendLevel"
};


   /* Performance Common */
	char X_PerfComm[75][14]={
      "ExclStat_____", "ManuID_______", "DeviceID_____", "ModelID______",
		"CmdID________", "Adress3______", "Adress2______", "Adress1______",
		"Adress0______", "PerfName1____", "PerfName2____", "PerfName3____",
		"PerfName4____", "PerfName5____", "PerfName6____", "PerfName7____",
      "PerfName8____", "PerfName9____", "PerfName10___", "PerfName11___",
      "PerfName12___", "EFXSource____", "EFXType______", "EFXPar1______",
		"EFXPar2______", "EFXPar3______", "EFXPar4______", "EFXPar5______", 
      "EFXPar6______", "EFXPar7______", "EFXPar8______", "EFXPar9______", 
      "EFXPar10_____", "EFXPar11_____", "EFXPar12_____", "EFXOutAss____",
		"EFXOutLev____", "EFXChSendLev_", "EFXRevSendLev", "EFXCtrlS1____", 
      "EFXCtrlD1____", "EFXCtrlS2____", "EFXCtrlD2____", "ChorLev______", 
      "ChorRate_____", "ChorDepth____", "ChorPreDel___", "ChorFdback___",
		"ChorOutAss___", "RevType______", "RevLevel_____", "RevTime______", 
      "RevHFDamp____", "RevFdback____", "DefTempo1____", "DefTempo2____", 
      "KeyRngSw_____", "PartVceRes1__", "PartVceRes2__", "PartVceRes3__",
		"PartVceRes4__", "PartVceRes5__", "PartVceRes6__", "PartVceRes7__", 
      "PartVceRes8__", "PartVceRes9__", "PartVceRes10_", "PartVceRes11_", 
      "PartVceRes12_", "PartVceRes13_", "PartVceRes14_", "PartVceRes15_",
		"PartVceRes16_", "CheckSum_____", "EOX__________"
      };

   /* Performance Part */
   char X_PerfPart[30][14]={
      "ExclStat_____", "ManuID_______", "DeviceID_____", "ModelID______",
      "CmdID________", "Adress3______", "Adress2______", "Adress1______",
      "Adress0______", "MidiRecSW____", "MidiCh_______", "PatchGrp_____",
      "PatchGrpID___", "PatchNum0____", "PatchNum1____", "PartLevel____",
      "PartPan______", "PitchCoar____", "PitchFine____", "OutAss_______",
      "OutLev_______", "ChSndLev_____", "RevSndLev____", "RecPgmChg____",
      "RecVol_______", "RecHold______", "KeyLow_______", "KeyHigh______",
      "CheckSum_____", "EOX__________"
      };
   
/* Patch Common */
	char X_PatchComm[83][14]={
      "ExclStat_____", "ManuID_______", "DeviceID_____", "ModelID______",
      "CmdID________", "Adress3______", "Adress2______", "Adress1______",
      "Adress0______", "PatchName1___", "PatchName2___", "PatchName3___",
      "PatchName4___", "PatchName5___", "PatchName6___", "PatchName7___",
      "PatchName8___", "PatchName9___", "PatchName10__", "PatchName11__",
      "PatchName12__", "EFXType______", "EFXPar1______", "EFXPar2______",
      "EFXPar3______", "EFXPar4______", "EFXPar5______", "EFXPar6______",
      "EFXPar7______", "EFXPar8______", "EFXPar9______", "EFXPar10_____",
      "EFXPar11_____", "EFXPar12_____", "EFXOutAss____", "EFXOutLev____",
      "EFXChSendLev_", "EFXRevSendLev", "EFXCtrlS1____", "EFXCtrlD1____",
      "EFXCtrlS2____", "EFXCtrlD2____", "ChorLev______", "ChorRate_____",
      "ChorDepth____", "ChorPreDel___", "ChorFdback___", "ChorOutAss___",
      "RevType______", "RevLevel_____", "RevTime______", "RevHFDamp____",
      "RevFdback____", "DefTempo1____", "DefTempo2____", "PatchLevel___",
      "PatchPan_____", "AnalogFeel___", "BendRngUp____", "BendRngDown__",
      "KeyAssMode___", "SoloLegato___", "PortaSw______", "PortaMode____",
      "PortaType____", "PortaStart___", "PortaTime____", "PtchCtrlSrc2_",
      "PtchCtrlSrc3_", "EFXCtrl_H_P__", "Ctrl1_H_P____", "Ctrl2_H_P____",
      "Ctrl3_H_P____", "VelRangeSw___", "OctaveSh_____", "StrTuneDepth_",
      "VoicePrio____", "StructType1_2", "BoostLevel1_2", "StructType3_4",
      "BoostLevel3_4", "CheckSum_____", "EOX__________"
	};

/* Patch Tone */
	char X_PatchTone[140][14]={
         "ExclStat_____",
         "ManuID_______",
         "DeviceID_____",
         "ModelID______",
         "CmdID________",
         "Adress3______",
         "Adress2______",
         "Adress1______",
         "Adress0______",
         "ToneSW_______", "WaveGrp______", "WaveGrpId____", "WaveNumber1__",
         "WaveNumber2__", "WaveGain_____", "FXMswitch____", "FXMcolor_____",
         "FXMdepth_____", "ToneDelMode__", "ToneDelTime__", "VelCrossFade_",
         "VelRngLow____", "VelRngUp_____", "KeyRngLow____", "KeyRngUp_____",
         "RedamperSw___", "VolCtrlSw____", "Hold1CtrlSw__", "BendCtrlSw___",
         "PanCtrlSw____", "Ctrl1Dest1___", "Ctrl1Dpth1___", "Ctrl1Dest2___",
         "Ctrl1Dpth2___", "Ctrl1Dest3___", "Ctrl1Dpth3___", "Ctrl1Dest4___",
         "Ctrl1Dpth4___", "Ctrl2Dest1___", "Ctrl2Dpth1___", "Ctrl2Dest2___",
         "Ctrl2Dpth2___", "Ctrl2Dest3___", "Ctrl2Dpth3___", "Ctrl2Dest4___",
         "Ctrl2Dpth4___", "Ctrl3Dest1___", "Ctrl3Dpth1___", "Ctrl3Dest2___",
         "Ctrl3Dpth2___", "Ctrl3Dest3___", "Ctrl3Dpth3___", "Ctrl3Dest4___",
         "Ctrl3Dpth4___", "LFO1WaveForm_", "LFO1KeyTrig__", "LFO1Rate_____",
         "LFO1LevOffs__", "LFO1DelTime__", "LFO1FadeMode_", "LFO1FadeTime_",
         "LFO1ExtSync__", "LFO2WaveForm_", "LFO2KeyTrig__", "LFO2Rate_____",
         "LFO2LevOffs__", "LFO2DelTime__", "LFO2FadeMode_", "LFO2FadeTime_",
         "LFO2ExtSync__", "PtchCoarseTn_", "PtchFineTn___", "PtchRndDepth_",
         "PtchKeyFoll__", "PtchEnvDepth_", "PtchVelSens__", "PtchVelT1Sen_",
         "PtchVelT4Sen_", "PtchTimKeyFo_", "PtchTime1____", "PtchTime2____",
         "PtchTime3____", "PtchTime4____", "PtchLevel1___", "PtchLevel2___",
         "PtchLevel3___", "PtchLevel4___", "PtchLFO1Dpth_", "PtchLFO2Dpth_",
         "FltType______", "FltCutoffFrq_", "FltCutoffFol_", "FltResonance_",
         "FltResVelSns_", "FltEnvDepth__", "FltEnvVelCur_", "FltEnvVelSns_",
         "FltEnvVelT1__", "FltEnvVelT4__", "FltEnvTKeyFl_", "FltTime1_____",
         "FltTime2_____", "FltTime3_____", "FltTime4_____", "FltLevel1____",
         "FltLevel2____", "FltLevel3____", "FltLevel4____", "FltLFO1Depth_",
         "FltLFO2Depth_", "ToneLevel____", "BiasDirect___", "BiasPoint____",
         "BiasLevel____", "A_EnvVelCurv_", "A_EnvVelSens_", "A_EnvT1Sens__",
         "A_EnvT4Sens__", "A_EnvTKeyFol_", "A_EnvTime1___", "A_EnvTime2___",
         "A_EnvTime3___", "A_EnvTime4___", "A_EnvLevel1__", "A_EnvLevel2__",
         "A_EnvLevel3__", "AmplLFO1Dpth_", "AmplLFO2Dpth_", "TonePan______",
         "PanKeyFollow_", "PanRndDepth__", "PanAltDepth__", "PanLFO1Depth_",
         "PanLFO2Depth_", "OutAssign____", "OutLevel_____", "ChSendLevel__",
         "RevSendLevel_",                                                 
         "CheckSum_____",
         "EOX__________"
   };


struct	t_perfpatch {
	unsigned char	common[0x40];
	unsigned char	part[16][0x13+11];
	unsigned char	patchcomm[16][0x48+11];
	unsigned char	patchtone[16][4][0x81+11];
} Perform;

union
{
   t_perfcommon i;
   UINT8        x[60];
} var1;

UINT8 system_buffer[100];


/*****************************************************************
**																**
**  Absenden eines Systemexclusivbytes an JV1080				**
**	=======================================						**
**	void Send1080SysByte(long adr, char value);					**
**	adr: Adresse in Byte 3-0									**
**	value: Abzusendendes Byte									**
**																**
*****************************************************************/
void Send1080SysByte(long adr, char value);
void Send1080SysByte(long adr, char value)
{
	unsigned char	ms[200];
	unsigned char	cs,i;
	ms[0]=0xf0;
	ms[1]=0x41;
	ms[2]=0x10;
	ms[3]=0x6a;
	ms[4]=0x12;
	ms[5]=(adr >> 24) & 0x7f;
	ms[6]=(adr >> 16) & 0x7f;
	ms[7]=(adr >> 8)  & 0x7f;
	ms[8]= adr & 0x7f;
	ms[9]= value;
	for(cs=0,i=5;i<10;i++)
		cs+=ms[i];
/*	for(cs=i=0;i<5;i++)
		cs+=ms[5+i];
*/
	ms[10]=(128- (cs & 0x7f)) & 0x7f;
	ms[11]=0xf7;
	#if (MACHINE==ATARI)
	Midiws(11,ms);
   #endif
	#if (MACHINE==GNU_PC)
   for(i=0;i<12;i++)
      printf("%x: ",ms[i]);
   printf("\n");
      
	MidiLongMSG_Send((UINT8*)&ms, (UINT32)12);
	#endif
}

void SetJV1080PanelMode(char mode);
void SetJV1080PanelMode(char mode)
{
	Send1080SysByte(0x0l, mode & 3);
}

void Init1080(void);
void Init1080()
{
	int	i;

	/* Kan„le 12-15 wegschalten */
	for(i=12; i<16; i++)
		Send1080SysByte(0x01001000l + (i<<8),0);
#ifdef NIE
	for(i=0; i<8; i++)
	{
		Send1080SysByte(0x01001000l + (i<<8),1);	/* midi switch on */
		Send1080SysByte(0x0100100bl + (i<<8),127);	/* level */
		Send1080SysByte(0x0100100cl + (i<<8),127);	/* chorus */
		Send1080SysByte(0x0100100dl + (i<<8),127);	/* reverb */
	}
#endif
}


void Req1080Data(long adr, long size);
void Req1080Data(long adr, long size)
{
	unsigned char	ms[100];
	unsigned char	cs,i;
	ms[0]=0xf0;
	ms[1]=0x41;
	ms[2]=0x10;
	ms[3]=0x6a;
	ms[4]=0x11;
	ms[5]=(adr >> 24) & 0x7f;
	ms[6]=(adr >> 16) & 0x7f;
	ms[7]=(adr >> 8)  & 0x7f;
	ms[8]= adr & 0x7f;
	ms[9]=(size >> 24) & 0x7f;
	ms[10]=(size >> 16) & 0x7f;
	ms[11]=(size >> 8)  & 0x7f;
	ms[12]= size & 0x7f;
	for(cs=0,i=5;i<13;i++)
		cs+=ms[i];
	ms[13]=(128- (cs & 0x7f)) & 0x7f;
	ms[14]=0xf7;
	#if (MACHINE==ATARI)
	Midiws(14,ms);
	#endif
	#if (MACHINE==GNU_PC)
		MidiLongMSG_Send((UINT8*)&ms, (UINT32)15);
	#endif
}

#ifdef NIE
void Send1040Msg(char *txt);
void Send1040Msg(char *txt)
{
	char	ms[30];
	char	cs,i,text[20];
                    /**************/
/*	char	text[]="STE MKBC V1.0   ";*/
	if (strlen(txt) > 16)
		txt[16]='\0';
	sprintf(text,"%-16s",txt);
	ms[0]=0xf0;
	ms[1]=0x41;
	ms[2]=0x10;
	ms[3]=0x45;
	ms[4]=0x12;
	ms[5]=0x10;
	ms[6]=0x00;
	ms[7]=0x00;
	strcpy(&(ms[8]),text);
	for(cs=i=0;i<19;i++)
		cs+=ms[5+i];
	ms[24]=(128-cs) & 0x7f;
	ms[25]=0xf7;
	Midiws(25,ms);
}
#endif

void Send1040Msg(char *txt);
void Send1040Msg(char *txt)
{
	long	adr;
	unsigned char i, cs, ms[30];
	char	text[20];

	if (strlen(txt) > 12)
		txt[12]='\0';
	sprintf(text,"%-12s",txt);
	adr=0x01000000l;
	ms[0]=0xf0;
	ms[1]=0x41;
	ms[2]=0x10;
	ms[3]=0x6a;
	ms[4]=0x12;
	ms[5]=(adr >> 24) & 0x7f;
	ms[6]=(adr >> 16) & 0x7f;
	ms[7]=(adr >> 8)  & 0x7f;
	ms[8]= adr & 0x7f;
	sprintf(&ms[9],text);
	for(cs=0,i=5;i<21;i++)
		cs+=ms[i];
	ms[21]=(128- (cs & 0x7f)) & 0x7f;
	ms[22]=0xf7;
	#if (MACHINE==ATARI)
	Midiws(22,ms);
	#endif
	#if (MACHINE==GNU_PC)
	for(i=0;i<23;i++)
	   printf("%x: ",ms[i]);
	printf("\n");
	MidiLongMSG_Send((UINT8*)&ms, (UINT32)23);
	#endif

	adr=0x03000000l;
	ms[0]=0xf0;
	ms[1]=0x41;
	ms[2]=0x10;
	ms[3]=0x6a;
	ms[4]=0x12;
	ms[5]=(adr >> 24) & 0x7f;
	ms[6]=(adr >> 16) & 0x7f;
	ms[7]=(adr >> 8)  & 0x7f;
	ms[8]= adr & 0x7f;
	sprintf(&ms[9],text);
	for(cs=0,i=5;i<21;i++)
		cs+=ms[i];
	ms[21]=(128- (cs & 0x7f)) & 0x7f;
	ms[22]=0xf7;
	#if (MACHINE==ATARI)
	Midiws(22,ms);
	#endif
	#if (MACHINE==GNU_PC)
	for(i=0;i<23;i++)
	   printf("%x: ",ms[i]);
	printf("\n");
	MidiLongMSG_Send((UINT8*)&ms, (UINT32)23);
	#endif

}


int Get1080SoundData(long adr, long size, unsigned char *buf);
int Get1080SoundData(long adr, long size, unsigned char *buf)
{
/*	char pgm[2]={0xc0,0};*/
	int i=0, sz;
	time_t  t1, t2;
	unsigned char	mb;

	#if (MACHINE==ATARI)
	/* Midibuffer leeren */
	while(GetMidiByteReady()==1)
		GetMidiByte();
	#endif

/*
	SetJV1080PanelMode(0);
	pgm[1]=0;
	Midiws(1,pgm);
	pgm[1]=1;
	Midiws(1,pgm);
*/

	Req1080Data(adr, size);
	t1=time(&t1);
	#if (MACHINE==ATARI)
	for(	i=0, t2=0l, mb=0; 
			(mb != 0xf7) && (t2<5l);
			)
	{	if(GetMidiByteReady()==1)
			buf[i++]=mb=GetMidiByte();
		t2=time(&t2);
		t2=t2-t1;
	}
	#endif
	#if (MACHINE==GNU_PC___LINUX)
   for(	t2=0l; t2<5l; )
   {  if (SysexMSGBuffer_Read(buf, &sz)==0)
      {
         if(DebugMode>0)
            printf("Get1080SoundData: %d Bytes received.\n",sz);
         break;
      }
      t2=time(&t2);
      t2=t2-t1;
   }
   #endif

	if(t2>=5l)
		return(-1);
	else
	{	char cmp[8]={0x41,0x10,0x6a,0x12,0,0,0,0};
		cmp[4]=(adr>>24)&0x7f;
		cmp[5]=(adr>>16)&0x7f;
		cmp[6]=(adr>>8)&0x7f;
		cmp[7]=adr&0x7f;
		for(i=0; i<8; i++)
			if(cmp[i] != buf[i+1])
				return(-2);
		sz= (int) (((size&0x7f00)>>1) + (size&0x7f) + 10);
		if(buf[sz] != 0xf7) return(-3);
		return(0);
	}
}

/*********************************************************/
/*                                                       */
/* Holt Performance-Datenblock aus Edit-Buffer           */
/* und speichert ihn in <A_PERF.C>                       */
/*                                                       */
/*********************************************************/
int Get1080PerfData(void);
int Get1080PerfData()
{
	int i,j,erg; unsigned char buffs[16][50], buff[200];
	FILE *fp;

	if((erg=Get1080SoundData(0x01000000l, 0x00000040l, buff)) != 0)
		return(erg);

	if((fp=fopen("a_perf.c","a")) == NULL)
		return(-5);
	
	fprintf(fp,"#include %ctypedefs.h%c\n\n",0x22,0x22);
	fprintf(fp,"PERF_STR Performance = {\n");
	fprintf(fp,"/* Performance Common */\n");
	fprintf(fp,"0x01000000l, 0x00000040l,\n");

	fprintf(fp,"/*   NAME   */\n%c%12.12s%c,\n",0x22,&buff[9],0x22);
	fprintf(fp,"{\n");
	for(i=12; i<48; i++)
		fprintf(fp,"%4d,  /* %d: %s */\n",buff[i+9],i,PerfComm[i]);

	for(i=48; i<63; i++)
		fprintf(fp,"%4d,  /* %d: %s */\n",buff[i+9],i,PerfComm[i]);
	i=63;
	fprintf(fp,"%4d   /* %d: %s */\n",buff[i+9],i,PerfComm[i]);

	fprintf(fp,"},\n");

	fprintf(fp,"{\n");
	for(j=0; j<16; j++)
	{
		if((erg=Get1080SoundData(0x01001000l+j*0x100, 0x00000013l, &buffs[j][0])) != 0)
			return(erg);
		if(j!=15)
			fprintf(fp,"   { 0x0%lxl, 0x00000013l },\n",0x01001000l+j*0x100);
		else
			fprintf(fp,"   { 0x0%lxl, 0x00000013l }\n",0x01001000l+j*0x100);
	}
	fprintf(fp,"},\n");

	fprintf(fp,"{\n");
	for(i=0; i<19; i++)
	{
		fprintf(fp,"/*%s*/\n",PerfPart[i]);
		fprintf(fp,"   { ");
		for(j=0; j<16; j++)
			if(j!=15)
				fprintf(fp,"%3d,",buffs[j][i+9]);
			else
				if(i!=18)
					fprintf(fp,"%3d},\n",buffs[j][i+9]);
				else
					fprintf(fp,"%3d}\n",buffs[j][i+9]);
	}
	fprintf(fp,"}\n");
#ifdef NIE
	fprintf(fp,"\n");
	for(i=0; i<19; i++)
	{
		fprintf(fp,"/*%s*/  ",PerfPart[i]);
		for(j=8; j<16; j++)
			fprintf(fp,"%4d,",buffs[j][i+9]);
		fprintf(fp,"\n");
	}
#endif
	fprintf(fp,"};\n");
	fclose(fp);
	return(0);
}

   #define PERF_SIZE 32
   #define PATCH_SIZE 128

   struct tt_jv1080_perf
   {
      union {
         UINT8 common[75];
         t_perfcommon comm_s;
      } comm;
      union {
         UINT8 parray[30];
         t_perfpart pstruc;
      } part[16];
   } jv1080_perf_in[PERF_SIZE], jv1080_perf_in_file[PERF_SIZE];

   typedef struct tt_jv1080_patch
   {
      union {
         UINT8 common[83];
         t_patchcommon comm_s;
      } comm;
      union {
         UINT8 parray[140];
         t_patchtone pstruc;
      } tone[4];
   } t_jv1080_patch;
   t_jv1080_patch jv1080_patch_in[PATCH_SIZE], jv1080_patch_in_file[PATCH_SIZE];

   char BankName[][20]=
   { "Bank?0",
     "User",
     "Bank?2",
     "BankA",
     "BankB",
     "BankC",
     "BankGM"
   };

   struct tt_jv1080_refnames
   {
         char name[20];
         struct t_patch {
            char name[20];
            UINT32 chk;
         } patch[16];
   } jv1080_refnames[2]=

{
{
"Techno Loop ",
{
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
}   
},   
{
"Opening Orch",
{
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
{"            ", 0x00},
}   
}   
};   

#if (MACHINE==GNU_PC)
/*********************************************************/
/*                                                       */
/* Sendet den JV1080 System-Datenblock                   */
/*                                                       */
/*********************************************************/
int Put1080AllSystemData(void);
int Put1080AllSystemData(void)
{
	MidiLongMSG_Send((UINT8*)&JV1080_System, (UINT32)51);
}


/*********************************************************/
/*                                                       */
/* Holt den JV1080 System-Datenblock                     */
/* und speichert sie in einer Struktur                   */
/*                                                       */
/*********************************************************/
int Get1080AllSystemData(void);
int Get1080AllSystemData(void)
{
   FILE *fp;
   int i, erg; 

   if(0 != (erg=Get1080SoundData(0x00000000l, 0x00000028l, (UINT8 *)&system_buffer)))
	   return(erg);

   if(DebugMode>2)
   {
      printf("* ");
      for(i=0; i<0x28+11; i++)
         printf("%02x ",system_buffer[i]);
      printf(" *\n");
   }

   if((fp=fopen("a_system.c","w")) == NULL)
   	return(-5);
   
   fprintf(fp,"#include %ctypedefs.h%c\n\n",0x22,0x22);
   fprintf(fp,"UINT8 JV1080_System[] = {\n");
   for(i=0; i<0x28+11; i++)
      fprintf(fp,"   /* %2d */  0x%02x,\n", i, system_buffer[i]);

   fprintf(fp,"};\n");

   fclose(fp);

   return(0);
}   
#endif


/*********************************************************/
/*                                                       */
/* Holt alle JV1080 User-Datenbloecke                    */
/* und speichert sie in einer Struktur                   */
/*                                                       */
/*********************************************************/
int Get1080AllJv1080Data(void);
int Get1080AllJv1080Data()
{

	int i,j,erg; 
   unsigned long base_adress;

   
   for (i=0; i<PERF_SIZE; i++)
   {
      base_adress=0x10000000l+0x00010000l*i;
      if(0 != (erg=Get1080SoundData(base_adress, 0x00000040l, &jv1080_perf_in[i].comm.common[0])))
		   return(erg);
		for(j=0; j<16; j++)
		{
		   base_adress=0x10000000l+0x00010000l*i+0x00001000l+0x00000100l*j;
		   if((erg=Get1080SoundData(base_adress, 0x00000013l, &jv1080_perf_in[i].part[j].parray[0])) != 0)
		      return(erg);
		}
      printf("*");
//      fflush(stdout);
   }
   printf("\n");

   for (i=0; i<PATCH_SIZE; i++)
   {
      base_adress=0x11000000l+0x00010000l*i;
   	if((erg=Get1080SoundData(base_adress, 0x00000048l, &jv1080_patch_in[i].comm.common[0])) != 0)
   	   return(erg);
   	for(j=0; j<4; j++)
   	{
   	   base_adress=0x11000000l+0x00010000l*i+0x00001000l+0x00000200l*j;
   	   if((erg=Get1080SoundData(base_adress, 0x00000101l, &jv1080_patch_in[i].tone[j].parray[0])) != 0)
   	      return(erg);
   	}
      printf("*");
//      fflush(stdout);
   }
   printf("\n");
	return(0);
}

/*********************************************************/
/*                                                       */
/* Speichert alle JV1080 User-Datenbloecke               */
/* aus Struktur in <ALL_JV1080.C>                        */
/*                                                       */
/*********************************************************/
int Put1080AllJv1080Data(void);
int Put1080AllJv1080Data()
{
   int i,j,k;
   unsigned long base_adress;
   FILE *fp;

   if((fp=fopen("all_jv1080.c","w")) == NULL)
      return(-5);

   fprintf(fp,"#include <stdio.h>\n");
   fprintf(fp,"#define UINT8 unsigned char\n");
   fprintf(fp,"typedef struct tt_perfcommon {\n");
   for(i=0; i<75; i++)
      fprintf(fp,"   UINT8  %s;\n", X_PerfComm[i]);
   fprintf(fp,"} t_perfcommon;\n");

   fprintf(fp,"typedef struct tt_perfpart {\n");
   for(i=0; i<30; i++)
      fprintf(fp,"   UINT8  %s;\n", X_PerfPart[i]);
   fprintf(fp,"} t_perfpart;\n");

   for (i=0; i<PERF_SIZE; i++)
   {
      fprintf(fp,"/* PERFNR: %2d; PERFNAME: \"%12.12s\",  */\n", i, &jv1080_perf_in[i].comm.common[9]);
      for(j=0; j<16; j++)
      {
         unsigned int pgm, bank;
         bank = (int)jv1080_perf_in[i].part[j].pstruc.PatchGrpID___;
         pgm=jv1080_perf_in[i].part[j].pstruc.PatchNum0____*16+jv1080_perf_in[i].part[j].pstruc.PatchNum1____;

         if ((1==bank) && (pgm<PATCH_SIZE))
         {  fprintf(fp,"/* BANK: %6s; PATCHNR: %3d; NAME: \"%12.12s\", */\n",BankName[bank],pgm+1,&jv1080_patch_in[pgm].comm.common[9]);
         }
         else
         {  fprintf(fp,"/* BANK: %6s; PATCHNR: %3d; NAME: \"%12.12s\", */\n",BankName[bank],pgm+1," ");
         }
      }
   }

   fprintf(fp,"struct tt_perfcommon_s     \n");
   fprintf(fp,"{                          \n");
   fprintf(fp,"   UINT8 x[75];            \n");
   fprintf(fp,"   UINT8 y[16][30];        \n");
   fprintf(fp,"} jv1080_perf_in[%d] =       \n",PERF_SIZE);

   fprintf(fp,"{\n");
   for (i=0; i<PERF_SIZE; i++)
   {
      fprintf(fp,"{\n");
      fprintf(fp,"/* NAME: \"%12.12s\"  */\n",&jv1080_perf_in[i].comm.common[9]);
      base_adress=0x10000000l+0x00010000l*i;
      fprintf(fp,"{\n");
      for(k=0; k<(0x40+11); k++)
         fprintf(fp,"/* PE%02d COM 0x%08lx, %s */ 0x%02x,\n",i+1,base_adress+k, X_PerfComm[k], jv1080_perf_in[i].comm.common[k]);
      fprintf(fp,"},\n");

      fprintf(fp,"{\n");

      for(j=0; j<16; j++)
      {
         fprintf(fp,"{\n");
         base_adress=0x10000000l+0x00010000l*i+0x00001000l+0x00000100l*j;
         for(k=0; k<(0x13+11); k++)
         {
            fprintf(fp,"/* PE%02d P%02d 0x%08lx, %s */ 0x%02x,\n",i+1, j+1, base_adress+k, X_PerfPart[k], jv1080_perf_in[i].part[j].parray[k]);
         }
         fprintf(fp,"},\n");
      }
      fprintf(fp,"},\n");
      fprintf(fp,"},\n");
	}
   fprintf(fp,"};\n");
   fprintf(fp,"\n\n\n");

	fprintf(fp,"typedef struct tt_patchcommon {\n");
	for(i=0; i<83; i++)
	   fprintf(fp,"   UINT8  %s;\n", X_PatchComm[i]);
	fprintf(fp,"} t_patchcommon;\n");

	fprintf(fp,"typedef struct tt_patchtone {\n");
	for(i=0; i<140; i++)
	   fprintf(fp,"   UINT8  %s;\n", X_PatchTone[i]);
	fprintf(fp,"} t_patchtone;\n");
	fprintf(fp,"\n\n\n");


	fprintf(fp,"struct tt_jv1080_patch      \n");
	fprintf(fp,"{                           \n");
	fprintf(fp,"   union {                  \n");
	fprintf(fp,"      UINT8 x[83];          \n");
	fprintf(fp,"      t_patchcommon comm_s; \n");
	fprintf(fp,"   } comm;                  \n");
	fprintf(fp,"   union {                  \n");
	fprintf(fp,"      UINT8 parray[140];    \n");
	fprintf(fp,"      t_patchtone pstruc;   \n");
	fprintf(fp,"   } tone[4];               \n");
	fprintf(fp,"} jv1080_patch_in[%d] =     \n",PATCH_SIZE);
	fprintf(fp,"{                           \n");

	for (i=0; i<PATCH_SIZE; i++)
	{
	   fprintf(fp,"  {\n");
	   base_adress=0x11000000l+0x00010000l*i;
	   fprintf(fp,"    /* PATCH: NAME: \"%12.12s\"  */\n",&jv1080_patch_in[i].comm.common[9]);

	   fprintf(fp,"    {\n");
	   for(k=0; k<(0x48+11); k++)
	      fprintf(fp,"      /* PA%03d CO 0x%08lx, %s */ 0x%02x,\n",i+1,base_adress+k, X_PatchComm[k], jv1080_patch_in[i].comm.common[k]);
      fprintf(fp,"    },\n");

	   fprintf(fp,"    {\n");
	   for(j=0; j<4; j++)
	   {
	      base_adress=0x11000000l+0x00010000l*i+0x00001000l+0x00000200l*j;
	      fprintf(fp,"      /* PATCH: NAME: \"%12.12s\", TONE: %d  */\n",&jv1080_patch_in[i].comm.common[9],j+1);
	      fprintf(fp,"      {\n");
	      for(k=0; k<(0x81+11); k++)
	         fprintf(fp,"        /* PA%03d P%01d 0x%08lx, %s */ 0x%02x,\n",i+1, j+1, base_adress+k, X_PatchTone[k], jv1080_patch_in[i].tone[j].parray[k]);
         fprintf(fp,"      },\n");
      }
      fprintf(fp,"    },\n");
      fprintf(fp,"  },\n");
	}
	fprintf(fp,"};\n");

	fclose(fp);

	if((fp=fopen("all_jv1080.syx","wb")) == NULL)
   	return(-5);

	for (i=0; i<PERF_SIZE; i++)
	{
	   for(k=0; k<(0x40+11); k++)
	      fprintf(fp,"%c",jv1080_perf_in[i].comm.common[k]);

	   for(j=0; j<16; j++)
	   {
	      for(k=0; k<(0x13+11); k++)
	      {
	         fprintf(fp,"%c",jv1080_perf_in[i].part[j].parray[k]);
	      }
	   }
   }

	for (i=0; i<PATCH_SIZE; i++)
	{
	   for(k=0; k<(0x48+11); k++)
	      fprintf(fp,"%c",jv1080_patch_in[i].comm.common[k]);

	   for(j=0; j<4; j++)
	   {
	      for(k=0; k<(0x81+11); k++)
	         fprintf(fp,"%c",jv1080_patch_in[i].tone[j].parray[k]);
	   }
	}
	fclose(fp);

	return(0);
}


/*********************************************************/
/*                                                       */
/* Holt alle JV1080 User-Datenbloecke aus Datei          */
/* und speichert sie in einer Struktur                   */
/*                                                       */
/*********************************************************/
int Get1080AllJv1080DataFile(void);
int Get1080AllJv1080DataFile()
{
   int i,j,k;
   FILE *fp;

	if((fp=fopen("all_jv1080.syx","rb")) == NULL)
   	return(-5);

	for (i=0; i<PERF_SIZE; i++)
	{
	   for(k=0; k<(0x40+11); k++)
	      fscanf(fp,"%c",&jv1080_perf_in_file[i].comm.common[k]);

	   for(j=0; j<16; j++)
	   {
	      for(k=0; k<(0x13+11); k++)
	      {
	         fscanf(fp,"%c",&jv1080_perf_in_file[i].part[j].parray[k]);
	      }
	   }
   }

	for (i=0; i<PATCH_SIZE; i++)
	{
	   for(k=0; k<(0x48+11); k++)
	      fscanf(fp,"%c",&jv1080_patch_in_file[i].comm.common[k]);

	   for(j=0; j<4; j++)
	   {
	      for(k=0; k<(0x81+11); k++)
	         fscanf(fp,"%c",&jv1080_patch_in_file[i].tone[j].parray[k]);
	   }
	}
	fclose(fp);

	return(0);
}


/*********************************************************/
/*                                                       */
/* Vergleicht die JV1080 User-Datenbloecke               */
/* in zwei Strukturen                                    */
/*                                                       */
/*********************************************************/
int Cmp1080AllJv1080Data(void);
int Cmp1080AllJv1080Data()
{
   int i,j,k;

	for (i=0; i<PERF_SIZE; i++)
	{
	   for(k=0; k<(0x40+11); k++)
	      if (jv1080_perf_in[i].comm.common[k] != jv1080_perf_in_file[i].comm.common[k])
            printf("CMP: PerfCommon: %d Nr. %d\n",i,k);

	   for(j=0; j<16; j++)
	   {
	      for(k=0; k<(0x13+11); k++)
	      {
	         if(jv1080_perf_in[i].part[j].parray[k] != jv1080_perf_in_file[i].part[j].parray[k])
      	      printf("CMP: PerfPart: %d %d Nr. %d\n",i,j,k);
	      }
	   }
   }

	for (i=0; i<PATCH_SIZE; i++)
	{
	   for(k=0; k<(0x48+11); k++)
	      if (jv1080_patch_in[i].comm.common[k] != jv1080_patch_in_file[i].comm.common[k])
	         printf("CMP: PatchCommon: %d Nr. %d\n",i,k);

	   for(j=0; j<4; j++)
	   {
	      for(k=0; k<(0x81+11); k++)
	         if(jv1080_patch_in[i].tone[j].parray[k] != jv1080_patch_in_file[i].tone[j].parray[k])
	            printf("CMP: PatchTone: %d %d Nr. %d\n",i,j,k);
	   }
	}

	return(0);
}


/*********************************************************/
/*                                                       */
/* Holt alle Performance-Datenbloecke                    */
/* und speichert ihn in <ALL_PERF.C>                     */
/*                                                       */
/*********************************************************/
int Get1080AllPerfData(void);
int Get1080AllPerfData()
{
   #undef PERF_SIZE
   #undef PATCH_SIZE
   #define PERF_SIZE 32
   #define PATCH_SIZE 128
   
	int i,j,k,erg; 
   unsigned long bank;
   unsigned char buff[200];
	FILE *fp;

   char BankName[][20]=
   { "Bank?0",
     "User",
     "Bank?2",
     "BankA",
     "BankB",
     "BankC",
     "BankGM"
   };

   
   if((fp=fopen("ALL_PERF.C","w")) == NULL)
      return(-5);

   for (j=0; j<PERF_SIZE; j++)
   {
	   if((erg=Get1080SoundData(0x10000000l+0x00010000l*j, 0x00000040l, buff)) != 0)
		   return(erg);

	   fprintf(fp,"/*   Performance %02d   */ %c%12.12s%c,\n",j+1,0x22,&buff[9],0x22);
	}

   for (j=0; j<PERF_SIZE; j++)
   {
	   if((erg=Get1080SoundData(0x10000000l+0x00010000l*j, 0x00000040l, buff)) != 0)
	      return(erg);

	   fprintf(fp,"/*   Performance %02d   */ %c%12.12s%c,\n",j+1,0x22,&buff[9],0x22);

	   for (i=0; i<16; i++)
	   {
	      if((erg=Get1080SoundData(0x10000000l+0x00010000l*j + 0x00001000l+0x00000100l*i, 0x00000013l, buff)) != 0)
		      return(erg);

         if(buff[9]!=0)
	      {
	         fprintf(fp,"/*   Patch %02d  */",i+1);
	         for (k=0; k<30; k++)
	            fprintf(fp," %02x",buff[k]);
	         fprintf(fp," %10s",BankName[buff[12]]);
	         fprintf(fp," %4d",buff[13]*16+buff[14]+1);
	         fprintf(fp,"\n");

            bank = buff[13]*16+buff[14];
            if (buff[12]==1)
            {
	            if((erg=Get1080SoundData(0x11000000UL+0x00010000UL*bank, 0x00000048UL, buff)) != 0)
	      	      return(erg);
        	      fprintf(fp,"/*   Program %02d   */ %c%12.12s%c,",bank+1,0x22,&buff[9],0x22);
        	      fprintf(fp,"\n");
     	      }

   	   }

	   }
	}

	fprintf(fp,"\n");

	for (i=0; i<128; i++)
	{
      if((erg=Get1080SoundData(0x11000000l+0x00010000l*i, 0x00000048l, buff)) != 0)
         return(erg);
      fprintf(fp,"/*   Program %02d   */ %c%12.12s%c,",i+1,0x22,&buff[9],0x22);
      fprintf(fp,"\n");
   }

	fclose(fp);
	return(0);
}


/*********************************************************/
/*                                                       */
/* Sendet Performance-Common-Datenblock in Edit-Buffer   */
/*                                                       */
/* mode = SMALL_PERFCOMMON:                              */
/*          Commonblock an Adresse 0xE (kein EFX-Type    */
/*          wegen Tonloch beim umschalten)               */
/*                                                       */
/* mode = FULL_PERFCOMMON:                               */
/*          Kompletter Commonblock                       */
/*          Keine Performance Part-Bl”cke                */
/*                                                       */
/*********************************************************/
int Put1080PerfCommon(PERFCOMMON_STR *perf, int mode);
int Put1080PerfCommon(PERFCOMMON_STR *perf, int mode)
{
	unsigned char	sbuff[400];
	int	w,i,cs;
	int SysEx[5]={0xf0,0x41,0x10,0x6a,0x12};

/*	Send1080SysByte(0x01000026l,0);	*//* chorusfeedback=0 */

	if(mode==FULL_PERFCOMMON)
{	
/* Kompletten Commonbereich senden */
	for(w=0,i=0;	i<5;	w++,i++)
		sbuff[w]=SysEx[i];

	sbuff[w++]=(perf->adr >> 24) & 0x7f;
	sbuff[w++]=(perf->adr >> 16) & 0x7f;
	sbuff[w++]=(perf->adr >>  8) & 0x7f;
	sbuff[w++]=(perf->adr      ) & 0x7f;

	for(i=0;i<12;	w++,i++)
		sbuff[w]=perf->name[i];

	for(i=0;i<52;	w++,i++)
		sbuff[w]=perf->perfc[i];
	/*checksum*/
	for(i=5,cs=0; i<w;i++)
		cs+=sbuff[i];
	if (cs != 0)
		sbuff[w++]=0x80-(0x7f&cs);
	else
		sbuff[w++]=0;
	sbuff[w]=0xf7;
	Midiws(w,sbuff);
}

	if(mode==SMALL_PERFCOMMON)
{	
/* Commonbereich ab 0x0000000E senden, 				*/
/*	kein EFX-Type wegen "Tonloch" beim Umschalten 	*/
	for(w=0,i=0;	i<5;	w++,i++)
		sbuff[w]=SysEx[i];

	sbuff[w++]=  (perf->adr >> 24) & 0x7f;
	sbuff[w++]=  (perf->adr >> 16) & 0x7f;
	sbuff[w++]=  (perf->adr >>  8) & 0x7f;
	sbuff[w++]= ((perf->adr      ) & 0x7f) + 0xE;

	for(i=2;i<52;	w++,i++)			/* ab EFX-Parameter 1 */
		sbuff[w]=perf->perfc[i];
	/*checksum*/
	for(i=5,cs=0; i<w;i++)
		cs+=sbuff[i];
	if (cs != 0)
		sbuff[w++]=0x80-(0x7f&cs);
	else
		sbuff[w++]=0;
	sbuff[w]=0xf7;
	Midiws(w,sbuff);
}

	return(0);
}


/***************************************************************/
/*                                                             */
/* Sendet Performance-Datenblock mit Performance Part-Bloecken */
/* in Edit-Buffer                                              */
/*                                                             */
/***************************************************************/
int Put1080PerfData(PERF_STR *perf);
int Put1080PerfData(PERF_STR *perf)
{
	unsigned char	sbuff[400];
	int	w,i,j,cs;
	int SysEx[5]={0xf0,0x41,0x10,0x6a,0x12};

	for(w=0,i=0;	i<5;	w++,i++)
		sbuff[w]=SysEx[i];

	sbuff[w++]=(perf->adr >> 24) & 0x7f;
	sbuff[w++]=(perf->adr >> 16) & 0x7f;
	sbuff[w++]=(perf->adr >>  8) & 0x7f;
	sbuff[w++]=(perf->adr      ) & 0x7f;

	for(i=0;i<12;	w++,i++)
		sbuff[w]=perf->name[i];

	for(i=0;i<52;	w++,i++)
		sbuff[w]=perf->perfc[i];
	/*checksum*/
	for(i=5,cs=0; i<w;i++)
		cs+=sbuff[i];
	if (cs != 0)
		sbuff[w++]=0x80-(0x7f&cs);
	else
		sbuff[w++]=0;
	sbuff[w]=0xf7;
	#if (MACHINE==ATARI)
		Midiws(w,sbuff);
	#endif
	#if (MACHINE==GNU_PC)
   	MidiLongMSG_Send((UINT8*)&sbuff, (UINT32)w+1);
	#endif
	for(j=0;j<16;j++)
	{
		for(w=0,i=0;	i<5;	w++,i++)
			sbuff[w]=SysEx[i];
		sbuff[w++]=(perf->tone_hdr[j].adr >> 24) & 0x7f;
		sbuff[w++]=(perf->tone_hdr[j].adr >> 16) & 0x7f;
		sbuff[w++]=(perf->tone_hdr[j].adr >>  8) & 0x7f;
		sbuff[w++]=(perf->tone_hdr[j].adr      ) & 0x7f;
		for(i=0;i<19;	w++,i++)
			sbuff[w]=perf->part[i][j];
		/*checksum*/
		for(i=5,cs=0; i<w;i++)
			cs+=sbuff[i];
		if (cs != 0)
			sbuff[w++]=0x80-(0x7f&cs);
		else
			sbuff[w++]=0;
		sbuff[w]=0xf7;


		#if (MACHINE==ATARI)
   		Midiws(w,sbuff);
		#endif
		#if (MACHINE==GNU_PC)
   		MidiLongMSG_Send((UINT8*)&sbuff, (UINT32)w+1);
		#endif


	}
	return(0);
}


/***************************************************************/
/*                                                             */
/* Schreibt Performance-Datenblock mit Performance             */
/* Part-Blöcken in eine Datei                                  */
/*                                                             */
/***************************************************************/
int Put1080PerfDataFile(PERF_STR *perf);
int Put1080PerfDataFile(PERF_STR *perf)
{
	unsigned char	sbuff[400];
	int	w,i,j,cs;
	int SysEx[5]={0xf0,0x41,0x10,0x6a,0x12};
	char filename[20];
	FILE *fp;

   time_t longtime;
//   struct tm *newtime;

	for(w=0,i=0;	i<5;	w++,i++)
		sbuff[w]=SysEx[i];

	sbuff[w++]=(perf->adr >> 24) & 0x7f;
	sbuff[w++]=(perf->adr >> 16) & 0x7f;
	sbuff[w++]=(perf->adr >>  8) & 0x7f;
	sbuff[w++]=(perf->adr      ) & 0x7f;

	for(i=0;i<12;	w++,i++)
		sbuff[w]=perf->name[i];

	for(i=0;i<52;	w++,i++)
		sbuff[w]=perf->perfc[i];
	/*checksum*/
	for(i=5,cs=0; i<w;i++)
		cs+=sbuff[i];
	if (cs != 0)
		sbuff[w++]=0x80-(0x7f&cs);
	else
		sbuff[w++]=0;
	sbuff[w]=0xf7;

	for(i=0; i<12;	i++)
	{
/*      if ((patch->name[i]) != 0x20)
*/
	      filename[i]=perf->name[i];
/*      else
         break;   
*/
	}  
	strcpy(&(filename[12]),".perf");

	printf("Filename: %s\n",filename);
	fp=fopen(filename,"w");
	fprintf(fp,"Performance_JV1080_Typ_0,\n");
	time( &longtime );                     /* Get time as long integer. */
#ifdef ___LINUX
	//	newtime = localtime( &longtime );      /* Convert to local time. */
//	fprintf(fp,"/* Date & Time */                \"%02d.%02d.%04d %02d:%02d:%02d\",\n",   \
//                 newtime->tm_mday, \
//                  newtime->tm_mon, \
//                  newtime->tm_year+1900, \
//                  newtime->tm_hour, \
//                  newtime->tm_min, \
//                  newtime->tm_sec  );
#endif

	fprintf(fp,"/* File: <%s>    */ \"%s\",\n\n",perf->name,perf->name);


	for(i=0; i<(w+1);	i++)
	   fprintf(fp,"/* PerfCommon %3d %15s 0x%02X */ %3d,\n",i, X_PerfComm[i], sbuff[i], sbuff[i]);
	fprintf(fp,"\n");




	for(j=0;j<16;j++)
	{
		for(w=0,i=0;	i<5;	w++,i++)
			sbuff[w]=SysEx[i];
		sbuff[w++]=(perf->tone_hdr[j].adr >> 24) & 0x7f;
		sbuff[w++]=(perf->tone_hdr[j].adr >> 16) & 0x7f;
		sbuff[w++]=(perf->tone_hdr[j].adr >>  8) & 0x7f;
		sbuff[w++]=(perf->tone_hdr[j].adr      ) & 0x7f;
		for(i=0;i<19;	w++,i++)
			sbuff[w]=perf->part[i][j];
		/*checksum*/
		for(i=5,cs=0; i<w;i++)
			cs+=sbuff[i];
		if (cs != 0)
			sbuff[w++]=0x80-(0x7f&cs);
		else
			sbuff[w++]=0;
		sbuff[w]=0xf7;

	   for(i=0; i<(w+1);	i++)
	      fprintf(fp,"/* PerfPart %1d:%3d %15s 0x%02X */ %3d,\n",j+1, i, X_PerfPart[i], sbuff[i], sbuff[i]);
	   fprintf(fp,"\n");
	}

	fprintf(fp,"/* Common Data End  */ End\n");
	fclose(fp);
	return(0);
}


/*********************************************************/
/*                                                       */
/* Holt Patch-Datenblock aus Patch-Editbuffer und        */
/* schreibt ihn in <A_PATCH.C>                           */
/*                                                       */
/*********************************************************/
int Get1080PatchData(void);
int Get1080PatchData()
{
	int i,j,erg; unsigned char sbuff[300],sbufft[4][300];
	FILE *fp;

	if((erg=Get1080SoundData(0x03000000l, 0x00000048l, sbuff)) != 0)
		return(erg);

	if((fp=fopen("a_patch.c","w")) == NULL)
		return(-5);

	fprintf(fp,"#include %ctypedefs.h%c\n\n",0x22,0x22);
	fprintf(fp,"PATCH_STR A_Patch = {\n");
	fprintf(fp,"/* Patch Common */\n");
	fprintf(fp,"0x03000000l, 0x00000048l,\n");

	fprintf(fp,"/*   NAME   */\n%c%12.12s%c,\n",0x22,&sbuff[9],0x22);
	fprintf(fp,"{\n");
	for(i=12; i<25; i++)
		fprintf(fp,"   /*%2d: %s*/%7d,\n",i,PatchComm[i],sbuff[i+9]);

	for(i=25; i<71; i++)
	{
		if ((i % 1) == 0)
			fprintf(fp,"   ");
		fprintf(fp,"/*%2d: %s*/%7d, ",i,PatchComm[i],sbuff[i+9]);
		if ((i % 2) == 0)
			fprintf(fp,"\n");
	}
	i=71;
	fprintf(fp,"   /*%2d: %s*/%7d    ",i,PatchComm[i],sbuff[i+9]);
	fprintf(fp,"\n},\n\n");

	for(j=0; j<4; j++)
	{
		if((erg=Get1080SoundData(0x03001000l+j*0x200, 0x00000101l, &(sbufft[j][0]))) != 0)
			return(erg);
	}

	fprintf(fp,"/* Patch Tone:%3d */\n",j);
	fprintf(fp,"{\n");
	fprintf(fp,"   { 0x0%lxl, 0x00000101l },\n",0x03001000l);
	fprintf(fp,"   { 0x0%lxl, 0x00000101l },\n",0x03001200l);
	fprintf(fp,"   { 0x0%lxl, 0x00000101l },\n",0x03001400l);
	fprintf(fp,"   { 0x0%lxl, 0x00000101l }\n",0x03001600l);
	fprintf(fp,"},\n\n");

	fprintf(fp,"{\n");
	for(i=0; i<129; i++)
	{
		fprintf(fp,"   /*%14s %3d %3x */ {",PatchTone[i],i,i);
		for(j=0; j<3; j++)
			fprintf(fp,"%5d,",sbufft[j][i+9]);
		j=4;
		if(i != 128)
			fprintf(fp,"%5d },\n",sbufft[j][i+9]);
		else
			fprintf(fp,"%5d }\n",sbufft[j][i+9]);
	}
	fprintf(fp,"},\n\n");



	fprintf(fp,"};\n");
	fclose(fp);
	return(0);
}



/*********************************************************/
/*                                                       */
/* Holt Patch-Datenblock aus Patch-Editbuffer und        */
/* gibt ihn in BUFFER zurück                             */
/*                                                       */
/*********************************************************/
int Get1080PatchDataBuffer(unsigned char *Buffer);
int Get1080PatchDataBuffer(unsigned char *Buffer)
{
	int j,erg;

	if((erg=Get1080SoundData(0x03000000l, 0x00000048l, &Buffer[0])) != 0)
		return(erg);

	for(j=0; j<4; j++)
	{
		if((erg=Get1080SoundData(0x03001000l+j*0x200, 0x00000101l, &(Buffer[0x48+0x101*j]))) != 0)
			return(erg);
	}

	return(0);
}





/*********************************************************/
/*                                                       */
/* Sendet Patch-Datenblock in Patch-Editbuffer           */
/*                                                       */
/*********************************************************/
int Put1080PatchData(PATCH_STR *patch, long adr);
int Put1080PatchData(PATCH_STR *patch, long adr)
{
	unsigned char	sbuff[200];
	int	w,i,j,cs;
	int SysEx[5]={0xf0,0x41,0x10,0x6a,0x12};

	for(w=0,i=0;	i<5;	w++,i++)
		sbuff[w]=SysEx[i];

	/* Overwrite Adressbereich ? */
	if (adr == 0l)
	{	sbuff[w++]=(patch->adr >> 24) & 0x7f;
		sbuff[w++]=(patch->adr >> 16) & 0x7f;
	}
	else
	{	sbuff[w++]=(adr >> 24) & 0x7f;
		sbuff[w++]=(adr >> 16) & 0x7f;
	}
	sbuff[w++]=(patch->adr >>  8) & 0x7f;
	sbuff[w++]=(patch->adr      ) & 0x7f;

/*
	sbuff[w++]=(patch->size >> 24) & 0x7f;
	sbuff[w++]=(patch->size >> 16) & 0x7f;
	sbuff[w++]=(patch->size >>  8) & 0x7f;
	sbuff[w++]=(patch->size      ) & 0x7f;
*/
	for(i=0;i<12;	w++,i++)
		sbuff[w]=patch->name[i];
	for(i=0;i<60;	w++,i++)
		sbuff[w]=patch->daten[i];
	/*checksum*/
	for(i=5,cs=0; i<w;i++)
		cs+=sbuff[i];
	if (cs != 0)
		sbuff[w++]=0x80-(0x7f&cs);
	else
		sbuff[w++]=0;
	sbuff[w]=0xf7;
	#if (MACHINE==ATARI)
		Midiws(w,sbuff);
	#endif
	#if (MACHINE==GNU_PC)
		MidiLongMSG_Send((UINT8*)&sbuff, (UINT32)w+1);
	#endif

	for(j=0;j<4;j++)
	{
		for(w=0,i=0;	i<5;	w++,i++)
			sbuff[w]=SysEx[i];

		/* Overwrite Adressbereich ? */
		if (adr == 0l)
		{	sbuff[w++]=(patch->tone_hdr[j].adr >> 24) & 0x7f;
			sbuff[w++]=(patch->tone_hdr[j].adr >> 16) & 0x7f;
		}
		else
		{	sbuff[w++]=(adr >> 24) & 0x7f;
			sbuff[w++]=(adr >> 16) & 0x7f;
		}
		sbuff[w++]=(patch->tone_hdr[j].adr >>  8) & 0x7f;
		sbuff[w++]=(patch->tone_hdr[j].adr      ) & 0x7f;

		for(i=0;i<129;	w++,i++)
			sbuff[w]=patch->tone[i][j];
		/*checksum*/
		for(i=5,cs=0; i<w;i++)
			cs+=sbuff[i];
		if (cs != 0)
			sbuff[w++]=0x80-(0x7f&cs);
		else
			sbuff[w++]=0;
		sbuff[w]=0xf7;
		#if (MACHINE==ATARI)
			Midiws(w,sbuff);
		#endif
		#if (MACHINE==GNU_PC)
			MidiLongMSG_Send((UINT8*)&sbuff, (UINT32)w+1);
		#endif

	}
	return(0);
}


/*********************************************************/
/*                                                       */
/* Sendet Patch-Datenblock in File                       */
/*                                                       */
/*********************************************************/
int Put1080PatchDataFile(PATCH_STR *patch, long adr);
int Put1080PatchDataFile(PATCH_STR *patch, long adr)
{
	unsigned char	sbuff[200];
	int	w,i,j,cs;
	int SysEx[5]={0xf0,0x41,0x10,0x6a,0x12};
   char filename[20];
   FILE *fp;

   time_t longtime;
//   struct tm *newtime;
   
	for(w=0,i=0;	i<5;	w++,i++)
		sbuff[w]=SysEx[i];

	/* Overwrite Adressbereich ? */
	if (adr == 0l)
	{	sbuff[w++]=(patch->adr >> 24) & 0x7f;
		sbuff[w++]=(patch->adr >> 16) & 0x7f;
	}
	else
	{	sbuff[w++]=(adr >> 24) & 0x7f;
		sbuff[w++]=(adr >> 16) & 0x7f;
	}
	sbuff[w++]=(patch->adr >>  8) & 0x7f;
	sbuff[w++]=(patch->adr      ) & 0x7f;

	for(i=0;i<12;	w++,i++)
		sbuff[w]=patch->name[i];
	for(i=0;i<60;	w++,i++)
		sbuff[w]=patch->daten[i];
	/*checksum*/
	for(i=5,cs=0; i<w;i++)
		cs+=sbuff[i];
	if (cs != 0)
		sbuff[w++]=0x80-(0x7f&cs);
	else
		sbuff[w++]=0;
	sbuff[w]=0xf7;


	for(i=0; i<12;	i++)
   {
/*      if ((patch->name[i]) != 0x20)
*/
         filename[i]=patch->name[i];
/*      else
         break;
*/
   }  
   strcpy(&(filename[12]),".patch");

	printf("Filename: %s\n",filename);
	fp=fopen(filename,"w");
	fprintf(fp,"Patch_JV1080_Typ_0,\n");
#ifdef 	___LINUX
	time( &longtime );                     /* Get time as long integer. */
	newtime = localtime( &longtime );      /* Convert to local time. */
	fprintf(fp,"/* Date & Time */                \"%02d.%02d.%04d %02d:%02d:%02d\",\n",   \
	               newtime->tm_mday, \
	               newtime->tm_mon, \
	               newtime->tm_year+1900, \
	               newtime->tm_hour, \
	               newtime->tm_min, \
	               newtime->tm_sec  );
#endif
	
	fprintf(fp,"/* File: <%s>    */ \"%s\",\n\n", patch->name, patch->name);

	for(i=0; i<(w+1);	i++)
      fprintf(fp,"/* PartCommon %3d %15s %02X */ %3d,\n",i, X_PatchComm[i], sbuff[i], sbuff[i]);
   fprintf(fp,"\n");

      
	for(j=0;j<4;j++)
	{
		for(w=0,i=0;	i<5;	w++,i++)
			sbuff[w]=SysEx[i];

		/* Overwrite Adressbereich ? */
		if (adr == 0l)
		{	sbuff[w++]=(patch->tone_hdr[j].adr >> 24) & 0x7f;
			sbuff[w++]=(patch->tone_hdr[j].adr >> 16) & 0x7f;
		}
		else
		{	sbuff[w++]=(adr >> 24) & 0x7f;
			sbuff[w++]=(adr >> 16) & 0x7f;
		}
		sbuff[w++]=(patch->tone_hdr[j].adr >>  8) & 0x7f;
		sbuff[w++]=(patch->tone_hdr[j].adr      ) & 0x7f;

		for(i=0;i<129;	w++,i++)
			sbuff[w]=patch->tone[i][j];
		/*checksum*/
		for(i=5,cs=0; i<w;i++)
			cs+=sbuff[i];
		if (cs != 0)
			sbuff[w++]=0x80-(0x7f&cs);
		else
			sbuff[w++]=0;
		sbuff[w]=0xf7;
		for(i=0; i<(w+1);	i++)
   	   fprintf(fp,"/* Part %1d:%3d %15s %02X */ %3d,\n",j+1, i, X_PatchTone[i], sbuff[i], sbuff[i]);
	   fprintf(fp,"\n");

	}

	fprintf(fp,"/* Patch Data End  */ End\n");
	fclose(fp);
	return(0);
}


#ifdef NIE
struct	t_perfpatch {
	unsigned char	common[0x40];
	unsigned char	part[16][0x13];
	unsigned char	patchcomm[16][0x48];
	unsigned char	patchtone[16][4][0x81];
} Perform;
#endif
/****************************************************************/
/*                                                              */
/* Holt Performance-Datenblock und Patchdaten aus Edit-Buffer   */
/* und speichert ihn in PERFORM                                 */
/*                                                              */
/****************************************************************/
int Get1080PerfPatchData(void);
int Get1080PerfPatchData(void)
{
	int i,j,erg;

	if((erg=Get1080SoundData(0x01000000l, 0x00000040l, Perform.common)) != 0)
		return(erg);

	for(j=0; j<16; j++)
	{
		if(j==9) continue;
		if((erg=Get1080SoundData(0x01001000l+j*0x100, 0x00000013l, &Perform.part[j][0])) != 0)
			return(erg);
	}


	for(j=0; j<16; j++)
	{
		if(j==9) continue;
		if((erg=Get1080SoundData(0x02000000l+0x10000l*j, 0x00000048l, &Perform.patchcomm[j][0])) != 0)
			return(erg);
	}

	for(i=0; i<16; i++)
	{
		if(i==9) continue;
		for(j=0; j<4; j++)
		{
			if((erg=Get1080SoundData(0x02001000l+0x10000l*i+0x200*j, 0x00000101l, &Perform.patchtone[i][j][0])) != 0)
				return(erg);
		}
	}
	return(0);
}






int Write1080PatchData(unsigned char *sbuff, FILE *fp);
int Write1080PatchData(unsigned char *sbuff, FILE *fp)
{
	int i,j,erg; unsigned char sbufft[4][300];
	fprintf(fp,"PATCH_STR Patch = {\n");
	fprintf(fp,"/* Patch Common */\n");
	fprintf(fp,"0x03000000l, 0x00000048l,\n");

	fprintf(fp,"/*   NAME   */\n%c%12.12s%c,\n",0x22,&sbuff[9],0x22);
	for(i=12; i<13; i++)
		fprintf(fp,"%4d,  /* %d: %s */\n",sbuff[i+9],i,PatchComm[i]);

	fprintf(fp,"/* EFXParameter */\n");
	for(i=13; i<25; i++)
		fprintf(fp,"%3d,",sbuff[i+9]);
	fprintf(fp,"\n");

	for(i=25; i<72; i++)
	{
		fprintf(fp,"/*%2d-%s*/%7d,    ",i,PatchComm[i],sbuff[i+9]);
		if ((i % 2) == 0)
			fprintf(fp,"\n");
	}
	fprintf(fp,"\n\n");

	for(j=0; j<4; j++)
	{
		if((erg=Get1080SoundData(0x03001000l+j*0x200, 0x00000101l, &(sbufft[j][0]))) != 0)
			return(erg);
	}

	fprintf(fp,"/* Patch Tone:%3d */\n",j);
	fprintf(fp,"0x0%lxl, 0x00000101l,\n",0x03001000l);
	fprintf(fp,"0x0%lxl, 0x00000101l,\n",0x03001200l);
	fprintf(fp,"0x0%lxl, 0x00000101l,\n",0x03001400l);
	fprintf(fp,"0x0%lxl, 0x00000101l,\n",0x03001600l);
	for(i=0; i<129; i++)
	{
		fprintf(fp,"/*%14s %3d %3x*/ ",PatchTone[i],i,i);
		for(j=0; j<4; j++)
			fprintf(fp,"%5d,",sbufft[j][i+9]);
		fprintf(fp,"\n");
	}

	fprintf(fp,"};\n");
	return(0);
}

/************* alte Versionen ******************/


#ifdef NIE
int Get1080SoundName(int num, char *name);
int Get1080SoundName(int num, char *name)
{
	char pgm[2]={0xc0,0};
	int i=0;
	time_t  t1, t2;
	unsigned char	mb, buf[1000];

	/* Midibuffer leeren */
	while(GetMidiByteReady()==1)
		GetMidiByte();

	SetJV1080PanelMode(1);
	pgm[1]=num;
	Midiws(1,pgm);

	for(i=0; i<200; i++) buf[i]='\0';
	Req1080Data(0x03000000l, 0x00000048l);
	t1=time(&t1);
	for(	i=0, t2=0l, mb=0; 
			(mb != 0xf7) && (t2<5l);
			)
	{	if(GetMidiByteReady()==1)
			buf[i++]=mb=GetMidiByte();
		t2=time(&t2);
		t2=t2-t1;
	}
	if(t2>=5l)
		return(-1);
	else
	{	char cmp[8]={0x41,0x10,0x6a,0x12,3,0,0,0};
		for(i=0; i<8; i++)
			if(cmp[i] != buf[i+1])
				return(-2);
		if(buf[82] != 0xf7) return(-3);
		buf[21]='\0';
		strcpy(name,(char*)&buf[9]);
		return(0);
	}
}

int Get1080SoundData(int num, unsigned char *buf);
int Get1080SoundData(int num, unsigned char *buf)
{
	char pgm[2]={0xc0,0};
	int i=0;
	time_t  t1, t2;
	unsigned char	mb;

	/* Midibuffer leeren */
	while(GetMidiByteReady()==1)
		GetMidiByte();

	SetJV1080PanelMode(1);
	pgm[1]=num;
	Midiws(1,pgm);

	for(i=0; i<200; i++) buf[i]='\0';
	Req1080Data(0x03000000l, 0x00000048l);
	t1=time(&t1);
	for(	i=0, t2=0l, mb=0; 
			(mb != 0xf7) && (t2<5l);
			)
	{	if(GetMidiByteReady()==1)
			buf[i++]=mb=GetMidiByte();
		t2=time(&t2);
		t2=t2-t1;
	}
	if(t2>=5l)
		return(-1);
	else
	{	char cmp[8]={0x41,0x10,0x6a,0x12,3,0,0,0};
		for(i=0; i<8; i++)
			if(cmp[i] != buf[i+1])
				return(-2);
		if(buf[82] != 0xf7) return(-3);
		return(0);
	}
}
#endif


#ifdef Nichtsoalt
int UnusedPut1080PerfData(PERF_STR *perf);
int UnusedPut1080PerfData(PERF_STR *perf)
{
	unsigned char	sbuff[400];
	int	w,i,j,cs;
	int SysEx[5]={0xf0,0x41,0x10,0x6a,0x12};

	for(w=0,i=0;	i<5;	w++,i++)
		sbuff[w]=SysEx[i];
	sbuff[w++]=(perf->adr >> 24) & 0x7f;
	sbuff[w++]=(perf->adr >> 16) & 0x7f;
	sbuff[w++]=(perf->adr >>  8) & 0x7f;
	sbuff[w++]=(perf->adr      ) & 0x7f;
/*
	sbuff[w++]=(perf->size >> 24) & 0x7f;
	sbuff[w++]=(perf->size >> 16) & 0x7f;
	sbuff[w++]=(perf->size >>  8) & 0x7f;
	sbuff[w++]=(perf->size      ) & 0x7f;
*/
	for(i=0;i<12;	w++,i++)
		sbuff[w]=perf->name[i];
	for(i=0;i<52;	w++,i++)
		sbuff[w]=perf->daten[i];
	/*checksum*/
	for(i=5,cs=0; i<w;i++)
		cs+=sbuff[i];
	if (cs != 0)
		sbuff[w++]=0x80-(0x7f&cs);
	else
		sbuff[w++]=0;
	sbuff[w]=0xf7;
	Midiws(w,sbuff);
	for(j=0;j<16;j++)
	{
		for(w=0,i=0;	i<5;	w++,i++)
			sbuff[w]=SysEx[i];
		sbuff[w++]=(perf->part[j].adr >> 24) & 0x7f;
		sbuff[w++]=(perf->part[j].adr >> 16) & 0x7f;
		sbuff[w++]=(perf->part[j].adr >>  8) & 0x7f;
		sbuff[w++]=(perf->part[j].adr      ) & 0x7f;
		for(i=0;i<19;	w++,i++)
			sbuff[w]=perf->part[j].daten[i];
		/*checksum*/
		for(i=5,cs=0; i<w;i++)
			cs+=sbuff[i];
		if (cs != 0)
			sbuff[w++]=0x80-(0x7f&cs);
		else
			sbuff[w++]=0;
		sbuff[w]=0xf7;
		Midiws(w,sbuff);

	}
	return(0);
}
#endif


#ifdef ALT
int UnusedGet1080PerfData(void);
int UnusedGet1080PerfData(void)
{
	int i,j,erg; unsigned char buff[300];
	FILE *fp;

	if((erg=Get1080SoundData(0x01000000l, 0x00000040l, buff)) != 0)
		return(erg);

	if((fp=fopen("A_PERF.C","a")) == NULL)
		return(-5);
	
	fprintf(fp,"#include %ctypedefs.h%c\n\n",0x22,0x22);
	fprintf(fp,"PERF_STR Performance = {\n");
	fprintf(fp,"/* Performance Common */\n");
	fprintf(fp,"0x01000000l, 0x00000040l,\n");

	fprintf(fp,"/*   NAME   */\n%c%12.12s%c,\n",0x22,&buff[9],0x22);
	for(i=12; i<14; i++)
		fprintf(fp,"%4d,  /* %d: %s */\n",buff[i+9],i,PerfComm[i]);

	fprintf(fp,"/* EFXParameter */\n");
	for(i=14; i<26; i++)
		fprintf(fp,"%3d,",buff[i+9]);
	fprintf(fp,"\n");

	for(i=26; i<48; i++)
		fprintf(fp,"%4d,  /* %d: %s */\n",buff[i+9],i,PerfComm[i]);

	for(i=48; i<64; i++)
		fprintf(fp,"%3d,",buff[i+9]);
	fprintf(fp,"\n");

	for(j=0; j<16; j++)
	{
		if((erg=Get1080SoundData(0x01001000l+j*0x100, 0x00000013l, buff)) != 0)
			return(erg);

		fprintf(fp,"/* Part:%3d */\n",j);
		fprintf(fp,"0x0%lxl, 0x00000013l,\n",0x01001000l+j*0x100);
		for(i=0; i<19; i++)
		{
			fprintf(fp,"/*%s*/  %3d,  ",PerfPart[i],buff[i+9]);
			if (((i+1) % 3) == 0)
				fprintf(fp,"\n");
		}
		fprintf(fp,"\n\n");
	}
	fprintf(fp,"};\n");
	fclose(fp);
	return(0);
}
#endif
