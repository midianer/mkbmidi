#include "config.h"
#if USE_INBETWEEN == D_TRUE

#include <stdio.h>

#include "typedefs.h"
#include "midi.h"
/*#include "perf.h"*/
/*#include "patch.h"*/


#define	JV1080_BANK_A 81,0

/* -------- BrothersInArms ---------------------------------------------- */
struct t_song BrothersInArms;
struct t_splits BrothersInArms0;
struct t_splits BrothersInArms1;
struct t_splits BrothersInArms2;
struct t_splits *BrothersInArmsList[] =
{
	&BrothersInArms0, &BrothersInArms1,	&BrothersInArms2,
	&BrothersInArms1, &BrothersInArms2, NULL };

struct t_song BrothersInArms={ "Brothers in arms NEU",
	0, 81,1,21,&BrothersInArmsList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0, 65,  Chan0,	/* Saw Mass */
    1, 81,3, 20,  Chan1,	/* Harmonica */
    1, 81,2,109,  Chan2,	/* Chrash Pad */
    1, 81,2, 50,  Chan3,	/* 38 Bright Str */
    1, 80,0,  0,  Chan4,	/* Overtones */
    1, 81,0, 50,  Chan5,	/* D50 Organ */
    1, 81,0, 50,  Chan6,	/* Big Spin */
    1, 81,0, 50,  Chan7,	/* Wh.Solo */
    0, 80,0,  1,  Chan8,	
    0, 80,0,  1,  Chan9,	
    0, 80,0,  1,  Chan10,
    0, 80,0,  1,  Chan11,
    1,  2,0,122,  Chan12, 	/* SC55-Thunder */
    1,  2,0,102,  Chan13,	/* Overtones */
    1,  0,0, 23,  Chan14,	/* Harmonica */
    0,  1,0,122,  Chan15,	/* SC55-Rain */
	};


struct t_splits BrothersInArms0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1, A0,F1,   -1,  Chan0,  127, SustModeNop,VolCtr2,InChan0,
    1, A0,F1,   11,  Chan0,  127, SustModeNop,VolCtr2,InChan0,
    1, G1,D2,   -13,  Chan2,  127, SustModeNop,VolCtr2,InChan0,
    1, A2,H4,  -25,  Chan7,   90, SustModeNop,VolCtr2,InChan0,
    1, C5,C8,  -25,  Chan1,   40, SustModeNop,VolCtr2,InChan0,
    1, C5,C8,  -25,  Chan3,  127, SustModeNop,VolCtr2,InChan0,
    1, D6,D6,  -25,  Chan4,  127, SustModeNop,VolCtr2,InChan0,
    0, 0,127,  0,  Chan6, 127, SustModeNop,VolCtr2,InChan0,
    0, 0,127,  0,  Chan8, 127, SustModeNop,VolCtr2,InChan0,
    0, 0,127,  0,  Chan9, 127, SustModeNop,VolCtr2,InChan0,
    0, 0,127,  0,  Chan10, 127, SustModeNop,VolCtr2,InChan0,
    0, 0,127,  0,  Chan11, 127, SustModeNop,VolCtr2,InChan0,
    0, 0, 127,  -1,  Chan13, 110, SustModeNop,VolCtr2,InChan0,
    0, C5, C8, -13,  Chan14, 70, SustModeNop,VolCtr2,InChan0,
    0, 0,127,  0,  Chan15, 127, SustModeNop,VolCtr2,InChan0,
    0, 0,127,  0,  Chan15, 127, SustModeNop,VolCtr2,InChan0,
	"CS"
    };

struct t_splits BrothersInArms1={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1, A0, H2,  11, Chan6, 110, 0,VolCtr2,InChan0, /* D50 Organ */
    1, C3, H4, -1, Chan3,   80, 0,VolCtr2,InChan0, /* Bright Str*/
    1, C3, H4, -1, Chan6,  100, 0,VolCtr2,InChan0, /* D50 */
    1, C5, C8, -25, Chan1, 127, 0,VolCtr1,InChan0, /* Harmonica */
    0, A0,F1,  -1,  Chan0, 127, 0,VolCtr2,InChan0,
    0, A0,F1,  11,  Chan1, 127, 0,VolCtr2,InChan0,
    0, C5,C8,  -25,  Chan2, 40, 0,VolCtr2,InChan0,
    0, C5,C8,  -25,  Chan4, 127, 0,VolCtr2,InChan0,
    0, D6,D6,  -25,  Chan7, 127, 0,VolCtr2,InChan0,
    0, 0,127,  0,  Chan8, 127, 0,VolCtr2,InChan0,
    0, 0,127,  0,  Chan9, 127, 0,VolCtr2,InChan0,
    0, 0,127,  0,  Chan10, 127, 0,VolCtr2,InChan0,
    0, 0,127,  0,  Chan11, 127, 0,VolCtr2,InChan0,
    0, G1, D2,  -1,  Chan12, 110, 0,VolCtr2,InChan0,
    0, G1, D2,  47,  Chan13, 110, 0,VolCtr2,InChan0,
    0, 0,127,  0,  Chan15, 127, 0,VolCtr2,InChan0,
	"CS"
    };

struct t_splits BrothersInArms2={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1, C3, H4,  -1, Chan6,   80, 0,VolCtr2,InChan0, /* Big Spin */
    1, A0, H2,  23, Chan3,  127, 0,VolCtr2,InChan0, /* Strings */
    1, C3, H4,  -13, Chan6,   80, 0,VolCtr2,InChan0, /* D50 */
    1, C5, C8, -1, Chan6,  127, 0,VolCtr2,InChan0,  /* Big Spin */
    1, C5, C8, -13, Chan6,  127, 0,VolCtr2,InChan0, /* Big Spin */
    0, A0,F1,  11,  Chan1, 127, 0,VolCtr2,InChan0,
    0, C5,C8,  -25,  Chan2, 40, 0,VolCtr2,InChan0,
    0, C5,C8,  -25,  Chan4, 127, 0,VolCtr2,InChan0,
    0, D6,D6,  -25,  Chan7, 127, 0,VolCtr2,InChan0,
    0, 0,127,  0,  Chan8, 127, 0,VolCtr2,InChan0,
    0, 0,127,  0,  Chan9, 127, 0,VolCtr2,InChan0,
    0, 0,127,  0,  Chan10, 127, 0,VolCtr2,InChan0,
    0, 0,127,  0,  Chan11, 127, 0,VolCtr2,InChan0,
    0, G1, D2,  -1,  Chan12, 110, 0,VolCtr2,InChan0,
    0, G1, D2,  47,  Chan13, 110, 0,VolCtr2,InChan0,
    0, 0,127,  0,  Chan15, 127, 0,VolCtr2,InChan0,
	"CS"
    };

#ifdef MITSC55

struct t_song BrothersInArms={ "Brothers in arms",
	0, 81,1,21,&BrothersInArmsList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0, 65,  Chan0,	/* Saw Mass */
    1, 81,2, 87,  Chan1,	/* Chime Pad */
    1, 81,0, 54,  Chan2,	/* Tone Wh. Solo */
    1, 81,2, 38,  Chan3,	/* Bright Str */
    1, 80,0,  0,  Chan4,	/* Overtones */
    1, 81,0, 50,  Chan5,	/* D50 Organ */
    1, 81,0, 50,  Chan6,	/* Big Spin */
    1, 81,0, 50,  Chan7,	/* Wh.Solo */
    0, 80,0,  1,  Chan8,	
    0, 80,0,  1,  Chan9,	
    0, 80,0,  1,  Chan10,
    0, 80,0,  1,  Chan11,
    1,  2,0,122,  Chan12, 	/* SC55-Thunder */
    1,  2,0,102,  Chan13,	/* Overtones */
    1,  0,0, 23,  Chan14,	/* Harmonica */
    0,  1,0,122,  Chan15,	/* SC55-Rain */
	};


struct t_splits BrothersInArms0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1, A0,F1,   -1,  Chan0,  127, SustModeNop,VolCtr2,InChan0,
    1, A0,F1,   11,  Chan0,  127, SustModeNop,VolCtr2,InChan0,
    1, G1,D2,   -1,  Chan12, 110, SustModeNop,VolCtr2,InChan0,
    1, A2,H4,  -25,  Chan7,   90, SustModeNop,VolCtr2,InChan0,
    1, C5,C8,  -25,  Chan1,   40, SustModeNop,VolCtr2,InChan0,
    1, C5,C8,  -25,  Chan3,  127, SustModeNop,VolCtr2,InChan0,
    1, D6,D6,  -25,  Chan4,  127, SustModeNop,VolCtr2,InChan0,
    0, 0,127,  0,  Chan6, 127, SustModeNop,VolCtr2,InChan0,
    0, 0,127,  0,  Chan8, 127, SustModeNop,VolCtr2,InChan0,
    0, 0,127,  0,  Chan9, 127, SustModeNop,VolCtr2,InChan0,
    0, 0,127,  0,  Chan10, 127, SustModeNop,VolCtr2,InChan0,
    0, 0,127,  0,  Chan11, 127, SustModeNop,VolCtr2,InChan0,
    0, 0, 127,  -1,  Chan13, 110, SustModeNop,VolCtr2,InChan0,
    0, C5, C8, -13,  Chan14, 70, SustModeNop,VolCtr2,InChan0,
    0, 0,127,  0,  Chan15, 127, SustModeNop,VolCtr2,InChan0,
    0, 0,127,  0,  Chan15, 127, SustModeNop,VolCtr2,InChan0,
	"CS"
    };

struct t_splits BrothersInArms1={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1, A0, H2,  11, Chan6,  110, 0,VolCtr2,InChan0, /* D50 Organ */
    1, C3, H4, -1, Chan3,  120, 0,VolCtr2,InChan0, /* Bright Str*/
    1, C3, H4, -1, Chan6,   127, 0,VolCtr2,InChan0, /* D50 */
    1, C5, C8, -25, Chan14, 120, 0,VolCtr2,InChan0, /* Harmonica */
    0, A0,F1,  -1,  Chan0, 127, 0,VolCtr2,InChan0,
    0, A0,F1,  11,  Chan1, 127, 0,VolCtr2,InChan0,
    0, C5,C8,  -25,  Chan2, 40, 0,VolCtr2,InChan0,
    0, C5,C8,  -25,  Chan4, 127, 0,VolCtr2,InChan0,
    0, D6,D6,  -25,  Chan7, 127, 0,VolCtr2,InChan0,
    0, 0,127,  0,  Chan8, 127, 0,VolCtr2,InChan0,
    0, 0,127,  0,  Chan9, 127, 0,VolCtr2,InChan0,
    0, 0,127,  0,  Chan10, 127, 0,VolCtr2,InChan0,
    0, 0,127,  0,  Chan11, 127, 0,VolCtr2,InChan0,
    0, G1, D2,  -1,  Chan12, 110, 0,VolCtr2,InChan0,
    0, G1, D2,  47,  Chan13, 110, 0,VolCtr2,InChan0,
    0, 0,127,  0,  Chan15, 127, 0,VolCtr2,InChan0,
	"CS"
    };

struct t_splits BrothersInArms2={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1, C3, H4,  -1, Chan6,   80, 0,VolCtr2,InChan0, /* D50 Organ */
    1, A0, H2,  11, Chan3,  127, 0,VolCtr2,InChan0, /* Bright Str*/
    1, C3, H4,  -13, Chan6,   80, 0,VolCtr2,InChan0, /* D50 */
    1, C5, C8, -1, Chan6,  127, 0,VolCtr2,InChan0,  /* Big Spin */
    1, C5, C8, -13, Chan6,  127, 0,VolCtr2,InChan0, /* Big Spin */
    0, A0,F1,  11,  Chan1, 127, 0,VolCtr2,InChan0,
    0, C5,C8,  -25,  Chan2, 40, 0,VolCtr2,InChan0,
    0, C5,C8,  -25,  Chan4, 127, 0,VolCtr2,InChan0,
    0, D6,D6,  -25,  Chan7, 127, 0,VolCtr2,InChan0,
    0, 0,127,  0,  Chan8, 127, 0,VolCtr2,InChan0,
    0, 0,127,  0,  Chan9, 127, 0,VolCtr2,InChan0,
    0, 0,127,  0,  Chan10, 127, 0,VolCtr2,InChan0,
    0, 0,127,  0,  Chan11, 127, 0,VolCtr2,InChan0,
    0, G1, D2,  -1,  Chan12, 110, 0,VolCtr2,InChan0,
    0, G1, D2,  47,  Chan13, 110, 0,VolCtr2,InChan0,
    0, 0,127,  0,  Chan15, 127, 0,VolCtr2,InChan0,
	"CS"
    };

#endif


#endif
