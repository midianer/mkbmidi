#include <stdio.h>

#include "typedefs.h"
#include "midi.h"


/* -------- JeRevole ---------------------------------------------------- */

t_splits_jv1080 JeRevole_SoundMix={
   "SoundMix", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {  
      {   1, InChan0,   0, 0, "NoName", A0,H1,   24,  Chan0, 127, 0, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT }, /* Glocken */
      {   1, InChan0,   0, 0, "NoName", C7,H7,  -36,  Chan1, 127, 0, VolCtr2, ModulationOn , 0, MNUMBER_JV1080_SPLIT }, /* Vogel */
      {   1, InChan0,   0, 0, "NoName", C5,H6,    0,  Chan2, 127, 0, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT }, /* Sinus */
      {   1, InChan0,   0, 0, "NoName", C2,H4,   12,  Chan3, 127, 0, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT }, /* SandsOfTime */
      {   0, InChan0,   0, 0, "NoName", 0,127,    0,  Chan4, 127, 0, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT },
      {   0, InChan0,   0, 0, "NoName", 0,127,    0,  Chan5, 127, 0, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT },
      {   0, InChan0,   0, 0, "NoName", 0,127,    0,  Chan6, 127, 0, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT },
      {   0, InChan0,   0, 0, "NoName", 0,127,    0,  Chan7, 127, 0, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT },
      {   0, InChan0,   0, 0, "NoName", 0,127,    0,  Chan8, 127, 0, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT },
      {   0, InChan0,   0, 0, "NoName", 0,127,    0,  Chan9, 127, 0, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT },
      {   0, InChan0,   0, 0, "NoName", 0,127,    0,  Chana, 127, 0, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT },
      {   0, InChan0,   0, 0, "NoName", 0,127,    0,  Chanb, 127, 0, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT },
      {   0, InChan0,   0, 0, "NoName", 0,127,    0,  Chanc, 127, 0, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT },
      {   0, InChan0,   0, 0, "NoName", 0,127,    0,  Chand, 127, 0, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT },
      {   0, InChan0,   0, 0, "NoName", 0,127,    0,  Chane, 127, 0, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT },
      {   0, InChan0,   0, 0, "NoName", 0,127,    0,  Chanf, 127, 0, VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT },
   },
   MNUMBER_JV1080_SPLITS
};

t_splits_jv1080 JeRevole_Analog={
   "Analog", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {  
      {    0, InChan0, 0, 0, "NoName",  A0,C8,    0,  Chan0, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  C6,C8,    0,  Chan1, 127, 0,VolCtr2,ModulationOn , 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  A0,C8,    0,  Chan2, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chan3, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    1, InChan0, 0, 0, "NoName",  A0,C8,    0,  Chan4, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chan5, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chan6, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chan7, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chan8, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chan9, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chana, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chanb, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chanc, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chand, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chane, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chanf, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
   },
   MNUMBER_JV1080_SPLITS
 };

t_splits_jv1080 JeRevole_Strings={
   "Strings", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {  
      {    0, InChan0, 0, 0, "NoName",  A0,C8,    0,  Chan0, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  C6,C8,    0,  Chan1, 127, 0,VolCtr2,ModulationOn , 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  A0,C8,    0,  Chan2, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chan3, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  A0,C8,    0,  Chan4, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    1, InChan0, 0, 0, "NoName",  A0,C8,    0,  Chan5, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chan6, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chan7, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chan8, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chan9, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chana, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chanb, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chanc, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chand, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chane, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chanf, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
   },
   MNUMBER_JV1080_SPLITS
 };

t_splits_jv1080 JeRevole_C6={
   "C6", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {  
      {    0, InChan0, 0, 0, "NoName",  A0,C8,    0,  Chan0, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  C6,C8,    0,  Chan1, 127, 0,VolCtr2,ModulationOn , 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  A0,C8,    0,  Chan2, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chan3, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    1, InChan0, 0, 0, "NoName",  A0,C8,    0,  Chan4, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  A0,C8,    0,  Chan5, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    1, InChan0, 0, 0, "NoName",  A0,C8,    0,  Chan6, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  A0,C8,    0,  Chan7, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chan8, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chan9, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chana, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chanb, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chanc, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chand, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chane, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chanf, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
   },
   MNUMBER_JV1080_SPLITS
 };

t_splits_jv1080 JeRevole_C7={
   "C7", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {  
      {    0, InChan0, 0, 0, "NoName",  A0,C8,    0,  Chan0, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  C6,C8,    0,  Chan1, 127, 0,VolCtr2,ModulationOn , 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  A0,C8,    0,  Chan2, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chan3, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    1, InChan0, 0, 0, "NoName",  A0,C8,    0,  Chan4, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  A0,C8,    0,  Chan5, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  A0,C8,    0,  Chan6, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    1, InChan0, 0, 0, "NoName",  A0,C8,    0,  Chan7, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chan8, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chan9, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chana, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chanb, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chanc, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chand, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chane, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
      {    0, InChan0, 0, 0, "NoName",  0,127,    0,  Chanf, 127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
   },
   MNUMBER_JV1080_SPLITS
 };


t_instrument JeRevole_xxyyList[] = 
{
   {  1, (t_splits_jv1080 *)&JeRevole_SoundMix, (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
   {  1, (t_splits_jv1080 *)&JeRevole_Strings,  (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
   {  1, (t_splits_jv1080 *)&JeRevole_C6      , (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
   {  1, (t_splits_jv1080 *)&JeRevole_C7      , (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
   {  0, (t_splits_jv1080 *)NULL              , (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
   {  1, (t_splits_jv1080 *)&JeRevole_Analog,   (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
};

t_song_xxyy JeRevole_xxyySong = { 
   "JeRevole",
   "JV",
   (t_instrument*)&JeRevole_xxyyList,
   { 16 }, { 0xffffffffUL }, { 0xffffffffUL }, 
};


/* -------- JeRevole ---------------------------------------------------- */

PERF_STR Perf_JeRevole = {
/* Performance Common */
0x01000000l, 0x00000040l,
/*   NAME   */
"JeRevole    ",
   0,  /* 12: EFXSource */
  19,  /* 13: EFXType */
/* EFXParameter */
115, 90, 60, 10,127,127,127,127, 89, 17, 50,127,
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
      1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,
/*MidiCh----*/
      0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15,
/*PatchGrp--*/
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
/*PatchGrpID*/
      3,  6,  5,  5,  3,  3,  3,  3,  3,  6,  3,  3,  3,  3,  3,  3,
/*PatchNum0-*/
      0,  7,  6,  6,  0,  0,  0,  0,  1,  0,  1,  1,  1,  1,  1,  1,
/*PatchNum1-*/
      0, 11,  3, 10,  9, 11, 13, 15,  1,  1,  3,  5,  7,  9, 11, 13,
/*PartLevel-*/
    100,100,100,127,110,100,105,120,100,127, 96,120,105,100, 95,120,
/*PartPan---*/
     64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
/*PitchCoar-*/
     48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
/*PitchFine-*/
     50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,
/*OutAss----*/
      0,  0,  0,  1,  0,  0,  0,  0,  0,  4,  0,  0,  0,  1,  0,  0,
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




struct t_song JeRevole;
struct t_splits JeRevole0;
struct t_splits JeRevole1;
struct t_splits JeRevole2;
struct t_splits JeRevole3;
struct t_splits *JeRevoleList[] = 
{
	&JeRevole0, &JeRevole1, &JeRevole2, &JeRevole3, NULL};

  
struct t_song JeRevole={ "JeRevole",
	0, 81,1,21,&JeRevoleList[0],
	&Perf_JeRevole,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0,0,		Chan0,	/* Piano */
    1, 81,3,123,	Chan1,	/* Zwitscher Zwitscher */
    1, 81,2, 99,   	Chan2,  /* Vanishing */
    1, 81,2,106,   	Chan3,  /* Sands of Time */
    1, 81,1,4,      Chan4,  /* Grung */
    0, 81,0,0,   Chan5,
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


struct t_splits JeRevole0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   A0,H4,    0,  Chan0, 127, 0,VolCtr2,InChan0,
    1,   C7,H7,  -36,  Chan1, 127, 0,VolCtr2,InChan0,
    1,   C6,H6,  -12,  Chan2, 127, 0,VolCtr2,InChan0,
    1,   C5,H5,  -12,  Chan3, 127, 0,VolCtr2,InChan0,
    0,   0,127,    0,  Chan4, 127, 0,VolCtr2,InChan0,
    0,   0,127,    0,  Chan5, 127, 0,VolCtr2,InChan0,
    0,   0,127,    0,  Chan6, 127, 0,VolCtr2,InChan0,
    0,   0,127,    0,  Chan7, 127, 0,VolCtr2,InChan0,
    0,   0,127,    0,  Chan8, 127, 0,VolCtr2,InChan0,
    0,   0,127,    0,  Chan9, 127, 0,VolCtr2,InChan0,
    0,   0,127,    0,  Chana, 127, 0,VolCtr2,InChan0,
    0,   0,127,    0,  Chanb, 127, 0,VolCtr2,InChan0,
    0,   0,127,    0,  Chanc, 127, 0,VolCtr2,InChan0,
    0,   0,127,    0,  Chand, 127, 0,VolCtr2,InChan0,
    0,   0,127,    0,  Chane, 127, 0,VolCtr2,InChan0,
    0,   0,127,    0,  Chanf, 127, 0,VolCtr2,InChan0,
	"CS"
    };

struct t_splits JeRevole1={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    0,   0,127,  0,  Chan0, 127, 0,VolCtr2,InChan0,
    0,   C6,C8,  -36,  Chan1, 127, 0,VolCtr2,InChan0,
    1,   A0,C8,  0,  Chan4, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan3, 127, 0,VolCtr2,InChan0,
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

struct t_splits JeRevole2={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   A0,H5,  0,  Chan0, 127, 0,VolCtr2,InChan0,
    1,   C6,C8,  -36,  Chan1, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan2, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan3, 127, 0,VolCtr2,InChan0,
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

struct t_splits JeRevole3={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    0,   0,127,  0,  Chan0, 127, 0,VolCtr2,InChan0,
    0,   C6,C8,  -36,  Chan1, 127, 0,VolCtr2,InChan0,
    1,   A0,C8,  0,  Chan2, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan3, 127, 0,VolCtr2,InChan0,
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


/* ENDE JeRevole */
