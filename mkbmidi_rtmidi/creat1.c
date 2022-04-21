#include <stdio.h>

#include "typedefs.h"
#include "midi.h"


PERF_STR Perf_Creat1 = {
/* Performance Common */
0x01000000l, 0x00000040l,
/*   NAME   */
"DerFall     ",
{
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
 20, 12,  4,  4,  4,  4,  4,  4,  0,  0,  0,  0,  0,  0,  0,  0
},   

   {
      {0x01001000l, 0x00000013l},
      {0x01001100l, 0x00000013l},
      {0x01001200l, 0x00000013l},
      {0x01001300l, 0x00000013l},
      {0x01001400l, 0x00000013l},
      {0x01001500l, 0x00000013l},
      {0x01001600l, 0x00000013l},
      {0x01001700l, 0x00000013l},
      {0x01001800l, 0x00000013l},
      {0x01001900l, 0x00000013l},
      {0x01001a00l, 0x00000013l},
      {0x01001b00l, 0x00000013l},
      {0x01001c00l, 0x00000013l},
      {0x01001d00l, 0x00000013l},
      {0x01001e00l, 0x00000013l},
      {0x01001f00l, 0x00000013l}
   },

   {
       /*MidiRecSW-*/
      {      1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0},
       /*MidiCh----*/
      {      0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15},
       /*PatchGrp--*/
      {      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
       /*PatchGrpID*/
      {      3,  3,  3,  3,  5,  5,  3,  3,  3,  6,  3,  3,  3,  3,  3,  3},
       /*PatchNum0-*/
      {      0,  1,  0,  0,  3,  3,  0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
       /*PatchNum1-*/
      {      0,  4,  0,  0,  5,  2, 13, 15,  1,  1,  3,  5,  7,  9, 11, 13},
       /*PartLevel-*/
      {    100,127,127,110,110,127,105,120,100,127, 96,120,105,100, 95,120},
       /*PartPan---*/
      {     64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64},
       /*PitchCoar-*/
      {     48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48},
       /*PitchFine-*/
      {     50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50},
       /*OutAss----*/
      {      1,  1,  1,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  1,  0,  0},
       /*OutLev----*/
      {    127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127},
       /*ChSndLev--*/
      {    127,127,127,127, 80,127, 80, 50, 50,  0,  0, 50,  0,  0,  0, 50},
       /*RevSndLev-*/
      {    127,127,127,127,127,127,127,127,127, 27,127,127,127, 37,127,127},
       /*RecPgmChg-*/
      {      1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
       /*RecVol----*/
      {      1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
       /*RecHold---*/
      {      1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
       /*KeyLow----*/
      {      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
       /*KeyHigh---*/
      {    127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127}
   },  


};


PATCH_STR Patch_Creat1 = {
/* Patch Common */
0x03000000l, 0x00000048l,
/*   NAME   */
"Creat1      ",
{
   0,  /* 12: EFXType------ */
/* EFXParameter */
  0, 15,  0, 15,  7,  1, 15,  7,  1, 15,127,  0,
/*25-EFXOutAss----*/      0,    /*26-EFXOutLev----*/    127,    
/*27-EFXChSendLev-*/    127,    /*28-EFXRevSendLev*/    127,    
/*29-EFXCtrlS1----*/      0,    /*30-EFXCtrlD1----*/     63,    
/*31-EFXCtrlS2----*/      0,    /*32-EFXCtrlD2----*/     63,    
/*33-ChorLev------*/     93,    /*34-ChorRate-----*/     15,    
/*35-ChorDepth----*/     43,    /*36-ChorPreDel---*/     69,    
/*37-ChorFdback---*/      0,    /*38-ChorOutAss---*/      0,    
/*39-RevType------*/      1,    /*40-RevLevel-----*/     72,    
/*41-RevTime------*/     67,    /*42-RevHFDamp----*/     12,    
/*43-RevFdback----*/     25,    /*44-DefTempo1----*/      7,    
/*45-DefTempo2----*/      8,    /*46-PatchLevel---*/    107,    
/*47-PatchPan-----*/     64,    /*48-AnalogFeel---*/      8,    
/*49-BendRngUp----*/      2,    /*50-BendRngDown--*/      2,    
/*51-KeyAssMode---*/      0,    /*52-SoloLegato---*/      1,    
/*53-PortaSw------*/      0,    /*54-PortaMode----*/      1,    
/*55-PortaType----*/      1,    /*56-PortaStart---*/      1,    
/*57-PortaTime----*/      4,    /*58-PtchCtrlSrc2-*/      1,    
/*59-PtchCtrlSrc3-*/      2,    /*60-EFXCtrl-H/P--*/      0,    
/*61-Ctrl1-H/P----*/      0,    /*62-Ctrl2-H/P----*/      0,    
/*63-Ctrl3-H/P----*/      0,    /*64-VelRangeSw---*/      0,    
/*65-OctaveSh-----*/      4,    /*66-StrTuneDepth-*/      0,    
/*67-VoicePrio----*/      0,    /*68-StructType1&2*/      0,    
/*69-BoostLevel1&2*/      0,    /*70-StructType3&4*/      0,    
/*71-BoostLevel3&4*/      0
},    

/* Patch Tone:  4 */
{
{0x03001000l, 0x00000101l},
{0x03001200l, 0x00000101l},
{0x03001400l, 0x00000101l},
{0x03001600l, 0x00000101l}
},
{
/*  ToneSW         0   0*/  {   1,    1,    1,    0},
/*  WaveGrp        1   1*/  {   0,    0,    0,    0},
/*  WaveGrpId      2   2*/  {   2,    2,    1,    1},
/*  WaveNumber1    3   3*/  {   1,    1,    9,    0},
/*  WaveNumber2    4   4*/  {  10,   12,   15,    0},
/*  WaveGain       5   5*/  {   2,    2,    2,    2},
/*  FXMswitch      6   6*/  {   0,    0,    0,    0},
/*  FXMcolor       7   7*/  {   1,    1,    1,    1},
/*  FXMdepth       8   8*/  {   0,    0,    0,    0},
/*  ToneDelMode    9   9*/  {   0,    0,    0,    0},
/*  ToneDelTime   10   a*/  {   0,    0,    0,    0},
/*  VelCrossFade  11   b*/  {   0,    0,    0,    0},
/*  VelRngLow     12   c*/  {   1,    1,    1,    1},
/*  VelRngUp      13   d*/  { 127,  127,  127,  127},
/*  KeyRngLow     14   e*/  {   0,    0,    0,    0},
/*  KeyRngUp      15   f*/  { 127,  127,  127,  127},
/*  RedamperSw    16  10*/  {   0,    0,    0,    0},
/*  VolCtrlSw     17  11*/  {   1,    1,    1,    1},
/*  Hold1CtrlSw   18  12*/  {   1,    1,    1,    1},
/*  BendCtrlSw    19  13*/  {   1,    1,    1,    1},
/*  PanCtrlSw     20  14*/  {   1,    1,    1,    1},
/*  Ctrl1Dest1    21  15*/  {   9,    9,    9,    0},
/*  Ctrl1Dpth1    22  16*/  {  73,   73,   73,   63},
/*  Ctrl1Dest2    23  17*/  {  17,   17,   17,   17},
/*  Ctrl1Dpth2    24  18*/  {  66,   66,   66,   61},
/*  Ctrl1Dest3    25  19*/  {  11,   11,   11,    0},
/*  Ctrl1Dpth3    26  1a*/  {  58,   58,   58,   63},
/*  Ctrl1Dest4    27  1b*/  {   0,    0,    0,    0},
/*  Ctrl1Dpth4    28  1c*/  {  63,   63,   63,   63},
/*  Ctrl2Dest1    29  1d*/  {   2,    2,    2,    0},
/*  Ctrl2Dpth1    30  1e*/  {  69,   69,   69,   65},
/*  Ctrl2Dest2    31  1f*/  {   4,    4,    4,    0},
/*  Ctrl2Dpth2    32  20*/  {  68,   68,   68,   65},
/*  Ctrl2Dest3    33  21*/  {   9,    9,    9,    0},
/*  Ctrl2Dpth3    34  22*/  {  67,   67,   67,   64},
/*  Ctrl2Dest4    35  23*/  {  17,   17,   17,   17},
/*  Ctrl2Dpth4    36  24*/  {  65,   65,   65,   63},
/*  Ctrl3Dest1    37  25*/  {   2,    2,    2,    2},
/*  Ctrl3Dpth1    38  26*/  {  75,   75,   75,   75},
/*  Ctrl3Dest2    39  27*/  {   0,    0,    0,    0},
/*  Ctrl3Dpth2    40  28*/  {  63,   63,   63,   63},
/*  Ctrl3Dest3    41  29*/  {   0,    0,    0,    0},
/*  Ctrl3Dpth3    42  2a*/  {  63,   63,   63,   63},
/*  Ctrl3Dest4    43  2b*/  {   0,    0,    0,    0},
/*  Ctrl1Dpth4    44  2c*/  {  63,   63,   63,   63},
/*  LFO1WaveForm  45  2d*/  {   1,    1,    1,    0},
/*  LFO1KeyTrig   46  2e*/  {   1,    1,    1,    1},
/*  LFO1Rate      47  2f*/  {  91,   92,   91,   65},
/*  LFO1LevOffs   48  30*/  {   2,    2,    2,    2},
/*  LFO1DelTime   49  31*/  {   0,    0,    0,    0},
/*  LFO1FadeMode  50  32*/  {   0,    0,    0,    0},
/*  LFO1FadeTime  51  33*/  {   0,    0,    0,    0},
/*  LFO1ExtSync   52  34*/  {   0,    0,    0,    0},
/*  LFO2WaveForm  53  35*/  {   0,    0,    0,    0},
/*  LFO2KeyTrig   54  36*/  {   1,    1,    1,    1},
/*  LFO2Rate      55  37*/  {  65,   65,   65,   65},
/*  LFO2LevOffs   56  38*/  {   2,    2,    2,    2},
/*  LFO2DelTime   57  39*/  {   0,    0,    0,    0},
/*  LFO2FadeMode  58  3a*/  {   0,    0,    0,    0},
/*  LFO2FadeTime  59  3b*/  {   0,    0,    0,    0},
/*  LFO2ExtSync   60  3c*/  {   0,    0,    0,    0},
/*  PtchCoarseTn  61  3d*/  {  36,   36,   36,   36},
/*  PtchFineTn    62  3e*/  {  47,   53,   47,   52},
/*  PtchRndDepth  63  3f*/  {   0,    0,    0,    0},
/*  PtchKeyFoll   64  40*/  {  12,   12,    8,   12},
/*  PtchEnvDepth  65  41*/  {  12,   24,   12,   12},
/*  PtchVelSens   66  42*/  {  50,   90,   50,   50},
/*  PtchVelT1Sen  67  43*/  {   7,    7,    7,    7},
/*  PtchVelT4Sen  68  44*/  {   7,    7,    7,    7},
/*  PtchTimKeyFo  69  45*/  {   7,    7,    7,    7},
/*  PtchTime1     70  46*/  {   0,    0,    0,    0},
/*  PtchTime2     71  47*/  {   0,    9,    0,    0},
/*  PtchTime3     72  48*/  {   0,    0,    0,    0},
/*  PtchTime4     73  49*/  {   0,    0,    0,    0},
/*  PtchLevel1    74  4a*/  {  63,   48,   63,   63},
/*  PtchLevel2    75  4b*/  {  63,   63,   63,   63},
/*  PtchLevel3    76  4c*/  {  63,   63,   63,   63},
/*  PtchLevel4    77  4d*/  {  63,   63,   63,   63},
/*  PtchLFO1Dpth  78  4e*/  {  63,   63,   63,   63},
/*  PtchLFO2Dpth  79  4f*/  {  63,   63,   63,   63},
/*  FltType       80  50*/  {   1,    1,    0,    1},
/*  FltCutoffFrq  81  51*/  {  66,   66,   66,   75},
/*  FltCutoffFol  82  52*/  {   9,    9,    9,    6},
/*  FltResonance  83  53*/  {   1,    2,    1,    0},
/*  FltResVelSns  84  54*/  {  50,   50,   50,   50},
/*  FltEnvDepth   85  55*/  {  83,   83,   83,   75},
/*  FltEnvVelCur  86  56*/  {   1,    1,    1,    1},
/*  FltEnvVelSns  87  57*/  {  34,   34,   34,   93},
/*  FltEnvVelT1   88  58*/  {   7,    7,    7,    7},
/*  FltEnvVelT4   89  59*/  {   7,    7,    7,    0},
/*  FltEnvTKeyFl  90  5a*/  {   9,    9,    9,    9},
/*  FltTime1      91  5b*/  {  10,   10,   15,    0},
/*  FltTime2      92  5c*/  {  65,   65,   65,   54},
/*  FltTime3      93  5d*/  {  55,   55,   55,   55},
/*  FltTime4      94  5e*/  {  35,   35,   35,  116},
/*  FltLevel1     95  5f*/  { 127,  127,  127,  127},
/*  FltLevel2     96  60*/  {  26,   26,   26,   71},
/*  FltLevel3     97  61*/  {  15,   15,   15,    0},
/*  FltLevel4     98  62*/  {   0,    0,    0,    0},
/*  FltLFO1Depth  99  63*/  {  63,   63,   63,   63},
/*  FltLFO2Depth 100  64*/  {  63,   63,   63,   63},
/*  ToneLevel    101  65*/  { 122,  122,  127,  127},
/*  BiasDirect   102  66*/  {   3,    3,    3,    3},
/*  BiasPoint    103  67*/  {  60,   60,   60,   60},
/*  BiasLevel    104  68*/  {   8,    8,    8,    7},
/*  A-EnvVelCurv 105  69*/  {   0,    0,    1,    1},
/*  A-EnvVelSens 106  6a*/  {  82,   82,   82,   77},
/*  A-EnvT1Sens  107  6b*/  {   7,    7,    7,    7},
/*  A-EnvT4Sens  108  6c*/  {   7,    7,    7,    9},
/*  A-EnvTKeyFol 109  6d*/  {   7,    7,    7,    9},
/*  A-EnvTime1   110  6e*/  {   0,    0,    0,    0},
/*  A-EnvTime2   111  6f*/  {  85,   85,   13,   70},
/*  A-EnvTime3   112  70*/  { 105,  105,    0,   97},
/*  A-EnvTime4   113  71*/  {  28,   28,   28,   43},
/*  A-EnvLevel1  114  72*/  { 127,  127,  127,  127},
/*  A-EnvLevel2  115  73*/  { 101,  101,    0,  101},
/*  A-EnvLevel3  116  74*/  {   0,    0,    0,    0},
/*  AmplLFO1Dpth 117  75*/  {  63,   63,   63,   63},
/*  AmplLFO2Dpth 118  76*/  {  63,   63,   63,   63},
/*  TonePan      119  77*/  {  24,  104,   64,   64},
/*  PanKeyFollow 120  78*/  {   7,    7,   10,   10},
/*  PanRndDepth  121  79*/  {   0,    0,    0,    0},
/*  PanAltDepth  122  7a*/  {  64,   64,   64,   64},
/*  PanLFO1Depth 123  7b*/  {  63,   63,   63,   63},
/*  PanLFO2Depth 124  7c*/  {  63,   63,   63,   63},
/*  OutAssign    125  7d*/  {   0,    0,    0,    0},
/*  OutLevel     126  7e*/  { 127,  127,  127,  127},
/*  ChSendLevel  127  7f*/  { 127,  127,  127,   66},
/*  RevSendLevel 128  80*/  { 127,  113,  127,  113}
},
};                          
                            
                            

struct t_splits Creat10={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {
      {     1,   C1,C8,  0,  EnChan0,  127, SustModeSust,VolCtr2, InChan0} ,
      {     0,   C2,C8,  0,  EnChan1,  127, SustModeSust,VolCtr2, InChan0} ,
      {     0,   A0,H1,  0,  EnChan2,  127, SustModeNop ,VolCtr2, InChan0} ,
      {     0,   A0,C8,  0,  EnChan3,  127, SustModeNop ,VolCtr2, InChan0} ,
      {     0,   0,127,  0,  EnChan4,  127, SustModeNop ,VolCtr2, InChan0} ,
      {     0,   0,127,  0,  EnChan5,  127, SustModeNop ,VolCtr2, InChan0} ,
      {     0,   0,127,  0,  EnChan6,  127, SustModeNop ,VolCtr2, InChan0} ,
      {     0,   0,127,  0,  EnChan7,  127, SustModeNop ,VolCtr2, InChan0} ,
      {     0,   0,127,  0,  EnChan8,  127, SustModeNop ,VolCtr2, InChan0} ,
      {     0,   0,127,  0,  EnChan9,  127, SustModeNop ,VolCtr2, InChan0} ,
      {     0,   0,127,  0,  EnChan10, 127, SustModeNop ,VolCtr2, InChan0} ,
      {     0,   0,127,  0,  EnChan11, 127, SustModeNop ,VolCtr2, InChan0} ,
      {     0,   0,127,  0,  EnChan12, 127, SustModeNop ,VolCtr2, InChan0} ,
      {     0,   0,127,  0,  EnChan13, 127, SustModeNop ,VolCtr2, InChan0} ,
      {     0,   0,127,  0,  EnChan14, 127, SustModeNop ,VolCtr2, InChan0} ,
      {     0,   0,127,  0,  EnChan15, 127, SustModeNop ,VolCtr2, InChan0} 
   },
	"CS"
};


struct t_splits *Creat1List[] = 
{
	&Creat10, NULL};


struct t_song Creat1=
{ "Creature1",
	PerformPanel, 81,1,21,&Creat1List[0],
	&Perf_Creat1,
	{
   	{ &Patch_Creat1,		0x02000000l },     /* Fanfare */
      {	NULL,0l},
      {  NULL,0l},
      {  NULL,0l},
      {  NULL,0l},
      {  NULL,0l},
      {  NULL,0l},
      {  NULL,0l},
      {  NULL,0l},
      {  NULL,0l}
   },
   {
      {    1, 81,0,0,   Chan0 },
      {    1, 81,0,0,   Chan1 },
      {    1, 81,0,0,   Chan2 },
      {    1, 81,0,0,   Chan3 },
      {    1, 81,2,0,   Chan4 },
      {    1, 81,2,0,   Chan5 },
      {    0, 81,0,0,   Chan6 },
      {    0, 81,0,0,   Chan7 },
      {    0, 81,0,0,   Chan8 },
      {    0, 81,0,0,   Chan9 },
      {    0, 81,0,0,   Chan10},
      {    0, 81,0,0,   Chan11},
      {    0, 81,0,0,   Chan12},
      {    0, 81,0,0,   Chan13},
      {    0, 81,0,0,   Chan14},
      {    0, 81,0,0,   Chan15}
   },
};




