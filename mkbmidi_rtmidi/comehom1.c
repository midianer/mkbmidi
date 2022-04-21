#include "config.h"
#if USE_INBETWEEN == D_TRUE

#include <stdio.h>

#include "typedefs.h"
#include "midi.h"

/* -------- ComeHom1 ---------------------------------------------------- */

struct t_song ComeHom1;
struct t_splits ComeHom10;
struct t_splits ComeHom11;
struct t_splits *ComeHom1List[] = 
{
	&ComeHom10, &ComeHom11, &ComeHom10, &ComeHom11, &ComeHom10, &ComeHom11, NULL};
	

struct t_song ComeHom1={ "Coming Home",
	0, 81,1,21,&ComeHom1List[0],NULL,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
	NULL,0l,NULL,0l,NULL,0l,NULL,0l,NULL,0l,
    1, 81,2,50,  Chan0,	/* JV1080 Bank C */
    1, 81,2,50,  Chan1,	/* JV1080 Bank C */
    1, 81,0,8,   Chan2, 
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

struct t_splits ComeHom10={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    0,   0,127,  0,  Chan0,  127, 1,VolCtr2,InChan0, /* JV1080 Bank C */
    0,   0,127,  0,  Chan1,  127, 1,VolCtr2,InChan0, /* JV1080 Bank C */
    0,  56,127,  0,  Chan12, 127, 1,VolCtr1,InChan0,    /*  El. Piano */
    0,  56,127,  0,  Chan13, 127, 1,VolCtr1,InChan0,    /*  El. Piano */
    1,   0,127,  0,  Chan2,  127, 1,VolCtr1,InChan0,    /*  Ak. Piano */
    0,  56,127,  0,  Chan3,  127, 1,VolCtr1,InChan0,    /*  El. Piano */
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

struct t_splits ComeHom11={
	NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
    1,   0,127,  0,  Chan0,  127, 1,VolCtr2,InChan0, /* JV1080 Bank C */
    0,   0,127,  0,  Chan1,  127, 1,VolCtr2,InChan0, /* JV1080 Bank C */
    0,  56,127,  0,  Chan12, 127, 1,VolCtr1,InChan0,    /*  El. Piano */
    0,  56,127,  0,  Chan13, 127, 1,VolCtr1,InChan0,    /*  El. Piano */
    0,   0,127,  0,  Chan2,  127, 1,VolCtr1,InChan0,    /*  Ak. Piano */
    0,  56,127,  0,  Chan3,  127, 1,VolCtr1,InChan0,    /*  El. Piano */
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




/* ENDE ComeHom1 */


#endif