#include <stdio.h>

#include "typedefs.h"
#include "midi.h"

#if USE_CREPUSCULE_ATARI == D_TRUE

/*  PATCH_STR Patch_Welt3_1;  */

/* -------- Welt3_ ---------------------------------------------------- */


PATCH_STR Patch_Welt3_String;
PATCH_STR W3_Patch_Oboe;
PERF_STR Perf_Welt3_;
struct t_song Welt3_;
struct t_splits Welt3_String;
struct t_splits Welt3_1;
struct t_splits Welt3_2;
struct t_splits Welt3_Purple;
struct t_splits Welt3_Cello;
struct t_splits Welt3_Grung;
struct t_splits *Welt3_List[] = 
{
	&Welt3_String,		/* String / String */ 
	&Welt3_Purple,      /* Purple */
	&Welt3_2,		/* String / Oboe */ 
	&Welt3_Cello,       /* String + Purple */ 
	&Welt3_1, 		/* Orgel */
	&Welt3_String, 
	&Welt3_Grung,       /* Grung */
	NULL};

  
struct t_song Welt3_={ "Welt3_",
	0, 81,1,3,&Welt3_List[0],
	&Perf_Welt3_,
	NULL,0l,
	NULL,0l,
	NULL,0l,
	NULL,0l,
	NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,2,50,		Chan0,	/* JX8P Strings */
    1, 81,2,50,		Chan1,	/* JX8P Strings */
    1, 81,0,55,     Chan2,  /* Purple Spin */
    1, 81,0,52,     Chan3,  /* Roller Spin */
    1, 81,2,42,     Chan4,  /* Cello */
    1, 81,1,4,      Chan5,  /* Grung */
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


struct t_splits Welt3_String={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {  
      {     1,   A0,H1,  0,  Chan0, 127, 0,VolCtr2,InChan0 } ,
      {     1,   A0,H1, 12,  Chan0, 127, 0,VolCtr2,InChan0 } ,
      {     1,   C2,H3, 24,  Chan1, 115, 0,VolCtr2,InChan0 } ,
      {     1,   C4,C8, 12,  Chan1, 127, 0,VolCtr2,InChan0 } ,
      {     1,   C4,C8, 24,  Chan1, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan5, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan6, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan7, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan8, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan9, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chana, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chanb, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chanc, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chand, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chane, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chanf, 127, 0,VolCtr2,InChan0 } 
      },
	"CS"
    };

/* Roller Spin */
struct t_splits Welt3_2={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {  
      {     0,   A0,A0,  0,  Chan0, 127, 0,VolCtr2,InChan0 } ,
      {     0,   A0,A0,  0,  Chan1, 127, 0,VolCtr2,InChan0 } ,
      {     0,   A0,A0,  0,  Chan2, 127, 0,VolCtr2,InChan0 } ,
      {     1,   A0,C8,  0,  Chan3, 127, 0,VolCtr2,InChan0 } ,
      {     0,   A0,A0,  0,  Chan4, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan5, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan6, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan7, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan8, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan9, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chana, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chanb, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chanc, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chand, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chane, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chanf, 127, 0,VolCtr2,InChan0 } 
      },
	"CS"
    };

/* Roller Spin */
struct t_splits Welt3_1={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {  
      {     0,   A0,H1,  0,  Chan0, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127, 24,  Chan1, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan1, 127, 0,VolCtr2,InChan0 } ,
      {     1,   A0,C8,  0,  Chan3, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan4, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan5, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan6, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan7, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan8, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan9, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chana, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chanb, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chanc, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chand, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chane, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chanf, 127, 0,VolCtr2,InChan0 } 
      },
	"CS"
    };

/* Purple */
struct t_splits Welt3_Purple={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {  
      {     0,   A0,A0,   0,  Chan0, 127, 0,VolCtr2,InChan0 } ,
      {     0,   A0,A0,   0,  Chan1, 127, 0,VolCtr2,InChan0 } ,
      {     1,   A0,C8,   0,  Chan2, 127, 0,VolCtr2,InChan0 } ,
      {     0,   A0,A0,   0,  Chan3, 127, 0,VolCtr2,InChan0 } ,
      {     0,   A0,A0,   0,  Chan4, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chan5, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chan6, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chan7, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chan8, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chan9, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chana, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chanb, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chanc, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chand, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chane, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chanf, 127, 0,VolCtr2,InChan0 } 
      },
	"CS"
    };

/* Cello */
struct t_splits Welt3_Cello={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    {  
      {     0,   A0,A0,   0,  Chan0, 127, 0,VolCtr2,InChan0 } ,
      {     0,   A0,A0,   0,  Chan1, 127, 0,VolCtr2,InChan0 } ,
      {     0,   A0,A0,   0,  Chan2, 127, 0,VolCtr2,InChan0 } ,
      {     0,   A0,A0,   0,  Chan3, 127, 0,VolCtr2,InChan0 } ,
      {     1,   A0,C8,   0,  Chan4, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chan5, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chan6, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chan7, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chan8, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chan9, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chana, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chanb, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chanc, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chand, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chane, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,   0,  Chanf, 127, 0,VolCtr2,InChan0 } 
      },
	"CS"
    };

/* Grung */
struct t_splits Welt3_Grung={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {  
      {     0,   A0,H1,  0,  Chan0, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127, 24,  Chan1, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan1, 127, 0,VolCtr2,InChan0 } ,
      {     0,   A0,C8,  0,  Chan3, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan4, 127, 0,VolCtr2,InChan0 } ,
      {     1,   A0,C8,  0,  Chan5, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan6, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan7, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan8, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chan9, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chana, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chanb, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chanc, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chand, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chane, 127, 0,VolCtr2,InChan0 } ,
      {     0,   0,127,  0,  Chanf, 127, 0,VolCtr2,InChan0 } 
      },
	"CS"
    };



/* ENDE Song Split */

PATCH_STR Patch_Welt3_String = {
/* Patch Common */
0x03000000l, 0x00000048l,
/*   NAME   */
"Str  Welt3_ ",
  12,  /* 12: EFXType------ */
/* EFXParameter */
 10,  4, 79, 90, 13, 16, 50,127,  0,  0,  0,  0,
/*25-EFXOutAss----*/      0,    /*26-EFXOutLev----*/    127,    
/*27-EFXChSendLev-*/    110,    /*28-EFXRevSendLev*/     31,    
/*29-EFXCtrlS1----*/      0,    /*30-EFXCtrlD1----*/     63,    
/*31-EFXCtrlS2----*/      0,    /*32-EFXCtrlD2----*/     63,    
/*33-ChorLev------*/     74,    /*34-ChorRate-----*/     15,    
/*35-ChorDepth----*/     50,    /*36-ChorPreDel---*/      0,    
/*37-ChorFdback---*/      0,    /*38-ChorOutAss---*/      2,    
/*39-RevType------*/      4,    /*40-RevLevel-----*/    127,    
/*41-RevTime------*/     70,    /*42-RevHFDamp----*/     11,    
/*43-RevFdback----*/      0,    /*44-DefTempo1----*/      6,    
/*45-DefTempo2----*/      4,    /*46-PatchLevel---*/    112,    
/*47-PatchPan-----*/     64,    /*48-AnalogFeel---*/     12,    
/*49-BendRngUp----*/      2,    /*50-BendRngDown--*/      2,    
/*51-KeyAssMode---*/      0,    /*52-SoloLegato---*/      0,    
/*53-PortaSw------*/      0,    /*54-PortaMode----*/      1,    
/*55-PortaType----*/      0,    /*56-PortaStart---*/      0,    
/*57-PortaTime----*/     18,    /*58-PtchCtrlSrc2-*/      1,    
/*59-PtchCtrlSrc3-*/      2,    /*60-EFXCtrl-H/P--*/      0,    
/*61-Ctrl1-H/P----*/      0,    /*62-Ctrl2-H/P----*/      0,    
/*63-Ctrl3-H/P----*/      0,    /*64-VelRangeSw---*/      1,    
/*65-OctaveSh-----*/      4,    /*66-StrTuneDepth-*/      1,    
/*67-VoicePrio----*/      0,    /*68-StructType1&2*/      0,    
/*69-BoostLevel1&2*/      0,    /*70-StructType3&4*/      0,    
/*71-BoostLevel3&4*/      0,    

/* Patch Tone:  4 */
0x03001000l, 0x00000101l,
0x03001200l, 0x00000101l,
0x03001400l, 0x00000101l,
0x03001600l, 0x00000101l,
/*  ToneSW         0   0*/     1,    1,    0,    0,
/*  WaveGrp        1   1*/     0,    0,    0,    0,
/*  WaveGrpId      2   2*/     1,    1,    1,    1,
/*  WaveNumber1    3   3*/    13,   13,   13,   13,
/*  WaveNumber2    4   4*/     4,    6,    7,    7,
/*  WaveGain       5   5*/     2,    2,    2,    2,
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
/*  Ctrl1Dest3    25  19*/     3,    3,    3,    3,
/*  Ctrl1Dpth3    26  1a*/    73,   73,   73,   73,
/*  Ctrl1Dest4    27  1b*/     0,    0,    0,    0,
/*  Ctrl1Dpth4    28  1c*/    63,   63,   63,   63,
/*  Ctrl2Dest1    29  1d*/     9,    9,    9,    9,
/*  Ctrl2Dpth1    30  1e*/    73,   73,   73,   73,
/*  Ctrl2Dest2    31  1f*/     4,    4,    4,    4,
/*  Ctrl2Dpth2    32  20*/    73,   73,   73,   73,
/*  Ctrl2Dest3    33  21*/     2,    2,    2,    2,
/*  Ctrl2Dpth3    34  22*/    66,   66,   66,   66,
/*  Ctrl2Dest4    35  23*/     0,    0,    0,    0,
/*  Ctrl2Dpth4    36  24*/    68,   68,   68,   68,
/*  Ctrl3Dest1    37  25*/     4,    4,    4,    4,
/*  Ctrl3Dpth1    38  26*/    83,   83,   83,   83,
/*  Ctrl3Dest2    39  27*/     2,    2,    0,    0,
/*  Ctrl3Dpth2    40  28*/    65,   65,   63,   63,
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
/*  PtchCoarseTn  61  3d*/    36,   36,   36,   48,
/*  PtchFineTn    62  3e*/    46,   52,   50,   50,
/*  PtchRndDepth  63  3f*/     7,    6,    5,    5,
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
/*  FltCutoffFrq  81  51*/    83,   83,   79,   79,
/*  FltCutoffFol  82  52*/     8,    8,    8,    8,
/*  FltResonance  83  53*/     0,    0,   27,   27,
/*  FltResVelSns  84  54*/    50,   50,   50,   50,
/*  FltEnvDepth   85  55*/    76,   76,   79,   79,
/*  FltEnvVelCur  86  56*/     0,    0,    0,    0,
/*  FltEnvVelSns  87  57*/    78,   78,   78,   78,
/*  FltEnvVelT1   88  58*/    12,   12,   12,   12,
/*  FltEnvVelT4   89  59*/     8,    8,    8,    8,
/*  FltEnvTKeyFl  90  5a*/     9,    9,    9,    9,
/*  FltTime1      91  5b*/    37,   37,   13,   13,
/*  FltTime2      92  5c*/    66,   66,   66,   66,
/*  FltTime3      93  5d*/    95,   95,   95,   95,
/*  FltTime4      94  5e*/    93,   93,   88,   88,
/*  FltLevel1     95  5f*/   127,  127,  127,  127,
/*  FltLevel2     96  60*/    88,   88,   71,   71,
/*  FltLevel3     97  61*/    53,   53,   12,   12,
/*  FltLevel4     98  62*/     0,    0,    0,    0,
/*  FltLFO1Depth  99  63*/    63,   63,   63,   63,
/*  FltLFO2Depth 100  64*/    63,   63,   63,   63,
/*  ToneLevel    101  65*/   127,  127,   88,   74,
/*  BiasDirect   102  66*/     0,    0,    0,    0,
/*  BiasPoint    103  67*/    60,   60,   60,   60,
/*  BiasLevel    104  68*/     7,    7,    7,    7,
/*  A-EnvVelCurv 105  69*/     0,    0,    0,    0,
/*  A-EnvVelSens 106  6a*/    75,   75,   88,   89,
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
/*  TonePan      119  77*/   127,    0,   47,   47,
/*  PanKeyFollow 120  78*/     7,    7,   10,   10,
/*  PanRndDepth  121  79*/     0,    0,    0,   22,
/*  PanAltDepth  122  7a*/    64,   64,   64,   71,
/*  PanLFO1Depth 123  7b*/    63,   63,   63,   63,
/*  PanLFO2Depth 124  7c*/    63,   63,   63,   63,
/*  OutAssign    125  7d*/     0,    0,    1,    1,
/*  OutLevel     126  7e*/   127,  127,  127,  127,
/*  ChSendLevel  127  7f*/    39,   39,   25,    9,
/*  RevSendLevel 128  80*/    93,   93,   65,   93,
};


PATCH_STR W3_Patch_Oboe = {
/* Patch Common */
0x03000000l, 0x00000048l,
/*   NAME   */
"Oboe mf     ",				/* Original B103 */
   0,  /* 12: EFXType------ */
/* EFXParameter */
  1, 16,  1, 19,  8,  1, 15,  7,  1, 15,127,  0,
/*25-EFXOutAss----*/      0,    /*26-EFXOutLev----*/      0,    
/*27-EFXChSendLev-*/      0,    /*28-EFXRevSendLev*/      0,    
/*29-EFXCtrlS1----*/      0,    /*30-EFXCtrlD1----*/     63,    
/*31-EFXCtrlS2----*/      0,    /*32-EFXCtrlD2----*/     63,    
/*33-ChorLev------*/      0,    /*34-ChorRate-----*/     30,    
/*35-ChorDepth----*/     30,    /*36-ChorPreDel---*/      0,    
/*37-ChorFdback---*/      0,    /*38-ChorOutAss---*/      0,    
/*39-RevType------*/      5,    /*40-RevLevel-----*/     67,    
/*41-RevTime------*/     64,    /*42-RevHFDamp----*/     16,    
/*43-RevFdback----*/     34,    /*44-DefTempo1----*/      6,    
/*45-DefTempo2----*/      4,    /*46-PatchLevel---*/    127,    
/*47-PatchPan-----*/     64,    /*48-AnalogFeel---*/      0,    
/*49-BendRngUp----*/      2,    /*50-BendRngDown--*/      2,    
/*51-KeyAssMode---*/      0,    /*52-SoloLegato---*/      0,    
/*53-PortaSw------*/      1,    /*54-PortaMode----*/      1,    
/*55-PortaType----*/      0,    /*56-PortaStart---*/      0,    
/*57-PortaTime----*/      2,    /*58-PtchCtrlSrc2-*/      1,    
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
/*  ToneSW         0   0*/     1,    0,    0,    0,
/*  WaveGrp        1   1*/     0,    0,    0,    0,
/*  WaveGrpId      2   2*/     1,    1,    1,    1,
/*  WaveNumber1    3   3*/    10,   10,   15,   15,
/*  WaveNumber2    4   4*/     4,    7,   14,    1,
/*  WaveGain       5   5*/     3,    1,    1,    1,
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
/*  Ctrl1Dest1    21  15*/     9,    9,    5,    5,
/*  Ctrl1Dpth1    22  16*/    69,   69,  126,  126,
/*  Ctrl1Dest2    23  17*/    13,   13,    0,    0,
/*  Ctrl1Dpth2    24  18*/    71,   72,   63,   63,
/*  Ctrl1Dest3    25  19*/     0,    0,    0,    0,
/*  Ctrl1Dpth3    26  1a*/    63,   63,   63,   63,
/*  Ctrl1Dest4    27  1b*/     0,    0,    0,    0,
/*  Ctrl1Dpth4    28  1c*/    63,   63,   63,   63,
/*  Ctrl2Dest1    29  1d*/     9,    9,    3,    3,
/*  Ctrl2Dpth1    30  1e*/    71,  103,  126,  126,
/*  Ctrl2Dest2    31  1f*/    13,   13,    0,    0,
/*  Ctrl2Dpth2    32  20*/    75,  118,   63,   63,
/*  Ctrl2Dest3    33  21*/     0,    0,    0,    0,
/*  Ctrl2Dpth3    34  22*/    63,   63,   63,   63,
/*  Ctrl2Dest4    35  23*/     0,    0,    0,    0,
/*  Ctrl2Dpth4    36  24*/    63,   63,   63,   63,
/*  Ctrl3Dest1    37  25*/     4,    0,    0,    0,
/*  Ctrl3Dpth1    38  26*/    83,   63,   63,   63,
/*  Ctrl3Dest2    39  27*/     2,    0,    0,    0,
/*  Ctrl3Dpth2    40  28*/    65,   63,   63,   63,
/*  Ctrl3Dest3    41  29*/     0,    0,    0,    0,
/*  Ctrl3Dpth3    42  2a*/    63,   63,   63,   63,
/*  Ctrl3Dest4    43  2b*/     0,    0,    0,    0,
/*  Ctrl1Dpth4    44  2c*/    63,   63,   63,   63,
/*  LFO1WaveForm  45  2d*/     1,    1,    0,    0,
/*  LFO1KeyTrig   46  2e*/     0,    0,    0,    0,
/*  LFO1Rate      47  2f*/    92,   92,  100,  100,
/*  LFO1LevOffs   48  30*/     2,    2,    2,    2,
/*  LFO1DelTime   49  31*/    27,   27,    0,    0,
/*  LFO1FadeMode  50  32*/     0,    0,    0,    0,
/*  LFO1FadeTime  51  33*/    36,   36,    0,    0,
/*  LFO1ExtSync   52  34*/     0,    0,    0,    0,
/*  LFO2WaveForm  53  35*/     0,    0,    0,    0,
/*  LFO2KeyTrig   54  36*/     0,    0,    0,    0,
/*  LFO2Rate      55  37*/    80,   80,   80,   80,
/*  LFO2LevOffs   56  38*/     2,    2,    2,    2,
/*  LFO2DelTime   57  39*/     0,    0,    0,    0,
/*  LFO2FadeMode  58  3a*/     2,    2,    0,    0,
/*  LFO2FadeTime  59  3b*/     0,    0,    0,    0,
/*  LFO2ExtSync   60  3c*/     0,    0,    0,    0,
/*  PtchCoarseTn  61  3d*/    48,   48,   48,   48,
/*  PtchFineTn    62  3e*/    50,   50,   50,   50,
/*  PtchRndDepth  63  3f*/     7,    2,    0,    0,
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
/*  PtchLFO1Dpth  78  4e*/    66,   65,   63,   63,
/*  PtchLFO2Dpth  79  4f*/    63,   63,   63,   63,
/*  FltType       80  50*/     1,    1,    1,    1,
/*  FltCutoffFrq  81  51*/    35,   92,   54,   53,
/*  FltCutoffFol  82  52*/     2,    4,    5,    5,
/*  FltResonance  83  53*/     0,    0,    0,    0,
/*  FltResVelSns  84  54*/    50,   50,   50,   50,
/*  FltEnvDepth   85  55*/    95,   93,   93,   93,
/*  FltEnvVelCur  86  56*/     0,    0,    0,    0,
/*  FltEnvVelSns  87  57*/    85,   84,   90,   90,
/*  FltEnvVelT1   88  58*/     8,   11,    7,    7,
/*  FltEnvVelT4   89  59*/     8,    8,    7,    7,
/*  FltEnvTKeyFl  90  5a*/     7,    9,    7,    7,
/*  FltTime1      91  5b*/     0,    0,    0,    0,
/*  FltTime2      92  5c*/    84,   18,   27,   27,
/*  FltTime3      93  5d*/   127,   23,   81,   81,
/*  FltTime4      94  5e*/    52,   10,   60,   60,
/*  FltLevel1     95  5f*/   127,  127,  127,  127,
/*  FltLevel2     96  60*/   108,   39,   90,   90,
/*  FltLevel3     97  61*/    96,    0,    0,    0,
/*  FltLevel4     98  62*/     0,    0,    0,    0,
/*  FltLFO1Depth  99  63*/    63,   63,   63,   63,
/*  FltLFO2Depth 100  64*/    63,   63,   63,   63,
/*  ToneLevel    101  65*/   127,   23,   49,  120,
/*  BiasDirect   102  66*/     1,    0,    0,    0,
/*  BiasPoint    103  67*/    78,   60,   60,   60,
/*  BiasLevel    104  68*/     5,    7,    7,    7,
/*  A-EnvVelCurv 105  69*/     1,    1,    0,    0,
/*  A-EnvVelSens 106  6a*/    71,   80,  100,  100,
/*  A-EnvT1Sens  107  6b*/     8,   10,   14,   14,
/*  A-EnvT4Sens  108  6c*/     8,    9,    7,    7,
/*  A-EnvTKeyFol 109  6d*/    11,   12,    7,    7,
/*  A-EnvTime1   110  6e*/     1,    0,    3,    1,
/*  A-EnvTime2   111  6f*/    49,  127,   33,   33,
/*  A-EnvTime3   112  70*/   122,  120,  104,  104,
/*  A-EnvTime4   113  71*/     9,    8,   36,   36,
/*  A-EnvLevel1  114  72*/   127,  127,  127,  127,
/*  A-EnvLevel2  115  73*/   127,  127,   90,   90,
/*  A-EnvLevel3  116  74*/    82,    0,    0,    0,
/*  AmplLFO1Dpth 117  75*/    68,   68,   63,   63,
/*  AmplLFO2Dpth 118  76*/    63,   63,   63,   63,
/*  TonePan      119  77*/    64,   64,    0,  127,
/*  PanKeyFollow 120  78*/     7,    7,   12,   12,
/*  PanRndDepth  121  79*/     0,    0,    0,    0,
/*  PanAltDepth  122  7a*/    64,   64,   96,   96,
/*  PanLFO1Depth 123  7b*/    63,   63,   63,   63,
/*  PanLFO2Depth 124  7c*/    63,   63,   63,   63,
/*  OutAssign    125  7d*/     1,    1,    1,    1,
/*  OutLevel     126  7e*/   127,  127,  127,  127,
/*  ChSendLevel  127  7f*/     0,    0,   79,   80,
/*  RevSendLevel 128  80*/   127,   98,  100,  100,
};


PERF_STR Perf_Welt3_ = {
/* Performance Common */
0x01000000l, 0x00000040l,
/*   NAME   */
"Welt3_      ",
   1,  /* 12: EFXSource */
   0,  /* 13: EFXType */
/* EFXParameter */
  1, 30,  0, 15,  7,  1, 29,  4,  1, 19,127,  0,
   0,  /* 26: EFXOutAss */
 127,  /* 27: EFXOutLev */
 127,  /* 28: EFXChSendLev */
 127,  /* 29: EFXRevSendLev */
   0,  /* 30: EFXCtrlS1 */
  63,  /* 31: EFXCtrlD1 */
   0,  /* 32: EFXCtrlS2 */
  63,  /* 33: EFXCtrlD2 */
 127,  /* 34: ChorLev */
   3,  /* 35: ChorRate */
 108,  /* 36: ChorDepth */
   0,  /* 37: ChorPreDel */
   0,  /* 38: ChorFdback */
   2,  /* 39: ChorOutAss */
   3,  /* 40: RevType */
 127,  /* 41: RevLevel */
 110,  /* 42: RevTime */
  15,  /* 43: RevHFDamp */
   0,  /* 44: RevFdback */
   7,  /* 45: DefTempo1 */
   8,  /* 46: DefTempo2 */
   1,  /* 47: KeyRngSw */
  8, 12,  8,  8,  8,  4,  4,  4,  4,  4,  0,  0,  0,  0,  0,  0,
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
      5,  5,  3,  3,  4,  3,  3,  3,  6,  3,  6,  3,  3,  3,  3,  6,
/*PatchNum0-*/
      3,  3,  3,  6,  6,  6,  5,  5,  7,  0,  7,  5,  5,  6,  6,  6,
/*PatchNum1-*/
      2,  2, 11,  4,  2,  7,  4, 12,  6,  0,  0,  7, 15,  5,  9, 11,
/*PartLevel-*/
    127,127,101,127,127,100,100,100,100,127,100,100,100,100,100,127,
/*PartPan---*/
     64, 64, 64, 82, 64, 64,121, 64, 64, 64, 64, 64, 64, 64, 64, 64,
/*PitchCoar-*/
     36, 36, 48, 48, 36, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
/*PitchFine-*/
     50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,
/*OutAss----*/
      1,  0,  1,  1,  0,  4,  1,  0,  0,  4,  0,  0,  0,  0,  0,  0,
/*OutLev----*/
    127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
/*ChSndLev--*/
    127, 46, 20,127,  0,127,127, 45,127,  0,  0,127, 32,103,  0, 86,
/*RevSndLev-*/
    127, 59, 20, 72, 20,103, 70,116,127, 70,127,127,127,127,127,127,
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


/* ENDE Welt3_ */



/* *********************************************************** */




/* -------- HymneALaVie ---------------------------------------------------- */

struct t_song HymneALaVie;
struct t_splits HymneALaVie0;
struct t_splits HymneALaVie1;
struct t_splits HymneALaVie2;
PERF_STR Perf_HymneALaVie;
struct t_splits *HymneALaVieList[] = 
{
	&HymneALaVie0, &HymneALaVie1, 
	&HymneALaVie0, &HymneALaVie1, 
	&HymneALaVie0, &HymneALaVie1, NULL};
	

struct t_song HymneALaVie={ "HymneALaVie",
	0, 81,1,21,&HymneALaVieList[0],
	&Perf_HymneALaVie,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,2,50,  Chan0,	/* JV1080 Bank C */
    1, 81,2,50,  Chan1,	/* JV1080 Bank C */
    1, 81,0,52,  Chan2,  /* Roller Spin */
    0, 81,3,4,   Chan3,
    0, 81,0,0,   Chan4,
    0, 81,0,0,   Chan5,
    0, 81,0,0,   Chan6,
    0, 81,0,0,   Chan7,
    0, 81,0,0,   Chan8,
    0, 81,0,0,   Chan9,
    0, 81,0,0,   Chan10,
    0, 81,0,0,   Chan11,
    1,  0,0,5,   Chan12,	/*  El. Piano */
    1,  0,0,4,   Chan13,	/*  El. Piano */
    0, 81,0,0,   Chan14,
    0, 81,0,0,   Chan15,
    };

struct t_splits HymneALaVie0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   A0,H2,  0,  Chan0, 127, 1,VolCtr2,InChan0,
    1,   A0,H2,-12,  Chan0, 127, 1,VolCtr2,InChan0,
    1,   C3,C8,-12,  Chan1, 127, 1,VolCtr2,InChan0,
    0,   C3,C8, 12,  Chan1, 127, 1,VolCtr2,InChan0,
    0,  56,127, -24,  Chan2,  127, 1,VolCtr1,InChan0,    /*  El. Piano */
    0,  56,127, -24,  Chan3,  127, 1,VolCtr1,InChan0,    /*  El. Piano */
    0,   0,127,  0,  Chan4,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan5,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan6,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan7,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan8,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan9,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chana,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chanb,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chane,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chanf,  127, 0,VolCtr2,InChan0,
	"CS"
    };


struct t_splits HymneALaVie1={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   A0,H2,  0,  Chan0, 127, 1,VolCtr2,InChan0,
    1,   A0,H2,-12,  Chan0, 127, 1,VolCtr2,InChan0,
    1,   C3,C8,-12,  Chan2, 127, 1,VolCtr2,InChan0,
    1,   C3,C8,  0,  Chan2, 127, 1,VolCtr1,InChan0,
    0,   0,127,  0,  Chan4,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan5,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan6,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan7,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan8,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan9,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chana,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chanb,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chanc,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chand,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chane,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chanf,  127, 0,VolCtr2,InChan0,
	"CS"
    };


struct t_splits HymneALaVie2={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    0,   0,127,  0,  Chan0,  127, 1,VolCtr2,InChan0, /* JV1080 Bank C */
    1,   0,127,  0,  Chan1,  127, 1,VolCtr2,InChan0, /* JV1080 Bank C */
    0,  56,127,  0,  Chan12, 127, 1,VolCtr1,InChan0,    /*  El. Piano */
    0,  56,127,  0,  Chan13, 127, 1,VolCtr1,InChan0,    /*  El. Piano */
    0,  56,127, -24,  Chan2,  127, 1,VolCtr1,InChan0,    /*  El. Piano */
    0,  56,127, -24,  Chan3,  127, 1,VolCtr1,InChan0,    /*  El. Piano */
    0,   0,127,  0,  Chan4,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan5,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan6,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan7,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan8,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan9,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chana,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chanb,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chane,  127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chanf,  127, 0,VolCtr2,InChan0,
	"CS"
    };


PERF_STR Perf_HymneALaVie = {
/* Performance Common */
0x01000000l, 0x00000040l,
/*   NAME   */
"HymneALaVie ",
   0,  /* 12: EFXSource */
   3,  /* 13: EFXType */
/* EFXParameter */
 55,  3,101,  0,127, 97,127,  0,  0,  0,  0,  0,
   0,  /* 26: EFXOutAss */
 127,  /* 27: EFXOutLev */
 127,  /* 28: EFXChSendLev */
 127,  /* 29: EFXRevSendLev */
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
  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
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
      1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,
/*MidiCh----*/
      0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15,
/*PatchGrp--*/
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
/*PatchGrpID*/
      5,  5,  3,  3,  3,  3,  3,  3,  3,  6,  3,  3,  3,  3,  3,  3,
/*PatchNum0-*/
      3,  1,  0,  0,  0,  0,  0,  0,  1,  0,  1,  1,  0,  0,  1,  1,
/*PatchNum1-*/
      2,  9,  3,  7,  9, 11, 13, 15,  1,  1,  3,  5,  5,  4, 11, 13,
/*PartLevel-*/
    127,127,100,127,110,100,105,120,100,127, 96,120,105,100, 95,120,
/*PartPan---*/
     64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
/*PitchCoar-*/
     48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
/*PitchFine-*/
     50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,
/*OutAss----*/
      0,  1,  1,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  1,  0,  0,
/*OutLev----*/
    127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
/*ChSndLev--*/
      0,  0,  0,  0,  0,  0, 80, 50, 50,  0,  0, 50,  0,  0,  0, 50,
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




/* ENDE HymneALaVie */

#endif

t_splits_jv1080 Welt3_StringSplits={
	"StringSplits", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {  
      { 0, InChan0, 0, 0, "NoName", A0,H1,   0,  Chan1, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", A0,H1,  12,  Chan1, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 1, InChan0, 0, 0, "NoName", F6,C8, -24,  Chan2, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 1, InChan0, 0, 0, "NoName", C2,E6,   0,  Chan3, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", A0,C8,   0,  Chan4, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chan5, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chan6, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
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


/* Purple */
t_splits_jv1080 Welt3_PurpleSplits={
	"Purple", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {  
      { 1, InChan0, 0, 0, "NoName", A0,C8,   0,  Chan0, 127, SustModeSust, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", A0,A0,   0,  Chan1,   0, SustModeNop , VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 1, InChan0, 0, 0, "NoName", A0,C8,   0,  Chan2,  20, SustModeSust, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", A0,C8,   0,  Chan3,  30, SustModeSust, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", A0,A0,   0,  Chan4, 127, SustModeNop , VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chan5, 127, SustModeNop , VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", 0,127,   0,  Chan6, 127, SustModeNop , VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
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


t_instrument Welt3_xxyyList[] = 
{
	{  1, (t_splits_jv1080 *)&Welt3_StringSplits, (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
	{  0, (t_splits_jv1080 *)&Welt3_PurpleSplits, (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
   {  0, (t_splits_jv1080 *)NULL               , (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
};

t_song_xxyy Welt3_xxyySong = { 
   "Welt3",
   "Welt3",
   (t_instrument*)&Welt3_xxyyList,
   { 12 }, { 0xffffffffUL }, { 0xffffffffUL }, 
};




t_splits_jv1080 Welt3_Phas_StringSplits_O={
	"StringPhasSplits_O", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {  
      { 1, InChan0, 0, 0, "NoName", A0,H3, -12,  Chan0, 100, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 1, InChan0, 0, 0, "NoName", A0,H3,   0,  Chan0, 100, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 1, InChan0, 0, 0, "NoName", C3,C8,   0,  Chan0, 100, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", C2,E6, -12,  Chan0,  60, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", F6,C8, -12,  Chan2, 100, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 1, InChan0, 0, 0, "NoName", C3,C8, -12,  Chan3, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", F6,C8,   0,  Chan3,  90, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
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



t_splits_jv1080 Welt3_Phas_StringSplits={
	"StringPhasSplits", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {  
      { 1, InChan0, 0, 0, "NoName", A0,H2, -12,  Chan0, 100, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 1, InChan0, 0, 0, "NoName", A0,H2,   0,  Chan0, 100, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 1, InChan0, 0, 0, "NoName", C2,E6, -12,  Chan0, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", C2,E6, -12,  Chan0,  60, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", F6,C8, -12,  Chan2, 100, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 1, InChan0, 0, 0, "NoName", F6,C8, -12,  Chan3, 127, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
      { 0, InChan0, 0, 0, "NoName", F6,C8,   0,  Chan3,  90, SustModeNop, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT } ,
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




t_instrument Welt3_Phas_SplitList[] = 
{
	{  1, (t_splits_jv1080 *)&Welt3_Phas_StringSplits, (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
   {  0, (t_splits_jv1080 *)NULL                    , (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
};

t_song_xxyy Welt3_Phas_xxyySong = { 
   "Welt3_Phas",
   "Welt3_Phas",
   (t_instrument*)&Welt3_Phas_SplitList,
   { 13 }, { 0xffffffffUL }, { 0xffffffffUL }, 
};
