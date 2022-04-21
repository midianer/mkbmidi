#include "config.h"

#include <stdio.h>

#include "typedefs.h"
#include "midi.h"
#include "perf.h"
#include "patch.h"
/* #include "songs.h"		Titelstruct SONG */ 

#define	JV1080_BANK_A 81,0

#if USE_WALLSTREET == D_TRUE

/* -------- Dream ------------------------------------------------------- */
struct t_song Dream;
struct t_splits Dream0;
struct t_splits Dream1;
struct t_splits *DreamList[] = 
{
	&Dream0, &Dream1, NULL};
	

struct t_song Dream={ "Dream",
	0, 81,1,21,&DreamList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,3, 48,   Chan0,
    1, 81,3,  4,   Chan1,
    0,  0,0,  0,   Chan2,
    0,  0,0,  0,   Chan3,
    0,  0,0,  0,   Chan4,
    0,  0,0,  0,   Chan5,
    0,  0,0,  0,   Chan6,
    0,  0,0,  0,   Chan7,
    0,  0,0,  0,   Chan8,
    0,  0,0,  0,   Chan9,
    0,  0,0,  0,   Chan10,
    0,  0,0,  0,   Chan11,
    1,  0,0, 48,   Chan12,	/*  Strings */
    1,  0,0,  4,   Chan13,	/*  El. Piano */
    0,  0,0,  0,   Chan14,
    0,  0,0,  0,   Chan15
	};

/* JV1080*/
struct t_splits Dream0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,  A0, H2, 24,  Chan0, 98, 0,VolCtr2,InChan0,  /*  Strings */
    1,  C3, C8,  0,  Chan1, 127, 1,VolCtr2,InChan0, /*  El. Piano */
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



/* SC55*/
struct t_splits Dream1={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,  A0, H2, 24,  Chanc, 98, 0,VolCtr2,InChan0,  /*  Strings */
    1,  C3, C8,  0,  Chand, 127, 1,VolCtr2,InChan0, /*  El. Piano */
    0,   0,127,  0,  Chan0, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan1, 127, 0,VolCtr2,InChan0,
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
    0,   0,127,  0,  Chane, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chanf, 127, 0,VolCtr2,InChan0,
	"CS"
    };


/* -------- The Rose ---------------------------------------------------- */
struct t_song Rose;
struct t_splits Rose0;
struct t_splits *RoseList[] = 
{
	&Rose0, NULL};
	

struct t_song Rose={ "The Rose",
	0, 81,1,21,&RoseList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,3,48,   Chan0,
    1, 81,3,0,   Chan1,
    0, 81,0,0,   Chan2,
    0, 81,0,0,   Chan3,
    0, 81,0,0,   Chan4,
    0, 81,0,0,   Chan5,
    0, 81,0,0,   Chan6,
    0, 81,0,0,   Chan7,
    0, 81,0,0,   Chan8,
    0, 81,0,0,   Chan9,
    0, 81,0,0,   Chan10,
    0, 81,0,0,   Chan11,
    1,  0,0,48,  Chan12,	/*  Strings */
    1,  0,0,0,   Chan13,	/*  Piano */
    0, 81,0,0,   Chan14,
    0, 81,0,0,   Chan15,
    };

struct t_splits Rose0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,  A0, H2, 24,  Chan0, 98, 0,VolCtr2,InChan0,  /*  Strings */
    1,  C3, C8, -12, Chan1, 127, 1,VolCtr2,InChan0,    /*  El. Piano */
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
    0,  A0, H2, 24,  Chanc, 98, 0,VolCtr2,InChan0,  /*  Strings */
    0,  C3, C8, -12,  Chand, 127, 1,VolCtr2,InChan0,    /*  El. Piano */
#ifdef SC55
    1,  A0, H2, 24,  Chanc, 98, 0,VolCtr2,InChan0,  	/*  Strings */
    1,  C3, C8, -12,  Chand, 127, 1,VolCtr2,InChan0,    /*  El. Piano */
#endif
    0,   0,127,  0,  Chane, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chanf, 127, 0,VolCtr2,InChan0,
	"CS"
    };


/* -------- YourSoVain ---------------------------------------------------- */
struct t_song YourSoVain;
struct t_splits YourSoVain0;
struct t_splits *YourSoVainList[] = 
{
	&YourSoVain0, NULL};


struct t_song YourSoVain={ "Your So Vain",
	0, 81,1,21,&YourSoVainList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0,0,   Chan0,		/* Piano64 */
    1, 81,2,50,  Chan1,		/* Strings */
    1, 81,2,45,  Chan2,		/* Film Layers */
    0, 81,0,0,   Chan3,
    0, 81,0,0,   Chan4,
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

struct t_splits YourSoVain0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,  A0, H4,    0,  Chan0, 127, 1,VolCtr2,InChan0,   /* Piano */
    1,  C5, H5,  -12,  Chan1, 127, 0,VolCtr2,InChan0,   /* Strings */
    1,  C6, C8,  -24,  Chan2, 127, 0,VolCtr2,InChan0,   /* Film Layers */
    1,  C6, C8,  -12,  Chan2, 127, 0,VolCtr2,InChan0,   /* Film Layers */
    0,   0,127,   0,   Chan4, 127, 0,VolCtr2,InChan0,
    0,   0,127,   0,   Chan5, 127, 0,VolCtr2,InChan0,
    0,   0,127,   0,   Chan6, 127, 0,VolCtr2,InChan0,
    0,   0,127,   0,   Chan7, 127, 0,VolCtr2,InChan0,
    0,   0,127,   0,   Chan8, 127, 0,VolCtr2,InChan0,
    0,   0,127,   0,   Chan9, 127, 0,VolCtr2,InChan0,
    0,   0,127,   0,   Chana, 127, 0,VolCtr2,InChan0,
    0,   0,127,   0,   Chanb, 127, 0,VolCtr2,InChan0,
    0,   0,127,   0,   Chanc, 127, 0,VolCtr2,InChan0,
    0,   0,127,   0,   Chand, 127, 0,VolCtr2,InChan0,
    0,   0,127,   0,   Chane, 127, 0,VolCtr2,InChan0,
    0,   0,127,   0,   Chanf, 127, 0,VolCtr2,InChan0,
	"CS"
    };



/* -------- StumblinIn ---------------------------------------------------- */
struct t_song StumblinIn;
struct t_splits StumblinIn0;
struct t_splits *StumblinInList[] = 
{
	&StumblinIn0, NULL};
	

struct t_song StumblinIn={ "Stumblin' In",
	0, 81,1,21,&StumblinInList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,3,48,  Chan0,		/* Strings */
    1, 81,3,4,   Chan1,
    1, 81,3,5,   Chan2,
    0, 81,0,0,   Chan3,
    0, 81,0,0,   Chan4,
    0, 81,0,0,   Chan5,
    0, 81,0,0,   Chan6,
    0, 81,0,0,   Chan7,
    0, 81,0,0,   Chan8,
    0, 81,0,0,   Chan9,
    0, 81,0,0,   Chan10,
    0, 81,0,0,   Chan11,
    0, 81,0,0,   Chan12,
    1,  0,0,4,   Chan13,	/*  El. Piano */
    0, 81,0,0,   Chan14,
    0, 81,0,0,   Chan15,
    };

struct t_splits StumblinIn0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,  A0, H2,  24,  Chan0, 127, 0,VolCtr2,InChan0,    /* Strings */
    0,  C3, C8,   0,  Chand, 127, 1,VolCtr2,InChan0,    /*  El. Piano */
    1,  C3, C8,   0,  Chan1, 127, 1,VolCtr2,InChan0,    /*  El. Piano */
    1,  C3, C8,   0,  Chan2, 127, 1,VolCtr2,InChan0,    /*  El. Piano */
    0,   0,127,  0,   Chan3, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chan4, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chan5, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chan6, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chan7, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chan8, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chan9, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chana, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chanb, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chanc, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chane, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chanf, 127, 0,VolCtr2,InChan0,
	"CS"
    };



/* -------- TheFeeling ---------------------------------------------------- */
struct t_song TheFeeling;
struct t_splits TheFeeling0;
struct t_splits TheFeeling1;
struct t_splits *TheFeelingList[] = 
{
	&TheFeeling0, &TheFeeling1, NULL};
	

struct t_song TheFeeling={ "Feeling",
	0, 81,1,21,&TheFeelingList[0],
	&Perf_TheFeeling,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,2,51,  Chan0,	/* JV1080 Bank C */
    1, 81,2,50,  Chan1,	/* JV1080 Bank C */
    1, 81,0,15,  Chan2, /* SA Rhodes 1 */
    1, 81,3, 114,   Chan3,
    0, 81,0,0,   Chan4,
    0, 81,0,0,   Chan5,
    0, 81,0,0,   Chan6,
    0, 81,0,0,   Chan7,
    0, 81,0,0,   Chan8,
    0, 81,0,0,   Chan9,
    0, 81,0,0,   Chan10,
    0, 81,0,0,   Chan11,
    1,  0,0,114,   Chan12,
    0,  0,0,4,   Chan13,
    0, 81,0,0,   Chan14,
    0, 81,0,0,   Chan15,
    };

/* JV1080 */
struct t_splits TheFeeling0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,  A0, H2,  24,  Chan0,   80, 1,VolCtr2,InChan0, /* JV1080 Bank C */
    0,   0, 47,  24,  Chan1,  127, 1,VolCtr2,InChan0, /* JV1080 Bank C */
    1,  C3, H4,   0,  Chan2,  127, 1,VolCtr2,InChan0,   /*  Rhodes 1 */
    1,  C5, C8, -24,  Chan3,  127, 0,VolCtr2,InChan0,  /* Steel Drum */
    1,  C5, C8, -12,  Chan3,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chan5,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chan6,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chan7,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chan8,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chan9,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chana,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chanb,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chanc,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chand,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chane,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chanf,  127, 0,VolCtr2,InChan0,
	"CS"
    };

/* SC55 */
struct t_splits TheFeeling1={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,  A0, H2,  24,  Chan0,   80, 1,VolCtr2,InChan0, /* JV1080 Bank C */
    0,   0, 47,  24,  Chan1,  127, 1,VolCtr2,InChan0, /* JV1080 Bank C */
    1,  C3, H4,   0,  Chan2,  127, 1,VolCtr2,InChan0,   /*  Rhodes 1 */
    1,  C5, C8, -24,  Chan12,  127, 0,VolCtr2,InChan0,  /* Steel Drum */
    1,  C5, C8, -12,  Chan12,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chan3,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chan4,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chan5,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chan6,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chan7,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chan8,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chan9,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chana,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chanb,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chane,  127, 0,VolCtr2,InChan0,
    0,   0,127,   0,  Chanf,  127, 0,VolCtr2,InChan0,
	"CS"
    };


/* -------- BrownEyes ---------------------------------------------------- */
struct t_song BrownEyes;
struct t_splits BrownEyes0;
struct t_splits *BrownEyesList[] = 
{
	&BrownEyes0, NULL};
	

struct t_song BrownEyes={ "Brown Eyes",
	0, 81,1,21,&BrownEyesList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,2,51,  Chan0,	/* JV1080 Bank C */
    1, 81,2,50,  Chan1,	/* JV1080 Bank C */
    1, 81,3,5,   Chan2, 
    1, 81,3,4,   Chan3,
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

struct t_splits BrownEyes0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   0, 47, 24,  Chan0,  127, 1,VolCtr2,InChan0, /* JV1080 Bank C */
    1,   0, 47, 24,  Chan1,  127, 1,VolCtr2,InChan0, /* JV1080 Bank C */
    0,  48,127,  0,  Chan12, 127, 1,VolCtr2,InChan0,    /*  El. Piano */
    0,  48,127,  0,  Chan13, 127, 1,VolCtr2,InChan0,    /*  El. Piano */
    1,  48,127,  0,  Chan2, 127, 1,VolCtr2,InChan0,    /*  El. Piano */
    1,  48,127,  0,  Chan3, 127, 1,VolCtr2,InChan0,    /*  El. Piano */
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


/* -------- CityStreets ---------------------------------------------------- */
struct t_song CityStreets;
struct t_splits CityStreets0;
struct t_splits *CityStreetsList[] = 
{
	&CityStreets0, NULL};
	

struct t_song CityStreets={ "City Streets",
	0, 81,1,21,&CityStreetsList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0, 10, Chan0,	/* JV1080 Bank A West Coast */
    1, 81,1,111, Chan1,	/* Saxophon */
    0, 81,0,0,   Chan2,
    0, 81,0,0,   Chan3,
    0, 81,0,0,   Chan4,
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

struct t_splits CityStreets0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1, A0,   C5,   0, Chan0, 127, 1,VolCtr2,InChan0, /* JV1080 Bank A West Coast */
    1, A0,   C5,  12, Chan0, 127, 1,VolCtr2,InChan0, /* JV1080 Bank A West Coast */
    1, CIS5, C8, -24, Chan1, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chan3, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chan4, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chan5, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chan6, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chan7, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chan8, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chan9, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chana, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chanb, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chanc, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chand, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chane, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,   Chanf, 127, 0,VolCtr2,InChan0,
	"CS"
    };

/* -------- WalkOnLife ---------------------------------------------------- */
struct t_song WalkOnLife;
struct t_splits WalkOnLife0;
struct t_splits *WalkOnLifeList[] = 
{
	&WalkOnLife0, NULL};
	

struct t_song WalkOnLife={ "Walk on Life",
	0, 81,1,24,&WalkOnLifeList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0, 54, Chan0,		/* JV1080 */
    1, 81,0, 31, Chan1,		/* JV1080 */
    0, 81,0,0,   Chan2,
    0, 81,0,0,   Chan3,
    0, 81,0,0,   Chan4,
    0, 81,0,0,   Chan5,
    0, 81,0,0,   Chan6,
    0, 81,0,0,   Chan7,
    0, 81,0,0,   Chan8,
    0, 81,0,0,   Chan9,
    0, 81,0,0,   Chan10,
    0, 81,0,0,   Chan11,
    1,  0,0,23,  Chan12,	/* Harmonica */
    0, 81,0,0,   Chan13,
    0, 81,0,0,   Chan14,
    0, 81,0,0,   Chan15,
    };

struct t_splits WalkOnLife0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1, A0, H4, 12,  Chan0,  100, 1,VolCtr2,InChan0, /* JV1080 */
    1, A0, H4,  0,  Chan0,   80, 1,VolCtr2,InChan0, /* JV1080 */
    1, C5, C8,-12,  Chan1,  120, 0,VolCtr2,InChan0, /* JV1080 */
    1, C5, C8,  0,  Chan1,  127, 0,VolCtr2,InChan0, /* JV1080 */
    1, C5, C8,-12,  Chan12, 110, 0,VolCtr2,InChan0, /* Harmonica */
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

  
/* -------- RollerSpin ---------------------------------------------------- */

struct t_song RollerSpin;
struct t_splits RollerSpin0;
struct t_splits *RollerSpinList[] = 
{
	&RollerSpin0, NULL};

struct t_song RollerSpin={ "RollerSpin",
	1, 81,1,21,&RollerSpinList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0,52,   Chan0,  /* Roller Spin */
    0, 81,0,0,   Chan1,
    0, 81,0,0,   Chan2,
    0, 81,0,0,   Chan3,
    0, 81,0,0,   Chan4,
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


struct t_splits RollerSpin0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   A0,C8,  0,  Chan0, 127, 2,VolCtr2,InChan0,
    0,   0,127,  0,  Chan1, 127, 0,VolCtr2,InChan0,
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


/* -------- EvilWays ---------------------------------------------------- */

struct t_song EvilWays;
struct t_splits EvilWays0;
struct t_splits *EvilWaysList[] = 
{
	&EvilWays0, NULL};

struct t_song EvilWays={ "Evil Ways",
	0, 81,1,24,&EvilWaysList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0,50,   Chan0,
    0, 81,0,0,   Chan1,
    0, 81,0,0,   Chan2,
    0, 81,0,0,   Chan3,
    0, 81,0,0,   Chan4,
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


struct t_splits EvilWays0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,  A0, H2, 24,  Chan0,  90, 2,VolCtr2,InChan0, /* BigSpin */
    1,  C3, C8,  0,  Chan0, 127, 2,VolCtr2,InChan0, /* BigSpin */
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


/* -------- GospelOrgan ---------------------------------------------------- */

struct t_song GospelOrgan;
struct t_splits GospelOrgan0;
struct t_splits *GospelOrganList[] = 
{
	&GospelOrgan0, NULL};

struct t_song GospelOrgan={ "Gospel Organ",
	0, 81,1,24,&GospelOrganList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0,51,   Chan0,
    0, 81,0,0,   Chan1,
    0, 81,0,0,   Chan2,
    0, 81,0,0,   Chan3,
    0, 81,0,0,   Chan4,
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

struct t_splits GospelOrgan0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   0,127,  0,  Chan0, 127, 2,VolCtr2,InChan0,
    0,   0,127,  0,  Chan1, 127, 0,VolCtr2,InChan0,
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

/* -------- Harmonica ---------------------------------------------------- */

struct t_song Harmonica;
struct t_splits Harmonica0;
struct t_splits *HarmonicaList[] = 
{
	&Harmonica0, NULL};

struct t_song Harmonica={ "Harmonica",
	1, 81,1,21,&HarmonicaList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,3,22,   Chan0,
    0, 81,0,0,   Chan1,
    0, 81,0,0,   Chan2,
    0, 81,0,0,   Chan3,
    0, 81,0,0,   Chan4,
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


struct t_splits Harmonica0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   0,127,  0,  Chan0, 127, 1,VolCtr2,InChan0,
    0,   0,127,  0,  Chan1, 127, 0,VolCtr2,InChan0,
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





/* -------- BlueEyes ---------------------------------------------------- */

struct t_song BlueEyes;
struct t_splits BlueEyes0;
struct t_splits *BlueEyesList[] = 
{
	&BlueEyes0, NULL};

struct t_song BlueEyes={ "Blue Eyes",
	1, 81,1,21,&BlueEyesList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0,29,   Chan0,
    0, 81,0,0,   Chan1,
    0, 81,0,0,   Chan2,
    0, 81,0,0,   Chan3,
    0, 81,0,0,   Chan4,
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


struct t_splits BlueEyes0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   0,127,  0,  Chan0, 127, 1,VolCtr2,InChan0,
    0,   0,127,  0,  Chan1, 127, 0,VolCtr2,InChan0,
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




/* -------- Locomotive ---------------------------------------------------- */

struct t_song Locomotive;
struct t_splits Locomotive0;
struct t_splits *LocomotiveList[] = 
{
	&Locomotive0, NULL};

struct t_song Locomotive={ "Locomotive",
	0, 81,1,21,&LocomotiveList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0,0,   Chan0,
    1, 81,1,96,   Chan1,
    0, 81,0,0,   Chan2,
    0, 81,0,0,   Chan3,
    0, 81,0,0,   Chan4,
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


struct t_splits Locomotive0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   A0,72,  0,  Chan0, 127, 0,VolCtr2,InChan0,
    1,   73,C8,-12,  Chan1, 127, 0,VolCtr2,InChan0,
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

/* -------- Cocaine ---------------------------------------------------- */

struct t_song Cocaine;
struct t_splits Cocaine0;
struct t_splits *CocaineList[] = 
{
	&Cocaine0, NULL};

struct t_song Cocaine={ "Cocaine",
	1, 81,1,21,&CocaineList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,1,2,   Chan0,
    0, 81,1,2,   Chan1,
    0, 81,0,0,   Chan2,
    0, 81,0,0,   Chan3,
    0, 81,0,0,   Chan4,
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


struct t_splits Cocaine0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,  A0, C8,  0,  Chan0, 127, 0,VolCtr2,InChan0,
    1,  A0, C8,  0,  Chan0,  55, 0,VolCtr2,InChan0,
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


/* -------- Verdamp ---------------------------------------------------- */

struct t_song Verdamp;
struct t_splits Verdamp0;
struct t_splits *VerdampList[] = 
{
	&Verdamp0, NULL};

struct t_song Verdamp={ "Verdamp",
	0, 81,1,21,&VerdampList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0, 17, Chan0,
    1, 81,2, 19, Chan1,
    0, 81,0,0,   Chan2,
    0, 81,0,0,   Chan3,
    0, 81,0,0,   Chan4,
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


struct t_splits Verdamp0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,  A0, C8,  0,  Chan0, 127, 1,VolCtr2,InChan0,
    1,  G3, C8,  0,  Chan1,  50, 1,VolCtr2,InChan0,
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

#endif


/* -------- Piano64 ---------------------------------------------------- */

struct t_song Piano64;
struct t_splits Piano640;
struct t_splits *Piano64List[] = 
{
	&Piano640, NULL};

struct t_song Piano64={ "Piano64",
	1, 81,1,21,&Piano64List[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0,0,   Chan0,
    0, 81,0,0,   Chan1,
    0, 81,0,0,   Chan2,
    0, 81,0,0,   Chan3,
    0, 81,0,0,   Chan4,
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


struct t_splits Piano640={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   0,127,  0,  Chan0, 127, 1,VolCtr2,InChan0,
    0,   0,127,  0,  Chan1, 127, 0,VolCtr2,InChan0,
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


/* -------- Leer ---------------------------------------------------- */

struct t_song Leer;
struct t_splits Leer0;
struct t_splits *LeerList[] = 
{
	&Leer0, NULL};

  
struct t_song Leer={ "Leer",
	0, 81,1,21,&LeerList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0,0,   Chan0,
    0, 81,0,0,   Chan1,
    0, 81,0,0,   Chan2,
    0, 81,0,0,   Chan3,
    0, 81,0,0,   Chan4,
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


struct t_splits Leer0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    0,   0,127,  0,  Chan0, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan1, 127, 0,VolCtr2,InChan0,
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

/* ENDE Leer Leer*/



/* -------- Lieder von Crepescule --------------------------------- */

/* -------- Feu dans ma Tete -------------------------------------- */

struct t_song Feu;
struct t_splits Feu0;
struct t_splits Feu1;
struct t_splits Feu2;
struct t_splits Feu3;
struct t_splits *FeuList[] = 
{
	&Feu2, NULL, &Feu3, &Feu1, &Feu0, NULL};

  
struct t_song Feu={ "Feu",
	0, 81,1,21,&FeuList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	&Patch_FeuSynth1, 0x2050000l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0,65,   Chan0,	/* Saw Mass */
    1, 81,0,65,   Chan1,	/* Saw Mass */
    1, 81,0,80,   Chan2,
    1, 81,2,55,   Chan3,	/* Juno Strings */
    1, 81,0,88,   Chan4,	/* Poly xxx */
    1, 81,0,0,   Chan5,		/* Synth 11.10.1998 */
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


struct t_splits Feu0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   A0, H3,  12,  Chan0, 105, 0,VolCtr2,InChan0,
    1,   C4, H5,   0,  Chan1,  75, 0,VolCtr2,InChan0,
    1,   C4, H5,   0,  Chan2,  127, 0,VolCtr2,InChan0,
    1,   C6, C8, -24,  Chan3, 100, 0,VolCtr2,InChan0,
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

struct t_splits Feu1={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   A0, H3,  24,  Chan0, 100, 0,VolCtr2,InChan0,
    1,   A0, H3,  12,  Chan1,  75, 0,VolCtr2,InChan0,
    1,   C4, H5,   0,  Chan1,  75, 0,VolCtr2,InChan0,
    1,   C6, C8, -24,  Chan3,  90, 0,VolCtr2,InChan0,
    1,   C4, H5,   0,  Chan4, 127, 0,VolCtr2,InChan0,
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

struct t_splits Feu2={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   A0, H3,  24,  Chan0, 100, 0,VolCtr2,InChan0,
    1,   A0, H3,  12,  Chan1,  75, 0,VolCtr2,InChan0,
    0,   C4, H5,  12,  Chan1, 100, 0,VolCtr2,InChan0,
    1,   C6, C8, -24,  Chan3,  90, 0,VolCtr2,InChan0,
    1,   C4, H5,   0,  Chan5, 127, 0,VolCtr1,InChan0,
    1,   C4, H5, -12,  Chan5, 100, 0,VolCtr1,InChan0,
    0,   A0, E2,  36,  Chan3,  90, 0,VolCtr2,InChan0,
    1,   C4, H5,  12,  Chan5, 100, 0,VolCtr1,InChan0,
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

struct t_splits Feu3={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   A0, H3,  24,  Chan0, 100, 0,VolCtr2,InChan0,
    1,   A0, H3,  12,  Chan1,  75, 0,VolCtr2,InChan0,
    1,   C4, H5,   0,  Chan1,  75, 0,VolCtr2,InChan0,
    1,   C6, C8, -24,  Chan3,  90, 0,VolCtr2,InChan0,
    1,   C4, H5,   0,  Chan4, 127, 0,VolCtr1,InChan0,
    1,   C4, H5, -12,  Chan4, 100, 0,VolCtr1,InChan0,
    0,   A0, E2,  36,  Chan3,  90, 0,VolCtr2,InChan0,
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

/* ENDE Feu */


/* -------- Criez d'Amour ----------------------------------------- */

struct t_song Criez;
struct t_splits Criez0;
struct t_splits Criez1;
struct t_splits *CriezList[] = 
{
	&Criez0, NULL, &Criez1, NULL};

  
struct t_song Criez={ "Criez",
	0, 81,1,21,&CriezList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0,0,		Chan1,	/* Piano */
    1, 81,2,55,		Chan0,	/* Juno Strings */
    1, 81,2,55,		Chan0,	/* Juno Strings */
    1, 80,0,1,   	Chan3,	/* Wellenrauschen */
    0, 81,0,0,   Chan4,
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


struct t_splits Criez0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   A0, H2,  24,  Chan0,  95, 0,VolCtr2,InChan0,
    1,   C3, H4,  24,  Chan0,  95, 0,VolCtr2,InChan0,
    0,   C3, H4,  12,  Chan2,  90, 0,VolCtr2,InChan0,
    1,   C5, H6, -24,  Chan1, 127, 0,VolCtr2,InChan0,
    1,   C7, C8, -48,  Chan3, 127, 0,VolCtr2,InChan0,
    1,   C7, C8, -36,  Chan3, 127, 0,VolCtr2,InChan0,
    0,   A0, C8,   0,  Chan6, 127, 0,VolCtr2,InChan0,
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

struct t_splits Criez1={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   A0, H2,  24,  Chan0,  80, 0,VolCtr2,InChan0,
    1,   A0, H2,  36,  Chan0,  80, 0,VolCtr2,InChan0,
    1,   C3, H4,  12,  Chan2,  90, 0,VolCtr2,InChan0,
    1,   C5, H7, -24,  Chan1, 127, 0,VolCtr2,InChan0,
    1,   C7, C8, -48,  Chan3, 127, 0,VolCtr2,InChan0,
    1,   C7, C8, -36,  Chan3, 127, 0,VolCtr2,InChan0,
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

/* ENDE Criez */


/* -------- Apres La Mort ----------------------------------------- */

struct t_song AprsLaMort;
struct t_splits AprsLaMort0;
struct t_splits *AprsLaMortList[] = 
{
	&AprsLaMort0, NULL};

  
struct t_song AprsLaMort={ "AprsLaMort",
	0, 81,1,21,&AprsLaMortList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, JV1080_BANK_A, 0,		Chan0,	/* Piano */
    1, 81,2,55,		Chan1,	/* Juno Strings */
    0, 81,0,0,   Chan2,
    0, 81,0,0,   Chan3,
    0, 81,0,0,   Chan4,
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


struct t_splits AprsLaMort0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   A0, H3,  12,  Chan0, 127, 1,VolCtr2,InChan0,
    1,   C4, C8, -12,  Chan1, 127, 0,VolCtr2,InChan0,
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

/* ENDE AprsLaMort*/


/* -------- NeMeQuit ---------------------------------------------------- */

struct t_song NeMeQuit;
struct t_splits NeMeQuit0;
struct t_splits NeMeQuit1;
struct t_splits NeMeQuit2;
struct t_splits *NeMeQuitList[] = 
{
	&NeMeQuit0, &NeMeQuit2, &NeMeQuit1, NULL};

  
struct t_song NeMeQuit={ "NeMeQuit",
	0, 81,1,21,&NeMeQuitList[0],
	&Perf_NeMeQuit,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0,0,		Chan0,	/* Piano */
    1, 81,2,50,		Chan1,	/* Strings */
    1, 81,0,21,	 	Chan2,  /* Rhodes */
    0, 81,0,0,   Chan3,
    0, 81,0,0,   Chan4,
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


struct t_splits NeMeQuit0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   A0,C8,    0,  Chan0, 127, 1,VolCtr2,InChan0,
    0,   0,127,  0,  Chan1, 127, 0,VolCtr2,InChan0,
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


struct t_splits NeMeQuit2={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   A0,C8,    0,  Chan2, 127, 1,VolCtr2,InChan0,
    0,   0,127,  0,  Chan1, 127, 0,VolCtr2,InChan0,
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


struct t_splits NeMeQuit1={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    0,   A0,C8,  0,  Chan0, 127, 0,VolCtr2,InChan0,
    1,   A0,C8,  0,  Chan1, 127, 0,VolCtr2,InChan0,
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

/* ENDE  NeMeQuit */


/* -------- Vage ---------------------------------------------------- */

struct t_song Vage;
struct t_splits Vage0;
struct t_splits *VageList[] = 
{
	&Vage0, NULL};

  
struct t_song Vage={ "Vage Vage",
	0, 81,1,21,&VageList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0,31,   Chan0,
    1, 81,2,32,   Chan1,
    1, 81,2,11,   Chan2,
    0, 81,0,0,   Chan3,
    0, 81,0,0,   Chan4,
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


struct t_splits Vage0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,  C5,C8,  -24,  Chan0, 127, 0,VolCtr2,InChan0,
    1,   A0,C2,  12,  Chan1, 127, 0,VolCtr2,InChan0,
    1,   CIS2,H4,  0,  Chan2, 90, 0,VolCtr2,InChan0,
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

/* ENDE Vage */


#ifdef NIE
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

  
struct t_song LaMain={ "LaMain",
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
    0,   F2,F4,  12,  Chan0, 120, 0,VolCtr2,InChan0,
    0,   C1,E2,  0,  Chan4, 100, 0,VolCtr2,InChan0,
    0,   G4,C8,  -12,  Chan1, 127, 0,VolCtr2,InChan0,
    1,   C5,C8,  -48,  Chan5, 127, 0,VolCtr2,InChan0,
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


struct t_splits LaMain1A={
	&Loc_Perf_LaMain1, SPLITVAL, NO_ALLNOTES_OFF, SMALL_PERFCOMMON,
    1,   F2,F4,  12,    Chan0, 120, 0,VolCtr2,InChan0,
    1,   C1,E2,  0,     Chan4, 100, 0,VolCtr2,InChan0,
    1,   C1,E2,  12,    Chan4, 100, 0,VolCtr2,InChan0,
    0,   G4,C8,  -12,   Chan1, 127, 0,VolCtr2,InChan0,
    1,   C5,C8,  -48,   Chan5, 127, 0,VolCtr2,InChan0,
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


struct t_splits LaMain0={
	&Perf_LaMain1, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   C1,F4,  12 ,  Chan0, 120, SustModeSust, VolCtr2,InChan0,
    1,   C1,A1,  0  ,  Chan0, 100, SustModeSust, VolCtr2,InChan0,
    1,   G4,C8,  -12,  Chan1, 127, 0,VolCtr2,InChan0,
    0,   H0,C1,  0,  Chan3, 127, 0,VolCtr2,InChan0,
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


struct t_splits LaMain2={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   C1,F4,   12,  Chan0, 85,  SustModeSust, VolCtr2,InChan0,
    1,   C1,A1,    0,  Chan0, 95,  SustModeSust, VolCtr2,InChan0,
    1,   G4,C8,  -24,  Chan2, 127, SustModeNop, VolCtr1,InChan0,
    1,   G4,C8,  -12,  Chan2, 115, SustModeNop, VolCtr1,InChan0,
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


struct t_splits LaMain3={
	&Perf_LaMain1, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   C1,F4,  12,  Chan0, 100, 0,VolCtr2,InChan0,
    1,   C1,A1,  0,  Chan0, 110, 0,VolCtr2,InChan0,
    1,   G4,C8,  -12,  Chan1, 127, 0,VolCtr2,InChan0,
    0,   H0,C1,  12,  Chan3, 127, 0,VolCtr2,InChan0,
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
#endif

/* -------- LeNoirQuiMeTouche------------------------------------ */

struct t_song LeNoir;
struct t_splits LeNoir0;
struct t_splits LeNoir1;
struct t_splits LeNoir2;
struct t_splits *LeNoirList[] = 
{
	&LeNoir0, &LeNoir1, &LeNoir2, NULL};

  
struct t_song LeNoir={ "LeNoir",
	0, 81,1,21,&LeNoirList[0],
	&Perf_LeNoirN,
	&Patch_LeNoir1,		0x2000000l,     /* Piano */
	&Patch_LeNoir2,		0x2010000l,     /* Mandoline */
	NULL,0l,NULL,0l,NULL,0l,
	&Patch_LeNoirFlute,	0x2050000l,		/* Flute */
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0, 0,   Chan0,		/* Piano */
    1, 81,1,92,   Chan1,		/* Mandoline (PatchCtrl) */
    1, 81,0,74,   Chan2,		/* Metall */
    1, 81,1, 4,   Chan3,		/* Grung */
    1, 81,2,50,   Chan4,		/* Hi. Strings */
    1, 81,1,94,   Chan5,		/* Flute */
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


struct t_splits LeNoir0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   A0,  C8,    0,  Chan0, 127, 1,VolCtr2,InChan0,
    1,   A5,  C8,  -12,  Chan0, 127, 1,VolCtr2,InChan0,
    0,   0,127,  0,  Chan1, 127, 0,VolCtr2,InChan0,
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

struct t_splits LeNoir1={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   A0,  H2,   12,  Chan1,  80, 0,VolCtr2,InChan0,
    1,   C3,  F4,    0,  Chan2, 127, 0,VolCtr2,InChan0,
    1,   C6,  C8,  -24,  Chan3, 127, 0,VolCtr2,InChan0,
    1,   F4,  H5,  +24,  Chan4,  95, 0,VolCtr2,InChan0,
    0,   A0,  C8,    0,  Chan0, 127, 0,VolCtr2,InChan0,
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

struct t_splits LeNoir2={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   A0,  H2,   24,  Chan4, 127, 0,VolCtr2,InChan0,
    1,   A0,  H2,   36,  Chan4,  90, 0,VolCtr2,InChan0,
    1,   C3,  C8,  -12,  Chan5, 127, 0,VolCtr1,InChan0,
    1,   C3,  C8,   12,  Chan5,  85, 0,VolCtr1,InChan0,
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

/* ENDE LeNoir */

#ifdef NIE
/* -------- L'arbre ---------------------------------------------------- */

struct t_song LeAbre;
struct t_splits LeAbre0;
struct t_splits *LeAbreList[] = 
{
	&LeAbre0, &LeAbre1, NULL};

  
struct t_song LeAbre={ "LeAbre",
	0, 81,1,21,&LeAbreList[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,2,55,		Chan0,	/* Juno Strings */
    1, 81,3, 6,		Chan1,	/* Harpsichord */
    1, 81,0,109,    Chan2,	/* Steel away */
    0, 81,0,0,   Chan3,
    0, 81,0,0,   Chan4,
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


struct t_splits LeAbre0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    0,   A0, H3,  24,  Chan0,  80, 0,VolCtr2,InChan0,
    1,   A0, H3,  12,  Chan0,  80, 0,VolCtr2,InChan0,
    1,   C4, C8, -24,  Chan1, 127, 0,VolCtr2,InChan0,
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

struct t_splits LeAbre1={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    0,   A0, H3,  24,  Chan0,  80, 0,VolCtr2,InChan0,
    1,   A0, H3,  12,  Chan0,  80, 0,VolCtr2,InChan0,
    1,   C4, C8, -24,  Chan2, 127, 0,VolCtr2,InChan0,
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


/* ENDE L'arbre */

#endif


/* -------- WeltEins ---------------------------------------------------- */

struct t_song WeltEins;
struct t_splits WeltEins0;
struct t_splits WeltEins1;
struct t_splits *WeltEinsList[] = 
{
	&WeltEins0, &WeltEins1, NULL, &WeltEins0, NULL};

  
struct t_song WeltEins={ "WeltEins",
	0, 81,1,3,&WeltEinsList[0],
	&Perf_Welt1,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,2,90,		Chan0,	/* Dawn */
    1, 81,2,50,		Chan1,	/* JX8P Strings */
    1, 81,0,59,     Chan2,  /* Cathedral */
    1, 81,2,90,		Chan3,	/* Dawn 2 Dusk */
    1, 81,2,114,	Chan4,	/* Pure Tibet */
    1, 81,1,101,	Chan5,	/* Raya Shaku */
    1, 81,2,23,   Chan6,
    1, 81,0,101,	Chan7,
    1, 81,0,101,    Chan8,	/* Drone Split */
    0, 81,0,0,   Chan9,
    0, 81,0,0,   Chan10,
    0, 81,0,0,   Chan11,
    0, 81,0,0,   Chan12,
    0, 81,0,0,   Chan13,
    0, 81,0,0,   Chan14,
    0, 81,0,0,   Chan15,
    };

struct t_splits WeltEins0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   A0,H3,  0,  Chan3, 127, 0,VolCtr2,InChan1,		/* Dawn 2 Disk */
    1,   C5,C8,  0,  Chan3, 127, 0,VolCtr2,InChan1,		/* Dawn 2 Dusk */
    1,   C4,H4,-36,  Chan8, 127, 0,VolCtr2,InChan1,		/* Drone Split */
    1,   A0,H4, 00,  Chan4, 127, 0,VolCtr2,InChan0,		/* Pure Tibet */
    1,   C5,C8,-24,  Chan2, 127, 0,VolCtr2,InChan0,		/* Cathedral */
    1,   C5,C8,-36,  Chan2, 127, 0,VolCtr2,InChan0,		/* Cathedral */
    0,   0,127,  0,  Chan6, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan7, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan0, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan9, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chana, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chanb, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chanc, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chand, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chane, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chanf, 127, 0,VolCtr2,InChan0,
	"CS"
    };


struct t_splits WeltEins1={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    0,   A0,H3,  0,  Chan3, 127, 0,VolCtr2,InChan1,		/* Dawn 2 Disk */
    1,   C3,C8,  0,  Chan3, 127, 0,VolCtr2,InChan1,		/* Dawn 2 Dusk */
    1,   C2,H2,-12,  Chan8, 127, 0,VolCtr2,InChan1,		/* Sands of Time */
    1,   C2,H4, 24,  Chan5, 127, 0,VolCtr2,InChan0,		/* Raya Shaku  */
    1,   C5,C8,-24,  Chan6, 127, 0,VolCtr2,InChan0,		/* Choir Aaaah */
    1,   C1,H1,  0,  Chan7, 127, 0,VolCtr2,InChan0,		/* Drone Split */
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

struct t_splits WeltEins1xxx={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    0,   A0,H1,  0,  Chan0, 127, 0,VolCtr2,InChan0,
    0,   C2,H4, 24,  Chan1, 127, 0,VolCtr2,InChan0,
    0,   0,127,  0,  Chan1, 127, 0,VolCtr2,InChan0,
    1,   A0,C8,  0,  Chan3, 127, 0,VolCtr2,InChan0,
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

/* ENDE WeltEins */





#ifdef NIE

/* -------- IntroEins ---------------------------------------------------- */

struct t_song IntroEins;
struct t_splits IntroEins0;
struct t_splits IntroEins1;
struct t_splits *IntroEinsList[] = 
{
	&IntroEins0, &IntroEins1, NULL};

  
struct t_song IntroEins={ "IntroEins",
	0, 81,1,3,&IntroEinsList[0],
	&Perf_IntroEins,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,2,90,		Chan0,	/* Dawn */
    1, 81,2,50,		Chan1,	/* JX8P Strings */
    1, 81,0,59,     Chan2,  /* Cathedral */
    1, 81,2,90,		Chan3,	/* Dawn 2 Dusk */
    1, 81,2,114,	Chan4,	/* Pure Tibet */
    1, 81,1,101,	Chan5,	/* Raya Shaku */
    1, 81,2, 44,    Chan6,	/* Film Octaves */
    1, 81,0,101,	Chan7,
    1, 81,0,101,    Chan8,	/* Drone Split */
    0, 81,0,0,   Chan9,
    0, 81,0,0,   Chan10,
    0, 81,0,0,   Chan11,
    0, 81,0,0,   Chan12,
    0, 81,0,0,   Chan13,
    0, 81,0,0,   Chan14,
    0, 81,0,0,   Chan15,
    };

struct t_splits IntroEins0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    0,   A0,H3,  0,  Chan3, 127, 0,VolCtr2,InChan1,		/* Dawn 2 Disk */
    1,   C3,C8,  0,  Chan3, 127, 0,VolCtr2,InChan1,		/* Dawn 2 Dusk */
    0,   C2,H2,-12,  Chan8, 127, 0,VolCtr2,InChan1,		/* Sands of Time */
    1,   C5,C8,-12,  Chan5, 127, 0,VolCtr2,InChan0,		/* Raya Shaku  */
    1,   C2,H4,-12,  Chan6, 127, 1,VolCtr2,InChan0,		/* Choir Aaaah */
    1,   C1,H1,  0,  Chan7, 127, 0,VolCtr2,InChan0,		/* Drone Split */
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

struct t_splits IntroEins1={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    0,   A0,H3,  0,  Chan3, 127, 0,VolCtr2,InChan1,		/* Dawn 2 Disk */
    0,   C3,C8,  0,  Chan3, 127, 0,VolCtr2,InChan1,		/* Dawn 2 Dusk */
    1,   C2,H2,-12,  Chan8, 127, 0,VolCtr2,InChan1,		/* Sands of Time */
    1,   C5,C8,-12,  Chan5, 127, 0,VolCtr2,InChan0,		/* Raya Shaku  */
    1,   C2,H4, 12,  Chan6, 127, 1,VolCtr2,InChan0,		/* ??? Choir Aaaah */
    1,   C1,H1,  0,  Chan7, 127, 0,VolCtr2,InChan0,		/* Drone Split */
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

/* ENDE IntroEins */

#endif




/* -------- Hymne ---------------------------------------------------- */
/*
struct t_song Hymne;
#include "hymne.inc"
*/


#if USE_WALLSTREET == D_TRUE

/* -------- MoneyF ---------------------------------------------------- */

struct t_song MoneyF;
#include "moneyfor.inc"

#endif
#ifdef NIE
struct t_splits MoneyF0;
struct t_splits MoneyF1;
struct t_splits MoneyF2;
struct t_splits *MoneyFList[] = 
{
	&MoneyF0, &MoneyF1, &MoneyF0, &MoneyF1, &MoneyF2, NULL};

struct t_song MoneyF={ "MoneyF",
	0, 81,1,21,&MoneyFList[0],
	&Perf_MoneyF,
	&Patch_MoneyF, 0x02000000l,     /* Fanfare */
	&Patch_MoneyF, 0x02030000l,     /* Moog */
	NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0,0,   Chan0,
    1, 81,0,20,   Chan1,
    1, 81,0,0,   Chan2,
    1, 81,0,0,   Chan3,   /* Moog */
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


struct t_splits MoneyF0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   C1,C8,  0,  Chan0, 127, 1,VolCtr2,InChan0,
    0,   C2,C8, 12,  Chan1, 127, 1,VolCtr2,InChan0,
    0,   A0,H1,  0,  Chan2, 127, 0,VolCtr2,InChan0,
    0,   A0,C8,  0,  Chan3, 127, 0,VolCtr2,InChan0,
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

struct t_splits MoneyF1={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    0,   C1,C8,  0,  Chan0, 127, 1,VolCtr2,InChan0,
    1,   C2,C8, 12,  Chan1, 127, 1,VolCtr2,InChan0,
    0,   A0,H1,  0,  Chan2, 127, 0,VolCtr2,InChan0,
    0,   A0,C8,  0,  Chan3, 127, 0,VolCtr2,InChan0,
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

struct t_splits MoneyF2={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    0,   C2,C8,  0,  Chan0, 127, 1,VolCtr2,InChan0,
    0,   C2,C8, 12,  Chan0, 127, 1,VolCtr2,InChan0,
    0,   A0,H1,  0,  Chan2, 127, 0,VolCtr2,InChan0,
    0,   A0,C8,  0,  Chan3, 127, 0,VolCtr2,InChan0,
    1,   A0,H4, 24,  Chan4, 127, 0,VolCtr2,InChan0,
    1,   C5,C8,-24,  Chan5, 127, 0,VolCtr2,InChan0,
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


/* ENDE MoneyF */
#endif


#ifdef NIE
/* -------- JeRevole ---------------------------------------------------- */

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
    1,   A0,H4,  0,  Chan0, 127, 0,VolCtr2,InChan0,
    1,   C7,H7,  -36,  Chan1, 127, 0,VolCtr2,InChan0,
    1,   C6,H6,  -12,  Chan2, 127, 0,VolCtr2,InChan0,
    1,   C5,H5,  -12,  Chan3, 127, 0,VolCtr2,InChan0,
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

#endif

struct t_song *SongListe[]=
{
	&Criez,
	&Feu,
	&AprsLaMort,
&Leer,  /*	&Moeurs,    */
&Leer,  /*	&Larmada,   */
	&Vage,
&Leer,  /*	&LaMain,	*/
	&LeNoir,
&Leer,  /*	&LeArbre,	*/
	&NeMeQuit,
&Leer,	/*	&Hymne,	*/
&Leer,	/*	&Prison, */
&Leer,   /*	&JeRevole, */
	&WeltEins,
&Leer,  /*	&IntroEins, */
&Leer,	/*	&ApresUnPas, */
	&Leer,
	&Leer,
	&Leer,
	&Leer,
	&Leer,
	&Leer,
	&Leer,
	&Leer,
	&Leer,
	&Leer,
	&Leer,
	&Leer,
	&Leer,
	&Leer,
	&Leer,
	&Leer,
	&Leer,
	&Piano64,
&Leer,   /*		&EvilWays,*/
&Leer,   /*		&RollerSpin,*/
&Leer,   /*		&Dream,*/
&Leer,   /*	&BrothersInArms,	*/
&Leer,   /*	&JeRevole, */
&Leer,   /*	&JeRevole, */
&Leer,   /*	&JeRevole, */
&Leer,   /*		&MoneyF,*/
&Leer,   /*		&Rose,*/
&Leer,   /*		&StumblinIn,*/
&Leer,   /*		&YourSoVain,*/
&Leer,   /*		&TheFeeling,*/
&Leer,   /*		&BrownEyes,*/
&Leer,   /*		&CityStreets,*/
&Leer,   /*		&WalkOnLife,*/
&Leer,   /*		&Verdamp,*/
&Leer,   /*		&Cocaine,*/
&Leer,   /*		&Locomotive,*/
&Leer,   /*     &Harmonica,*/
&Leer,   /*     &BlueEyes,*/
	NULL
};

