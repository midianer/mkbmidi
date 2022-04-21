#include <stdio.h>

#include "typedefs.h"
#include "midi.h"
#include "perf.h"
#include "patch.h"

#define	JV1080_BANK_A 81,0
/* -------- LaMain ---------------------------------------------------- */

struct t_song LaMain;
struct t_splits LaMain0;
struct t_splits LaMain1;
struct t_splits LaMain1A;
struct t_splits LaMain2;
/*PERFCOMMON_STR Perf_LaMain1;*/
PERFCOMMON_STR Perf_LaMain1;
PERFCOMMON_STR Loc_Perf_LaMain0;
PERFCOMMON_STR Loc_Perf_LaMain1;
struct t_splits *LaMainList[] = 
{
	&LaMain1, &LaMain1A, &LaMain0, &LaMain2, NULL};

struct t_song LaMainxx={ "LaMain",
	0, 81,1,21,&LaMainList[0],
	&Perf_LaMain,
	NULL,0l,NULL,0l,
	&Patch_LaMainPhazweep, 0x2020000l,	/* Solo Ende */
	NULL,0l,
	&Patch_LaMain1,0x2040000l,     /* Archimedes mod. */
	&Patch_LaMain2,0x2050000l,     /* Stepped PAD mod.  */
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,2,11,   Chan0,	/* Archimedes */
    1, 81,1,92,   Chan1,	/* Analog Lead */
    1, 81,2,101,  Chan2,	/* Phazweep		*/
    1, 81,2,95,   Chan3,	/* Stepped Pad */
    1, 81,2,11,   Chan4,	/* Archimedes mod. */
    1, 81,2,95,   Chan5,	/* Stepped Pad  mod. */
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


struct t_splits LaMain1={
	&Loc_Perf_LaMain0, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
	{
  {  0,   F2,F4,  12,  Chan0, 120, 0,VolCtr2,InChan0     } ,
  {  0,   C1,E2,  0,  Chan4, 100, 0,VolCtr2,InChan0      } ,
  {  0,   G4,C8,  -12,  Chan1, 127, 0,VolCtr2,InChan0    } ,
  {  1,   C5,C8,  -48,  Chan5, 127, 0,VolCtr2,InChan0    } ,
  {  0,   0,127,  0,  Chan4, 127, 0,VolCtr2,InChan0      } ,
  {  0,   0,127,  0,  Chan5, 127, 0,VolCtr2,InChan0      } ,
  {  0,   0,127,  0,  Chan6, 127, 0,VolCtr2,InChan0      } ,
  {  0,   0,127,  0,  Chan7, 127, 0,VolCtr2,InChan0      } ,
  {  0,   0,127,  0,  Chan8, 127, 0,VolCtr2,InChan0      } ,
  {  0,   0,127,  0,  Chan9, 127, 0,VolCtr2,InChan0      } ,
  {  0,   0,127,  0,  Chana, 127, 0,VolCtr2,InChan0      } ,
  {  0,   0,127,  0,  Chanb, 127, 0,VolCtr2,InChan0      } ,
  {  0,   0,127,  0,  Chanc, 127, 0,VolCtr2,InChan0      } ,
  {  0,   0,127,  0,  Chand, 127, 0,VolCtr2,InChan0      } ,
  {  0,   0,127,  0,  Chane, 127, 0,VolCtr2,InChan0      } ,
  {  0,   0,127,  0,  Chanf, 127, 0,VolCtr2,InChan0      } ,
   },
	"CS"
    };


struct t_splits LaMain1A={
	&Loc_Perf_LaMain1, SPLITVAL, NO_ALLNOTES_OFF, SMALL_PERFCOMMON,
  {
  {  1,   F2,F4,  12,    Chan0, 120, 0,VolCtr2,InChan0  } ,
  {  1,   C1,E2,  0,     Chan4, 100, 0,VolCtr2,InChan0  } ,
  {  1,   C1,E2,  12,    Chan4, 100, 0,VolCtr2,InChan0  } ,
  {  0,   G4,C8,  -12,   Chan1, 127, 0,VolCtr2,InChan0  } ,
  {  1,   C5,C8,  -48,   Chan5, 127, 0,VolCtr2,InChan0  } ,
  {  0,   0,127,  0,     Chan5, 127, 0,VolCtr2,InChan0  } ,
  {  0,   0,127,  0,     Chan6, 127, 0,VolCtr2,InChan0  } ,
  {  0,   0,127,  0,     Chan7, 127, 0,VolCtr2,InChan0  } ,
  {  0,   0,127,  0,     Chan8, 127, 0,VolCtr2,InChan0  } ,
  {  0,   0,127,  0,     Chan9, 127, 0,VolCtr2,InChan0  } ,
  {  0,   0,127,  0,     Chana, 127, 0,VolCtr2,InChan0  } ,
  {  0,   0,127,  0,     Chanb, 127, 0,VolCtr2,InChan0  } ,
  {  0,   0,127,  0,     Chanc, 127, 0,VolCtr2,InChan0  } ,
  {  0,   0,127,  0,     Chand, 127, 0,VolCtr2,InChan0  } ,
  {  0,   0,127,  0,     Chane, 127, 0,VolCtr2,InChan0  } ,
  {  0,   0,127,  0,     Chanf, 127, 0,VolCtr2,InChan0  } ,
   },
	"CS"
    };


struct t_splits LaMain0={
	&Perf_LaMain1, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
  {
  {  1,   C1,F4,  12 ,  Chan0, 120, SustModeSust, VolCtr2, InChan0 } ,
  {  1,   C1,A1,  0  ,  Chan0, 100, SustModeSust, VolCtr2, InChan0 } ,
  {  1,   G4,C8,  -12,  Chan1, 127, 0,            VolCtr2, InChan0 } ,
  {  0,   H0,C1,  0,    Chan3, 127, 0,            VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chan4, 127, 0,            VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chan5, 127, 0,            VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chan6, 127, 0,            VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chan7, 127, 0,            VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chan8, 127, 0,            VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chan9, 127, 0,            VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chana, 127, 0,            VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chanb, 127, 0,            VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chanc, 127, 0,            VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chand, 127, 0,            VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chane, 127, 0,            VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chanf, 127, 0,            VolCtr2, InChan0 } ,
   },
	"CS"
    };


struct t_splits LaMain2={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
  {
  {  1,   C1,F4,   12,  Chan0, 85,  SustModeSust, VolCtr2, InChan0  } ,
  {  1,   C1,A1,    0,  Chan0, 95,  SustModeSust, VolCtr2, InChan0  } ,
  {  1,   G4,C8,  -24,  Chan2, 127, SustModeNop,  VolCtr1, InChan0  } ,
  {  1,   G4,C8,  -12,  Chan2, 115, SustModeNop,  VolCtr1, InChan0  } ,
  {  0,   0,127,  0,    Chan4, 127, 0,            VolCtr2, InChan0  } ,
  {  0,   0,127,  0,    Chan5, 127, 0,            VolCtr2, InChan0  } ,
  {  0,   0,127,  0,    Chan6, 127, 0,            VolCtr2, InChan0  } ,
  {  0,   0,127,  0,    Chan7, 127, 0,            VolCtr2, InChan0  } ,
  {  0,   0,127,  0,    Chan8, 127, 0,            VolCtr2, InChan0  } ,
  {  0,   0,127,  0,    Chan9, 127, 0,            VolCtr2, InChan0  } ,
  {  0,   0,127,  0,    Chana, 127, 0,            VolCtr2, InChan0  } ,
  {  0,   0,127,  0,    Chanb, 127, 0,            VolCtr2, InChan0  } ,
  {  0,   0,127,  0,    Chanc, 127, 0,            VolCtr2, InChan0  } ,
  {  0,   0,127,  0,    Chand, 127, 0,            VolCtr2, InChan0  } ,
  {  0,   0,127,  0,    Chane, 127, 0,            VolCtr2, InChan0  } ,
  {  0,   0,127,  0,    Chanf, 127, 0,            VolCtr2, InChan0  } ,
   },
	"CS"
    };


struct t_splits LaMain3={
	&Perf_LaMain1, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
  {
  {  1,   C1,F4,  12,   Chan0, 100, 0, VolCtr2, InChan0 } ,
  {  1,   C1,A1,  0,    Chan0, 110, 0, VolCtr2, InChan0 } ,
  {  1,   G4,C8,  -12,  Chan1, 127, 0, VolCtr2, InChan0 } ,
  {  0,   H0,C1,  12,   Chan3, 127, 0, VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chan4, 127, 0, VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chan5, 127, 0, VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chan6, 127, 0, VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chan7, 127, 0, VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chan8, 127, 0, VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chan9, 127, 0, VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chana, 127, 0, VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chanb, 127, 0, VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chanc, 127, 0, VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chand, 127, 0, VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chane, 127, 0, VolCtr2, InChan0 } ,
  {  0,   0,127,  0,    Chanf, 127, 0, VolCtr2, InChan0 } ,
   },
	"CS"
    };


PERFCOMMON_STR Perf_LaMain1 = {
/* Performance Common */
0x01000000l, 0x00000040l,
/*   NAME   */
"La Main     ",
   0,  /* 12: EFXSource */
   5,  /* 13: EFXType */
/* EFXParameter */
127, 64, 15, 30,127,  0,  0,  0,  0,  0,  0,  0,
   0,  /* 26: EFXOutAss */
 127,  /* 27: EFXOutLev */
 113,  /* 28: EFXChSendLev */
  53,  /* 29: EFXRevSendLev */
   3,  /* 30: EFXCtrlS1 */
  66,  /* 31: EFXCtrlD1 */
   3,  /* 32: EFXCtrlS2 */
  93,  /* 33: EFXCtrlD2 */
 127,  /* 34: ChorLev */
   4,  /* 35: ChorRate */
 104,  /* 36: ChorDepth */
   0,  /* 37: ChorPreDel */
   0,  /* 38: ChorFdback */
   0,  /* 39: ChorOutAss */
   2,  /* 40: RevType */
 127,  /* 41: RevLevel */
 100,  /* 42: RevTime */
  17,  /* 43: RevHFDamp */
   0,  /* 44: RevFdback */
   6,  /* 45: DefTempo1 */
   4,  /* 46: DefTempo2 */
   1,  /* 47: KeyRngSw */
 8, 8,  8,  8,  8,  4,  4,  4,  0,  0,  0,  0,  0,  0,  0,  0,
};


PERFCOMMON_STR Loc_Perf_LaMain0 = {
/* Performance Common */
0x01000000l, 0x00000040l,
/*   NAME   */
"Le Main 0   ",
   0,  /* 12: EFXSource */
  15,  /* 12: EFXType------ */
/* EFXParameter */
  5,  9,100, 81,119, 90, 15, 23, 50,127,  0,  0,

/*25-EFXOutAss----*/      0,    /*26-EFXOutLev----*/    127,    
/*27-EFXChSendLev-*/    127,    /*28-EFXRevSendLev*/    126,    
/*29-EFXCtrlS1----*/      0,    /*30-EFXCtrlD1----*/     63,    
/*31-EFXCtrlS2----*/      1,    /*32-EFXCtrlD2----*/     71,    
/*33-ChorLev------*/     94,    /*34-ChorRate-----*/      1,    
/*35-ChorDepth----*/     60,    /*36-ChorPreDel---*/      7,    
/*37-ChorFdback---*/    104,    /*38-ChorOutAss---*/      0,    
/*39-RevType------*/      2,    /*40-RevLevel-----*/    127,    
/*41-RevTime------*/    100,    /*42-RevHFDamp----*/     17,    
/*43-RevFdback----*/      0,    /*44-DefTempo1----*/      9,    
/*45-DefTempo2----*/      7,
   1,  /* 47: KeyRngSw */
 8, 8, 8, 8, 8,  4,  4,  4,  0,  0,  0,  0,  0,  0,  0,  0
};


PERFCOMMON_STR Loc_Perf_LaMain1 = {
/* Performance Common */
0x01000000l, 0x00000040l,
/*   NAME   */
"Le Main 1   ",
   0,  /* 12: EFXSource */
  15,  /* 12: EFXType------ */
/* EFXParameter */
  5,  9,100, 81,119, 90, 15, 23, 50,127,  0,  0,

/*25-EFXOutAss----*/      0,    /*26-EFXOutLev----*/    127,    
/*27-EFXChSendLev-*/    127,    /*28-EFXRevSendLev*/    126,    
/*29-EFXCtrlS1----*/      0,    /*30-EFXCtrlD1----*/     63,    
/*31-EFXCtrlS2----*/      1,    /*32-EFXCtrlD2----*/     71,    
/*33-ChorLev------*/    127,    /*34-ChorRate-----*/      4,    
/*35-ChorDepth----*/    104,    /*36-ChorPreDel---*/      7,    
/*37-ChorFdback---*/      0,    /*38-ChorOutAss---*/      0,    
/*39-RevType------*/      2,    /*40-RevLevel-----*/    127,    
/*41-RevTime------*/    100,    /*42-RevHFDamp----*/     17,    
/*43-RevFdback----*/      0,    /*44-DefTempo1----*/      9,    
/*45-DefTempo2----*/      7,
   1,  /* 47: KeyRngSw */
 8, 8, 8, 8, 8,  4,  4,  4,  0,  0,  0,  0,  0,  0,  0,  0
};

/* ENDE LaMain */


t_splits_jv1080 LaMain0_xxyy={
   "LaMain0_xxyy", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {  
      { 1, InChan0, 0, 0, "NoName",   C1,F4,  12 ,  Chan0, 120, SustModeSust, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 1, InChan0, 0, 0, "NoName",   C1,A1,  0  ,  Chan0, 100, SustModeSust, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 1, InChan0, 0, 0, "NoName",   G4,C8,  -12,  Chan1, 127, 0,            VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",   H0,C1,  0,    Chan3, 127, 0,            VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",   0,127,  0,    Chan4, 127, 0,            VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",   0,127,  0,    Chan5, 127, 0,            VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",   0,127,  0,    Chan6, 127, 0,            VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",   0,127,  0,    Chan7, 127, 0,            VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",   0,127,  0,    Chan8, 127, 0,            VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",   0,127,  0,    Chan9, 127, 0,            VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",   0,127,  0,    Chana, 127, 0,            VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",   0,127,  0,    Chanb, 127, 0,            VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",   0,127,  0,    Chanc, 127, 0,            VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",   0,127,  0,    Chand, 127, 0,            VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",   0,127,  0,    Chane, 127, 0,            VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",   0,127,  0,    Chanf, 127, 0,            VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
    },
    MNUMBER_JV1080_SPLITS
 };
                    
t_splits_jv1080 LaMain1_xxyy={
   "LaMain1_xxyy", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {  
      { 0, InChan0, 0, 0, "NoName",    F2,F4,  12,   Chan0, 120, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    C1,E2,  0,    Chan4, 100, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    G4,C8,  -12,  Chan1, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 1, InChan0, 0, 0, "NoName",    C5,C8,  -48,  Chan5, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,  0,    Chan4, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,  0,    Chan5, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,  0,    Chan6, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,  0,    Chan7, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,  0,    Chan8, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,  0,    Chan9, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,  0,    Chana, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,  0,    Chanb, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,  0,    Chanc, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,  0,    Chand, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,  0,    Chane, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,  0,    Chanf, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
   },
   MNUMBER_JV1080_SPLITS
};

t_splits_jv1080 LaMain1A_xxyy={
   "LaMain1A_xxyy", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    {  
      { 1, InChan0, 0, 0, "NoName",     F2,F4,  12,    Chan0, 120, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 1, InChan0, 0, 0, "NoName",     C1,E2,  0,     Chan4, 100, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 1, InChan0, 0, 0, "NoName",     C1,E2,  12,    Chan4, 100, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",     G4,C8,  -12,   Chan1, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 1, InChan0, 0, 0, "NoName",     C5,C8,  -48,   Chan5, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",     0,127,  0,     Chan5, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",     0,127,  0,     Chan6, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",     0,127,  0,     Chan7, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",     0,127,  0,     Chan8, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",     0,127,  0,     Chan9, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",     0,127,  0,     Chana, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",     0,127,  0,     Chanb, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",     0,127,  0,     Chanc, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",     0,127,  0,     Chand, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",     0,127,  0,     Chane, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",     0,127,  0,     Chanf, 127, 0, VolCtr2, ModulationOff,  InChan0 , MNUMBER_JV1080_SPLIT  } ,
   },
   MNUMBER_JV1080_SPLITS
};


t_splits_jv1080 LaMain2_xxyy={
   "LaMain2_xxyy", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    {  
      { 1, InChan0, 0, 0, "NoName",    C1,F4,   12,  Chan0, 85,  SustModeSust, VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 1, InChan0, 0, 0, "NoName",    C1,A1,    0,  Chan0, 95,  SustModeSust, VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 1, InChan0, 0, 0, "NoName",    G4,C8,  -24,  Chan2, 127, SustModeNop,  VolCtr1, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 1, InChan0, 0, 0, "NoName",    G4,C8,  -12,  Chan2, 115, SustModeNop,  VolCtr1, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,    0,  Chan4, 127, 0,            VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,    0,  Chan5, 127, 0,            VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,    0,  Chan6, 127, 0,            VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,    0,  Chan7, 127, 0,            VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,    0,  Chan8, 127, 0,            VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,    0,  Chan9, 127, 0,            VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,    0,  Chana, 127, 0,            VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,    0,  Chanb, 127, 0,            VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,    0,  Chanc, 127, 0,            VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,    0,  Chand, 127, 0,            VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,    0,  Chane, 127, 0,            VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",    0,127,    0,  Chanf, 127, 0,            VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
   },
   MNUMBER_JV1080_SPLITS
};


t_splits_jv1080 LaMain3_xxyy={
   "LaMain3_xxyy", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    {  
      { 1, InChan0, 0, 0, "NoName",  C1,F4,  12,   Chan0, 100, 0, VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 1, InChan0, 0, 0, "NoName",  C1,A1,  0,    Chan0, 110, 0, VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 1, InChan0, 0, 0, "NoName",  G4,C8,  -24,  Chan1, 127, 0, VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",  0,127,  0,    Chan3, 127, 0, VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",  0,127,  0,    Chan4, 127, 0, VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",  0,127,  0,    Chan5, 127, 0, VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",  0,127,  0,    Chan6, 127, 0, VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",  0,127,  0,    Chan7, 127, 0, VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",  0,127,  0,    Chan8, 127, 0, VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",  0,127,  0,    Chan9, 127, 0, VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",  0,127,  0,    Chana, 127, 0, VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",  0,127,  0,    Chanb, 127, 0, VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",  0,127,  0,    Chanc, 127, 0, VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",  0,127,  0,    Chand, 127, 0, VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",  0,127,  0,    Chane, 127, 0, VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
      { 0, InChan0, 0, 0, "NoName",  0,127,  0,    Chanf, 127, 0, VolCtr2, InChan0, MNUMBER_JV1080_SPLIT  } ,
   },
   MNUMBER_JV1080_SPLITS
};


t_instrument LaMain_xxyyList[] = 
{
   {  1, (t_splits_jv1080 *)&LaMain1_xxyy       , (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
   {  1, (t_splits_jv1080 *)&LaMain1A_xxyy      , (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
   {  1, (t_splits_jv1080 *)&LaMain0_xxyy       , (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
   {  1, (t_splits_jv1080 *)&LaMain2_xxyy       , (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
   {  1, (t_splits_jv1080 *)&LaMain3_xxyy       , (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
   {  0, (t_splits_jv1080 *)NULL                , (t_splits_jx8p *)NULL , (t_splits_z4 *)NULL },
};


t_song_xxyy LaMain_xxyySong = { 
   "LaMain",
   "JV",
   (t_instrument*)&LaMain_xxyyList,
   { 25 }, { 0xffffffffUL }, { 0xffffffffUL }, 
};
