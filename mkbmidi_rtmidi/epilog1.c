#include <stdio.h>

#include "typedefs.h"
#include "midi.h"
#include "perf.h"
#include "patch.h"


/* -------- EpilogEins ---------------------------------------------------- */

t_splits_jv1080 EpilogEins_Crash_Giant={
	"Crash_Giant", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {  
      { 1, InChan0, 0, 0, "NoName", D4,C8,  -12,  Chan0, 127, SustModeSust, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,  /* Gigant */
      { 1, InChan0, 0, 0, "NoName", C1,H1,    0,  Chan1, 127,  SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,  /* Drone Split */
      { 1, InChan0, 0, 0, "NoName", C2,CIS4, 12,  Chan2, 127, SustModeSust, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,  /* Gigant verklingend */
      { 0, InChan0, 0, 0, "NoName", A0,C8,    0,  Chan3, 127,  SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", A0,C8,    0,  Chan4, 127,  SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", A0,C8,    0,  Chan5, 127,  SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", A0,C8,    0,  Chan6, 127,  SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,    0,  Chan7, 127,  SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,    0,  Chan8, 127,  SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,    0,  Chan9, 127,  SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,    0,  Chana, 127,  SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,    0,  Chanb, 127,  SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,    0,  Chanc, 127,  SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,    0,  Chand, 127,  SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,    0,  Chane, 127,  SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,    0,  Chanf, 127,  SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } 
      },
   MNUMBER_JV1080_SPLITS
   };




t_instrument EpilogEins_AllSplits[] = 
{
   {  1, (t_splits_jv1080 *)&EpilogEins_Crash_Giant   , (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
   {  0, (t_splits_jv1080 *)NULL                      , (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
};

t_song_xxyy EpilogEins_xxyySong = { 
   "EpilogEins",
   "EpilogEins",
   (t_instrument*)&EpilogEins_AllSplits,
   { 6 }, { 0xffffffffUL }, { 0xffffffffUL }, 
};


/* -------- EpilogEins Alt ---------------------------------------------------- */

struct t_song EpilogEins;
struct t_splits EpilogEins0;
struct t_splits EpilogEins1;
struct t_splits *EpilogEinsList[] = 
{
	&EpilogEins0, NULL};


PATCH_STR Patch_EpilogEins0;
PATCH_STR Patch_EpilogEins1;

  
struct t_song EpilogEins={ "EpilogEins",
	0, 81,1,3,&EpilogEinsList[0],
	&Perf_IntroEins,
/*	NULL,  &Perf_EpilogEins, */
	NULL,0l,
	&Patch_EpilogEins1, 0x2010000l, /* Crash Pad modifiziert */
	&Patch_EpilogEins0, 0x2020000l,	/* Giant verklingend */
	NULL,0l,
	NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,2,56,		Chan0,	/* Gigant */ /* Dawn 90 */
    1, 81,2,109,	Chan1,	/* Crash Pads */
    1, 81,0,0,      Chan2,  /* wird Åberschrieben  */
    0, 81,2,90,		Chan3,	/* Dawn 2 Dusk */
    0, 81,2,114,	Chan4,	/* Pure Tibet */
/*    1, 81,1,101,	Chan5,	*/ /* Raya Shaku */
    0, 81,2,14,	Chan5,	/* Analog */
    0, 81,2, 44,    Chan6,	/* Film Octaves */
    0, 81,2,109,	Chan7,	/* Drone Split */
    0, 81,0,101,    Chan8,
    0, 81,0,0,   Chan9,
    0, 81,0,0,   Chan10,
    0, 81,0,0,   Chan11,
    0, 81,0,0,   Chan12,
    0, 81,0,0,   Chan13,
    0, 81,0,0,   Chan14,
    0, 81,0,0,   Chan15,
    };

struct t_splits EpilogEins0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   C4,C8, -12,  Chan0, 127, 1,VolCtr1,InChan0,		/* Gigant */
    1,   C2,H3,  12,  Chan2, 127, 1,VolCtr1,InChan0,		/* Gigant verklingend */
    0,   C2,H2,-12,  Chan8, 127, 0,VolCtr2,InChan0,		/* Sands of Time */
    0,   C5,C8,-12,  Chan5, 127, 0,VolCtr2,InChan0,		/* Raya Shaku  */
    0,   C2,H4, 12,  Chan6, 127, 0,VolCtr2,InChan0,		/* Choir Aaaah */
    1,   C1,H1,  0,  Chan1, 127, 0,VolCtr2,InChan0,		/* Drone Split */
    0,   0,127,  0,  Chan6, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan7, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan8, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan9, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chana, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chanb, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chanc, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chand, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chane, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chanf, 127, 0,VolCtr2,InChan0,
	"CS"
    };

struct t_splits EpilogEins1={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    0,   A0,H3,  0,  Chan3, 127, 0,VolCtr2,InChan1,		/* Dawn 2 Disk */
    0,   C3,C8,  0,  Chan3, 127, 0,VolCtr2,InChan1,		/* Dawn 2 Dusk */
    1,   C2,H4, 48,  Chan0,  90, 1,VolCtr2,InChan0,
    1,   C5,C8,-24,  Chan5, 127, 0,VolCtr1,InChan0,		/* True Analog  */
    1,   C2,H4,-12,  Chan6, 127, 1,VolCtr2,InChan0,		/* ??? Choir Aaaah */
    1,   C1,H1,  0,  Chan7, 127, 0,VolCtr1,InChan0,		/* Drone Split */
    0,   0,127,  0,  Chan0, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan7, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan8, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan9, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chana, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chanb, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chanc, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chand, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chane, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chanf, 127, 0,VolCtr2,InChan0,
	"CS"
    };

/* ENDE EpilogEins */


PATCH_STR Patch_EpilogEins0 = {
/* Patch Common */
0x03000000l, 0x00000048l,
/*   NAME   */
"Gigantalog  ",
  13,  /* 12: EFXType------ */
/* EFXParameter */
  0,  7, 10,  2,127, 84,  0, 21, 22, 54,127,  0,
/*25-EFXOutAss----*/      0,    /*26-EFXOutLev----*/    127,    
/*27-EFXChSendLev-*/      0,    /*28-EFXRevSendLev*/      0,    
/*29-EFXCtrlS1----*/      0,    /*30-EFXCtrlD1----*/     63,    
/*31-EFXCtrlS2----*/      0,    /*32-EFXCtrlD2----*/     63,    
/*33-ChorLev------*/    127,    /*34-ChorRate-----*/     40,    
/*35-ChorDepth----*/     40,    /*36-ChorPreDel---*/      0,    
/*37-ChorFdback---*/      0,    /*38-ChorOutAss---*/      0,    
/*39-RevType------*/      5,    /*40-RevLevel-----*/     99,    
/*41-RevTime------*/    127,    /*42-RevHFDamp----*/     12,    
/*43-RevFdback----*/      0,    /*44-DefTempo1----*/      6,    
/*45-DefTempo2----*/      4,    /*46-PatchLevel---*/    100,    
/*47-PatchPan-----*/     64,    /*48-AnalogFeel---*/     33,    
/*49-BendRngUp----*/      2,    /*50-BendRngDown--*/      2,    
/*51-KeyAssMode---*/      0,    /*52-SoloLegato---*/      0,    
/*53-PortaSw------*/      0,    /*54-PortaMode----*/      1,    
/*55-PortaType----*/      0,    /*56-PortaStart---*/      0,    
/*57-PortaTime----*/     18,    /*58-PtchCtrlSrc2-*/      1,    
/*59-PtchCtrlSrc3-*/      2,    /*60-EFXCtrl-H/P--*/      0,    
/*61-Ctrl1-H/P----*/      0,    /*62-Ctrl2-H/P----*/      0,    
/*63-Ctrl3-H/P----*/      0,    /*64-VelRangeSw---*/      1,    
/*65-OctaveSh-----*/      4,    /*66-StrTuneDepth-*/      0,    
/*67-VoicePrio----*/      0,    /*68-StructType1&2*/      0,    
/*69-BoostLevel1&2*/      0,    /*70-StructType3&4*/      0,    
/*71-BoostLevel3&4*/      0,    

/* Patch Tone:  4 */
0x03001000l, 0x00000101l,
0x03001200l, 0x00000101l,
0x03001400l, 0x00000101l,
0x03001600l, 0x00000101l,
/*  ToneSW         0   0*/     1,    1,    1,    1,
/*  WaveGrp        1   1*/     0,    0,    0,    0,
/*  WaveGrpId      2   2*/     2,    2,    2,    2,
/*  WaveNumber1    3   3*/     1,    1,    1,    1,
/*  WaveNumber2    4   4*/     9,    9,    9,    9,
/*  WaveGain       5   5*/     1,    1,    1,    1,
/*  FXMswitch      6   6*/     0,    0,    0,    0,
/*  FXMcolor       7   7*/     0,    0,    0,    0,
/*  FXMdepth       8   8*/     0,    0,    0,    0,
/*  ToneDelMode    9   9*/     0,    0,    0,    0,
/*  ToneDelTime   10   a*/     0,    0,    0,    0,
/*  VelCrossFade  11   b*/     0,    0,    0,    0,
/*  VelRngLow     12   c*/     1,    1,    1,    1,
/*  VelRngUp      13   d*/   127,  127,  127,  127,
/*  KeyRngLow     14   e*/     0,    0,    0,    0,
/*  KeyRngUp      15   f*/   127,  127,  127,  127,
/*  RedamperSw    16  10*/     0,    0,    0,    0,
/*  VolCtrlSw     17  11*/     1,    1,    1,    1,
/*  Hold1CtrlSw   18  12*/     1,    1,    1,    1,
/*  BendCtrlSw    19  13*/     1,    1,    1,    1,
/*  PanCtrlSw     20  14*/     1,    1,    1,    1,
/*  Ctrl1Dest1    21  15*/    10,   10,   10,   10,
/*  Ctrl1Dpth1    22  16*/    68,   60,   68,   60,
/*  Ctrl1Dest2    23  17*/     0,    0,    0,    0,
/*  Ctrl1Dpth2    24  18*/    63,   63,   63,   63,
/*  Ctrl1Dest3    25  19*/     0,    0,    0,    0,
/*  Ctrl1Dpth3    26  1a*/    63,   63,   63,   63,
/*  Ctrl1Dest4    27  1b*/     0,    0,    0,    0,
/*  Ctrl1Dpth4    28  1c*/    63,   63,   63,   63,
/*  Ctrl2Dest1    29  1d*/     2,    2,    2,    2,
/*  Ctrl2Dpth1    30  1e*/    83,   83,   83,   83,
/*  Ctrl2Dest2    31  1f*/     0,    0,    0,    0,
/*  Ctrl2Dpth2    32  20*/    63,   63,   63,   63,
/*  Ctrl2Dest3    33  21*/     0,    0,    0,    0,
/*  Ctrl2Dpth3    34  22*/    63,   63,   63,   63,
/*  Ctrl2Dest4    35  23*/     0,    0,    0,    0,
/*  Ctrl2Dpth4    36  24*/    63,   63,   63,   63,
/*  Ctrl3Dest1    37  25*/     4,    4,    4,    4,
/*  Ctrl3Dpth1    38  26*/    78,   78,   78,   78,
/*  Ctrl3Dest2    39  27*/     0,    0,    0,    0,
/*  Ctrl3Dpth2    40  28*/    63,   63,   63,   63,
/*  Ctrl3Dest3    41  29*/     0,    0,    0,    0,
/*  Ctrl3Dpth3    42  2a*/    63,   63,   63,   63,
/*  Ctrl3Dest4    43  2b*/     0,    0,    0,    0,
/*  Ctrl1Dpth4    44  2c*/    63,   63,   63,   63,
/*  LFO1WaveForm  45  2d*/     0,    0,    0,    0,
/*  LFO1KeyTrig   46  2e*/     1,    1,    1,    1,
/*  LFO1Rate      47  2f*/    42,   42,   42,   42,
/*  LFO1LevOffs   48  30*/     2,    2,    2,    2,
/*  LFO1DelTime   49  31*/    37,   37,   37,   37,
/*  LFO1FadeMode  50  32*/     0,    0,    0,    0,
/*  LFO1FadeTime  51  33*/    38,   63,   63,   63,
/*  LFO1ExtSync   52  34*/     0,    0,    0,    0,
/*  LFO2WaveForm  53  35*/     0,    0,    0,    0,
/*  LFO2KeyTrig   54  36*/     0,    0,    0,    0,
/*  LFO2Rate      55  37*/    92,   92,   92,   92,
/*  LFO2LevOffs   56  38*/     2,    2,    2,    2,
/*  LFO2DelTime   57  39*/     0,    0,    0,    0,
/*  LFO2FadeMode  58  3a*/     0,    0,    0,    0,
/*  LFO2FadeTime  59  3b*/     0,    0,    0,    0,
/*  LFO2ExtSync   60  3c*/     0,    0,    0,    0,
/*  PtchCoarseTn  61  3d*/    36,   36,   36,   36,
/*  PtchFineTn    62  3e*/    46,   54,   56,   46,
/*  PtchRndDepth  63  3f*/     0,    0,    0,    0,
/*  PtchKeyFoll   64  40*/    12,   12,   12,   12,
/*  PtchEnvDepth  65  41*/    12,   12,   12,   12,
/*  PtchVelSens   66  42*/    50,   50,   50,   50,
/*  PtchVelT1Sen  67  43*/     7,    7,    7,    7,
/*  PtchVelT4Sen  68  44*/     7,    7,    7,    7,
/*  PtchTimKeyFo  69  45*/     7,    7,    7,    7,
/*  PtchTime1     70  46*/     0,    0,    0,    0,
/*  PtchTime2     71  47*/     0,    0,    0,    0,
/*  PtchTime3     72  48*/     0,    0,    0,    0,
/*  PtchTime4     73  49*/     0,    0,    0,    0,
/*  PtchLevel1    74  4a*/    63,   63,   63,   63,
/*  PtchLevel2    75  4b*/    63,   63,   63,   63,
/*  PtchLevel3    76  4c*/    63,   63,   63,   63,
/*  PtchLevel4    77  4d*/    63,   63,   63,   63,
/*  PtchLFO1Dpth  78  4e*/    66,   60,   66,   60,
/*  PtchLFO2Dpth  79  4f*/    63,   63,   63,   63,
/*  FltType       80  50*/     1,    1,    1,    1,
/*  FltCutoffFrq  81  51*/    66,   66,   66,   66,
/*  FltCutoffFol  82  52*/     5,    5,    5,    5,
/*  FltResonance  83  53*/     1,    1,    1,    1,
/*  FltResVelSns  84  54*/    50,   50,   50,   50,
/*  FltEnvDepth   85  55*/    86,   86,   86,   86,
/*  FltEnvVelCur  86  56*/     0,    0,    0,    0,
/*  FltEnvVelSns  87  57*/   103,  103,  103,  103,
/*  FltEnvVelT1   88  58*/     7,    7,    7,    7,
/*  FltEnvVelT4   89  59*/     7,    7,    7,    7,
/*  FltEnvTKeyFl  90  5a*/     7,    7,    7,    7,
/*  FltTime1      91  5b*/     0,    0,    0,    0,
/*  FltTime2      92  5c*/    97,   97,   97,   97,
/*  FltTime3      93  5d*/    55,   55,   55,   55,
/*  FltTime4      94  5e*/   100,  100,  100,  100,
/*  FltLevel1     95  5f*/   127,  127,  127,  127,
/*  FltLevel2     96  60*/    50,   50,   50,   50,
/*  FltLevel3     97  61*/    62,   62,   62,   62,
/*  FltLevel4     98  62*/     0,    0,    0,    0,
/*  FltLFO1Depth  99  63*/    63,   63,   63,   63,
/*  FltLFO2Depth 100  64*/    63,   63,   63,   63,
/*  ToneLevel    101  65*/   127,  127,  127,  127,
/*  BiasDirect   102  66*/     0,    0,    0,    0,
/*  BiasPoint    103  67*/    60,   60,   60,   60,
/*  BiasLevel    104  68*/     7,    7,    7,    7,
/*  A-EnvVelCurv 105  69*/     0,    0,    0,    0,
/*  A-EnvVelSens 106  6a*/   100,  100,  100,  100,
/*  A-EnvT1Sens  107  6b*/     7,    7,    7,    7,
/*  A-EnvT4Sens  108  6c*/     7,    7,    7,    7,
/*  A-EnvTKeyFol 109  6d*/     7,    7,    7,    7,
/*  A-EnvTime1   110  6e*/    67,   67,   67,   67,
/*  A-EnvTime2   111  6f*/    46,   46,   46,   46,
/*  A-EnvTime3   112  70*/   100,  100,  100,  100,
/*  A-EnvTime4   113  71*/   120,  120,  120,  120,
/*  A-EnvLevel1  114  72*/   127,  127,  127,  127,
/*  A-EnvLevel2  115  73*/   127,  127,  127,  127,
/*  A-EnvLevel3  116  74*/    127, 127, 127, 127,
/*  AmplLFO1Dpth 117  75*/    63,   63,   63,   63,
/*  AmplLFO2Dpth 118  76*/    63,   63,   63,   63,
/*  TonePan      119  77*/     0,  127,    0,  107,
/*  PanKeyFollow 120  78*/     7,    7,    7,    7,
/*  PanRndDepth  121  79*/     0,    0,    0,    0,
/*  PanAltDepth  122  7a*/    64,   64,   64,   64,
/*  PanLFO1Depth 123  7b*/    63,   63,   63,   63,
/*  PanLFO2Depth 124  7c*/    63,   63,   63,   63,
/*  OutAssign    125  7d*/     1,    1,    1,    1,
/*  OutLevel     126  7e*/   127,  127,  127,  127,
/*  ChSendLevel  127  7f*/     0,    0,    0,    0,
/*  RevSendLevel 128  80*/   110,  110,  110,  110,
};


/* Crash Pad   modifiziert */
PATCH_STR Patch_EpilogEins1 = {
/* Patch Common */
0x03000000l, 0x00000048l,
/*   NAME   */
"Crash Pad   ",
  23,  /* 12: EFXType------ */
/* EFXParameter */
  5, 10, 60, 17, 15, 15, 50,127,  0,  0,  0,  0,
/*25-EFXOutAss----*/      0,    /*26-EFXOutLev----*/    127,    
/*27-EFXChSendLev-*/      0,    /*28-EFXRevSendLev*/      0,    
/*29-EFXCtrlS1----*/      0,    /*30-EFXCtrlD1----*/     63,    
/*31-EFXCtrlS2----*/      0,    /*32-EFXCtrlD2----*/     63,    
/*33-ChorLev------*/    127,    /*34-ChorRate-----*/     40,    
/*35-ChorDepth----*/     40,    /*36-ChorPreDel---*/      0,    
/*37-ChorFdback---*/      0,    /*38-ChorOutAss---*/      0,    
/*39-RevType------*/      5,    /*40-RevLevel-----*/    127,    
/*41-RevTime------*/    127,    /*42-RevHFDamp----*/     17,    
/*43-RevFdback----*/      0,    /*44-DefTempo1----*/      6,    
/*45-DefTempo2----*/      4,    /*46-PatchLevel---*/    127,    
/*47-PatchPan-----*/     64,    /*48-AnalogFeel---*/      0,    
/*49-BendRngUp----*/      2,    /*50-BendRngDown--*/      2,    
/*51-KeyAssMode---*/      0,    /*52-SoloLegato---*/      0,    
/*53-PortaSw------*/      0,    /*54-PortaMode----*/      1,    
/*55-PortaType----*/      0,    /*56-PortaStart---*/      0,    
/*57-PortaTime----*/     18,    /*58-PtchCtrlSrc2-*/      1,    
/*59-PtchCtrlSrc3-*/      2,    /*60-EFXCtrl-H/P--*/      0,    
/*61-Ctrl1-H/P----*/      0,    /*62-Ctrl2-H/P----*/      0,    
/*63-Ctrl3-H/P----*/      0,    /*64-VelRangeSw---*/      1,    
/*65-OctaveSh-----*/      3,    /*66-StrTuneDepth-*/      0,    
/*67-VoicePrio----*/      0,    /*68-StructType1&2*/      0,    
/*69-BoostLevel1&2*/      0,    /*70-StructType3&4*/      0,    
/*71-BoostLevel3&4*/      0,    

/* Patch Tone:  4 */
0x03001000l, 0x00000101l,
0x03001200l, 0x00000101l,
0x03001400l, 0x00000101l,
0x03001600l, 0x00000101l,
/*  ToneSW         0   0*/     1,    1,    1,    1,
/*  WaveGrp        1   1*/     0,    0,    0,    0,
/*  WaveGrpId      2   2*/     2,    1,    2,    1,
/*  WaveNumber1    3   3*/     5,   14,    0,   15,
/*  WaveNumber2    4   4*/    13,    1,   11,    4,
/*  WaveGain       5   5*/     3,    2,    2,    2,
/*  FXMswitch      6   6*/     0,    0,    0,    0,
/*  FXMcolor       7   7*/     0,    0,    0,    0,
/*  FXMdepth       8   8*/     0,    0,    0,    0,
/*  ToneDelMode    9   9*/     0,    0,    0,    0,
/*  ToneDelTime   10   a*/     0,    0,    0,    0,
/*  VelCrossFade  11   b*/     0,    0,    0,    0,
/*  VelRngLow     12   c*/     1,    1,    1,    1,
/*  VelRngUp      13   d*/   127,  127,  127,  127,
/*  KeyRngLow     14   e*/     0,    0,    0,    0,
/*  KeyRngUp      15   f*/    75,   84,   87,   91,
/*  RedamperSw    16  10*/     0,    0,    0,    0,
/*  VolCtrlSw     17  11*/     1,    1,    1,    1,
/*  Hold1CtrlSw   18  12*/     1,    1,    1,    1,
/*  BendCtrlSw    19  13*/     1,    1,    1,    1,
/*  PanCtrlSw     20  14*/     1,    1,    1,    1,
/*  Ctrl1Dest1    21  15*/     0,    0,    8,    1,
/*  Ctrl1Dpth1    22  16*/    63,   63,   78,  103,
/*  Ctrl1Dest2    23  17*/     0,    0,    0,    9,
/*  Ctrl1Dpth2    24  18*/    63,   63,   63,   72,
/*  Ctrl1Dest3    25  19*/     0,    0,    0,    0,
/*  Ctrl1Dpth3    26  1a*/    63,   63,   63,   63,
/*  Ctrl1Dest4    27  1b*/     0,    0,    0,    0,
/*  Ctrl1Dpth4    28  1c*/    63,   63,   63,   63,
/*  Ctrl2Dest1    29  1d*/     0,    4,    0,    4,
/*  Ctrl2Dpth1    30  1e*/    63,   93,   63,   93,
/*  Ctrl2Dest2    31  1f*/     0,    0,    0,    0,
/*  Ctrl2Dpth2    32  20*/    63,   63,   63,   63,
/*  Ctrl2Dest3    33  21*/     0,    0,    0,    0,
/*  Ctrl2Dpth3    34  22*/    63,   63,   63,   63,
/*  Ctrl2Dest4    35  23*/     0,    0,    0,    0,
/*  Ctrl2Dpth4    36  24*/    63,   63,   63,   63,
/*  Ctrl3Dest1    37  25*/     4,    4,    4,    4,
/*  Ctrl3Dpth1    38  26*/    78,   78,   78,   78,
/*  Ctrl3Dest2    39  27*/     0,    0,    0,    0,
/*  Ctrl3Dpth2    40  28*/    63,   63,   63,   63,
/*  Ctrl3Dest3    41  29*/     0,    0,    0,    0,
/*  Ctrl3Dpth3    42  2a*/    63,   63,   63,   63,
/*  Ctrl3Dest4    43  2b*/     0,    0,    0,    0,
/*  Ctrl1Dpth4    44  2c*/    63,   63,   63,   63,
/*  LFO1WaveForm  45  2d*/     0,    1,    0,    0,
/*  LFO1KeyTrig   46  2e*/     0,    0,    0,    0,
/*  LFO1Rate      47  2f*/   100,   69,  100,  100,
/*  LFO1LevOffs   48  30*/     2,    2,    2,    2,
/*  LFO1DelTime   49  31*/     0,    0,    0,    0,
/*  LFO1FadeMode  50  32*/     0,    0,    0,    0,
/*  LFO1FadeTime  51  33*/     0,    0,    0,    0,
/*  LFO1ExtSync   52  34*/     0,    0,    0,    0,
/*  LFO2WaveForm  53  35*/     0,    0,    3,    0,
/*  LFO2KeyTrig   54  36*/     0,    0,    0,    0,
/*  LFO2Rate      55  37*/    80,   80,  108,   80,
/*  LFO2LevOffs   56  38*/     2,    2,    4,    2,
/*  LFO2DelTime   57  39*/     0,    0,   49,    0,
/*  LFO2FadeMode  58  3a*/     0,    0,    0,    0,
/*  LFO2FadeTime  59  3b*/     0,    0,  100,    0,
/*  LFO2ExtSync   60  3c*/     0,    0,    0,    0,
/*  PtchCoarseTn  61  3d*/    48,   48,   48,   36,
/*  PtchFineTn    62  3e*/    50,   50,   50,   50,
/*  PtchRndDepth  63  3f*/     0,    0,    0,    0,
/*  PtchKeyFoll   64  40*/    12,   12,   12,   12,
/*  PtchEnvDepth  65  41*/    12,   12,   12,   12,
/*  PtchVelSens   66  42*/    50,   50,   50,   50,
/*  PtchVelT1Sen  67  43*/     7,    7,    7,    7,
/*  PtchVelT4Sen  68  44*/     7,    7,    7,    7,
/*  PtchTimKeyFo  69  45*/     7,    7,    7,    7,
/*  PtchTime1     70  46*/     0,    0,    0,    0,
/*  PtchTime2     71  47*/     0,    0,    0,    0,
/*  PtchTime3     72  48*/     0,    0,    0,    0,
/*  PtchTime4     73  49*/     0,    0,    0,    0,
/*  PtchLevel1    74  4a*/    63,   63,   63,   63,
/*  PtchLevel2    75  4b*/    63,   63,   63,   63,
/*  PtchLevel3    76  4c*/    63,   63,   63,   63,
/*  PtchLevel4    77  4d*/    63,   63,   63,   63,
/*  PtchLFO1Dpth  78  4e*/    63,   67,   60,   63,
/*  PtchLFO2Dpth  79  4f*/    63,   63,   75,   63,
/*  FltType       80  50*/     1,    1,    0,    0,
/*  FltCutoffFrq  81  51*/    97,   36,  110,  127,
/*  FltCutoffFol  82  52*/     5,    5,    5,    5,
/*  FltResonance  83  53*/     0,   20,   66,    0,
/*  FltResVelSns  84  54*/    50,   50,   50,   50,
/*  FltEnvDepth   85  55*/    63,  126,   63,   63,
/*  FltEnvVelCur  86  56*/     0,    0,    0,    0,
/*  FltEnvVelSns  87  57*/    50,   50,   50,   50,
/*  FltEnvVelT1   88  58*/     7,    7,    7,    7,
/*  FltEnvVelT4   89  59*/     7,    7,    7,    7,
/*  FltEnvTKeyFl  90  5a*/     7,    7,    7,    7,
/*  FltTime1      91  5b*/     0,   49,    0,    0,
/*  FltTime2      92  5c*/     0,   40,    0,    0,
/*  FltTime3      93  5d*/     0,    9,    0,    0,
/*  FltTime4      94  5e*/     0,   22,    0,    0,
/*  FltLevel1     95  5f*/   127,   35,  127,  127,
/*  FltLevel2     96  60*/   127,   77,  127,  127,
/*  FltLevel3     97  61*/   127,   37,  127,  127,
/*  FltLevel4     98  62*/   127,   35,  127,  127,
/*  FltLFO1Depth  99  63*/    63,   63,   63,   63,
/*  FltLFO2Depth 100  64*/    63,   63,   66,   63,
/*  ToneLevel    101  65*/   127,   70,   57,   86,
/*  BiasDirect   102  66*/     1,    0,    0,    0,
/*  BiasPoint    103  67*/    70,   60,   52,   60,
/*  BiasLevel    104  68*/     0,    7,    0,    7,
/*  A-EnvVelCurv 105  69*/     1,    0,    0,    0,
/*  A-EnvVelSens 106  6a*/    96,  100,   71,  100,
/*  A-EnvT1Sens  107  6b*/     7,    7,    7,    7,
/*  A-EnvT4Sens  108  6c*/     7,    7,    7,    7,
/*  A-EnvTKeyFol 109  6d*/    12,    7,   10,    7,
/*  A-EnvTime1   110  6e*/     0,    0,   43,   69,
/*  A-EnvTime2   111  6f*/    51,   40,  127,   40,
/*  A-EnvTime3   112  70*/    78,  100,  127,  100,
/*  A-EnvTime4   113  71*/    59,   82,   86,   80,
/*  A-EnvLevel1  114  72*/   127,  127,  127,  127,
/*  A-EnvLevel2  115  73*/   119,  127,  127,  117,
/*  A-EnvLevel3  116  74*/    21,  127,   22,  107,
/*  AmplLFO1Dpth 117  75*/    63,   63,   63,   63,
/*  AmplLFO2Dpth 118  76*/    63,   63,   57,   63,
/*  TonePan      119  77*/    44,   84,  107,    5,
/*  PanKeyFollow 120  78*/    14,    7,   14,   14,
/*  PanRndDepth  121  79*/     0,    0,    0,    0,
/*  PanAltDepth  122  7a*/    64,   64,   64,   64,
/*  PanLFO1Depth 123  7b*/    63,   63,   63,   63,
/*  PanLFO2Depth 124  7c*/    63,   63,   62,   63,
/*  OutAssign    125  7d*/     1,    1,    1,    1,
/*  OutLevel     126  7e*/   127,  127,  127,  127,
/*  ChSendLevel  127  7f*/    50,    4,   67,   47,
/*  RevSendLevel 128  80*/    37,   61,   57,  127,
};
