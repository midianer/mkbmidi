#include <stdio.h>

#include "typedefs.h"
#include "midi.h"
#include <stdio.h>

/* -------- ApresUnPas ---------------------------------------------------- */

struct t_song ApresUnPas;
struct t_splits ApresUnPas0;
struct t_splits ApresUnPas1;
struct t_splits ApresUnPas2;
PERF_STR Perf_ApresUnPas;
PATCH_STR Patch_ApresUnPas0;
PATCH_STR Patch_ApresUnPas1;
struct t_splits *ApresUnPasList[] = 
{
	&ApresUnPas1, &ApresUnPas0, &ApresUnPas2, NULL};

struct t_song ApresUnPas={ "ApresUnPas",
	0, 81,1,21,&ApresUnPasList[0],
	&Perf_ApresUnPas,
	&Patch_ApresUnPas1, 0x02000000l,     /* Fanfare */
	NULL,0l, /*&Patch_ApresUnPas0,0x02030000l,      Mischung */
	NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0,0,   Chan0,
    1, 81,0,0,   Chan1,
    1, 81,2,23,  Chan2,		/* Belltree Vox */
    1, 81,2,104,   Chan3,   /* Timpani */
    1, 81,2,53,   Chan4,   /* Streicher */
    1, 81,2,50,   Chan5,   /* Streicher */
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


struct t_splits ApresUnPas0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   C2,C8,  0,  Chan0,  70, 1,VolCtr2,InChan0,
    1,   C2,C8, 12,  Chan0,  70, 1,VolCtr2,InChan0,
    0,   A0,C8,  0,  Chan2, 127, 0,VolCtr2,InChan0,
    1,   A0,H1, 12,  Chan3, 110, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan4, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan5, 127, 0,VolCtr2,InChan0,
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

struct t_splits ApresUnPas1={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    0,   C2,C8,  0,  Chan0, 127, 1,VolCtr2,InChan0,
    0,   C2,C8, 12,  Chan0, 127, 1,VolCtr2,InChan0,
    1,   A0,C8,  0,  Chan2, 127, 0,VolCtr2,InChan0,
    0,   A0,H1,  0,  Chan3, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan4, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan5, 127, 0,VolCtr2,InChan0,
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

struct t_splits ApresUnPas2={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    0,   C2,C8,  0,  Chan0, 127, 1,VolCtr2,InChan0,
    0,   C2,C8, 12,  Chan0, 127, 1,VolCtr2,InChan0,
    0,   A0,H1,  0,  Chan2, 127, 0,VolCtr2,InChan0,
    1,   C4,C8,  0,  Chan2, 127, 0,VolCtr2,InChan0,
    1,   A0,H3,  0,  Chan3, 127, 0,VolCtr2,InChan0,
    0,   C5,C8,  0,  Chan5, 127, 0,VolCtr2,InChan0,
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

/* ENDE ApresUnPas Splits */


PATCH_STR Patch_ApresUnPas0 = {
/* Patch Common */
0x03000000l, 0x00000048l,
/*   NAME   */
"String+Pauke",
  21,  /* 12: EFXType------ */
/* EFXParameter */
  0, 24, 24, 48, 53,  0,  0,  0,127, 50, 50,127,
/*25-EFXOutAss----*/      0,    /*26-EFXOutLev----*/    127,    
/*27-EFXChSendLev-*/      0,    /*28-EFXRevSendLev*/     42,    
/*29-EFXCtrlS1----*/      0,    /*30-EFXCtrlD1----*/     63,    
/*31-EFXCtrlS2----*/      0,    /*32-EFXCtrlD2----*/     63,    
/*33-ChorLev------*/     74,    /*34-ChorRate-----*/     15,    
/*35-ChorDepth----*/     50,    /*36-ChorPreDel---*/      0,    
/*37-ChorFdback---*/      0,    /*38-ChorOutAss---*/      2,    
/*39-RevType------*/      4,    /*40-RevLevel-----*/    127,    
/*41-RevTime------*/     70,    /*42-RevHFDamp----*/     11,    
/*43-RevFdback----*/      0,    /*44-DefTempo1----*/      6,    
/*45-DefTempo2----*/      4,    /*46-PatchLevel---*/    127,    
/*47-PatchPan-----*/     64,    /*48-AnalogFeel---*/      9,    
/*49-BendRngUp----*/      2,    /*50-BendRngDown--*/      2,    
/*51-KeyAssMode---*/      0,    /*52-SoloLegato---*/      0,    
/*53-PortaSw------*/      0,    /*54-PortaMode----*/      1,    
/*55-PortaType----*/      0,    /*56-PortaStart---*/      0,    
/*57-PortaTime----*/     18,    /*58-PtchCtrlSrc2-*/      1,    
/*59-PtchCtrlSrc3-*/      2,    /*60-EFXCtrl-H/P--*/      0,    
/*61-Ctrl1-H/P----*/      0,    /*62-Ctrl2-H/P----*/      0,    
/*63-Ctrl3-H/P----*/      0,    /*64-VelRangeSw---*/      1,    
/*65-OctaveSh-----*/      4,    /*66-StrTuneDepth-*/      2,    
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
/*  WaveGrpId      2   2*/     1,    1,    1,    1,
/*  WaveNumber1    3   3*/    13,   12,   14,   14,
/*  WaveNumber2    4   4*/     7,   14,    4,    4,
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
/*  Ctrl1Dest1    21  15*/     9,    9,    9,    9,
/*  Ctrl1Dpth1    22  16*/    68,   68,   68,   68,
/*  Ctrl1Dest2    23  17*/     2,    2,    2,    2,
/*  Ctrl1Dpth2    24  18*/    67,   67,   67,   67,
/*  Ctrl1Dest3    25  19*/     0,    0,    0,    0,
/*  Ctrl1Dpth3    26  1a*/    63,   63,   63,   63,
/*  Ctrl1Dest4    27  1b*/     0,    0,    0,    0,
/*  Ctrl1Dpth4    28  1c*/    63,   63,   63,   63,
/*  Ctrl2Dest1    29  1d*/     9,    9,    9,    9,
/*  Ctrl2Dpth1    30  1e*/    70,   70,   70,   70,
/*  Ctrl2Dest2    31  1f*/     4,    4,    4,    4,
/*  Ctrl2Dpth2    32  20*/    73,   73,   73,   73,
/*  Ctrl2Dest3    33  21*/     2,    2,    2,    2,
/*  Ctrl2Dpth3    34  22*/    66,   66,   66,   66,
/*  Ctrl2Dest4    35  23*/     0,    0,    0,    0,
/*  Ctrl2Dpth4    36  24*/    63,   63,   63,   63,
/*  Ctrl3Dest1    37  25*/     4,    4,    4,    4,
/*  Ctrl3Dpth1    38  26*/    83,   83,   83,   83,
/*  Ctrl3Dest2    39  27*/     0,    0,    0,    0,
/*  Ctrl3Dpth2    40  28*/    63,   63,   63,   63,
/*  Ctrl3Dest3    41  29*/     0,    0,    0,    0,
/*  Ctrl3Dpth3    42  2a*/    63,   63,   63,   63,
/*  Ctrl3Dest4    43  2b*/     0,    0,    0,    0,
/*  Ctrl1Dpth4    44  2c*/    63,   63,   63,   63,
/*  LFO1WaveForm  45  2d*/     0,    0,    0,    0,
/*  LFO1KeyTrig   46  2e*/     0,    0,    0,    0,
/*  LFO1Rate      47  2f*/    93,   93,   93,   93,
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
/*  PtchCoarseTn  61  3d*/    36,   36,   24,   48,
/*  PtchFineTn    62  3e*/    46,   52,   51,   47,
/*  PtchRndDepth  63  3f*/     7,    6,    5,    9,
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
/*  PtchLFO1Dpth  78  4e*/    66,   66,   66,   66,
/*  PtchLFO2Dpth  79  4f*/    63,   63,   63,   63,
/*  FltType       80  50*/     1,    1,    1,    1,
/*  FltCutoffFrq  81  51*/    95,   95,   95,   95,
/*  FltCutoffFol  82  52*/     8,    8,    8,    8,
/*  FltResonance  83  53*/     0,    0,    0,    0,
/*  FltResVelSns  84  54*/    50,   50,   50,   50,
/*  FltEnvDepth   85  55*/    74,   74,   74,   74,
/*  FltEnvVelCur  86  56*/     0,    0,    0,    0,
/*  FltEnvVelSns  87  57*/    78,   78,   78,   78,
/*  FltEnvVelT1   88  58*/    12,   12,   12,   12,
/*  FltEnvVelT4   89  59*/     8,    8,    8,    8,
/*  FltEnvTKeyFl  90  5a*/     9,    9,    9,    9,
/*  FltTime1      91  5b*/    35,   35,   35,   35,
/*  FltTime2      92  5c*/    59,   59,   59,   59,
/*  FltTime3      93  5d*/   102,  102,  102,  102,
/*  FltTime4      94  5e*/    88,   88,   88,   88,
/*  FltLevel1     95  5f*/   127,  127,  127,  127,
/*  FltLevel2     96  60*/    97,   97,   97,   97,
/*  FltLevel3     97  61*/    56,   56,   56,   56,
/*  FltLevel4     98  62*/     0,    0,    0,    0,
/*  FltLFO1Depth  99  63*/    63,   63,   63,   63,
/*  FltLFO2Depth 100  64*/    63,   63,   63,   63,
/*  ToneLevel    101  65*/   127,  127,  127,  103,
/*  BiasDirect   102  66*/     0,    0,    0,    0,
/*  BiasPoint    103  67*/    60,   60,   60,   60,
/*  BiasLevel    104  68*/     7,    7,    7,    7,
/*  A-EnvVelCurv 105  69*/     0,    0,    0,    0,
/*  A-EnvVelSens 106  6a*/    88,   88,   88,   95,
/*  A-EnvT1Sens  107  6b*/    14,   14,   14,   14,
/*  A-EnvT4Sens  108  6c*/    12,   12,   12,   12,
/*  A-EnvTKeyFol 109  6d*/    10,   10,   10,   10,
/*  A-EnvTime1   110  6e*/     0,    0,    0,    0,
/*  A-EnvTime2   111  6f*/    40,   40,   40,   40,
/*  A-EnvTime3   112  70*/   100,  100,  100,  100,
/*  A-EnvTime4   113  71*/    63,   63,   63,   63,
/*  A-EnvLevel1  114  72*/   127,  127,  127,  127,
/*  A-EnvLevel2  115  73*/   127,  127,  127,  127,
/*  A-EnvLevel3  116  74*/   127,  127,  127,  127,
/*  AmplLFO1Dpth 117  75*/    63,   63,   63,   63,
/*  AmplLFO2Dpth 118  76*/    63,   63,   63,   63,
/*  TonePan      119  77*/   127,    0,   47,   59,
/*  PanKeyFollow 120  78*/     7,    7,   10,    9,
/*  PanRndDepth  121  79*/     0,    0,    0,    0,
/*  PanAltDepth  122  7a*/    64,   64,   64,   64,
/*  PanLFO1Depth 123  7b*/    63,   63,   63,   63,
/*  PanLFO2Depth 124  7c*/    63,   63,   63,   63,
/*  OutAssign    125  7d*/     0,    0,    0,    1,
/*  OutLevel     126  7e*/   127,  127,  127,  127,
/*  ChSendLevel  127  7f*/    39,   39,  112,   23,
/*  RevSendLevel 128  80*/    93,   93,   93,   93,
};


PATCH_STR Patch_ApresUnPas1 = {
/* Patch Common */
0x03000000l, 0x00000048l,
/*   NAME   */
"Harmon Mute ",
  18,  /* 12: EFXType------ */
/* EFXParameter */
119,125,125, 66, 13,107,127, 17, 18, 13, 11,127,
/*25-EFXOutAss----*/      0,    /*26-EFXOutLev----*/    127,    
/*27-EFXChSendLev-*/    127,    /*28-EFXRevSendLev*/      0,    
/*29-EFXCtrlS1----*/      2,    /*30-EFXCtrlD1----*/     47,    
/*31-EFXCtrlS2----*/      2,    /*32-EFXCtrlD2----*/     23,    
/*33-ChorLev------*/    127,    /*34-ChorRate-----*/      2,    
/*35-ChorDepth----*/    123,    /*36-ChorPreDel---*/     69,    
/*37-ChorFdback---*/      0,    /*38-ChorOutAss---*/      1,    
/*39-RevType------*/      4,    /*40-RevLevel-----*/    127,    
/*41-RevTime------*/    104,    /*42-RevHFDamp----*/     15,    
/*43-RevFdback----*/      0,    /*44-DefTempo1----*/      7,    
/*45-DefTempo2----*/      8,    /*46-PatchLevel---*/    120,    
/*47-PatchPan-----*/     64,    /*48-AnalogFeel---*/      1,    
/*49-BendRngUp----*/      2,    /*50-BendRngDown--*/      2,    
/*51-KeyAssMode---*/      0,    /*52-SoloLegato---*/      0,    
/*53-PortaSw------*/      0,    /*54-PortaMode----*/      0,    
/*55-PortaType----*/      1,    /*56-PortaStart---*/      1,    
/*57-PortaTime----*/     72,    /*58-PtchCtrlSrc2-*/      1,    
/*59-PtchCtrlSrc3-*/      9,    /*60-EFXCtrl-H/P--*/      0,    
/*61-Ctrl1-H/P----*/      0,    /*62-Ctrl2-H/P----*/      0,    
/*63-Ctrl3-H/P----*/      0,    /*64-VelRangeSw---*/      0,    
/*65-OctaveSh-----*/      3,    /*66-StrTuneDepth-*/      0,    
/*67-VoicePrio----*/      0,    /*68-StructType1&2*/      0,    
/*69-BoostLevel1&2*/      0,    /*70-StructType3&4*/      0,    
/*71-BoostLevel3&4*/      0,    

/* Patch Tone:  4 */
0x03001000l, 0x00000101l,
0x03001200l, 0x00000101l,
0x03001400l, 0x00000101l,
0x03001600l, 0x00000101l,
/*  ToneSW         0   0*/     1,    0,    0,    0,
/*  WaveGrp        1   1*/     0,    0,    0,    0,
/*  WaveGrpId      2   2*/     2,    1,    1,    1,
/*  WaveNumber1    3   3*/     2,   12,   10,   11,
/*  WaveNumber2    4   4*/     2,    3,   13,    7,
/*  WaveGain       5   5*/     3,    1,    1,    1,
/*  FXMswitch      6   6*/     0,    0,    0,    0,
/*  FXMcolor       7   7*/     1,    1,    1,    1,
/*  FXMdepth       8   8*/     0,    0,    0,    0,
/*  ToneDelMode    9   9*/     0,    0,    0,    0,
/*  ToneDelTime   10   a*/     0,    0,    1,    0,
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
/*  Ctrl1Dest1    21  15*/     4,    0,    0,    0,
/*  Ctrl1Dpth1    22  16*/    68,   63,   63,   63,
/*  Ctrl1Dest2    23  17*/     9,    0,    0,    0,
/*  Ctrl1Dpth2    24  18*/    68,   63,   63,   63,
/*  Ctrl1Dest3    25  19*/    11,    0,    0,    0,
/*  Ctrl1Dpth3    26  1a*/    58,   63,   63,   63,
/*  Ctrl1Dest4    27  1b*/    17,    0,    0,    0,
/*  Ctrl1Dpth4    28  1c*/    65,   63,   63,   63,
/*  Ctrl2Dest1    29  1d*/     4,    4,    4,    0,
/*  Ctrl2Dpth1    30  1e*/    68,   68,   68,   63,
/*  Ctrl2Dest2    31  1f*/     9,    9,    9,    0,
/*  Ctrl2Dpth2    32  20*/    68,   68,   68,   63,
/*  Ctrl2Dest3    33  21*/    11,   11,   11,    0,
/*  Ctrl2Dpth3    34  22*/    58,   58,   58,   63,
/*  Ctrl2Dest4    35  23*/    17,    0,    0,    0,
/*  Ctrl2Dpth4    36  24*/    65,   70,   70,   63,
/*  Ctrl3Dest1    37  25*/     2,    0,    0,    0,
/*  Ctrl3Dpth1    38  26*/    83,   63,   63,   63,
/*  Ctrl3Dest2    39  27*/     0,    0,    0,    0,
/*  Ctrl3Dpth2    40  28*/    63,   63,   63,   63,
/*  Ctrl3Dest3    41  29*/     0,    0,    0,    0,
/*  Ctrl3Dpth3    42  2a*/    63,   63,   63,   63,
/*  Ctrl3Dest4    43  2b*/     4,    4,    4,    4,
/*  Ctrl1Dpth4    44  2c*/    73,   83,   83,   83,
/*  LFO1WaveForm  45  2d*/     1,    1,    1,    1,
/*  LFO1KeyTrig   46  2e*/     1,    1,    1,    1,
/*  LFO1Rate      47  2f*/    92,   84,   85,   84,
/*  LFO1LevOffs   48  30*/     2,    2,    2,    2,
/*  LFO1DelTime   49  31*/     0,    0,    0,    0,
/*  LFO1FadeMode  50  32*/     0,    0,    0,    0,
/*  LFO1FadeTime  51  33*/     0,    0,    0,    0,
/*  LFO1ExtSync   52  34*/     0,    0,    0,    0,
/*  LFO2WaveForm  53  35*/     0,    0,    0,    0,
/*  LFO2KeyTrig   54  36*/     1,    1,    1,    1,
/*  LFO2Rate      55  37*/    65,   65,   65,   65,
/*  LFO2LevOffs   56  38*/     2,    2,    2,    2,
/*  LFO2DelTime   57  39*/     0,    0,    0,    0,
/*  LFO2FadeMode  58  3a*/     0,    0,    0,    0,
/*  LFO2FadeTime  59  3b*/     0,    0,    0,    0,
/*  LFO2ExtSync   60  3c*/     0,    0,    0,    0,
/*  PtchCoarseTn  61  3d*/    48,   48,   48,   48,
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
/*  PtchLevel1    74  4a*/   126,  126,  126,  126,
/*  PtchLevel2    75  4b*/   126,  126,  126,  126,
/*  PtchLevel3    76  4c*/   126,  126,  126,  126,
/*  PtchLevel4    77  4d*/   126,  126,  126,  126,
/*  PtchLFO1Dpth  78  4e*/    63,   63,   63,   63,
/*  PtchLFO2Dpth  79  4f*/    63,   63,   63,   63,
/*  FltType       80  50*/     1,    1,    1,    1,
/*  FltCutoffFrq  81  51*/    33,   33,   70,   33,
/*  FltCutoffFol  82  52*/     5,    5,    5,    5,
/*  FltResonance  83  53*/     0,    0,    0,    0,
/*  FltResVelSns  84  54*/    50,   50,   50,   50,
/*  FltEnvDepth   85  55*/    95,   95,   95,   95,
/*  FltEnvVelCur  86  56*/     0,    0,    0,    0,
/*  FltEnvVelSns  87  57*/    66,   66,   66,   66,
/*  FltEnvVelT1   88  58*/     7,    7,    7,    7,
/*  FltEnvVelT4   89  59*/     7,    7,    7,    7,
/*  FltEnvTKeyFl  90  5a*/     7,    7,    7,    7,
/*  FltTime1      91  5b*/     0,    0,    0,    0,
/*  FltTime2      92  5c*/    34,   34,   34,   34,
/*  FltTime3      93  5d*/    94,   94,   94,   94,
/*  FltTime4      94  5e*/    47,   47,   47,   47,
/*  FltLevel1     95  5f*/   127,  127,  127,  127,
/*  FltLevel2     96  60*/    97,   97,   97,   97,
/*  FltLevel3     97  61*/    73,   73,   73,   73,
/*  FltLevel4     98  62*/     0,    0,    0,    0,
/*  FltLFO1Depth  99  63*/    63,   63,   63,   63,
/*  FltLFO2Depth 100  64*/    63,   63,   63,   63,
/*  ToneLevel    101  65*/   127,  122,  100,  113,
/*  BiasDirect   102  66*/     3,    3,    3,    3,
/*  BiasPoint    103  67*/    60,   60,   60,   60,
/*  BiasLevel    104  68*/     7,    7,    7,    7,
/*  A-EnvVelCurv 105  69*/     0,    0,    0,    0,
/*  A-EnvVelSens 106  6a*/    67,   82,   82,   82,
/*  A-EnvT1Sens  107  6b*/     7,    7,    7,    7,
/*  A-EnvT4Sens  108  6c*/     7,    7,    7,    7,
/*  A-EnvTKeyFol 109  6d*/    10,   10,   10,   10,
/*  A-EnvTime1   110  6e*/     0,    0,    0,    0,
/*  A-EnvTime2   111  6f*/   110,  110,  110,  110,
/*  A-EnvTime3   112  70*/    99,   99,   99,   99,
/*  A-EnvTime4   113  71*/    14,   14,   14,   14,
/*  A-EnvLevel1  114  72*/   127,  127,  127,  127,
/*  A-EnvLevel2  115  73*/   106,  106,  106,  106,
/*  A-EnvLevel3  116  74*/   108,  108,  108,  108,
/*  AmplLFO1Dpth 117  75*/    63,   63,   63,   63,
/*  AmplLFO2Dpth 118  76*/    63,   63,   63,   63,
/*  TonePan      119  77*/    64,    0,  126,   64,
/*  PanKeyFollow 120  78*/     7,    7,    7,    7,
/*  PanRndDepth  121  79*/     0,    0,    0,    0,
/*  PanAltDepth  122  7a*/    64,   64,   64,   64,
/*  PanLFO1Depth 123  7b*/    63,   63,   63,   63,
/*  PanLFO2Depth 124  7c*/    63,   63,   63,   63,
/*  OutAssign    125  7d*/     1,    0,    0,    0,
/*  OutLevel     126  7e*/   127,  127,  127,  127,
/*  ChSendLevel  127  7f*/   127,  115,  104,  127,
/*  RevSendLevel 128  80*/    46,  101,   83,  123,
};






PERF_STR Performance = {
/* Performance Common */
0x01000000l, 0x00000040l,
/*   NAME   */
"AprsLaMort  ",
{
   0,  /* 12: EFXSource---- */
   3,  /* 13: EFXType------ */
  55,  /* 14: EFXPar1------ */
   5,  /* 15: EFXPar2------ */
 107,  /* 16: EFXPar3------ */
  79,  /* 17: EFXPar4------ */
 127,  /* 18: EFXPar5------ */
  97,  /* 19: EFXPar6------ */
 127,  /* 20: EFXPar7------ */
   0,  /* 21: EFXPar8------ */
   0,  /* 22: EFXPar9------ */
   0,  /* 23: EFXPar10----- */
   0,  /* 24: EFXPar11----- */
   0,  /* 25: EFXPar12----- */
   0,  /* 26: EFXOutAss---- */
 127,  /* 27: EFXOutLev---- */
 127,  /* 28: EFXChSendLev- */
   0,  /* 29: EFXRevSendLev */
   3,  /* 30: EFXCtrlS1---- */
  66,  /* 31: EFXCtrlD1---- */
   3,  /* 32: EFXCtrlS2---- */
  93,  /* 33: EFXCtrlD2---- */
 127,  /* 34: ChorLev------ */
   2,  /* 35: ChorRate----- */
 127,  /* 36: ChorDepth---- */
   0,  /* 37: ChorPreDel--- */
   0,  /* 38: ChorFdback--- */
   0,  /* 39: ChorOutAss--- */
   0,  /* 40: RevType------ */
 127,  /* 41: RevLevel----- */
 100,  /* 42: RevTime------ */
  17,  /* 43: RevHFDamp---- */
   0,  /* 44: RevFdback---- */
   6,  /* 45: DefTempo1---- */
   4,  /* 46: DefTempo2---- */
   1,  /* 47: KeyRngSw----- */
   4,  /* 48: PartVceRes1-- */
   4,  /* 49: PartVceRes2-- */
   4,  /* 50: PartVceRes3-- */
   4,  /* 51: PartVceRes4-- */
   4,  /* 52: PartVceRes5-- */
   4,  /* 53: PartVceRes6-- */
   4,  /* 54: PartVceRes7-- */
   4,  /* 55: PartVceRes8-- */
   4,  /* 56: PartVceRes9-- */
   4,  /* 57: PartVceRes10- */
   4,  /* 58: PartVceRes11- */
   4,  /* 59: PartVceRes12- */
   4,  /* 60: PartVceRes13 */
   4,  /* 61: PartVceRes14 */
   4,  /* 62: PartVceRes15 */
   4   /* 63: PartVceRes16 */
},
{
   { 0x01001000l, 0x00000013l },
   { 0x01001100l, 0x00000013l },
   { 0x01001200l, 0x00000013l },
   { 0x01001300l, 0x00000013l },
   { 0x01001400l, 0x00000013l },
   { 0x01001500l, 0x00000013l },
   { 0x01001600l, 0x00000013l },
   { 0x01001700l, 0x00000013l },
   { 0x01001800l, 0x00000013l },
   { 0x01001900l, 0x00000013l },
   { 0x01001a00l, 0x00000013l },
   { 0x01001b00l, 0x00000013l },
   { 0x01001c00l, 0x00000013l },
   { 0x01001d00l, 0x00000013l },
   { 0x01001e00l, 0x00000013l },
   { 0x01001f00l, 0x00000013l }
},
{
/*MidiRecSW-*/
   {   1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0},
/*MidiCh----*/
   {   0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15},
/*PatchGrp--*/
   {   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
/*PatchGrpID*/
   {   3,  5,  3,  3,  3,  3,  3,  3,  3,  6,  3,  3,  3,  3,  3,  3},
/*PatchNum0-*/
   {   0,  3,  0,  0,  0,  0,  0,  0,  1,  0,  1,  1,  1,  1,  1,  1},
/*PatchNum1-*/
   {   0,  7,  3,  7,  9, 11, 13, 15,  1,  1,  3,  5,  7,  9, 11, 13},
/*PartLevel-*/
   { 100,100,100,127,110,100,105,120,100,127, 96,120,105,100, 95,120},
/*PartPan---*/
   {  64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64},
/*PitchCoar-*/
   {  48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48},
/*PitchFine-*/
   {  50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50},
/*OutAss----*/
   {   0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  1,  0,  0},
/*OutLev----*/
   { 127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127},
/*ChSndLev--*/
   {   0,  0,  0,  0,  0,  0, 80, 50, 50,  0,  0, 50,  0,  0,  0, 50},
/*RevSndLev-*/
   { 127,127,127,127,127,127,127,127,127, 27,127,127,127, 37,127,127},
/*RecPgmChg-*/
   {   1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
/*RecVol----*/
   {   1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
/*RecHold---*/
   {   1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1},
/*KeyLow----*/
   {   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
/*KeyHigh---*/
   { 127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127}
}
};

#ifdef OLD_STRUCT
PERF_STR Perf_ApresUnPas = {
/* Performance Common */
0x01000000l, 0x00000040l,
/*   NAME   */
"L'Armada    ",
   0,  /* 12: EFXSource */
  18,  /* 12: EFXType------ */
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
      3,  4,  3,  4,  5,  4,  3,  3,  3,  6,  3,  3,  3,  3,  3,  3,
/*PatchNum0-*/
      0,  5,  4,  0,  3,  5,  0,  0,  1,  0,  1,  1,  1,  1,  1,  1,
/*PatchNum1-*/
      0, 12, 10,  4,  2, 15, 13, 15,  1,  1,  3,  5,  7,  9, 11, 13,
/*PartLevel-*/
    100,127,127,110,110,127,105,120,100,127, 96,120,105,100, 95,120,
/*PartPan---*/
     64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
/*PitchCoar-*/
     48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
/*PitchFine-*/
     50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,
/*OutAss----*/
      1,  1,  0,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  1,  0,  0,
/*OutLev----*/
    127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
/*ChSndLev--*/
      0,127,  0,127, 80,127, 80, 50, 50,  0,  0, 50,  0,  0,  0, 50,
/*RevSndLev-*/
    127,127,  0,127,127,127,127,127,127, 27,127,127,127, 37,127,127,
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
#endif


/* ENDE ApresUnPas ALT */

t_splits_jv1080 ApresUnPas_Belltree_Split={
	"StringPhasSplits", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {  
      { 0, InChan0, 0, 0, "NoName", A0,C8,   0,  Chan0, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", A0,C8,   0,  Chan1, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 1, InChan0, 0, 0, "NoName", A0,C8,   0,  Chan2, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", C3,E6,   0,  Chan3, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", F6,C8,   0,  Chan4, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", F6,C8,   0,  Chan5, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", F6,C8,   0,  Chan6, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chan7, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chan8, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chan9, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chana, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chanb, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chanc, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chand, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chane, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chanf, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } 
      },
   MNUMBER_JV1080_SPLITS
   };



t_splits_jv1080 ApresUnPas_Harmon_Split={
	"StringPhasSplits", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {  
      { 1, InChan0, 0, 0, "NoName", A0,E5,   0,  Chan0,  80, SustModeSust, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", A0,H2,   0,  Chan1, 127, SustModeNop , VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", C3,E6,   0,  Chan2, 127, SustModeNop , VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 1, InChan0, 0, 0, "NoName", F5,C8, -12,  Chan3, 127, SustModeNop , VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", F6,C8,   0,  Chan4, 127, SustModeNop , VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", F6,C8,   0,  Chan5, 127, SustModeNop , VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", F6,C8,   0,  Chan6, 127, SustModeNop , VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chan7, 127, SustModeNop , VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chan8, 127, SustModeNop , VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chan9, 127, SustModeNop , VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chana, 127, SustModeNop , VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chanb, 127, SustModeNop , VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chanc, 127, SustModeNop , VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chand, 127, SustModeNop , VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chane, 127, SustModeNop , VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chanf, 127, SustModeNop , VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } 
      },
   MNUMBER_JV1080_SPLITS
   };


t_splits_jv1080 ApresUnPas_Piano_Split={
	"StringPhasSplits", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {  
      { 1, InChan0, 0, 0, "NoName", A0,E5,   0,  Chan0,  40, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 1, InChan0, 0, 0, "NoName", A0,E5,   0,  Chan1, 127, SustModeSust, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", C3,E6,   0,  Chan2, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", F5,C8,   0,  Chan3, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", F6,C8,   0,  Chan4, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", F6,C8,   0,  Chan5, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", F6,C8,   0,  Chan6, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chan7, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chan8, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chan9, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chana, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chanb, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chanc, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chand, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chane, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chanf, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } 
      },
   MNUMBER_JV1080_SPLITS
   };




t_instrument ApresUnPas_AllSplits[] = 
{
	{  1, (t_splits_jv1080 *)&ApresUnPas_Belltree_Split, (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
   {  1, (t_splits_jv1080 *)&ApresUnPas_Harmon_Split  , (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
   {  1, (t_splits_jv1080 *)&ApresUnPas_Piano_Split   , (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
   {  1, (t_splits_jv1080 *)&ApresUnPas_Harmon_Split  , (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
   {  0, (t_splits_jv1080 *)NULL                      , (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
};

t_song_xxyy ApresUnPas_xxyySong = { 
   "ApresUnPas",
   "ApresUnPas",
   (t_instrument*)&ApresUnPas_AllSplits,
   { 31 }, { 0xffffffffUL }, { 0xffffffffUL }, 
};

/* ENDE ApresUnPas */

