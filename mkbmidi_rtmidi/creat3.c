#include <stdio.h>

#include "typedefs.h"
#include "midi.h"

struct t_song Creat3;

PATCH_STR Patch_Creat3;

PERF_STR Perf_Creat3;

struct t_splits Creat30;

struct t_splits *Creat3List[] = 
{
	&Creat30, NULL};

struct t_song Creat3={ "Creature3",
	0, 81,1,21,&Creat3List[0],
	&Perf_Creat3,
	&Patch_Creat3,		0x02000000l,  
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0,0,   Chan0,
    1, 81,0,0,   Chan1,
    1, 81,0,0,   Chan2,
    1, 81,0,0,   Chan3,
    1, 81,2,0,   Chan4,
    1, 81,2,0,   Chan5,
    0, 81,0,0,   Chan6,
    0, 81,0,0,   Chan7,
    0, 81,0,0,   Chan8,
    0, 81,0,0,   Chan9,
    0, 81,0,0,   Chan10,
    0, 81,0,0,   Chan11,
    0, 81,0,0,   Chan12,
    0, 81,0,0,   Chan13,
    0, 81,0,0,   Chan14,
    0, 81,0,0,   Chan15,
    };


struct t_splits Creat30={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   C1,C8,  0,  Chan0, 127, 1,VolCtr2, InChan0,
    0,   C2,C8,  0,  Chan1, 127, 1,VolCtr2, InChan0,
    0,   A0,H1,  0,  Chan2, 127, 0,VolCtr2, InChan0,
    0,   A0,C8,  0,  Chan3, 127, 0,VolCtr2, InChan0,
    0,   0,127,  0,  Chan4, 127, 0,VolCtr2, InChan0,
    0,   0,127,  0,  Chan5, 127, 0,VolCtr2, InChan0,
    0,   0,127,  0,  Chan6, 127, 0,VolCtr2, InChan0,
    0,   0,127,  0,  Chan7, 127, 0,VolCtr2, InChan0,
    0,   0,127,  0,  Chan8, 127, 0,VolCtr2, InChan0,
    0,   0,127,  0,  Chan9, 127, 0,VolCtr2, InChan0,
    0,   0,127,  0,  Chana, 127, 0,VolCtr2, InChan0,
    0,   0,127,  0,  Chanb, 127, 0,VolCtr2, InChan0,
    0,   0,127,  0,  Chanc, 127, 0,VolCtr2, InChan0,
    0,   0,127,  0,  Chand, 127, 0,VolCtr2, InChan0,
    0,   0,127,  0,  Chane, 127, 0,VolCtr2, InChan0,
    0,   0,127,  0,  Chanf, 127, 0,VolCtr2, InChan0,
	"CS"
    };



PATCH_STR Patch_Creat3;
PATCH_STR Patch_Creat3 = {
/* Patch Common */
0x03000000l, 0x00000048l,
/*   NAME   */
"You and Luck",
  12,  /* 12: EFXType------ */
/* EFXParameter */
 10,  8, 83, 32, 15, 15, 50,127,  0,  0,  0,  0,
/*25-EFXOutAss----*/      0,    /*26-EFXOutLev----*/    127,    
/*27-EFXChSendLev-*/      0,    /*28-EFXRevSendLev*/      0,    
/*29-EFXCtrlS1----*/      1,    /*30-EFXCtrlD1----*/     73,    
/*31-EFXCtrlS2----*/      1,    /*32-EFXCtrlD2----*/     83,    
/*33-ChorLev------*/    127,    /*34-ChorRate-----*/      0,    
/*35-ChorDepth----*/    127,    /*36-ChorPreDel---*/      0,    
/*37-ChorFdback---*/      0,    /*38-ChorOutAss---*/      0,    
/*39-RevType------*/      5,    /*40-RevLevel-----*/    108,    
/*41-RevTime------*/     93,    /*42-RevHFDamp----*/     17,    
/*43-RevFdback----*/     29,    /*44-DefTempo1----*/      6,    
/*45-DefTempo2----*/      4,    /*46-PatchLevel---*/    127,    
/*47-PatchPan-----*/     64,    /*48-AnalogFeel---*/      3,    
/*49-BendRngUp----*/      2,    /*50-BendRngDown--*/      2,    
/*51-KeyAssMode---*/      1,    /*52-SoloLegato---*/      0,    
/*53-PortaSw------*/      1,    /*54-PortaMode----*/      0,    
/*55-PortaType----*/      0,    /*56-PortaStart---*/      1,    
/*57-PortaTime----*/      9,    /*58-PtchCtrlSrc2-*/      9,    
/*59-PtchCtrlSrc3-*/      2,    /*60-EFXCtrl-H/P--*/      0,    
/*61-Ctrl1-H/P----*/      0,    /*62-Ctrl2-H/P----*/      0,    
/*63-Ctrl3-H/P----*/      0,    /*64-VelRangeSw---*/      1,    
/*65-OctaveSh-----*/      3,    /*66-StrTuneDepth-*/      0,    
/*67-VoicePrio----*/      0,    /*68-StructType1&2*/      1,    
/*69-BoostLevel1&2*/      3,    /*70-StructType3&4*/      0,    
/*71-BoostLevel3&4*/      3,    

/* Patch Tone:  4 */
0x03001000l, 0x00000101l,
0x03001200l, 0x00000101l,
0x03001400l, 0x00000101l,
0x03001600l, 0x00000101l,
/*  ToneSW         0   0*/     0,    0,    1,    1,
/*  WaveGrp        1   1*/     0,    0,    0,    0,
/*  WaveGrpId      2   2*/     2,    2,    2,    2,
/*  WaveNumber1    3   3*/     1,    1,    2,    2,
/*  WaveNumber2    4   4*/    12,   12,    9,    9,
/*  WaveGain       5   5*/     1,    1,    1,    1,
/*  FXMswitch      6   6*/     0,    0,    0,    0,
/*  FXMcolor       7   7*/     0,    0,    2,    2,
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
/*  Ctrl1Dest1    21  15*/     1,    1,    9,    9,
/*  Ctrl1Dpth1    22  16*/    63,   63,   73,   73,
/*  Ctrl1Dest2    23  17*/     0,    0,    0,    0,
/*  Ctrl1Dpth2    24  18*/    81,   81,   81,   81,
/*  Ctrl1Dest3    25  19*/     0,    0,    0,    0,
/*  Ctrl1Dpth3    26  1a*/    83,   83,   83,   83,
/*  Ctrl1Dest4    27  1b*/     0,    0,    0,    0,
/*  Ctrl1Dpth4    28  1c*/    63,   63,   63,   63,
/*  Ctrl2Dest1    29  1d*/     1,    1,    1,    1,
/*  Ctrl2Dpth1    30  1e*/    68,   68,   68,   68,
/*  Ctrl2Dest2    31  1f*/     0,    0,    0,    0,
/*  Ctrl2Dpth2    32  20*/    63,   63,   63,   63,
/*  Ctrl2Dest3    33  21*/     0,    0,    0,    0,
/*  Ctrl2Dpth3    34  22*/    63,   63,   63,   63,
/*  Ctrl2Dest4    35  23*/     0,    0,    0,    0,
/*  Ctrl2Dpth4    36  24*/    63,   63,   63,   63,
/*  Ctrl3Dest1    37  25*/     0,    0,    4,    4,
/*  Ctrl3Dpth1    38  26*/    63,   63,   83,   83,
/*  Ctrl3Dest2    39  27*/     0,    0,    0,    0,
/*  Ctrl3Dpth2    40  28*/    63,   63,   63,   63,
/*  Ctrl3Dest3    41  29*/     0,    0,    0,    0,
/*  Ctrl3Dpth3    42  2a*/    63,   63,   63,   63,
/*  Ctrl3Dest4    43  2b*/     0,    0,    0,    0,
/*  Ctrl1Dpth4    44  2c*/    63,   63,   63,   63,
/*  LFO1WaveForm  45  2d*/     0,    0,    0,    0,
/*  LFO1KeyTrig   46  2e*/     0,    0,    0,    0,
/*  LFO1Rate      47  2f*/    94,   94,   94,   94,
/*  LFO1LevOffs   48  30*/     2,    2,    2,    2,
/*  LFO1DelTime   49  31*/     0,    0,    0,    0,
/*  LFO1FadeMode  50  32*/     0,    0,    0,    0,
/*  LFO1FadeTime  51  33*/     0,    0,    0,    0,
/*  LFO1ExtSync   52  34*/     0,    0,    0,    0,
/*  LFO2WaveForm  53  35*/     0,    0,    0,    0,
/*  LFO2KeyTrig   54  36*/     0,    0,    0,    0,
/*  LFO2Rate      55  37*/    80,   80,   80,   80,
/*  LFO2LevOffs   56  38*/     2,    2,    2,    2,
/*  LFO2DelTime   57  39*/     0,    0,    0,    0,
/*  LFO2FadeMode  58  3a*/     0,    0,    0,    0,
/*  LFO2FadeTime  59  3b*/     0,    0,    0,    0,
/*  LFO2ExtSync   60  3c*/     0,    0,    0,    0,
/*  PtchCoarseTn  61  3d*/    48,   48,   48,   48,
/*  PtchFineTn    62  3e*/    50,   50,   50,   50,
/*  PtchRndDepth  63  3f*/     0,    0,    0,    6,
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
/*  PtchLFO1Dpth  78  4e*/    63,   63,   63,   63,
/*  PtchLFO2Dpth  79  4f*/    63,   63,   63,   63,
/*  FltType       80  50*/     1,    1,    1,    1,
/*  FltCutoffFrq  81  51*/    11,   11,   23,   23,
/*  FltCutoffFol  82  52*/     5,    5,    5,    5,
/*  FltResonance  83  53*/     0,    0,    0,    0,
/*  FltResVelSns  84  54*/    50,   50,   50,   50,
/*  FltEnvDepth   85  55*/    98,   98,   98,   98,
/*  FltEnvVelCur  86  56*/     0,    0,    0,    0,
/*  FltEnvVelSns  87  57*/    79,   79,   50,   50,
/*  FltEnvVelT1   88  58*/     7,    7,    7,    7,
/*  FltEnvVelT4   89  59*/     7,    7,    7,    7,
/*  FltEnvTKeyFl  90  5a*/     7,    7,    7,    7,
/*  FltTime1      91  5b*/     0,    0,    0,    0,
/*  FltTime2      92  5c*/    76,   76,   76,   76,
/*  FltTime3      93  5d*/   106,  106,  106,  106,
/*  FltTime4      94  5e*/    53,   53,   53,   53,
/*  FltLevel1     95  5f*/   127,  127,  127,  127,
/*  FltLevel2     96  60*/   127,  127,  127,  127,
/*  FltLevel3     97  61*/   127,  127,  127,  127,
/*  FltLevel4     98  62*/     0,    0,    0,    0,
/*  FltLFO1Depth  99  63*/    63,   63,   63,   63,
/*  FltLFO2Depth 100  64*/    63,   63,   63,   63,
/*  ToneLevel    101  65*/   124,  124,   62,   62,
/*  BiasDirect   102  66*/     0,    0,    0,    0,
/*  BiasPoint    103  67*/    60,   60,   60,   60,
/*  BiasLevel    104  68*/     7,    7,    7,    7,
/*  A-EnvVelCurv 105  69*/     0,    0,    0,    0,
/*  A-EnvVelSens 106  6a*/   100,  100,   75,   75,
/*  A-EnvT1Sens  107  6b*/     7,    7,    7,    7,
/*  A-EnvT4Sens  108  6c*/     7,    7,    7,    7,
/*  A-EnvTKeyFol 109  6d*/     7,    7,    7,    7,
/*  A-EnvTime1   110  6e*/     0,    0,    0,    0,
/*  A-EnvTime2   111  6f*/    40,   40,   40,   40,
/*  A-EnvTime3   112  70*/   100,  100,  100,  100,
/*  A-EnvTime4   113  71*/    44,   44,   44,   44,
/*  A-EnvLevel1  114  72*/   127,  127,  127,  127,
/*  A-EnvLevel2  115  73*/   127,  127,  127,  127,
/*  A-EnvLevel3  116  74*/   127,  127,  127,  127,
/*  AmplLFO1Dpth 117  75*/    63,   63,   63,   63,
/*  AmplLFO2Dpth 118  76*/    63,   63,   63,   63,
/*  TonePan      119  77*/    64,   64,   64,   64,
/*  PanKeyFollow 120  78*/     7,    7,    7,    7,
/*  PanRndDepth  121  79*/     0,    0,    0,    0,
/*  PanAltDepth  122  7a*/    64,   64,   64,   64,
/*  PanLFO1Depth 123  7b*/    63,   63,   63,   63,
/*  PanLFO2Depth 124  7c*/    63,   63,   63,   63,
/*  OutAssign    125  7d*/     1,    1,    1,    1,
/*  OutLevel     126  7e*/   127,  127,  127,  127,
/*  ChSendLevel  127  7f*/   127,  127,  127,  127,
/*  RevSendLevel 128  80*/   125,  125,  125,  125,
};



PERF_STR Perf_Creat3 = {
/* Performance Common */
0x01000000l, 0x00000040l,
/*   NAME   */
"DerFall     ",
   0,  /* 12: EFXSource */
  18,  /* 13: EFXType */
/* EFXParameter */
119,125,125, 66, 13,107,127, 17, 18, 13, 11,127,
   0,  /* 26: EFXOutAss */
 127,  /* 27: EFXOutLev */
 127,  /* 28: EFXChSendLev */
   0,  /* 29: EFXRevSendLev */
   3,  /* 30: EFXCtrlS1 */
  66,  /* 31: EFXCtrlD1 */
   3,  /* 32: EFXCtrlS2 */
  93,  /* 33: EFXCtrlD2 */
 127,  /* 34: ChorLev */
   2,  /* 35: ChorRate */
 127,  /* 36: ChorDepth */
   0,  /* 37: ChorPreDel */
   0,  /* 38: ChorFdback */
   0,  /* 39: ChorOutAss */
   0,  /* 40: RevType */
 127,  /* 41: RevLevel */
 100,  /* 42: RevTime */
  17,  /* 43: RevHFDamp */
   0,  /* 44: RevFdback */
   6,  /* 45: DefTempo1 */
   4,  /* 46: DefTempo2 */
   1,  /* 47: KeyRngSw */
 20, 12,  4,  4,  4,  4,  4,  4,  0,  0,  0,  0,  0,  0,  0,  0,
0x01001000l, 0x00000013l,
0x01001100l, 0x00000013l,
0x01001200l, 0x00000013l,
0x01001300l, 0x00000013l,
0x01001400l, 0x00000013l,
0x01001500l, 0x00000013l,
0x01001600l, 0x00000013l,
0x01001700l, 0x00000013l,
0x01001800l, 0x00000013l,
0x01001900l, 0x00000013l,
0x01001a00l, 0x00000013l,
0x01001b00l, 0x00000013l,
0x01001c00l, 0x00000013l,
0x01001d00l, 0x00000013l,
0x01001e00l, 0x00000013l,
0x01001f00l, 0x00000013l,
/*MidiRecSW-*/
      1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,
/*MidiCh----*/
      0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15,
/*PatchGrp--*/
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
/*PatchGrpID*/
      3,  3,  3,  3,  5,  5,  3,  3,  3,  6,  3,  3,  3,  3,  3,  3,
/*PatchNum0-*/
      0,  1,  0,  0,  3,  3,  0,  0,  1,  0,  1,  1,  1,  1,  1,  1,
/*PatchNum1-*/
      0,  4,  0,  0,  5,  2, 13, 15,  1,  1,  3,  5,  7,  9, 11, 13,
/*PartLevel-*/
    100,127,127,110,110,127,105,120,100,127, 96,120,105,100, 95,120,
/*PartPan---*/
     64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
/*PitchCoar-*/
     48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
/*PitchFine-*/
     50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,
/*OutAss----*/
      1,  1,  1,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  1,  0,  0,
/*OutLev----*/
    127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
/*ChSndLev--*/
    127,127,127,127, 80,127, 80, 50, 50,  0,  0, 50,  0,  0,  0, 50,
/*RevSndLev-*/
    127,127,127,127,127,127,127,127,127, 27,127,127,127, 37,127,127,
/*RecPgmChg-*/
      1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,
/*RecVol----*/
      1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,
/*RecHold---*/
      1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,
/*KeyLow----*/
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
/*KeyHigh---*/
    127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
};

