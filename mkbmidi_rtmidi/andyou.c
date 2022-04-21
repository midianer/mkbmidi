#include "config.h"
#if USE_INBETWEEN == D_TRUE

#include <stdio.h>

#include "typedefs.h"
#include "midi.h"

/* -------- AndYouKnow ---------------------------------------------------- */


PERF_STR Perf_AndYou = 
{
   /* Performance Common */
   0x01000000l, 0x00000040l,
   /*   NAME   */
   "AndYouKnow  ",
   {
      0,  /* 12: EFXSource */
      3,  /* 13: EFXType */
   /* EFXParameter */
    55,  5,107, 79,127, 97,127,  0,  0,  0,  0,  0,
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
     4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4
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
      {      1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0},
       /*MidiCh----*/
      {      0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15},
       /*PatchGrp--*/
      {      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
       /*PatchGrpID*/
      {      5,  3,  3,  3,  3,  3,  3,  3,  3,  6,  3,  3,  3,  3,  3,  3},
       /*PatchNum0-*/
      {      3,  0,  0,  0,  0,  0,  0,  0,  1,  0,  1,  1,  0,  0,  1,  1},
       /*PatchNum1-*/
      {     12,  1,  3,  7,  9, 11, 13, 15,  1,  1,  3,  5,  5,  4, 11, 13},
       /*PartLevel-*/
      {    100,100,100,127,110,100,105,120,100,127, 96,120,105,100, 95,120},
       /*PartPan---*/
      {     64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64},
       /*PitchCoar-*/
      {     48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48},
       /*PitchFine-*/
      {     50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50},
       /*OutAss----*/
      {      0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  1,  0,  0},
       /*OutLev----*/
      {    127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127},
       /*ChSndLev--*/
      {      0,  0,  0,  0,  0,  0, 80, 50, 50,  0,  0, 50,  0,  0,  0, 50},
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


struct t_splits AndYouKnow0=
{
   NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
   {
      { 1,  0, 127,   0,  EnChan0,  127, SustModeSust,VolCtr2,InChan0} , /* JV1080 Bank C */
      { 1,  0, 127, -12,  EnChan1,  127, SustModeSust,VolCtr2,InChan0} , /* JV1080 Bank C */
      { 0, 56, 127,   0,  EnChan12, 127, SustModeSust,VolCtr1,InChan0} ,    /*  El. Piano */
      { 0, 56, 127,   0,  EnChan13, 127, SustModeSust,VolCtr1,InChan0} ,    /*  El. Piano */
      { 0, 56, 127, -24,  EnChan2,  127, SustModeSust,VolCtr1,InChan0} ,    /*  El. Piano */
      { 0, 56, 127, -24,  EnChan3,  127, SustModeSust,VolCtr1,InChan0} ,    /*  El. Piano */
      { 0,  0, 127,   0,  EnChan4,  127, SustModeNop ,VolCtr2,InChan0} ,
      { 0,  0, 127,   0,  EnChan5,  127, SustModeNop ,VolCtr2,InChan0} ,
      { 0,  0, 127,   0,  EnChan6,  127, SustModeNop ,VolCtr2,InChan0} ,
      { 0,  0, 127,   0,  EnChan7,  127, SustModeNop ,VolCtr2,InChan0} ,
      { 0,  0, 127,   0,  EnChan8,  127, SustModeNop ,VolCtr2,InChan0} ,
      { 0,  0, 127,   0,  EnChan9,  127, SustModeNop ,VolCtr2,InChan0} ,
      { 0,  0, 127,   0,  EnChan10, 127, SustModeNop ,VolCtr2,InChan0} ,
      { 0,  0, 127,   0,  EnChan11, 127, SustModeNop ,VolCtr2,InChan0} ,
      { 0,  0, 127,   0,  EnChan12, 127, SustModeNop ,VolCtr2,InChan0} ,
      { 0,  0, 127,   0,  EnChan13, 127, SustModeNop ,VolCtr2,InChan0} 
   },
	"CS  "
};


struct t_splits *AndYouKnowList[] = 
{
	&AndYouKnow0, NULL};


struct t_song AndYouKnow=
{ "AndYouKnow",
	PatchPanel, 81,1,21,&AndYouKnowList[0],
	&Perf_AndYou,
   {
      {	NULL,0l},
      {  NULL,0l},
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
      {  1, 81,0,50,  Chan0 },  	  /* JV1080 Bank A */
      {  1, 81,0,49,  Chan1 },  	  /* JV1080 Bank C */
      {  0, 81,3,5,   Chan2 },  
      {  0, 81,3,4,   Chan3 },  
      {  0, 81,0,0,   Chan4 },  
      {  0, 81,0,0,   Chan5 },  
      {  0, 81,0,0,   Chan6 },  
      {  0, 81,0,0,   Chan7 },  
      {  0, 81,0,0,   Chan8 },  
      {  0, 81,0,0,   Chan9 },  
      {  0, 81,0,0,   Chan10}, 
      {  0, 81,0,0,   Chan11}, 
      {  0,  0,0,5,   Chan12}, 	/*  El. Piano */
      {  0,  0,0,4,   Chan13}, 	/*  El. Piano */
      {  0, 81,0,0,   Chan14}, 
      {  0, 81,0,0,   Chan15} 
   },
};


/* ENDE AndYouKnow */


#endif