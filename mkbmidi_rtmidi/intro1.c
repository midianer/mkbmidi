#include <stdio.h>

#include "typedefs.h"
#include "midi.h"
#include "perf.h"
#include "patch.h"


/* -------- IntroEins ---------------------------------------------------- */

struct t_song IntroEins;
struct t_splits IntroEins0;
struct t_splits IntroEins1;
struct t_splits *IntroEinsList[] = 
{
	&IntroEins1, &IntroEins0, NULL};

  
struct t_song IntroEins={ "IntroEins",
	0, 81,1,3,&IntroEinsList[0],
	&Perf_IntroEins,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,2,56,		Chan0,	/* Gigant /* Dawn 90 */
    1, 81,1,110,		Chan1,	/* Aiiirplane */
    0, 81,0,59,     Chan2,  /* Cathedral */
    0, 81,2,90,		Chan3,	/* Dawn 2 Dusk */
    0, 81,2,114,	Chan4,	/* Pure Tibet */
    1, 81,1,103,	Chan5,	/* Oboe Express */
/*    1, 81,2,14,	Chan5,	/* Analog */
    1, 81,2, 44,    Chan6,	/* Film Octaves */
    1, 81,2,109,	Chan7,	/* Crash Pad */
    1, 81,0,101,    Chan8,
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
    1,   C2,H4, 12,  Chan6, 127, 1,VolCtr2,InChan0,		/* Choir Aaaah */
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
    0,   0,127,  0,  Chan0, 127, 0,VolCtr2,InChan0,
    0,   A0,H3,  0,  Chan3, 127, 0,VolCtr2,InChan0,		/* Dawn 2 Disk */
    1,   C2,H3, 48,  Chan0,  90, 1,VolCtr2,InChan0,		/* Gigantolog */
    1,   C2,H3,-12,  Chan6, 127, 1,VolCtr2,InChan0,		/* Film Octaves */
    1,   C4,H5,-12,  Chan1, 127, 0,VolCtr1,InChan0,		/* Sax */
    0,   C4,H5,  0,  Chan5, 127, 0,VolCtr1,InChan0,		/* Oboe  */
    1,   C6,C8,-24,  Chan5, 127, 0,VolCtr1,InChan0,		/* Oboe  */
    1,   C1,H1,  0,  Chan7, 127, 0,VolCtr1,InChan0,		/* Crash Pad */
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


