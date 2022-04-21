#include <stdio.h>

#include "typedefs.h"
#include "midi.h"
#include "perf.h"
#include "patch.h"


/* -------- PrologZwei ---------------------------------------------------- */

struct t_song PrologZwei;
struct t_splits PrologZwei0;
struct t_splits PrologZwei1;
struct t_splits *PrologZweiList[] = 
{
	&PrologZwei0, &PrologZwei0, NULL};

  
struct t_song PrologZwei={ "PrologZwei",
	0, 81,1,1,&PrologZweiList[0],
	NULL,   /* &Perf_PrologZwei, */
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,0,20,		Chan0,	/* Rhodes */
    1, 81,2,97,		Chan1,	/* */
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

struct t_splits PrologZwei0={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   C3, C8, -24,  Chan0, 127, SustModeSust,VolCtr1,InChan0,
    1,   C1, H1,  0,  Chan1, 127, 0,VolCtr2,InChan0,
    1,   C2, H2, 48,  Chan1, 127, 0,VolCtr2,InChan0,
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

struct t_splits PrologZwei1={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    0,   A0,H3,  0,  Chan3, 127, 0,VolCtr2,InChan1,		/* Dawn 2 Disk */
    0,   C3,C8,  0,  Chan3, 127, 0,VolCtr2,InChan1,		/* Dawn 2 Dusk */
    1,   C2,H4, 48,  Chan0,  90, 1,VolCtr2,InChan0,
    1,   C5,C8,-12,  Chan5, 127, 0,VolCtr2,InChan0,		/* Raya Shaku  */
    1,   C2,H4,-12,  Chan6, 127, 1,VolCtr2,InChan0,		/* ??? Choir Aaaah */
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

/* ENDE PrologZwei */


