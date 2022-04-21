/************************************************************************/
/*                                                                      */
/*       Programm: Masterkeyboardfunktionen fuer 1040 STE // PC // SH3  */
/*       Datum:    14.11.06                                             */
/*                                                                      */
/************************************************************************/

#define JV1080_DATE_STRING "MKB 08.03.14"
#define MKB_DATE_STRING "08.03.14"

/* -------------------------------------------------------------- */
/*       Include-Files einbinden.                                 */
/* -------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <inttypes.h>
#include "typedefs.h"
#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
#include <syslog.h>

/* -------------------------------------------------------------- */
/*       Global Configuration                                     */
/* -------------------------------------------------------------- */
#include "config.h"

#if (MACHINE==ATARI)
	#include <ext.h>
	#include <tos.h>
#endif

#if (MACHINE==ATARI)
	#include <graphics.h>
	#include <aes.h>
	#include <vdi.h>
   #include "atariapi.h"
#endif
#include <sys/time.h>
#if (MACHINE==SH3)
#endif
#if (MACHINE==GNU_PC)
//   #include <io.h>
//   #include <conio.h>
//   #include "midi_w32api.h"
#endif
#include "midi.h"
/*#include <sys/soundcard.h>*/

#include "date.h"

/* -------------------------------------------------------------------- */
/*       Allgemeine Typendefinition.                                    */
/* -------------------------------------------------------------------- */

#define JV1080_CTRL_CHAN 0x0f

typedef enum
{
FALSE,
TRUE
}
boolean;

typedef enum
{
   NEW, UP, DOWN
}
PgmChangeType;

#include "perf.h"
#include "patch.h"
#include "midi.h"
#include "jv1080.h"
#include "sc55.h"
#include "songdat1.h"
#if (MACHINE==ATARI)
   #include "windows.h"
#endif
#include "patch.h"
#include "songs.h"

#if (MACHINE==ATARI)

PERFCOMMON_STR Perf_Test1 = {
/* Performance Common */
0x01000000l, 0x00000040l,
/*   NAME   */
"Le Noirxxx  ",
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
 20, 12,  4,  4,  4,  4,  4,  4,  0,  0,  0,  0,  0,  0,  0,  0
};


PERFCOMMON_STR Perf_Test2 = {
/* Performance Common */
0x01000000l, 0x00000040l,
/*   NAME   */
"Stepped PadP",
   0,  /* 12: EFXSource */
  15,  /* 12: EFXType------ */
/* EFXParameter */
  5,  9,100, 81,119, 90, 15, 23, 50,127,  0,  0,
/*25-EFXOutAss----*/      0,    /*26-EFXOutLev----*/    127,    
/*27-EFXChSendLev-*/    127,    /*28-EFXRevSendLev*/    126,    
/*29-EFXCtrlS1----*/      0,    /*30-EFXCtrlD1----*/     63,    
/*31-EFXCtrlS2----*/      1,    /*32-EFXCtrlD2----*/     71,    
/*33-ChorLev------*/     49,    /*34-ChorRate-----*/      1,    
/*35-ChorDepth----*/     18,    /*36-ChorPreDel---*/      7,    
/*37-ChorFdback---*/    127,    /*38-ChorOutAss---*/      1,    
/*39-RevType------*/      3,    /*40-RevLevel-----*/     73,    
/*41-RevTime------*/     97,    /*42-RevHFDamp----*/     17,    
/*43-RevFdback----*/      0,    /*44-DefTempo1----*/      9,    
/*45-DefTempo2----*/      7,    
   1,  /* 47: KeyRngSw */
 8, 8,  8,  8,  8,  4,  4,  4,  0,  0,  0,  0,  0,  0,  0,  0
};
#endif




/* TestSong ------------------------------------------------------------------------------------------------- */

t_splits_jv1080 TestSong_xxyy0={
	"Testsong0", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
 {  
 {    1, InChan0,   0, 0, "NoName",  0,127,  0,   Chan0,  127, 1,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } , /* JV1080 Bank C */
 {    1, InChan0,   0, 0, "NoName",  0, 55,  0,   Chan1,  127, 1,VolCtr2,ModulationOn , 0, MNUMBER_JV1080_SPLIT  } , /* JV1080 Bank C */
 {    0, InChan0,   0, 0, "NoName", 56,127,  0,   Chan12, 127, 1,VolCtr1,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,    /*  El. Piano */
 {    0, InChan0,   0, 0, "NoName", 56,127,  0,   Chan13, 127, 1,VolCtr1,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,    /*  El. Piano */
 {    0, InChan0,   0, 0, "NoName", 56,127, -24,  Chan2,  127, 1,VolCtr1,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,    /*  El. Piano */
 {    0, InChan0,   0, 0, "NoName", 56,127, -24,  Chan3,  127, 1,VolCtr1,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,    /*  El. Piano */
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chan4,  127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chan5,  127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chan6,  127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chan7,  127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chan8,  127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chan9,  127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chana,  127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chanb,  127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chane,  127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chanf,  127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } },
	MNUMBER_JV1080_SPLITS
   };


t_splits_jv1080 TestSong_xxyy1={
	"Testsong1", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
 {  
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chan0,  127, 1,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } , /* JV1080 Bank C */
 {    1, InChan0,   0, 0, "NoName",  0,127,  0,   Chan1,  127, 1,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } , /* JV1080 Bank C */
 {    0, InChan0,   0, 0, "NoName", 56,127,  0,   Chan12, 127, 1,VolCtr1,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,    /*  El. Piano */
 {    0, InChan0,   0, 0, "NoName", 56,127,  0,   Chan13, 127, 1,VolCtr1,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,    /*  El. Piano */
 {    0, InChan0,   0, 0, "NoName", 56,127, -24,  Chan2,  127, 1,VolCtr1,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,    /*  El. Piano */
 {    0, InChan0,   0, 0, "NoName", 56,127, -24,  Chan3,  127, 1,VolCtr1,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,    /*  El. Piano */
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chan4,  127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chan5,  127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chan6,  127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chan7,  127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chan8,  127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chan9,  127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chana,  127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chanb,  127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chane,  127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } ,
 {    0, InChan0,   0, 0, "NoName",  0,127,  0,   Chanf,  127, 0,VolCtr2,ModulationOff, 0, MNUMBER_JV1080_SPLIT  } },
	MNUMBER_JV1080_SPLITS
   };


t_splits_jv1080 TestSong_xxyy2={
	"Testsong2", NULL, SPLITVAL, ALLNOTES_OFF, FULL_PERFCOMMON,
 {
 {    0, InChan0,  0, 0, "NoName",  0,127,  0,   Chan0,  127, 1,VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT   } , /* JV1080 Bank C */
 {    1, InChan0,  0, 0, "NoName",  0,127,  0,   Chan1,  127, 1,VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT   } , /* JV1080 Bank C */
 {    1, InChan0,  0, 0, "NoName", 56,127,  0,   Chan12, 127, 1,VolCtr1, ModulationOff, 0, MNUMBER_JV1080_SPLIT   } ,    /*  El. Piano */
 {    1, InChan0,  0, 0, "NoName", 56,127,  0,   Chan13, 127, 1,VolCtr1, ModulationOff, 0, MNUMBER_JV1080_SPLIT   } ,    /*  El. Piano */
 {    0, InChan0,  0, 0, "NoName", 56,127, -24,  Chan2,  127, 1,VolCtr1, ModulationOff, 0, MNUMBER_JV1080_SPLIT   } ,    /*  El. Piano */
 {    0, InChan0,  0, 0, "NoName", 56,127, -24,  Chan3,  127, 1,VolCtr1, ModulationOff, 0, MNUMBER_JV1080_SPLIT   } ,    /*  El. Piano */
 {    0, InChan0,  0, 0, "NoName",  0,127,  0,   Chan4,  127, 0,VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT   } ,
 {    0, InChan0,  0, 0, "NoName",  0,127,  0,   Chan5,  127, 0,VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT   } ,
 {    0, InChan0,  0, 0, "NoName",  0,127,  0,   Chan6,  127, 0,VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT   } ,
 {    0, InChan0,  0, 0, "NoName",  0,127,  0,   Chan7,  127, 0,VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT   } ,
 {    0, InChan0,  0, 0, "NoName",  0,127,  0,   Chan8,  127, 0,VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT   } ,
 {    0, InChan0,  0, 0, "NoName",  0,127,  0,   Chan9,  127, 0,VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT   } ,
 {    0, InChan0,  0, 0, "NoName",  0,127,  0,   Chana,  127, 0,VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT   } ,
 {    0, InChan0,  0, 0, "NoName",  0,127,  0,   Chanb,  127, 0,VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT   } ,
 {    0, InChan0,  0, 0, "NoName",  0,127,  0,   Chane,  127, 0,VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT   } ,
 {    0, InChan0,  0, 0, "NoName",  0,127,  0,   Chanf,  127, 0,VolCtr2, ModulationOff, 0, MNUMBER_JV1080_SPLIT   } },
	MNUMBER_JV1080_SPLITS
};

t_instrument TestSong_xxyyList[] = 
{
   { 1, (t_splits_jv1080 *)&TestSong_xxyy0, (t_splits_jx8p *)NULL, (t_splits_z4 *)NULL },
   { 1, (t_splits_jv1080 *)&TestSong_xxyy1, (t_splits_jx8p *)NULL, (t_splits_z4 *)NULL },
   { 1, (t_splits_jv1080 *)&TestSong_xxyy0, (t_splits_jx8p *)NULL, (t_splits_z4 *)NULL },
   { 1, (t_splits_jv1080 *)&TestSong_xxyy1, (t_splits_jx8p *)NULL, (t_splits_z4 *)NULL },
   { 1, (t_splits_jv1080 *)&TestSong_xxyy0, (t_splits_jx8p *)NULL, (t_splits_z4 *)NULL },
   { 1, (t_splits_jv1080 *)&TestSong_xxyy2, (t_splits_jx8p *)NULL, (t_splits_z4 *)NULL },
   { 0, (t_splits_jv1080 *)NULL           , (t_splits_jx8p *)NULL, (t_splits_z4 *)NULL },
};
	

t_song_xxyy xxxxxxApresUnPas_xxyySong = { 
   "ApresUnPas",
   "ApresUnPas",
   (t_instrument*)&TestSong_xxyyList,
   { 31 }, { 0xffffffffUL }, { 0xffffffffUL }, 
};

t_song_xxyy TestSong = { 
   "TestSong",
   "",
   (t_instrument*)&TestSong_xxyyList,
   { 1 }, { 0xffffffffUL }, { 0xffffffffUL }, 
};

t_song_xxyy *Song_xxyyList[128];

const t_song_xxyy *Song_xxyyzzList[128]=
{
   ((t_song_xxyy*) &ApresUnPas_xxyySong),
   ((t_song_xxyy*) &LArbre_xxyySong),
   ((t_song_xxyy*) &DerFall_xxyySong),
   ((t_song_xxyy*) &EpilogEins_xxyySong),
   ((t_song_xxyy*) &LaCreature_xxyySong),
   ((t_song_xxyy*) &Moeurs_xxyySong),
   ((t_song_xxyy*) &Larmada_xxyySong),
   ((t_song_xxyy*) &Jugement_DernierPas_DernierMot_Song),
   ((t_song_xxyy*) &Prison_xxyySong),
   ((t_song_xxyy*) &JeRevole_xxyySong),
   ((t_song_xxyy*) &Welt3_Phas_xxyySong),
   ((t_song_xxyy*) &Welt3_xxyySong),
   ((t_song_xxyy*) &LaMain_xxyySong), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ),
   ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ),
   ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ),
   ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ),
   ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ),
   ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ),
   ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ),
   ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 ), ((t_song_xxyy*) 0 )
  
};

/* TestSong ------------------------------------------------------------------------------------------------- */

#if (MACHINE==ATARI)
   #include "mkbrsc.h"
#endif

/*#define Midiws Midiwsx*/

/* -------------------------------------------------------------------- */
/*       Konstantendefinitionen.                                        */
/* -------------------------------------------------------------------- */
#define RSC_NAME			"MKBRSC.RSC"
#define ME_HIDE            0
#define ME_SHOW            1
#define ME_NORM            1
#define EV_KIND               MU_MESAG|MU_TIMER|MU_KEYBD


/* -------------------------------------------------------------------- */
/*       Globale Variablen.                                             */
/* -------------------------------------------------------------------- */

struct actval_struct {
   t_uint8    SongProgrammNr;
   t_uint8    SplitNr;
   t_uint8    Last_SongProgrammNr;
   t_uint8    Last_SplitNr;
   t_uint8    GPMidiCommand;
   t_uint8    GPMidiChannel;
   t_uint8    GPPgmNr;
   t_uint8    GPTonKeyNr;
   t_uint8    GPTonVel;
   t_uint8    GPCtrlNr;
   t_uint8    GPCtrlVal;
   t_uint32   pgmswitch;
   t_uint32   pressedkeys;
   t_uint8    Volume;
   t_uint32   SingleChan;
} ACTVALUE = { 0x40, 0,0,0,0,0,0,0,0,0,0,0,0, 100, 0};


int   Ctrl0=127,   /* CTRL 1 Lautstaerke default */
      Ctrl32=127,  /* CTRL 2 Lautstaerke default */
      Ctrl86=0;    /* CTRL 3 */
int   DebugMode=0;
int   use_kbhit=0;
char  ShowPgm=0;
char  SetupInc=0;  /* Fuer Statemachine Increment Setup ueber Ctrl. 110*/
int   VolTab[128];
int   VolTab2[128];
int   VolTab3[128];
static uint8_t midi_buffer[1024];

#if (MACHINE==ATARI)
   OBJECT *M_tree, *TmDat_Obj, *TsDat_Obj, *Help1_Obj, *M_obj;
#endif

struct fts {
   char filename[40];
   size_t filesize;
   size_t received;
   FILE   *fp;
} FT;

struct t_songp {
   int      SongCount; /* Anzahl Songs */
   int      SongAct;   /* Aktuelle SongNr */
   int      SplitAct;  /* Aktuelle SplitNr */
   struct   t_splits   **Liste; /* Zeiger auf Splitliste */
   struct   t_splits   *Splits; /* Zeiger auf aktuelle Splitsstruct */
} SongParam;


/* -------------------------------------------------------------------- */
/*       Funktionsprototypen.                                           */
/* -------------------------------------------------------------------- */

int CmdCtrl(char cmd, char ctrlnr, char ctrlval);
int CmdPgm(char  cmd, t_uint8 pgmnr, PgmChangeType change);
int CmdPgmNext(PgmChangeType typ);
int CmdPgmJV1080Perf(char pgmnr);
int kbhit( void );



struct t_song* GetSongPtr(void);
struct t_song* GetSongPtr(void)
{
   return(SongListe[SongParam.SongAct]);
}

struct t_split* GetSplitPtr(int index);
struct t_split* GetSplitPtr(int index)
{
   return(&(SongParam.Splits->split[index]));
}

struct t_splitpgm* GetSplitPgmPtr(int index);
struct t_splitpgm* GetSplitPgmPtr(int index)
{
   return(&(SongListe[SongParam.SongAct]->splitpgm[index]));
}

/* Defines fuer SetSongParam-Funktionen */

#define IncSongNr 1
#define DecSongNr 2
#define IncSplitNr 3
#define SetSongNr 4

void SetSongParam(struct t_songp *sp, int func, int val);
void SetSongParam(struct t_songp *sp, int func, int val)
{
   switch(func)
   {
      /* SongAct +1 */
      case IncSongNr:
         if (sp->SongAct < sp->SongCount-1) sp->SongAct += 1;
         sp->Splits=SongListe[val]->next_splits[0];
         sp->SplitAct=0;
         sp->Liste = &SongListe[sp->SongAct]->next_splits[0];
         sp->Splits = *sp->Liste;
      break;
      /* SongAct -1 */
      case DecSongNr:
         if (sp->SongAct > 0) sp->SongAct -= 1;
         sp->Splits=SongListe[val]->next_splits[0];
         sp->SplitAct=0;
         sp->Liste = &SongListe[sp->SongAct]->next_splits[0];
         sp->Splits = *sp->Liste;
      break;

      /* Split +1 */
      case 3:
         if (SongListe[sp->SongAct]->next_splits[sp->SplitAct+1] != 0) sp->SplitAct+=1;
         sp->Liste = &SongListe[sp->SongAct]->next_splits[sp->SplitAct];
         sp->Splits = *sp->Liste;
      break;

      /* Setze Songpointer auf Song Nr. "val" */
      case SetSongNr:
         if (sp->SongCount > val)
         {
            sp->SongAct = val;
            sp->Splits=SongListe[val]->next_splits[0];
            sp->SplitAct=0;
            sp->Liste = &SongListe[sp->SongAct]->next_splits[0];
            sp->Splits = sp->Liste[sp->SplitAct];
         }
      break;
      default:
      break;
   }
}

void PShowSetup(void);

#ifdef NIE
void AllNotesOff(UINT8 controller);
void AllNotesOff(UINT8 controller)
{
   int i;
   unsigned char c1[20];

   /* Conroller Reset */
   c1[1]=controller;
   c1[2]=0x0;
   for(i=0; i<16; i++)
   {
      c1[0]=0xb0+i;
      MidiShortMSG_Send( ((UINT32)c1[0]) | (((UINT32)c1[1])<<8) | (((UINT32)c1[2])<<16) );
      if(DebugMode > 0)
         printf("AllNotesOff 0x%02x\n",controller);
   }
}
#endif

int GetVolumeTab(void);
int GetVolumeTab()
{
#if (MACHINE==GNU_PC)
   FILE *fp;
   UINT32 i;
   if((fp=fopen("voltab.txt","r")) == NULL)
      return(-5);
   for(i=0; i<128; i++)
      fscanf(fp,"%d\n",&VolTab2[i]);
   fclose(fp);
#endif
   return(0);
}

int InitVolumeTab(void);
int InitVolumeTab()
{
   unsigned int i,j;
   struct { unsigned char x; unsigned char y;} 
		VolStr2[] = {{0,50}, {40,55}, {70,82}, {100,95}, {100,127}, {127,127}}; 
	struct { unsigned char x; unsigned char y;} 
		VolStr3[] = {{0,50}, {40,55}, {70,85}, {95,105}, {105,127}, {127,127}}; 
	int MinVol=0;
	double y,yincr;

	for(i=0; i<128; i++)
	{
		VolTab[i]=(int)(1.0*MinVol+((127.0-1.0*MinVol)/127.0)*i);
	}
	VolTab[0]=0;

	/* P50 */
	for(i=0; i<(sizeof(VolStr2)/2)-1; i++)
	{
		yincr = 1.0*(VolStr2[i+1].y-VolStr2[i].y)/(VolStr2[i+1].x-VolStr2[i].x);
		y = VolStr2[i].y;
		for(j=VolStr2[i].x; j<=VolStr2[i+1].x; j++)
		{	VolTab2[j]=(int)y;
			y+=yincr;
		}
	}

	/* JV1080 */
	for(i=0; i<(sizeof(VolStr3)/2)-1; i++)
	{
		yincr = 1.0*(VolStr3[i+1].y-VolStr3[i].y)/(VolStr3[i+1].x-VolStr3[i].x);
		y = VolStr3[i].y;
		for(j=VolStr3[i].x; j<=VolStr3[i+1].x; j++)
		{	VolTab3[j]=(int)y;
			y+=yincr;
		}
	}

	/* Standard */
	for(i=0; i<128; i++)
	{
/* Start mit Volume 40
		if(i<20)
			VolTab2[i]=40;
		else if(i<70)
			VolTab2[i]=(int)((i-20)*(107.0/100.)+40);
		else if(i<100)
			VolTab2[i]=(int)((i-40)*(87.0/60.)+40);
		else
			VolTab2[i]=127;
*/
/* 1:1 Tabelle */
/*			VolTab2[i]=i;
*/
/* 1:1 Tabelle */
			VolTab2[i]=i*i/127;
	}
	VolTab2[0]=0;


	return(0);
}

void SetVolume(void);
void SetVolume()
{
   unsigned char	c1[3], volindex;
   int		i;
   int		_volume;
   UINT32 MidiMsg;

   if (ACTVALUE.SongProgrammNr>63)
   {
      t_splits_jv1080 *act_jv1080;

      act_jv1080 = (Song_xxyyList[(int)ACTVALUE.SongProgrammNr])->instrument[(int)ACTVALUE.SplitNr].JV1080;
      if (NULL != act_jv1080)
      {
         for (i=0; i<16; i++)
         {
            if (act_jv1080->split_xxyy[i].swtch > 0)
            {
               if (act_jv1080->split_xxyy[i].VolCtr == VolCtr1)
                  _volume=(int)Ctrl32;
               else
                  _volume=(int)Ctrl0;
               c1[0]=0xb0 | act_jv1080->split_xxyy[i].outchan;
               c1[1]=7;
               c1[2]= (char) (((int)ACTVALUE.Volume * (int)(act_jv1080->split_xxyy[i].volume)) >> 7);
               c1[2]= (char) (((int)c1[2] * _volume) >> 7);
               volindex=c1[2];
               c1[2]=VolTab[volindex];
               MidiMsg = ((UINT32)c1[0]) | (((UINT32)c1[1])<<8) | (((UINT32)c1[2])<<16);
               MidiShortMSG_Send( MidiMsg );
               #if (SW_DEBUG==SW_ON)
                  if(DebugMode > 0)
                     printf("OUT: SetVolume: %02xH %02xH %02xH\n",(unsigned char)c1[0], (unsigned char)c1[1], (unsigned char)c1[2]);
               #endif
            }
         }
      }
   }
   else
   {
   /* struct t_song *Song;*/
      struct t_split  *Spl;
   /* struct  t_splitpgm *SPP;*/
      for (i=0; i<16; i++)
      { Spl = GetSplitPtr(i);
         if (Spl->swtch > 0)
         {
            if (Spl->VolCtr == VolCtr1)
               _volume=(int)Ctrl32;
            else
               _volume=(int)Ctrl0;
            c1[0]=0xb0 | Spl->outchan;
            c1[1]=7;
            c1[2]= (char) (((int)ACTVALUE.Volume * (int)(Spl->volume)) >> 7);
            c1[2]= (char) (((int)c1[2] * _volume) >> 7);
            volindex=c1[2];
            c1[2]=VolTab[volindex];
            MidiMsg = ((UINT32)c1[0]) | (((UINT32)c1[1])<<8) | (((UINT32)c1[2])<<16);
            MidiShortMSG_Send( MidiMsg );
            #if (SW_DEBUG==SW_ON)
               if(DebugMode > 0)
                  printf("OUT: SetVolume: %02xH %02xH %02xH\n",(unsigned char)c1[0], (unsigned char)c1[1], (unsigned char)c1[2]);
            #endif
         }
      }
   }
}


int CmdTon(char cmd, char tonton, char tonvel);
int CmdTon(char cmd, char tonton, char tonvel)
{
   int i;
   static unsigned char c1[128];
#if (MACHINE==ATARI)
   char sp_text[1024];
#endif
	char    val1, val2;
	struct	t_split 	*Spl;
   
   UINT32 MidiMsg;

    val1=tonton;
    val2=tonvel;
/*
    val1=GetMidiByte();
    val2=GetMidiByte();
*/

/* Programmweiterschaltung Ersatz fuer Fusstaster Ctrl 110 */

   if (val1 == C8)
   {
      AllNotesOff(0x7b);
      return(0);
   }

   if (ACTVALUE.SongProgrammNr>63)
   {
      t_split_jv1080  *Splxxyy;
      t_splits_jv1080 *lpLocSongSplits;
      t_song_xxyy     *loc_song;

/*      loc_song = (t_song_xxyy *)Song_xxyyList[(int)ACTVALUE.SongProgrammNr]; */
      loc_song = Song_xxyyList[(int)ACTVALUE.SongProgrammNr];

      if (loc_song != NULL)
      {
         lpLocSongSplits = (Song_xxyyList[(int)ACTVALUE.SongProgrammNr])->instrument[(int)ACTVALUE.SplitNr].JV1080;
#ifdef NIE1
         if (val1 == A0)
         {
            printf("CMDTON: Programm darf NIE hier her kommen -------------------------------------------------------------\n");
         }
#endif
#ifdef NIE1
         if (val1 == A0)
         {
            if (  (((cmd & 0xf0) == 0x90) && (val2 == 0x0))
               || ((cmd & 0xf0) == 0x80) )
            {  
               if (ACTVALUE.pressedkeys !=0)
                  ACTVALUE.pgmswitch=1;
               else
               {
/*                  if (0 != (Song_xxyyList[(int)ACTVALUE.SongProgrammNr])->instrument[(int)ACTVALUE.SplitNr+1].valid)
                     ACTVALUE.SplitNr+=1;
*/
                  CmdPgmNext(UP);
                  /* Lautstaerke schicken */
                  SetVolume();
                  #if (SW_DEBUG==SW_ON)
                  if(DebugMode > 0)
                     printf("CMDTON: Taste A0(Next Split): Name: %s; Nr: %d; Split: %d; PTR loc: %x\n", loc_song->pgmname, ACTVALUE.SongProgrammNr, ACTVALUE.SplitNr, (UINT32)lpLocSongSplits);
                  if(DebugMode>2)           
                  {
                     if (loc_song != NULL)
                     {
                        lpLocSongSplits = (Song_xxyyList[(int)ACTVALUE.SongProgrammNr])->instrument[(int)ACTVALUE.SplitNr].JV1080;
                        for (i=0; i<16; i++)
                        { Splxxyy = &(lpLocSongSplits->split_xxyy[i]);
                           if (Splxxyy->swtch > 0 )
                           {
                              printf("Next::::: Nr:%d Next:%d\n",i, (UINT32)Splxxyy->next);
                           }
                        }
                     }
                  }
                  #endif
               }
            }
         return(0);
      }
/* end A0 */
#endif

         if(Ctrl86 < 18)
         {
            for (i=0; i<16; i++)
            { Splxxyy = &(lpLocSongSplits->split_xxyy[i]);
               if ( (Splxxyy->swtch > 0 ) &&
                     (val1 >= Splxxyy->low) && 
                     (val1 <= Splxxyy->high) &&
                     (Splxxyy->InChan == (cmd & 0x0f) )   /* Eingangskanal ? */
                   )
               {
                  c1[0]=(cmd & 0xf0) | Splxxyy->outchan;
                     c1[1]=val1 + Splxxyy->transpose;
                  if (c1[1]<1) break;
                  if (c1[1]>126) break;
                  c1[2]= VolTab2[(int)val2];       /*  fuer P50 */
                  c1[2]= VolTab3[(int)val2];       /*  fuer Jv1080 */
                  c1[2]= val2;

                  MidiMsg = ((UINT32)c1[0]) | (((UINT32)c1[1])<<8) | (((UINT32)c1[2])<<16);
                  MidiShortMSG_Send( MidiMsg );
#if (SW_DEBUG==SW_ON)
                  if(DebugMode>0)
                     printf("OUT: CmdTonSplit: %02xH %02xH %02xH\n",(unsigned char)c1[0], (unsigned char)c1[1], (unsigned char)c1[2]);
#endif
/*
                  if(DebugMode>0)
                     printf("TON0: %3xH Ton: %3d Volin:%3d Volout: %3d\n",(unsigned char)c1[0], (unsigned char)c1[1], (unsigned char)val2, (unsigned char)c1[2]);
                  if(DebugMode > 1)
                     printf("TON1: Name: %s; Nr: %d; Split: %d; PTR loc: %x\n", loc_song->pgmname, ACTVALUE.SongProgrammNr, ACTVALUE.SplitNr, (UINT32)lpLocSongSplits);
*/
               }
            }

           if ( ((cmd & 0xf0) == 0x90) && (val2 != 0x0) )
       	   {
         	   ACTVALUE.pressedkeys++;
         	}
         	else
         	{
         	   if (ACTVALUE.pressedkeys > 0)
         	      ACTVALUE.pressedkeys--;
         	}
   
         	if( (DebugMode > 1) && (ACTVALUE.pgmswitch != 0) )
         	   printf("CMDTON: pressedKeys: %ld PgmSwitch %ld\n", ACTVALUE.pressedkeys, ACTVALUE.pgmswitch);
         	if ((ACTVALUE.pressedkeys==0) && (ACTVALUE.pgmswitch==1))
         	{
                   CmdPgmNext(UP);
                   SetVolume();
                   if(DebugMode > 0)
                      printf("CMDTON: Next Split delayed: Name: %s; Nr: %d; Split: %d\n", loc_song->pgmname, ACTVALUE.SongProgrammNr, ACTVALUE.SplitNr);
                   ACTVALUE.pgmswitch=0;
         	}
         }
         else
         {
            c1[0]=cmd;
            c1[1]=val1;
            c1[2]= val2;
            MidiMsg = ((UINT32)c1[0]) | (((UINT32)c1[1])<<8) | (((UINT32)c1[2])<<16);
            MidiShortMSG_Send( MidiMsg );
            #if (SW_DEBUG==SW_ON)
               if(DebugMode>0)           
                  printf("CmdTonDirect: %3xH Ton: %3d Volin:%3d Volout: %3d\n",(unsigned char)c1[0], (unsigned char)c1[1], (unsigned char)val2, (unsigned char)c1[2]);
           #endif
	 }

      }
      return(0);
   }

/* end new xxyy */


#ifdef NIE
   /*case 110:*/
      if (    ((cmd & 0xf0) == 0x90) && (val2!=0x0)
           || ((cmd & 0xf0) == 0x80) 
         )
      {
         SetupInc=0;
         return(0);
      }
#endif

   if (val1 == A0)
   {
      if ((((cmd & 0xf0) == 0x90) && (val2 == 0x0))
         || ((cmd & 0xf0) == 0x80) )
      {
         if (ACTVALUE.pressedkeys !=0)
            ACTVALUE.pgmswitch=1;
         else
/*       if ((val2==0x0) && (SetupInc==0))*/
         {
            SetSongParam(&SongParam, IncSplitNr, 0);

            if(SongParam.Splits->notesoffsw == ALLNOTES_OFF)
               AllNotesOff(0x7b);
/*            Song = GetSongPtr();*/

            if((SongParam.Splits->splitval)==SPLITVAL)
               ;
            if((NULL != SongParam.Splits->perfcomm))
               Put1080PerfCommon(SongParam.Splits->perfcomm, SongParam.Splits->perfcommon);

            /* Lautstaerke schicken */
            SetVolume();
#ifdef NIE
            for (i=0; i<16; i++)
            { SPP = GetSplitPgmPtr(i);
               if(   SPP->swtch == 1)
               {
                  c1[0]=0xb0 | Song->splitpgm[i].chan;
                  c1[1]=7;
                  c1[2]= (char) ((int)ACTVALUE.Volume * (int)(SongParam.Splits->split[i].volume) >> 7);
                  #if (MACHINE==GNU_PC)
                     MidiShortMSG_Send( ((UINT32)c1[0]) | (((UINT32)c1[1])<<8) | (((UINT32)c1[2])<<16) );
                     printf("CmdTon: %3xH Ton: %3d Volin:%3d Volout: %3d\n",(unsigned char)c1[0], (unsigned char)c1[1], (unsigned char)val2, (unsigned char)c1[2]);
                  #endif
                  #if (MACHINE==ATARI)
                     Midiws(2,c1);
                  #endif
               }
            }
#endif

         PShowSetup();
         }
      }
      return(0);
   }


   if (val1 == C8)
   {
      AllNotesOff(0x7b);
      return(0);
   }
#ifdef NIE
   { 
      c1[1]=0x7b;
      c1[2]=0x0;
      for(i=0; i<16; i++)
      {
         c1[0]=0xb0+i;
         Midiws(2,c1);
      }
      return(0);
   }
#endif 

   if ( ((cmd & 0xf0) == 0x90) && (val2 != 0x0) )
      ACTVALUE.pressedkeys++;
   else
   {
      if (ACTVALUE.pressedkeys > 0)
         ACTVALUE.pressedkeys--;
   }

   if ((ACTVALUE.pressedkeys==0) && (ACTVALUE.pgmswitch==1))
   {
      ACTVALUE.pgmswitch=0;
      SetSongParam(&SongParam, IncSplitNr, 0);

      if(SongParam.Splits->notesoffsw == ALLNOTES_OFF)
         AllNotesOff(0x7b);

      if((SongParam.Splits->splitval)==SPLITVAL)
         ;
      if((SongParam.Splits->perfcomm)!=NULL)
         Put1080PerfCommon(SongParam.Splits->perfcomm, SongParam.Splits->perfcommon);

      /* Lautstaerke schicken */
      SetVolume();
#ifdef NIE
      for (i=0; i<16; i++)
      {  SPP = GetSplitPgmPtr(i);
         if(	SPP->swtch == 1)
         {
            c1[0]=0xb0 | Song->splitpgm[i].chan;
            c1[1]=7;
            c1[2]= (char) ((int)ACTVALUE.Volume * (int)(SongParam.Splits->split[i].volume) >> 7);
            Midiws(2,c1);
         }
      }
#endif

      PShowSetup();
   }

   if(Ctrl86 < 18)
   {
      for (i=0; i<16; i++)
      { Spl = GetSplitPtr(i);
         if (  (Spl->swtch > 0 ) &&
               (val1 >= Spl->low) && 
               (val1 <= Spl->high) &&
               (Spl->InChan == (cmd & 0x0f) )   /* Eingangskanal ? */
            )
         {
            c1[0]=(cmd & 0xf0) | Spl->outchan;
               c1[1]=val1 + Spl->transpose;
            if (c1[1]<1) break;
            if (c1[1]>126) break;
            c1[2]= val2;
            c1[2]= VolTab2[(int)val2];       /*  fuer P50 */
            c1[2]= VolTab3[(int)val2];       /*  fuer JV1080 */

            MidiMsg = ((UINT32)c1[0]) | (((UINT32)c1[1])<<8) | (((UINT32)c1[2])<<16);
            MidiShortMSG_Send( MidiMsg );
#if (SW_DEBUG==SW_ON)
            if( (DebugMode>0) && (0x90 == (cmd & 0xf0)) )
                printf("CmdTonTab: %3xH Ton: %3d Volin:%3d Volout: %3d\n",(unsigned char)c1[0], (unsigned char)c1[1], (unsigned char)val2, (unsigned char)c1[2]);
            if( (DebugMode>1) && (0x80 == (cmd & 0xf0)) )
                printf("CmdTonTab: %3xH Ton: %3d Volin:%3d Volout: %3d\n",(unsigned char)c1[0], (unsigned char)c1[1], (unsigned char)val2, (unsigned char)c1[2]);
            if(DebugMode>2)           
                printf("%3xH Ton: %3d Volin:%3d Volout: %3d\n",(unsigned char)c1[0], (unsigned char)c1[1], (unsigned char)val2, (unsigned char)c1[2]);
#endif
         }
      }
   }
   else
   {
      c1[0]=cmd;
      c1[1]=val1;
      c1[2]= val2;
#if (MACHINE==GNU_PC)
         MidiMsg = ((UINT32)c1[0]) | (((UINT32)c1[1])<<8) | (((UINT32)c1[2])<<16);
         MidiShortMSG_Send( MidiMsg );
         printf("CmdTonDir: %3xH Ton: %3d Volin:%3d Volout: %3d\n",(unsigned char)c1[0], (unsigned char)c1[1], (unsigned char)val2, (unsigned char)c1[2]);
#endif
#if (MACHINE==ATARI)
         Midiws(2,c1);
#endif
   }
/*      Cis
   if (DebugMode==1)
   { int w_handle, obj_index;
      if((obj_index=GetObjIndex(TSDAT)) >= 0)
      {  w_handle=GetWindowHandle(obj_index);
         if(w_handle > 0)
         {  sprintf(c1,"#pressedkeys: %3d",pressedkeys);
            write_terminal(c1);
            do_redraw(w_handle,0,0,0,0 );
         }
      }
   }
*/
#if (MACHINE==ATARI)
   if (DebugMode==1)
   { int w_handle, obj_index;
      if((cmd & 0xf0)==0x90)
      {
         if((obj_index=GetObjIndex(TSDAT)) >= 0)
         {  w_handle=GetWindowHandle(obj_index);
            if(w_handle > 0)
            {  sprintf(sp_text,"%3xH Ton: %3d Volin:%3d Volout: %3d",(unsigned char)cmd, (unsigned char)val1, (unsigned char)val2, (unsigned char)VolTab2[val2]);
               write_terminal(sp_text);
               do_redraw(w_handle,0,0,0,0 );
            }
         }
      }
   }
#endif


    return(0);
}

#ifdef NIE
   char c1[128];
   char val1, val2;

    val1=GetMidiByte();
    val2=GetMidiByte();
   if( DebugMode > 0)
      printf("%2x %2x (%3d) %2x (%3d)\n",(unsigned char)cmd, val1, val1, val2, val2);
   {
      char cf[40];
      sprintf(cf,"%2x%3x (%3d)%3x (%3d)",(unsigned char)cmd, val1, val1, val2, val2);
      outtextxy(100,19*16,cf);
      rectangle(99,19*16,261,20*16);
   }

   SetupInc=val1;   /* Fuer Statemachine Increment Setup ueber Ctrl. 110*/

   for (i=0; i<16; i++)
   {
      if ( (Song->chanpgm[i].swtch > 0 ) &&
           (val1 >= Song->chanpgm[i].low) && 
           (val1 <= Song->chanpgm[i].high)
         )
      {
         c1[0]=(cmd & 0xf0) | Song->chanpgm[i].outchan;
            c1[1]=val1 + Song->chanpgm[i].transpose;
         if (c1[1]<1) break;
         if (c1[1]>126) break;
         c1[2]= val2;
         Midiws(2,c1);
      }
   }
   return(0);
}
#endif

void PShowSetup(void);
void PShowSetup()
{
#if (MACHINE==ATARI)
   int   i;
   char  cf[200];
#endif
   struct t_song *Song;

/* Song=GetSongPtr();  */
   Song=SongListe[SongParam.SongAct];

#if (MACHINE==ATARI)
   if (ShowPgm >= 1)
   {
      sprintf(cf," LMK4 Programmnummer %3d, %26.20s",SongParam.SongAct,Song->pgmname);
      write_terminal(cf);
      sprintf(cf," %d %d %d %d",
         Song->jv1080_panelmode,
         Song->jv1080_bank0,
         Song->jv1080_bank32,
         Song->jv1080_pgm);
      write_terminal(cf);
   }
   if (ShowPgm >= 1)
   {
      sprintf(cf," +- swtch -+- bank0 -+- bnk32 -+-- pgm --+-- chan -+");
      write_terminal(cf);
      for(i=0; i<16; i++)
      {
         if(Song->splitpgm[i].swtch != 0)
         {
            sprintf(cf," |%7d  |%7d  |%7d  |%7d  |%7d  |",
               Song->splitpgm[i].swtch,
               Song->splitpgm[i].pgmbank0, 
               Song->splitpgm[i].pgmbank32,
               Song->splitpgm[i].pgm,
               Song->splitpgm[i].chan);
            write_terminal(cf);
         }
      }
      sprintf(cf," +---------+---------+---------+---------+---------+");
      write_terminal(cf);
      
   }
#endif
}

int CmdCtrl(char cmd, char ctrlnr, char ctrlval)
{
   unsigned char c1[128];
#if (MACHINE==ATARI)
   char sp_text[1024];
#endif
   int i;
   char    val1, val2;
   struct  t_split *Spl;

   val1=ctrlnr;
   val2=ctrlval;

#if (MACHINE==ATARI)
   if (DebugMode==1)
   {	int w_handle, obj_index;
      if((obj_index=GetObjIndex(TSDAT)) >= 0)
      { w_handle=GetWindowHandle(obj_index);
         if(w_handle > 0)
         { sprintf(sp_text,"%3x %3x %3x",(unsigned char)cmd, (unsigned char)val1, (unsigned char)val2);
            write_terminal(sp_text);
            do_redraw(w_handle,0,0,0,0 );
         }
      }
   }
#endif

#ifdef NIE
   if(DebugMode > 0)
      printf("%2x %2x %2x (%3d)\n",(unsigned char)cmd, val1, val2, val2);
   {
      char cf[20];
      sprintf(cf,"%2x%3x%3x (%3d)",(unsigned char)cmd, val1, val2, val2);
      outtextxy(100,20*16,cf);
      rectangle(99,20*16,213,21*16);
   }
#endif
   switch(val1)
   {
   case 0:
      c1[0]=cmd;
      c1[1]=val1;
      c1[2]=val2;
      #if (MACHINE==GNU_PC)
         MidiShortMSG_Send( ((UINT32)c1[0]) | (((UINT32)c1[1])<<8) | (((UINT32)c1[2])<<16) );
         if(DebugMode > 0)
            printf("OUT: CmdCtrl0: %02xH %02xH %02xH\n",(unsigned char)c1[0], (unsigned char)c1[1], (unsigned char)c1[2]);
      #endif
      #if (MACHINE==ATARI)
         Midiws(2,c1);
      #endif
      Ctrl0=val2;
      SetVolume();
      break;
   case 32:
      c1[0]=cmd;
      c1[1]=val1;
      c1[2]=val2;
      #if (MACHINE==GNU_PC)
         MidiShortMSG_Send( ((UINT32)c1[0]) | (((UINT32)c1[1])<<8) | (((UINT32)c1[2])<<16) );
         if(DebugMode > 0)
            printf("OUT: CmdCtrl32: %02xH %02xH %02xH\n",(unsigned char)c1[0], (unsigned char)c1[1], (unsigned char)c1[2]);
      #endif
      #if (MACHINE==ATARI)
         Midiws(2,c1);
      #endif
      Ctrl32=val2;
      SetVolume();
      break;
   case 86:
      {
         static int   Ctrl86Flag=0;
         c1[0]=cmd;
         c1[1]=val1;
         c1[2]=val2;
         #if (MACHINE==GNU_PC)
            MidiShortMSG_Send( ((UINT32)c1[0]) | (((UINT32)c1[1])<<8) | (((UINT32)c1[2])<<16) );
            printf("CmdCtrl86 ???: %3xH Ton: %3d Volin:%3d Volout: %3d\n",(unsigned char)c1[0], (unsigned char)c1[1], (unsigned char)val2, (unsigned char)c1[2]);
         #endif
         #if (MACHINE==ATARI)
            Midiws(2,c1);
         #endif
         Ctrl86Flag |= val2 > 120;
         if (Ctrl86Flag != 0)
            Ctrl86=val2;
      }
      break;
   case 7:               /* Volume */
      ACTVALUE.Volume=val2;
      SetVolume();
#ifdef NIE
      for (i=0; i<16; i++)
      {  Spl = GetSplitPtr(i);
         if (Spl->swtch > 0)
         {
            c1[0]=(cmd & 0xf0) | Spl->outchan;
            c1[1]=val1;
            c1[2]= (char) (((int)val2 * (int)(Spl->volume)) >> 7);
            c1[2]= (char) (((int)c1[2] * (int)Ctrl32) >> 7);
            Midiws(2,c1);
         }
      }
#endif
      break;
   /* END CASE 7 */

   case 64:            /* Sustain */
      if (ACTVALUE.SongProgrammNr>63)
      {
         t_splits_jv1080 *lpLocSongSplits;
         t_song_xxyy     *loc_song;
         #if (MACHINE==GNU_PC)
            UINT32          MidiMsg;
         #endif
         loc_song = Song_xxyyList[(int)ACTVALUE.SongProgrammNr];
  
         if (loc_song != NULL)
         {
            lpLocSongSplits = (Song_xxyyList[(int)ACTVALUE.SongProgrammNr])->instrument[(int)ACTVALUE.SplitNr].JV1080;
            for (i=0; i<16; i++)
            {
               if (lpLocSongSplits->split_xxyy[i].swtch > 0)
               {
                  switch(lpLocSongSplits->split_xxyy[i].ctrltype0)
                  {
                     case SustModeNop:
                        break;
                     case SustModeSust:
                        c1[0]=0xb0 | lpLocSongSplits->split_xxyy[i].outchan;
                        c1[1]=ACTVALUE.GPCtrlNr;
                        c1[2]=ACTVALUE.GPCtrlVal;
                        break;
                     case SustModeRot:
                        c1[0]=0xb0 | JV1080_CTRL_CHAN;
                        c1[1]=0x10;
                        c1[2]=ACTVALUE.GPCtrlVal;
                        break;
                     default:
                        c1[0]=0xb0 | lpLocSongSplits->split_xxyy[i].outchan;
                        c1[1]=ACTVALUE.GPCtrlNr;
                        c1[2]=ACTVALUE.GPCtrlVal;
                        break;
                  }
               }
            }
            if(DebugMode > 0)
               printf("IN: CTRL64: Name: %s; CtrlNr: %d; Value: %d\n", loc_song->pgmname, ACTVALUE.GPCtrlNr, ACTVALUE.GPCtrlVal);
            for (i=0; i<16; i++)
            {
               if (lpLocSongSplits->split_xxyy[i].swtch > 0)
               {
                  switch(lpLocSongSplits->split_xxyy[i].ctrltype0)
                  {
                     case SustModeNop:
                        break;
                     case SustModeSust:
                     case SustModeRot:
                        #if (MACHINE==GNU_PC)
                           MidiMsg = ((UINT32)c1[0]) | (((UINT32)c1[1])<<8) | (((UINT32)c1[2])<<16);
                           MidiShortMSG_Send( MidiMsg );
                           if(DebugMode > 0)
                              printf("OUT: CTRL64: %08lx = %02x %02x %02x\n", MidiMsg, (t_uint8)(MidiMsg&0xff), (t_uint8)((MidiMsg>>8)&0xff), (t_uint8)((MidiMsg>>16)&0xff) );
                        #endif
                        #if (MACHINE==ATARI)
                           Midiws(2,c1);
                        #endif
                        break;
                     default:
                        break;
                  }
               }
            }
         }
      }
      else
      {
/* Volume=val2; 5.5.1997 entfernt */
         for (i=0; i<16; i++)
         {  Spl = GetSplitPtr(i);
            if (Spl->swtch > 0)
            {
               switch(Spl->ctrltype0)
               {
                  case 0:
                     break;
                  case 1:
                     c1[0]=(cmd & 0xf0) | Spl->outchan;
                     c1[1]=val1;
                     c1[2]=val2;
#if (MACHINE==ATARI)
                     Midiws(2,c1);
#endif
		     break;
                  case 2:
                     c1[0]=(cmd & 0xf0) | Spl->outchan;
                     c1[1]=1;   /* Mod. Wheel (1)*/
                     c1[2]=(val2>64)*127;
#if (MACHINE==ATARI)
                     Midiws(2,c1);
#endif
		     break;
                  default:
                     break;
               }
            }
         }
      }
      break;
   /* END CASE 64 */

#define SW_110_OK
#ifdef SW_110_OK
   case 110:

      if (ACTVALUE.SongProgrammNr>63)
      {
         if (val2==0x0)
         {
            if (ACTVALUE.pressedkeys !=0)
               ACTVALUE.pgmswitch=1;
            else
            {
               CmdPgmNext(UP);
               /* Lautstaerke schicken */
               SetVolume();
            }
         }
      }
      else
      {
         if (val2==0x7f)
         {
            SetupInc=0;
            break;
         }

         if ((val2==0x0) && (SetupInc==0))
         {
            SetSongParam(&SongParam, IncSplitNr, 0);
            if((SongParam.Splits->splitval)==SPLITVAL)
               ;
            if((SongParam.Splits->perfcomm)!=NULL)
               Put1080PerfCommon(SongParam.Splits->perfcomm, SongParam.Splits->perfcommon);

            SetVolume();

            PShowSetup();
         }
      }
      break;
   /* END CASE 110 */
#endif
   case 123:      /* All Notes Off wegen Abschalten bei Betrieb
                  mit JX8P */
   break;

   default:
      MidiShortMSG_Send( ((UINT32)cmd) | (((UINT32)ctrlnr)<<8) | (((UINT32)ctrlval)<<16) );
      if(DebugMode > 0)
         printf("OUT: CmdCtrl: Default: %02xH %02xH %02xH\n",(unsigned char)cmd, (unsigned char)ctrlnr, (unsigned char)ctrlval);
      break;
   }

   return(0);
}

int CmdPgmJV1080Perf(char pgmnr)
{
   static int ind;
   struct spc {UINT32 c0; UINT32 c32;} bp[]={{80,0},{81,0},{81,1},{81,2}};
   UINT32 midis;

   ind=0;
   if (pgmnr<96)  /* 3 Baenke a 32 */
      ind = pgmnr>>5;
   if(DebugMode > 1)
      printf("CmdPgmJV1080Perf: Nr: %d\n",pgmnr);      

   midis = 0xb0 | JV1080_CTRL_CHAN;
   midis |= 0<<8;
   midis |= (bp[ind].c0)<<16;
   MidiShortMSG_Send( midis );
   if(DebugMode > 2)
      printf("OUT: CmdPgmJV1080Perf: %lx\n",midis);

   midis = 0xb0 | JV1080_CTRL_CHAN;
   midis |= (32<<8);
   midis |= ((bp[ind].c32)<<16);
   MidiShortMSG_Send( midis );
   if(DebugMode > 2)
      printf("OUT: CmdPgmJV1080Perf: %lx\n",midis);

   midis = 0xc0 | JV1080_CTRL_CHAN;
   midis |= ((UINT32)pgmnr & 0x1f) << 8;
   MidiShortMSG_Send( midis );
   if(DebugMode > 2)
      printf("OUT: CmdPgmJV1080Perf: %lx\n",midis);


/* wird noch nicht gebraucht next=0
   if(DebugMode>3)
      if (loc_song != NULL)
      {
         lpLocSongSplits = (Song_xxyyList[(int)ACTVALUE.SongProgrammNr])->instrument[(int)ACTVALUE.SplitNr].JV1080;
         for (i=0; i<16; i++)
         {  Splxxyy = &(lpLocSongSplits->split_xxyy[i]);
            if (Splxxyy->swtch > 0 )
            {
               printf("Next::::: Nr:%d Next:%d\n",i, (UINT32)Splxxyy->next);
            }
         }
      }
*/
   return(0);
}


int CmdPgmNext(PgmChangeType typ)
{
	t_song_xxyy       *loc_song;
	t_splits_jv1080   *lpLocSongSplits;
	t_split_jv1080 	*Splxxyy;
	UINT32            perfnr, i, j;

   /* testen !!!!!!!!!!!!!!!!!! */
   if (NEW == typ)
   { /* Next Song */
      if(ACTVALUE.SongProgrammNr > 63)
      {

         ACTVALUE.SongProgrammNr += 1;
         ACTVALUE.SplitNr = 0;

         loc_song = Song_xxyyList[(int)ACTVALUE.SongProgrammNr];
         if(DebugMode > 0)
            printf("CmdPgmNext: Name: %s; PGM: %ld\n", loc_song->pgmname, loc_song->JV1080.pgmnr );

         if (0xffffffffUL == (perfnr = loc_song->JV1080.pgmnr))
            return(0);

         CmdPgmJV1080Perf(perfnr);
      }
   }

   if (DOWN == typ)
   { /* Down Split */
      if(0 < ACTVALUE.SplitNr)
      {
         ACTVALUE.SplitNr-=1;
      }
      else
      {
         if (ACTVALUE.SongProgrammNr > 64)
         {
            ACTVALUE.SongProgrammNr -= 1;
            for(j=0; 0 != ((Song_xxyyList[(int)ACTVALUE.SongProgrammNr])->instrument[(int)ACTVALUE.SplitNr+1].valid); j++)
               ACTVALUE.SplitNr=j;

            loc_song = Song_xxyyList[(int)ACTVALUE.SongProgrammNr];
            if(DebugMode > 0)
               printf("CmdPgmNext: Name: %s; PGM: %ld\n", loc_song->pgmname, loc_song->JV1080.pgmnr );

            if (0xffffffffUL == (perfnr = loc_song->JV1080.pgmnr))
               return(0);

            CmdPgmJV1080Perf(perfnr);

         }
      }
   }

   if (UP == typ)
   { /* Next Split */
         
      if (0 != (Song_xxyyList[(int)ACTVALUE.SongProgrammNr])->instrument[(int)ACTVALUE.SplitNr+1].valid)
      {
         ACTVALUE.SplitNr+=1;
      }
      else
      {
         if (NULL != (Song_xxyyList[(int)ACTVALUE.SongProgrammNr+1]))
         {
            /* Next split is in new song */
            ACTVALUE.SongProgrammNr += 1;
            ACTVALUE.SplitNr = 0;

            loc_song = Song_xxyyList[(int)ACTVALUE.SongProgrammNr];
            if(DebugMode > 0)
               printf("CmdPgmNext: Name: %s; PGM: %ld\n", loc_song->pgmname, loc_song->JV1080.pgmnr );

            if (0xffffffffUL == (perfnr = loc_song->JV1080.pgmnr))
               return(0);

            CmdPgmJV1080Perf(perfnr);
         }
         else
         {
            if(DebugMode > 0)
               printf("CmdPgmNext: Last Song in Chain\n");
            return(0);
         }
      }
   }
   if(DebugMode>3)
   {
      if (loc_song != NULL)
      {
         lpLocSongSplits = (Song_xxyyList[(int)ACTVALUE.SongProgrammNr])->instrument[(int)ACTVALUE.SplitNr].JV1080;
         for (i=0; i<16; i++)
         {	Splxxyy = &(lpLocSongSplits->split_xxyy[i]);
            if (Splxxyy->swtch > 0 )
            {
               printf("CmdPgmNext: Used Splits: %ld\n",i);
            }
         }
      }
   }
   return(0);
}


#define GKSysExID 1
int CmdPgm(char  cmd, t_uint8 pgmnr, PgmChangeType change)
{
/*	char c1[128];  */
   int	   i;
   struct  t_song *Song;
   struct  t_splitpgm *SPP;
   t_uint8 sysexbuffer[128];
   
   if (DebugMode > 1)
   {
      printf("CMDPGM: Start ********************************************\n");
      printf("CMDPGM: pgmnr: %02x\n", pgmnr);
   }
   if(pgmnr>63)
   {
      t_song_xxyy *loc_song;
/*
      t_split_jv1080  *Splxxyy;
      t_splits_jv1080 *lpLocSongSplits;
*/
      UINT32    perfnr;

      switch(change)
      {
         case NEW:
            loc_song = Song_xxyyList[pgmnr];
            if (NULL != loc_song)
            {
               ACTVALUE.SongProgrammNr = pgmnr;
               ACTVALUE.SplitNr = 0;

               if(DebugMode > 1)
                  printf("CMDPGM: NEW: Name: %s; Nr: %d; JV1080-PerfNr: %ld\n", loc_song->pgmname, ACTVALUE.SongProgrammNr, loc_song->JV1080.pgmnr );

               if (0xffffffffUL == (perfnr = loc_song->JV1080.pgmnr))
                  return(0);

               CmdPgmJV1080Perf(perfnr);
               SetVolume();
            }
            break;

         case UP:
      	   if (ACTVALUE.pressedkeys !=0)
      		   ACTVALUE.pgmswitch=1;
      	   else
      	   {
               CmdPgmNext(UP);
               /* Lautstaerke schicken */
               SetVolume();
      		   loc_song = Song_xxyyList[(int)ACTVALUE.SongProgrammNr];
      		   if(DebugMode > 1)
      		      printf("CMDPGM: UP: Name: %s; Nr: %d; Split: %d\n", loc_song->pgmname, ACTVALUE.SongProgrammNr, ACTVALUE.SplitNr);

/* wird noch nicht gebraucht next=0
      		   if(DebugMode>3)           
      	      {
      		      if (loc_song != NULL)
      		      {
      		         lpLocSongSplits = (Song_xxyyList[(int)ACTVALUE.SongProgrammNr])->instrument[(int)ACTVALUE.SplitNr].JV1080;
      		         for (i=0; i<16; i++)
      		         {	Splxxyy = &(lpLocSongSplits->split_xxyy[i]);
      		            if (Splxxyy->swtch > 0 )
      		            {
      		               printf("Next::::: Nr:%d Next:%d\n",i, (UINT32)Splxxyy->next);
      		            }
      		         }
      		      }
         	   }
*/
            }
            break;
         case DOWN:
            if (ACTVALUE.pressedkeys !=0)
         	   ACTVALUE.pgmswitch=1;
            else
            {
               CmdPgmNext(DOWN);
               /* Lautstaerke schicken */
               SetVolume();
         	   loc_song = Song_xxyyList[(int)ACTVALUE.SongProgrammNr];
         	   if(DebugMode > 1)
         	      printf("CMDPGM: DOWN: Name: %s; Nr: %d; Split: %d\n", loc_song->pgmname, ACTVALUE.SongProgrammNr, ACTVALUE.SplitNr);
            }
            break;
         default:
            break;
      }

      sysexbuffer[0]=0xf0;
      sysexbuffer[1]=GKSysExID;
      sysexbuffer[2]=(ACTVALUE.SongProgrammNr-64)/10;
      sysexbuffer[3]=(ACTVALUE.SongProgrammNr-64) % 10;
      sysexbuffer[4]=(ACTVALUE.SplitNr)/10;
      sysexbuffer[5]=ACTVALUE.SplitNr % 10;
      sysexbuffer[6]=0;
      sysexbuffer[7]=0;
      sysexbuffer[8]=0xf7;
      MidiLongMSG_Send(sysexbuffer, 9);
      
      if(DebugMode > 1) printf("CMDPGM: Name: %s; SongNr(Offset 64): %d; Split: %d\n", loc_song->pgmname, ACTVALUE.SongProgrammNr-64, ACTVALUE.SplitNr);
      if(DebugMode > 1) printf("CMDPGM: Ende 1 ********************************************\n");
      return(0);
   }


#ifdef NIE
	sprintf(c1,"%2x%3x (%3d)",(unsigned char)cmd, pgmnr, pgmnr);
	outtextxy(100,21*16,c1);
	rectangle(99,21*16,189,22*16);
#endif
#if (MACHINE==ATARI)
	if (DebugMode==1)
	{	int w_handle, obj_index;
		char c1[80];
		if((obj_index=GetObjIndex(TSDAT)) >= 0)
		{	w_handle=GetWindowHandle(obj_index);
			if(w_handle > 0)
			{	sprintf(c1,"%3x %3x\n",(unsigned char)cmd, (unsigned char)pgmnr);
            write_terminal(c1);
            do_redraw( 	w_handle,0,0,0,0 );
			}
		}
	}
#endif

    if (Ctrl86 > 18)
    {
		static unsigned char mc[20];
		static int ind;
		struct sbc {int c0; int c32;} bp[]={{80,0},{81,0},{81,1},{81,2},{81,3},{82,0},{82,0},{82,0},{82,0},{82,0},{82,0},{82,0},{82,0},{82,0}};

		SetJV1080PanelMode(JV1080PanelMode_Patch);

		ind=(Ctrl86-12) / 24;	/* 12 wegen fehlender Rundung */
		mc[0]=0xb0;
		mc[1]=0;
		mc[2]=bp[ind].c0;
		mc[3]=0xb0;
		mc[4]=32;
		mc[5]=bp[ind].c32;
		mc[6]=cmd;
		mc[7]=pgmnr;
		#if (MACHINE==GNU_PC)
		   MidiShortMSG_Send( ((UINT32)mc[0]) | (((UINT32)mc[1])<<8) | (((UINT32)mc[2])<<16) );
		   MidiShortMSG_Send( ((UINT32)mc[3]) | (((UINT32)mc[4])<<8) | (((UINT32)mc[5])<<16) );
		   MidiShortMSG_Send( ((UINT32)mc[6]) | (((UINT32)mc[7])<<8) );
         printf("CmdPgm\n");
		#endif
		#if (MACHINE==ATARI)
   		Midiws(7,mc);
		#endif

		mc[0]=0xb0;
		mc[1]=7;
		mc[2]= ACTVALUE.Volume;
		#if (MACHINE==GNU_PC)
		   MidiShortMSG_Send( ((UINT32)mc[0]) | (((UINT32)mc[1])<<8) | (((UINT32)mc[2])<<16) );
   		printf("CmdPgm\n");
		#endif
		#if (MACHINE==ATARI)
   		Midiws(2,mc);
		#endif

        if(DebugMode > 0)
           printf("CMDPGM: Ende 2 ********************************************\n");
        return(0);
    }

	AllNotesOff(0x7b);

	SetSongParam(&SongParam, SetSongNr, pgmnr);

   Song=SongListe[SongParam.SongAct];

	if(Song->jv1080_panelmode < 2)
		SetJV1080PanelMode(Song->jv1080_panelmode);

	if(Song->jv1080_panelmode == 0)
		SendPgmChgWithBank((char)15, Song->jv1080_bank0, Song->jv1080_bank32, Song->jv1080_pgm);

	if(Song->jv1080_panelmode == 1)
		SendPgmChgWithBank((char)0, Song->jv1080_bank0, Song->jv1080_bank32, Song->jv1080_pgm);

	if(Song->perform != NULL)
	{
	   Put1080PerfData(Song->perform);
#if (MACHINE==GNU_PC)
	   Put1080PerfDataFile(Song->perform);
#endif
	}

	if((SongParam.Splits->splitval)==SPLITVAL)
		;
	if((SongParam.Splits->perfcomm)!=NULL)
		Put1080PerfCommon(SongParam.Splits->perfcomm, SongParam.Splits->perfcommon);

    for (i=0; i<16; i++)
    {	SPP = GetSplitPgmPtr(i);
		if(	SPP->swtch == 1)
		{
			SendPgmChgWithBank(	SPP->chan,
                        SPP->pgmbank0,
                        SPP->pgmbank32,
                        SPP->pgm);
#if (MACHINE==SH3)||(MACHINE==GNU_PC)
			if(DebugMode>0)           
			   printf("Programm: Channel: %d, Bank0: %d, Bank32: %d, Programm: %d\n",
                           SPP->chan,
                           SPP->pgmbank0,
                           SPP->pgmbank32,
                           SPP->pgm);
#endif
#ifdef NIE
 			c1[0]=0xb0 | Song->splitpgm[i].chan;
			c1[1]=7;
			c1[2]= (char) ((int)ACTVALUE.Volume * (int)(SongParam.Splits->split[i].volume) >> 7);
			Midiws(2,c1);
#endif
       }
    }


	for(i=0;i<10;i++)
		if(Song->patch[i].patch_ptr != NULL)
		{
			Put1080PatchData(Song->patch[i].patch_ptr, Song->patch[i].adr);
#if (MACHINE==GNU_PC)
         Put1080PatchDataFile(Song->patch[i].patch_ptr, Song->patch[i].adr);
#endif
      }

	SetVolume();
#ifdef NIE	
    for (i=0; i<16; i++)
    {	SPP = GetSplitPgmPtr(i);
		if(	SPP->swtch == 1)
		{
 			c1[0]=0xb0 | Song->splitpgm[i].chan;
			c1[1]=7;
			c1[2]= (char) ((int)ACTVALUE.Volume * (int)(SongParam.Splits->split[i].volume) >> 7);
			Midiws(2,c1);
       }
    }
#endif

	Init1080();
	SendGSMsg(Song->pgmname);
	Send1040Msg(Song->pgmname);
#if (MACHINE==ATARI)
	PShowSetup();
	{	int w_handle, obj_index;
		if((obj_index=GetObjIndex(TSDAT)) >= 0)
		{	w_handle=GetWindowHandle(obj_index);
			if(w_handle > 0)
            do_redraw( 	w_handle,0,0,0,0 );
		}
	}
#endif
    if(DebugMode > 0)
       printf("CMDPGM: Ende ********************************************\n");
    return(0);
}


#ifdef NIE
jmp_buf buffer;       /* wichtig: muss global sein, wenn aus einer*/

void function(void);
void function(void)
{

/*
 *   ...kehrt zu main zurueck als waere setjmp mit dem Wert 7
 *   zurueckgekehrt.
 */
     longjmp(buffer, 7);
     printf("function shouldn' t return...\n");
}
#endif

void GetRawMidi(void);
void GetRawMidi()
{
	char	buffs[200], *bp;
	unsigned char	cmd;
	int	i;

#if (MACHINE==ATARI)
	delay(1000);
	while (kbhit() != 0) getch();
#endif
	printf("GetRawMidiData\n");
	for(i=0,bp=buffs; i<200; )
	{
		if (GetMidiByteReady() == 1)
		{
			cmd=GetMidiByte();
			*bp++=cmd;
			i++;
			printf("%d  %2x\n",i,cmd);
		}
#if (MACHINE==ATARI)
		if (kbhit() != 0)
		{
			getch();
			return;
		}
#endif
	}
	printf("GetRawMidiDataEnd\n");
}

int GetNewFileState=0;
#ifdef NIE
int GetNewFile(void);
int GetNewFile()
{
	size_t fs, i;
	char	name[20], buffs[10], *pbuf;
	unsigned char	ch;
	FILE	*fp;
	int	ret=0;
	time_t t0,t1;

	ch=GetMidiByte();

	switch(ch)
	{
	case 0: printf("Datei Uebertragung\nWaiting for name...  ");
			if (GetNewFileState != 0)	break;
			GetNewFileState = 1;
			i=0;
			t0=time(NULL);
			while ((ch=GetMidiByte()) != 0xf7)
			{
            *(name+i) = ch;
            i++;
			}
			t1=time(NULL);
			if ( (t1-t0)>2 ) break;
			*(name+i) = '\0';
			if ( i != 12)
			{	printf("GetNewFile! Name zu kurz!\n");
            break;
			}
			printf("received: <%s>\n",name);
			strcpy(FT.filename,name);
			ret=0;
			break;

	case 1:	printf("Waiting for size...  ");
			if (GetNewFileState != 1)	break;
			GetNewFileState = 2;
			i=0;
			while ((ch=GetMidiByte()) != 0xf7)
			{
            *(buffs+i) = ch;		i++;
			}
			*(buffs+i) = '\0';
			printf("received: <%s>\n",buffs);
			fs=atol(buffs);
			FT.filesize=fs;
			ret=0;
			break;

	case 2:	printf("Waiting for data...  ");
			if (GetNewFileState != 2)	break;
			GetNewFileState = 0;
			fs=FT.filesize;
			pbuf=(char *)malloc(fs);
			SendGSMsg  ("Daten Start ");
			Send1040Msg("Daten Start ");
			i=0;
			{	unsigned char ch1, ch2;
			while ((ch=GetMidiByte()) != 0xf7)
			{
            if (ch == 0xbf) continue;
            ch1=GetMidiByte();
            ch2= ((ch>>2) & 0x0f) | ((ch1<<2) & 0xf0);
            *(pbuf+i) = ch2;
            if(DebugMode > 0)
               printf("%3xH, %3xH -> %3xH\n",ch,ch1,ch2);
            if (i>fs)
            {
               printf("Datei zu lang\n");
               exit(-1);
            }

            {
            char	bs6[10]={8,8,8,8,8,8,'\0'};
            if ((i%256) == 0)
               printf("%6ld%s",(long)i,bs6);
            }
            i++;


			}
			}
			printf("received: <%ld>\n",(long)i);
			if (i != FT.filesize)
			{	printf("Zu wenig Daten empfangen\n");
            break;
			}
			Send1040Msg("Daten Start ");
			Send1040Msg("Schreiben St");
			fp=fopen(FT.filename,"wb");
			if (fp == NULL)
			{
            printf("Datei %s kann nicht geoeffnet werden\n",FT.filename);
            break;
			}
			printf("Datei %s schreiben...",FT.filename);
			fwrite(pbuf, (size_t) 1, i, fp);
			fclose(fp);
			printf(" O.K.\n");
			SendGSMsg  ("Schreiben OK");
			Send1040Msg("Schreiben OK");
	
			ret=1;
/*			free(pbuf);
			{
            int dummy;
            exec (FT.filename, "", "", &dummy);
            printf("Errornummer %d\n",errno);
			}
*/
			break;

	default:	printf("Unbekanntes Kommando");
	}
	return(ret);
}
#endif

char	gftest[]={0,0,-1,'A','B','C',-1,'8','2','3','4',-1};
char	gftest1[]={'8','2','3','4','8','2','3','4',-1};


#if (RUN==OFFLINE)
void MessageH(char *buff);
void MessageH(char *buff)
{
	char	lb[200];
	sprintf(buff,"  Masterkeyboardprogramm \n");
	sprintf(lb,"    LMK4+, MeagSTE2, JV1080, SC55, STE1040\n");
	strcat(buff,lb);
	sprintf(lb,"    Copyright 1997, 2004   GK   "MKB_DATE_STRING"\n");
	strcat(buff,lb);
	sprintf(lb,"  Programme fuer PMM44:\n");
	strcat(buff,lb);
	sprintf(lb,"    1: 0000 0010 1100 0000   LMK4, ATMEL -> MegaSTE2/PC\n");
	strcat(buff,lb);
	sprintf(lb,"                             MegaSTE2/PC -> JV1080, SC55\n");
	strcat(buff,lb);
	sprintf(lb,"    2: 0000 0010 1000 0000   LMK4 -> MegaSTE2 -> JV1080, SC55\n");
	strcat(buff,lb);
	sprintf(lb,"    3: 0000 0010 0100 0000   STE 1040 <-> MegeSTE2\n");
	strcat(buff,lb);
	sprintf(lb,"    4: 0000 0001 0000 0010   MegaSTE2 -> STE 1040 -> JV1080\n");
	strcat(buff,lb);
	sprintf(lb,"    5: 0000 0001 0000 1000   LMK4 -> STE 1040 ->  JV1080, SC55\n");
	strcat(buff,lb);
	sprintf(lb,"    6: 0000 0010 1100 0000   MegaSTE2 <-> JV1080\n");
	strcat(buff,lb);
	sprintf(lb,"  Eingaenge/Ausgaenge\n");
	strcat(buff,lb);
	sprintf(lb,"    PMM44-0: LMK4         PMM44-1: JV1080 / SC55\n");
	strcat(buff,lb);
	sprintf(lb,"    PMM44-2: MEGA STE 2   PMM44-3: STE 1040\n");
	strcat(buff,lb);
	sprintf(lb,"  Volume: SC55 10/10, JV1080 6/10 \n");
	strcat(buff,lb);
	sprintf(lb,"  Kommandos:\n");
	strcat(buff,lb);
	sprintf(lb,"    S: Datei Programm ueber Midi senden\n");
	strcat(buff,lb);
	sprintf(lb,"    D: Debugmode Ein/Aus\n");
	strcat(buff,lb);
	sprintf(lb,"    E: Midi-Eingangsdaten im Hexmode anzeigen\n");
	strcat(buff,lb);
	sprintf(lb,"    Q: Programm beenden\n");
	strcat(buff,lb);
	sprintf(lb,"    R: Songliste ausgeben\n");
	strcat(buff,lb);
	sprintf(lb,"    P: Hilfe und Songliste in Datei MKB.DOC ausgeben\n");
	strcat(buff,lb);
	sprintf(lb,"    H: Diese Hilfe anzeigen\n");
	strcat(buff,lb);
	sprintf(lb,"\n\n");
	strcat(buff,lb);
}
#endif

#if (0)
void MessageS(char *buff);
void MessageS(char *buff)
{
	char	ml[200];
	int	i;
	struct	t_song		*Song;

	for(i=0; i<20; i++)
	{	Song=SongListe[i];
		sprintf(ml,"%4d  %s\n",i+1,Song->pgmname);
		strcat(buff,ml);
	}
}
#endif

#if (MACHINE==ATARI)
void PrintStatus(char *cf);
void PrintStatus(char *cf)
{
	char	c[100];
	sprintf(c,"%-50s",cf);
	outtextxy(100,22*16,c);
}
#endif

UINT32 atmel_data(void);
UINT32 atmel_data(void)
{
   FILE *fp;
   UINT32 i, j, k, entry_cnt=0;
   //t_song_xxyy *loc_song;

   if((fp=fopen("a_atmel.asm","w")) == NULL)
      return(-5);

//   if(-1 != open("com1:","w"))
//	     printf(";com1 is opened\n");

	fprintf(fp,"proc_midi_data:\n");
	fprintf(fp,"   ret\n");
	fprintf(fp,"midi_data:\n");

   for(i=64, k=0;; i++)
   {
      if (Song_xxyyList[i] != (t_song_xxyy*) NULL)
    	{
         //loc_song = Song_xxyyList[i];
         fprintf(fp,"; %ld %s\n", i, Song_xxyyList[i]->pgmname);
         for(j=0;; j++, k++)
            if (0 != (Song_xxyyList[i]->instrument[j].valid))
            {
               fprintf(fp,"   .DB 0x%02lx, 0x%02lx, 0x%02lx, 0x00; %s, Nr:%ld\n", \
                  i-0x40, \
                  j, \
                  Song_xxyyList[i]->JV1080.pgmnr, \
                  Song_xxyyList[i]->instrument[j].JV1080->split_name, \
                  k);
               entry_cnt++;
            }
            else
               break;
//      Song_xxyyList->instrument.JV1080->split_name
//      Song_xxyyList->instrument->valid   instrument.JV1080.->   ->split_name
   	}
      else
         break;
	}
	fprintf(fp,"; %s\n", "Stop");
	fprintf(fp,"   .DB 0x%02x, 0x%02x, 0x%02x, 0x00 ; %s\n", 0xff, 0xff, 0xff, "Stop");
	fprintf(fp,"; %ld Bytes\n", entry_cnt*3);

   fclose(fp);      
   return(0);
}

/* End Atmel Block */

typedef struct s_setup_data {
	UINT16 Song;
	UINT16 Split;
} t_setup_data;

t_setup_data a_setup_data[128];


UINT32 setup_data(void);
UINT32 setup_data(void)
{
   UINT32 i, j, entry_cnt=0;
//   t_song_xxyy *loc_song;

   for(i=64;; i++)
   {
      if (Song_xxyyList[i] != (t_song_xxyy*) NULL)
    	{
//      loc_song = Song_xxyyList[i];
      	for(j=0;; j++)
            if (0 != (Song_xxyyList[i]->instrument[j].valid))
           	{
               a_setup_data[entry_cnt].Song=i-0x40;
               a_setup_data[entry_cnt].Split=j;
               entry_cnt++;
            }
            else
               break;
      }
      else
         break;
   }
   a_setup_data[entry_cnt].Song=0xffff;
   a_setup_data[entry_cnt].Split=0xffff;
   return(0);
}

UINT32 setup_data_print(void);
UINT32 setup_data_print(void)
{
   UINT32 i;
   UINT32 max_song=0, max_split=0;

   for(i=0; i<128; i++)
   {
      if (0xffff == a_setup_data[i].Song)
         break;
      printf("Setupdata: %02ld, %02d, %02d\n", i, a_setup_data[i].Song, a_setup_data[i].Split);
      printf("Name: %s\n", Song_xxyyList[64+a_setup_data[i].Song]->pgmname);
      if (a_setup_data[i].Song > max_song)
         max_song = a_setup_data[i].Song;
      if (a_setup_data[i].Split > max_split)
         max_split = a_setup_data[i].Split;
   }
   printf("Setupdata: Maxsong: %02ld, Maxsplit: %02ld\n", max_song, max_split);
   return(0);
}

UINT32 ChkInterprt_MidiInput(void);
UINT32 ChkInterprt_MidiInput(void)
{
   UINT32 i;
   uint32_t MidiMsgLen, SysExLen;
   UINT8 SysExBuffer[512];
   UINT8 SysExBufferOut[512];
   int ret=0;
   char name[20];
   char buffs[10];

   while ( ( (MidiMsgLen=MidiShortMSG_Get(midi_buffer)) != 0 ) |
           ( (SysExLen=MidiLongMSG_Get(SysExBuffer)) != 0 )
         )
   {
      if(SysExLen!=0)
      {
         if(DebugMode>2)
            printf("SysExLen: %d\n",SysExLen);
         if(DebugMode>4)
         {
            printf("ChkInterprt_MidiInput: SysEx: ");
            for(i=0; i<SysExLen; i++)
               printf("%2x ",SysExBuffer[i]);
            printf("\n");
         }
         if(SysExBuffer[1]==GKSysExID)
         {
            switch(SysExBuffer[2])
            {
               case 0: 
                  if (GetNewFileState != 0)	break;
                  GetNewFileState = 1;
                  i=0;
                  while (SysExBuffer[i+3] != 0xf7)
                  {
                     *(name+i) = SysExBuffer[i+3];
                     i++;
                  }
                  *(name+i) = '\0';
                  printf("Datei Uebertragung: <%s>\n",name);
                  strcpy(FT.filename,name);
                  FT.received=0;
                  ret=0;

                  FT.fp=fopen(FT.filename,"wb");
/*                FT.fp=fopen("sysex.log","wb");
*/
                  if (FT.fp == NULL)
                  {
                     printf("Datei %s kann nicht geoeffnet werden\n",FT.filename);
                     break;
                  }

               break;
               case 1:
                  if (GetNewFileState != 1)	break;
                  GetNewFileState = 2;
                  i=0;
                  while (SysExBuffer[i+3] != 0xf7)
                  {
                     *(buffs+i) = SysExBuffer[i+3];
                     i++;
                  }
                  *(buffs+i) = '\0';
                  FT.filesize=atol(buffs);
                  printf("received: <%s>\n",buffs);
                  printf("received: <%ld>\n",(t_uint32)FT.filesize);
                  ret=0;
               break;

               case 2:	
                  if (GetNewFileState != 2)	break;
                  i=0;
                  while (SysExBuffer[2*i+3] != 0xf7)
                  {
                     SysExBufferOut[i]= ((SysExBuffer[3+2*i]>>2) & 0x0f) | ((SysExBuffer[4+2*i]<<2) & 0xf0);
                     fputc(SysExBufferOut[i],FT.fp);
                     i++;
                  }
                  FT.received = FT.received + i;
/*
                  sprintf(name,"%12ld",FT.received);
                  Send1040Msg(name);
*/
                  printf("Block: <%02x> <%02x> <%02x>\n",SysExBufferOut[0],SysExBufferOut[1],SysExBufferOut[2]);
                  printf("FT.received: %ld\n", (t_uint32)FT.received);
               break;
               case 3: 
                  printf("Datei Uebertragung beendet\n");
                  if (FT.filesize != FT.received)
                     printf("Error in Received Size: %ld FT.received:%ld\n", (t_uint32)FT.filesize, (t_uint32)FT.received);
                  if (GetNewFileState != 2) 
                     break;
                  GetNewFileState = 0;
                  fclose(FT.fp);
/*
                  FT.fp=fopen(FT.filename,"rb");
                  fseek( FT.fp, 0l, SEEK_END);
                  FT.received = ftell(FT.fp);
                  fclose(FT.fp);
                  printf("Filesize: %ld %ld\n", FT.filesize, FT.received);
                  if(FT.received != FT.filesize)
                     printf("Error in Filesize: %ld %ld\n", FT.filesize, FT.received);
*/
               break;
               default:
               break;
            }
            MidiShortMSG_Send( 0xfal ); /* Ack */
         }
      }
      if(MidiMsgLen != 0)
      {
         ACTVALUE.GPMidiChannel = midi_buffer[0]&0xf;
         if(DebugMode>0)           
         {
            printf("IN: MidiShortMSG_Get %02x %02x %02x\n",midi_buffer[0], midi_buffer[1], midi_buffer[2]);
         }

         ACTVALUE.GPMidiCommand = midi_buffer[0] & 0xff;
         switch(ACTVALUE.GPMidiCommand)
         {
            case 0xfa:
            break;
            default:
            break;
         }
         switch((midi_buffer[0]) & 0xf0)
         {
            case 0x80:
            case 0x90: 
               if(ACTVALUE.SingleChan==0)
               {
                  ACTVALUE.GPTonKeyNr = midi_buffer[1];
                  ACTVALUE.GPTonVel   = midi_buffer[2];

/*                  if (ACTVALUE.GPTonKeyNr == A0)
                  {
                     if ( (((ACTVALUE.GPMidiCommand & 0xf0) == 0x90) && (ACTVALUE.GPTonVel == 0x0))
                        || ((ACTVALUE.GPMidiCommand & 0xf0) == 0x80) )
                     {
                        CmdPgm(0U, ACTVALUE.SongProgrammNr, UP);
                     } 
                  } 
                  else
                  {
*/
                     CmdTon(midi_buffer[0], midi_buffer[1], midi_buffer[2]);
/*
                  }
*/
               }
               else
               {
                  midi_buffer[0] = (midi_buffer[0] & 0xf0) | (ACTVALUE.SingleChan-1);
                  MidiShortMSG_Send(midi_buffer);
               }
               break;
            case 0xb0:
               ACTVALUE.GPCtrlNr  = midi_buffer[1];
               ACTVALUE.GPCtrlVal = midi_buffer[2];
               switch(ACTVALUE.GPCtrlNr)
               {
                  case 0x10:
/*
                     if((ACTVALUE.GPCtrlVal+64) != ACTVALUE.SongProgrammNr)
                        printf("CHK: BAD SongProgrammNr %d %d\n",ACTVALUE.GPCtrlVal+64,ACTVALUE.SongProgrammNr);
*/
                     if (ACTVALUE.GPCtrlVal >= 64)
                        break;
                     if (Song_xxyyList[ACTVALUE.GPCtrlVal+64] != NULL)
                     {
                        if(DebugMode>1) printf("CHK: SongProgrammNr %d %d\n",ACTVALUE.GPCtrlVal+64,ACTVALUE.SongProgrammNr);
                        ACTVALUE.SongProgrammNr = ACTVALUE.GPCtrlVal+64;
                        ACTVALUE.SplitNr = 0;
                        CmdPgm(0U, ACTVALUE.SongProgrammNr, NEW);
                     }
                     break;
                  case 0x11:
                     if(ACTVALUE.GPCtrlVal != ACTVALUE.SplitNr)
                     {
                        printf("CHK: BAD SplitNr %d %d\n", ACTVALUE.SplitNr, ACTVALUE.GPCtrlVal);
                        ACTVALUE.SplitNr = ACTVALUE.GPCtrlVal;
                     }
                     break;
                  case 0x12:
                     switch(ACTVALUE.GPCtrlVal)
                     {
                        case 0:
                           ACTVALUE.SongProgrammNr=64;
                           ACTVALUE.SplitNr=0;
                           CmdPgm(0U, ACTVALUE.SongProgrammNr, NEW);
                           break;   
                        case 2:
                           CmdPgm(0U, ACTVALUE.SongProgrammNr, DOWN);
                           break;   
                        case 3:
                           CmdPgm(0U, ACTVALUE.SongProgrammNr, UP);
                           break;   
                        default:
                           break;   
                     }
                     break;
                  default:
                     CmdCtrl(midi_buffer[0], ACTVALUE.GPCtrlNr, ACTVALUE.GPCtrlVal);
                     break;
               }
            break;
            case 0xc0:
               ACTVALUE.GPPgmNr = midi_buffer[1];
               if(0x0f != ACTVALUE.GPMidiChannel)
               {
                  CmdPgm(ACTVALUE.GPMidiCommand, ACTVALUE.GPPgmNr, NEW);
               }
               else
               {
                  if (ACTVALUE.GPPgmNr >= 0x40)
                  {
                     printf("Setupdata: %02d, %02d, %02d\n", ACTVALUE.GPPgmNr-0x40, a_setup_data[ACTVALUE.GPPgmNr-0x40].Song, a_setup_data[ACTVALUE.GPPgmNr-0x40].Split);
                     ACTVALUE.SongProgrammNr = a_setup_data[ACTVALUE.GPPgmNr-0x40].Song;
                     ACTVALUE.SplitNr    = a_setup_data[ACTVALUE.GPPgmNr-0x40].Split;
/*
                     printf("Setupdata: Programm: Neu: 0x%02x; Alt: 0x%02x\n", ACTVALUE.SongProgrammNr, ACTVALUE.Last_SongProgrammNr);
                     printf("Setupdata: Split:    Neu: 0x%02x; Alt: 0x%02x\n", ACTVALUE.SplitNr, ACTVALUE.Last_SplitNr);
*/
                     if(ACTVALUE.Last_SongProgrammNr == ACTVALUE.SongProgrammNr)
                        if (ACTVALUE.Last_SplitNr == ACTVALUE.SplitNr) 
                        {
                        }
                        else
                        {
                           printf("Setupdata: Neuer Split\n");
                           printf("Setupdata: Split:    Neu: 0x%02x; Alt: 0x%02x\n", ACTVALUE.SplitNr, ACTVALUE.Last_SplitNr);
                        }
                     else
                     {
                        printf("Setupdata: Neues Programm\n");
                        printf("Setupdata: Programm: Neu: 0x%02x; Alt: 0x%02x\n", ACTVALUE.SongProgrammNr, ACTVALUE.Last_SongProgrammNr);
                        printf("Setupdata: Split:    Neu: 0x%02x; Alt: 0x%02x\n", ACTVALUE.SplitNr, ACTVALUE.Last_SplitNr);
                        printf("Setupdata: ProgrammName: %s\n", Song_xxyyList[64+ACTVALUE.SongProgrammNr]->pgmname);

                     }
                     ACTVALUE.Last_SongProgrammNr = ACTVALUE.SongProgrammNr;
                     ACTVALUE.Last_SplitNr = ACTVALUE.SplitNr;

                  }
               }
            break;
            case 0xe0:
               if(DebugMode>2)           
                  printf("E0\n");
            break;
            /*
            case 0xa0:
               Midiws(0,&cmd);
            break;
            */
            case 0xf0: /* catch system messages */
            break;
            default:    
               /*
               Midiws(0,&cmd);
               */
            break;
         }
      }
   }
   return(ret);
}


UINT32 ChkInterprt_MidiInput_ATARI(void);
UINT32 ChkInterprt_MidiInput_ATARI(void)
{
   UINT32 MidiMsg;

   while(( MidiMsg=MidiShortMSG_Get(midi_buffer) ) != 0x0ffffffffl)
   {
      MidiShortMSG_Send( MidiMsg );
      if(DebugMode>0)
         printf("IN:  MidiShortMSG_Get %08lx = %02x %02x %02x\n",MidiMsg, MidiMsg&0xff, (MidiMsg>>8)&0xff, (MidiMsg>>16)&0xff);
   }      
   return(0);
}   


int process_cmdline(int argc, char **argv);
int process_cmdline(int argc, char **argv)
{
   int c;

   while ((c = getopt (argc, argv, "cd:")) != -1)
      switch (c)
         {
            case 'd':
               DebugMode = strtol(optarg, NULL, 10);
               break;
            case 'c':
               use_kbhit = 1;
               break;
	    default:
               return 1;
           }
      return 0;
   }


int main(int argc, char **argv);
int main(int argc, char **argv)
{
   unsigned char cmd;
   char Stop=0;

   char inputlinecr[256];
   char inputlinecrlast[256];
   char inputcmd[256];
   int  input_par1;
   int  i;
   
#if ((MACHINE==GNU_PC) || (MACHINE==ATARI))
 #if (RUN==OFFLINE)
   printf("\n");
   printf("MKB.C: **************************************************************\n");
   printf("MKB.C: *                                                            *\n");
   printf("MKB.C: *                      MKB                                   *\n");
   printf("MKB.C: *                                                            *\n");
   printf("MKB.C: **************************************************************\n");
   printf(JV1080_DATE_STRING"\n");
   printf(CDATE"\n");

     
   setlogmask (LOG_UPTO (LOG_NOTICE));
     
   openlog ("midimkb", LOG_CONS | LOG_PID | LOG_NDELAY, LOG_LOCAL1);
     
   syslog (LOG_NOTICE, "Program started by User %d", getuid ());
    
   closelog ();
     
   process_cmdline(argc, argv);

   printf("-->");
 #endif
#endif

#if (MACHINE==SH3)
   printf("MKB.C: **************************************************************\n");
   printf("MKB.C: *                                                            *\n");
   printf("MKB.C: *                      SH3                                   *\n");
   printf("MKB.C: *                                                            *\n");
   printf("MKB.C: **************************************************************\n");
#endif

#if(0)
#if (MACHINE==ATARI)
	int	msgbuff[8];               /* Mitteilungspuffer.		*/


   int      event,                  /* Ergebnis mit Ereignissen.        */
            mx, my,                 /* Mauskoordinaten.                 */
            mbutton,                /* Mausknopf.                       */
            mstate,                 /* Status des Mausknopfs.           */
            keycode,                /* Scancode einer Tastatureingabe.  */
            mclicks;                /* Anzahl Mausklicks.               */

	char	outs[400];	/* Fuer FormAlert-Meldungen */
#endif
#endif


/*	Performance.adr=0l;*/
/* Wieder verlegen auf freien Platz !!!! */
/*  	SongListe[1]=&Katrin; */

	SongListe[0]=&Leer;
	SongListe[1]=&Piano64;
	SongListe[3]=&Moeurs;
	SongListe[4]=&Larmada;
	SongListe[6]=&LaMainxx;
	SongListe[8]=&LeArbre;
	SongListe[10]=&Hymne;
#if USE_CREPUSCULE_ATARI == D_TRUE
	SongListe[11]=&Welt3_;
#endif
	SongListe[12]=&JeRevole;
	SongListe[13]=&Prison;
	SongListe[14]=&IntroEins;
	SongListe[15]=&ApresUnPas;
	SongListe[16]=&EpilogEins;
	SongListe[17]=&PrologZwei;
	SongListe[18]=&DerFall;
	SongListe[21]=&Creat3;
	SongListe[22]=&Creat2;
	SongListe[23]=&Creat1;
	SongListe[24]=&Moeurs;
	SongListe[25]=&Larmada;
/*	SongListe[24]=&Beginning;*/
	SongListe[26]=&HymneALaVie;
#if USE_INBETWEEN==D_TRUE
	SongListe[25]=&ComeHome;
	SongListe[26]=&AndYouKnow;
	SongListe[27]=&Talli;
	SongListe[28]=&GiveMe;
	SongListe[29]=&TurnThePage;
	SongListe[30]=&ComeHom1;
	SongListe[31]=&DontGo;
	SongListe[32]=&BrothersInArms;
#endif

   for (i=64 ; i<128; i++)
   {
      Song_xxyyList[i] = (t_song_xxyy*) NULL;
   }

   Song_xxyyList[64]  = (t_song_xxyy*) &ApresUnPas_xxyySong;
   Song_xxyyList[65]  = (t_song_xxyy*) &LArbre_xxyySong;
   Song_xxyyList[66]  = (t_song_xxyy*) &DerFall_xxyySong;
   Song_xxyyList[67]  = (t_song_xxyy*) &EpilogEins_xxyySong;
   Song_xxyyList[68]  = (t_song_xxyy*) &LaCreature_xxyySong;
   Song_xxyyList[69]  = (t_song_xxyy*) &Moeurs_xxyySong;
   Song_xxyyList[70]  = (t_song_xxyy*) &Larmada_xxyySong;
   Song_xxyyList[71]  = (t_song_xxyy*) &Jugement_DernierPas_DernierMot_Song;
   Song_xxyyList[72]  = (t_song_xxyy*) &Prison_xxyySong;
   Song_xxyyList[73]  = (t_song_xxyy*) &JeRevole_xxyySong;
   Song_xxyyList[74]  = (t_song_xxyy*) &Welt3_Phas_xxyySong;
   Song_xxyyList[75]  = (t_song_xxyy*) &Welt3_xxyySong;
   Song_xxyyList[76]  = (t_song_xxyy*) &LaMain_xxyySong;
   Song_xxyyList[77]  = (t_song_xxyy*) &TestSong;
   Song_xxyyList[78]  = (t_song_xxyy*) NULL;


#if (MACHINE==GNU_PC)
   atmel_data();
#endif
   setup_data();

   InitVolumeTab();

#if(0)
#if (MACHINE==ATARI)
	open_terminal();

	if ( rsrc_load( RSC_NAME ) == 0 )
	{
		printf("RSC-File %s nicht gefunden\n",RSC_NAME);
		return(-1);
	}

	rsrc_gaddr( 0, TMENU, &M_tree );
	graf_mouse( M_OFF, 0 );			/* Maus ausblenden.			*/
	menu_bar( M_tree, ME_SHOW );		/* Menue anzeigen.			*/
	graf_mouse( M_ON, 0 );
	graf_mouse( ARROW, 0 );

	rsrc_gaddr( 0, TMDAT, &TmDat_Obj );
	TmDat_Obj->ob_width=424;
	TmDat_Obj->ob_height=300;
	rsrc_gaddr( 0, TSDAT, &TsDat_Obj );
	TsDat_Obj->ob_width=424;
	TsDat_Obj->ob_height=300;
	rsrc_gaddr( 0, HELP1, &Help1_Obj );
	Help1_Obj->ob_width=424;
	Help1_Obj->ob_height=256;
#endif
#endif

	InitMidi();
	AllNotesOff(0x7b);
	AllNotesOff(0x78);
	AllNotesOff(0x79);
	InitGS();
/*	SendGSMsg(JV1080_DATE_STRING);   */
/*  printf("JV1080_DATE_STRING\n");  */
/*	Send1040Msg(JV1080_DATE_STRING); */
#if (MACHINE==ATARI)
	delay(1000);
#endif

	/* SC55-Parts 1-10 und 16 OFF */
	/* SC55-Parts 11-15 auf Kanaele 11-15 */
/*
   {
   int i;
   for(i=0; i<16; i++)
      SC55ExclDt1Single((long) (0x401002l + (i<<8)), 0x10);
   SC55ExclDt1Single((long) 0x401a02l, 10);
   SC55ExclDt1Single((long) 0x401b02l, 11);
   SC55ExclDt1Single((long) 0x401c02l, 12);
   SC55ExclDt1Single((long) 0x401d02l, 13);
   SC55ExclDt1Single((long) 0x401e02l, 14);
   }
*/
   SetJV1080PanelMode(JV1080PanelMode_Perf);
   Init1080();
    SongParam.SongAct = 0;
   SongParam.SplitAct = 0;
   SongParam.Liste = &SongListe[SongParam.SongAct]->next_splits[0];
   SongParam.Splits = *SongParam.Liste;
   {
      int i;
      for(i=0; SongListe[i]!=0; i++);
      SongParam.SongCount=i;
   }
#if (MACHINE==GNU_PC)
   Put1080AllSystemData();
#endif

   CmdPgm(0xc0, ACTVALUE.SongProgrammNr, NEW);
//   init_keyboard();

   inputcmd[0]='\0';
   do
   {
      ChkInterprt_MidiInput();
#ifdef NIE
      #if (MACHINE==ATARI_XXX)
      while (GetMidiByteReady() != 0)
      {
         cmd=GetMidiByte();
         ACTVALUE.GPMidiCommand=cmd;

         if (cmd == 0xf0)
         {
            if( (cmd=GetMidiByte()) == 0x01)
            {  Stop=GetNewFile();	/* Filetransfer */
               if (Stop==1) break;
            }
            else
               while( (cmd=GetMidiByte()) != 0xf7)
               ;
         }
         else
         {
            switch(cmd & 0xf0)
            {
               case 0xc0:  
                  ACTVALUE.SongProgrammNr=GetMidiByte();
                  CmdPgm(cmd, ACTVALUE.SongProgrammNr, NEW);
               break;
               case 0x80:
               case 0x90: 
                  ACTVALUE.GPTonKeyNr=GetMidiByte();
                  ACTVALUE.GPTonVel=GetMidiByte();
                  if (ACTVALUE.GPTonKeyNr == A0)
                  {
                     if (  (((ACTVALUE.GPMidiCommand & 0xf0) == 0x90) && (ACTVALUE.GPTonVel == 0x0))
                        || ((ACTVALUE.GPMidiCommand & 0xf0) == 0x80) )
                     {
                        CmdPgm(0U, ACTVALUE.SongProgrammNr, UP);
                     } 
                  } 
                  else
                  {  
                     CmdTon(ACTVALUE.GPMidiCommand, ACTVALUE.GPTonKeyNr, ACTVALUE.GPTonVel);
                  }
                  break;
               case 0xb0:	
                  ACTVALUE.GPCtrlNr=GetMidiByte();
                  ACTVALUE.GPCtrlVal=GetMidiByte();
                  CmdCtrl(cmd,ACTVALUE.GPCtrlNr,ACTVALUE.GPCtrlVal);
               break;
               case 0xa0:	
                  Midiws(0,&cmd);
               break;
               default:    
                  Midiws(0,&cmd);
               break;
            }
         }
      }
      #endif
#endif

   usleep((unsigned int) 100);
   
#if (MACHINE==ATARI)||(MACHINE==GNU_PC)
#if (MACHINE==GNU_PC)
      if ( use_kbhit && kbhit() )
#endif
#if (MACHINE==ATARI)
      if ( kbhit() )
#endif
      {
         //inputcmd[0]='\0';
         fgets(inputlinecr, 20, stdin);
         if (inputlinecr[0] == '\0')
            // get last input
            strcpy(inputlinecr, inputlinecrlast);
          else
	    // save input
	    strcpy(inputlinecrlast, inputlinecr);
         sscanf(inputlinecr,"%s",inputcmd);
         if(strcmp(inputcmd,"q")==0) 
         {
            CloseMidi();
            printf("Finish program\n");
            Stop=1;
         }
         else if(strcmp(inputcmd,"")==0) 
            {
            }
#if (RUN==OFFLINE)
         else if(strcmp(inputcmd,"p")==0) 
         {
            if(2==sscanf(inputlinecr,"%s %d",inputcmd, &input_par1))
            {
               if(input_par1 != 9999)
               {
                  printf("Set Programm %d\n",input_par1);
                  CmdPgm(0xc0, input_par1, NEW);
               }      
               else
               {
                  int i;
                  for (i=65; i<70; i++)
                  {
                     printf("Set Programm %d\n",i);
                     CmdPgm(0xc0, i, NEW);
                  }
               }      
            }      
            else
               printf("Missing parameter\n");
         }      
         else if(strcmp(inputcmd,"psetupdata")==0) 
         {
            setup_data_print();
         }
         else if(strcmp(inputcmd,"pu")==0) 
         {
            printf("Set Programm %d UP\n",ACTVALUE.SongProgrammNr);
            CmdPgm(0U, ACTVALUE.SongProgrammNr, UP);
         }      
         else if(strcmp(inputcmd,"pd")==0) 
         {
            printf("Set Programm %d DOWN\n",ACTVALUE.SongProgrammNr);
            CmdPgm(0U, ACTVALUE.SongProgrammNr, DOWN);
         }      
         else if(strcmp(inputcmd,"te")==0) 
         {
            if(2==sscanf(inputlinecr,"%s %d",inputcmd, &input_par1))
            {
               printf("Set Ton Ein %d\n",input_par1);
               CmdTon(0x90,input_par1,0x40);
            }      
            else
               printf("Missing parameter\n");
         }      
         else if(strcmp(inputcmd,"ta")==0) 
         {
            if(2==sscanf(inputlinecr,"%s %d",inputcmd, &input_par1))
            {
               printf("Set Ton Aus %d\n",input_par1);
               CmdTon(0x90,input_par1,0x0);
            }      
            else
               printf("Missing parameter\n");
         }      
         else if(strcmp(inputcmd,"tea")==0) 
         {
            if(2==sscanf(inputlinecr,"%s %d",inputcmd, &input_par1))
            {
               printf("Set Ton Ein %d\n",input_par1);
               CmdTon(0x90,input_par1,0x40);
               printf("Set Ton Aus %d\n",input_par1);
               CmdTon(0x90,input_par1,0x0);
            }      
            else
               printf("Missing parameter\n");
         }      
         else if(strcmp(inputcmd,"t")==0) 
         {
            if(2==sscanf(inputlinecr,"%s %d",inputcmd, &input_par1))
            {
               switch(input_par1)
               {
                  case 1: 
                     /* Performance/Patch-Daten von JV1080 holen */
                     printf("Performance/Patch-Daten von JV1080 holen\n");
                     if(Get1080AllJv1080Data() != 0)
                        {	printf("Fehler bei Get1080AllJv1080Data\n");
                        }
                  break;
                  case 2:
                        printf("Performance/Patch-Daten in Datei schreiben\n");
                        if(Put1080AllJv1080Data() != 0)
                           {	printf("Fehler bei Put1080AllJv1080Data\n");
                           }
                  break;
                  case 3: 
                     /* Performance/Patch-Daten aus Datei holen */
                     printf("Performance/Patch-Daten aus Datei holen\n");
                     if(Get1080AllJv1080DataFile() != 0)
                        {	printf("Fehler bei Get1080AllJv1080DataFile\n");
                        }
                  break;
                  case 4: 
                     /* Performance/Patch-Daten aus Datei holen */
                     printf("Performance/Patch-Daten vergleichen\n");
                     if(Cmp1080AllJv1080Data() != 0)
                        {	printf("Fehler bei Cmp1080AllJv1080Data\n");
                        }
                  break;
#if (MACHINE==GNU_PC)
                  case 5: 
                     /* System-Daten von JV1080 holen */
                     printf("System von JV1080 holen\n");
                     if(Get1080AllSystemData() != 0)
                        {	printf("Fehler bei Get1080AllSystemData\n");
                        }
                  break;
                  case 6: 
                     /* System-Daten an JV1080 senden */
                     printf("System an JV1080 senden\n");
                     if(Put1080AllSystemData() != 0)
                        {	printf("Fehler bei Put1080AllSystemData\n");
                        }
                  break;
#endif
                  case 7: 
                     if(Get1080PerfData() != 0)
                        {	printf("Fehler bei Get1080PerfData\n");
                        }
                  break;
                  case 8: 
                     MidiShortMSG_Send(0xfal);
                  break;

                  default: 
                     printf("Bad parameter\n");
                     printf("t 1: Performance/Patch-Daten von JV1080 holen\n");
                     printf("t 2: Performance/Patch-Daten in Datei schreiben\n");
                     printf("t 3: Performance/Patch-Daten aus Datei holen\n");
                     printf("t 4: Performance/Patch-Daten vergleichen\n");
                     printf("t 5: System von JV1080 holen\n");
                     printf("t 6: Systemdaten an JV1080 senden !!!\n");
                     printf("t 7: Performance-Daten von JV1080 holen und in Datei schreiben\n");
                  break;
               }
            }
            else
               printf("Missing parameter\n");
         }      
         else if(strcmp(inputcmd,"pc")==0) 
         {
            if(2==sscanf(inputlinecr,"%s %d",inputcmd, &input_par1))
            {
               if (input_par1>=0 && input_par1<=16)
               {
                  printf("Output on Channel %d\n",input_par1-1);
                  ACTVALUE.SingleChan=input_par1;
               }
               else
                  printf("Bad parameter\n");
            }
            else
               printf("Missing parameter\n");
         }      
         else if(strcmp(inputcmd,"h")==0) 
         {	
            char	*buf;
            buf=malloc((size_t) 10000);
            if (buf == NULL) break;
            *buf='\0';
            MessageH(buf);
            printf("%s",buf);
            free(buf);
         }
         else if(strcmp(inputcmd,"x")==0) 
         {
            if(2==sscanf(inputlinecr,"%s %d",inputcmd, &input_par1))
            {
               printf("X %d\n",input_par1);
               switch(input_par1)
               {
                  case 1: 

                     Send1040Msg("Daten Start");
/*                     Send1040Msg("XXXX");
                     Send1040Msg("YYYY");
                     Send1040Msg("XXXX");
                     Send1040Msg("ZZZZ");
*/
                  break;
/*
                  case 2:
                     midiLongMsgTest();
                     Send1040Msg("YYYY");
                  break;
*/
                  case 3: 
                     Send1080SysByte(0x0l, 1);
                     for(cmd=12; cmd<16; cmd++)
                        Send1080SysByte(0x01001000l + (cmd<<8),0);
                  break;
                  case 4: 
                     Send1080SysByte(0x0l, 0);
                     Send1080SysByte(0x0l, 0);
                     Send1080SysByte(0x0l, 0);
                     Send1080SysByte(0x0l, 0);
                     Send1080SysByte(0x0l, 0);
                  break;
                  case 5: 
                     Send1080SysByte(0x0l, 0);
                  break;
                  default: 
                     Send1040Msg("Ende");
                  break;
               }
            }      
            else
               printf("Missing parameter\n");
         }      
         else if(strcmp(inputcmd,"d")==0) 
         {
            if(2==sscanf(inputlinecr,"%s %d",inputcmd, &DebugMode))
            {
               printf("DebugMode %d\n",DebugMode);
            }      
            else
               printf("Missing parameter\n");
         }      
         else if(strcmp(inputcmd,"print")==0) 
         {
              if(2==sscanf(inputlinecr,"%s %d",inputcmd, &input_par1))
              switch(input_par1)
              {
                 case 1: 
                    for(i=0; i<128; i++)
                       printf("VolTab: %3d %3d\n",i,VolTab[i]);
                 break;  
                 case 2: 
                    for(i=0; i<128; i++)
                       printf("VolTab2: %3d %3d\n",i,VolTab2[i]);
                 break;  
                 case 3: 
                    for(i=0; i<128; i++)
                       printf("VolTab3: %3d %3d\n",i,VolTab3[i]);
                 break;  
                 default: 
                 break;
             }      
             else
                printf("Missing parameter\n");
         }
         else if(strcmp(inputcmd,"getvelotab")==0) 
         {
            GetVolumeTab();
         }
#endif
         else
            printf("Bad Command\n");
         printf("-->");
         fflush(stdout); //STDOUT
      }
      #endif

#if (0)
#if (MACHINE==ATARI)
		event = evnt_multi( EV_KIND,
                            1, 1, 1,
                            0, 0, 0, 0, 0,
                            0, 0, 0, 0, 0,
                            msgbuff,
                            2, 0,  /* 2 ms warten. */
                            &mx, &my,
                            &mbutton, &mstate,
                            &keycode, &mclicks);


		if ( event & MU_TIMER ) /* Alle 2 msec */
		{
		}

		if( event & MU_KEYBD ) /* Tastatur ?*/
    	{
			switch(keycode & 0xff)
			{
            case '*':
               {
/*
               	int wx, wy, ww, wh;
               	int tw;
               	tw=wind_get( 1, WF_TOP, &wx, &wy, &ww, &wh );
               	if(wx==2)
               		tw=1000;
*/
               }
               break;
            case 'w':
            case 'W': PShowSetup();
               break;
            case '?':
               Send1080SysByte(0x0l, 0);
               break;
            case '+':	SetSongParam(&SongParam,1,0);
               PShowSetup();
               break;
            case 'u':	SetSongParam(&SongParam,3,0);
               PShowSetup();
               break;
            case '-':
            case '.':	SetSongParam(&SongParam,2,0);
               PShowSetup();
               break;		

		        case '3': 
                   if (ACTVALUE.SongProgrammNr>0)
                      ACTVALUE.SongProgrammNr-=1;
                   CmdPgm(0xc0, ACTVALUE.SongProgrammNr, NEW);
                   break;

              case '4': 
                   if (ACTVALUE.SongProgrammNr<127)
                      ACTVALUE.SongProgrammNr+=1;
                   CmdPgm(0xc0, ACTVALUE.SongProgrammNr, NEW);
                   break;

              case '5': 
                   CmdTon(0x90, A0, 0x0);
                   break;

              case '6':
                   {
                      unsigned char buff[20];
                      buff[0]=0xfa;
                      Midiws(0, buff);
                   }
                   break;

            case 'd':
            case 'D': DebugMode = (DebugMode + 1) & 7;
               {  char cf[128];
                  printf("Debugmode=%d ShowPgm=%d\n",DebugMode,ShowPgm);
               }
            break;

            case '1': ShowPgm += 1;
               {  char cf[128];
                  sprintf(cf,"Debugmode=%d ShowPgm=%d",DebugMode,ShowPgm);
                  PrintStatus(cf);
               }
            break;

            case '0': DebugMode = 0;
               ShowPgm=0;
               {	char	cf[128];
               	sprintf(cf,"Debugmode=%d ShowPgm=%d",DebugMode,ShowPgm);
               	PrintStatus(cf);
               }
            break;

            case 'e':
            case 'E': GetRawMidi();
            break;

            case 'q':
            case 'Q': 
               {	int	i, hndl;
               	for(i=0; i<10; i++)
               		if((hndl=GetWindowHandle(i)) > 0)
                        CLOSE_WINDOWX(hndl);
               }
               Stop=1;
            break;

            case 'h':
            case 'H': 	
            {	char	*buf;
               buf=malloc((size_t) 10000);
               if (buf == NULL) break;
               *buf='\0';
               MessageH(buf);
/*               printf("%s",buf);*/
               free(buf);
               if(W3.handle == 0)
               	open_windowx( Help1_Obj, &W3, HELP1 );

            }
            break;

            case 'p':
            case 'P':	{	char	*buf;
               FILE *fp;
               buf=malloc((size_t) 10000);
               if (buf == NULL) break;
               *buf='\0';
               MessageH(buf);
               fp=fopen("mkb.doc","w");
               fprintf(fp,"%s",buf);
               *buf='\0';
               MessageS(buf);
               fprintf(fp,"%s",buf);
               fclose(fp);
               free(buf);
            }
            break;

            case 'r':
            case 'R': 	
            {	char	*buf;
               buf=malloc((size_t) 10000);
               if (buf == NULL) break;
               *buf='\0';
               MessageS(buf);
               printf("%s",buf);
               free(buf);
            }
            break;

/* Performance-Daten von JV1080 holen (Temp. Performance)*/
		case 't':
		case 'T':
			if(Get1080PerfData() != 0)
            {	form_alert(1,"[3][  Fehler bei |  Get1080PerfData  ][OK]");
               break;
            }
			break;

/* Patch-Daten von JV1080 holen (Temp. Patch)*/
		case 'z':
		case 'Z':
			if(Get1080PatchData() != 0)
            {	form_alert(1,"[3][  Fehler bei |  Get1080PatchData  ][OK]");
               break;
            }
			break;


/* Performance und Patch-Daten aus Editbuffer JV1080 holen */
		case 'y':
		case 'Y':
			if(Get1080PerfPatchData() !=0)
            {	form_alert(1,"[3][  Fehler bei |  Get1080PerfPatchData  ][OK]");
               break;
            }
			break;


            case 'N':
            case 'n':
               Put1080PerfData(&Perf_LeNoirN);
               break;

            case 'M':
            case 'm':
               Put1080PatchData(&A_Patch, 0l);
/*               Put1080PatchData(&Patch_Analog, 0l);
               Put1080PatchData(&Patch_GlassyPad, 0l);
               Put1080PatchData(&Patch_HSFseashore, 0l);
               Put1080PatchData(&Patch_HSFseashore, 0x2000000l);
               Put1080PatchData(&Patch_Mandolin, 0l);
*/               break;
#ifdef NIE
            {	int dummy;
               exec ("mkb.tos", "", "", &dummy);
               printf("Errornummer %d\n",errno);
            }
            Stop=1;
#endif

            case 'L':
            case 'l':
		Put1080PerfCommon(&Perf_Test2,FULL_PERFCOMMON);
		break;

            default:	break;
			}
		}

		if ( event & MU_MESAG )
		{
			switch(msgbuff[0])
			{
            case MN_SELECTED:
               switch(msgbuff[4])
               {
               	case AMDAT:
               		if(W1.handle == 0)
                        open_windowx( TmDat_Obj, &W1, TMDAT );
               	break;
               	case ASDAT:
               		if(W2.handle == 0)
                        open_windowx( TsDat_Obj, &W2, TSDAT );
               	break;
               	case H1M:
               		if(W3.handle == 0)
                        open_windowx( Help1_Obj, &W3, HELP1 );
               	break;
               		{	int	i, hndl;
                        for(i=0; i<10; i++)
                           if((hndl=GetWindowHandle(i)) > 0)
                           	CLOSE_WINDOWX(hndl);
               		}
               		Stop=1;
               	break;
               	default:
               		sprintf(outs,"[0][ MessageArt: %d | Hauptmenuenr.: %d | Menuenr.: %d][ Weiter ]",msgbuff[0],msgbuff[3],msgbuff[4]);
               		form_alert( 1, outs );
               	break;
               }
               menu_tnormal( M_tree, msgbuff[3], ME_NORM );
            break;

            case WM_REDRAW:
               WM_FUNC(WM_REDRAW,msgbuff);
            break;

            case WM_SIZED:
            case WM_MOVED:
               WM_FUNC(WM_SIZED,msgbuff);
            break;

            case WM_TOPPED:
               WM_FUNC(WM_TOPPED,msgbuff);
            break;

            case WM_FULLED:
               WM_FUNC(WM_FULLED,msgbuff);
            break;

            case WM_CLOSED:
               CLOSE_WINDOWX(msgbuff[3]);
            break;
			default:
            sprintf(outs,"[0][ MessageArt0: %d | Message3: %d | Message4: %d][ Weiter ]",msgbuff[0],msgbuff[3],msgbuff[4]);
            form_alert( 1, outs );
			}
		}
#endif
#endif
	}
	while (Stop == 0);
/*
	InitGS();
	SetJV1080PanelMode(JV1080PanelMode_Patch);
	Init1080();
*/
#if (MACHINE==ATARI)
	graf_mouse( M_OFF,0 );
	menu_bar( M_tree, ME_HIDE );		/* Menue verschwinden lassen.	*/
	graf_mouse( M_ON, 0 );
	rsrc_free( );               	/* Durch Rsc-Datei belegten	*/
#endif

	return(0);
}

///*-------------------------------------------------------------------*
//*	kbhit()
//*
//*	check if character pending in keyboard buffer
//*	( idea borrowed from The Linux Journal article
//*	of Sept 95 issue 17 )
//*--------------------------------------------------------------------*/
int kbhit( void ){

	struct timeval tv;
	fd_set read_fd;

	/* do not wait at all, not even a microsecond */
	tv.tv_sec = 0;
	tv.tv_usec = 0;

	/* must be done first to initilize read_fd */
	FD_ZERO( &read_fd );

	/* makes select() ask if input is ready :
	* 0 is the file descriptor for stdin  
	*/
	FD_SET( 0, &read_fd );

	/* the first parameter is the number of the 
	* largest file descriptor to check + 1.  
	*/
	if( select( 1, &read_fd,
			NULL,		/* NO writes */
			NULL,		/* NO exceptions */
			&tv ) == -1 )
		return( FALSE );			/* An error occured
*/

	/* read_fd now holds a bitmap of files that are
	* readable. We test the entry for the standard
	* input (file 0). 
	*/
	if( FD_ISSET( 0, &read_fd ))
		/* character pending on stdin */
		return( TRUE );

	/* no characters were pending */
	return( FALSE );

} /* end kbhit() */



//int _kbhit() {
//    static const int STDIN = 0;
//    static bool initialized = false;
//
//    if (! initialized) {
//        // Use termios to turn off line buffering
//        termios term;
//        tcgetattr(STDIN, &term);
//        term.c_lflag &= ~ICANON;
//        tcsetattr(STDIN, TCSANOW, &term);
//        setbuf(stdin, NULL);
//        initialized = true;
//    }
//
//    int bytesWaiting;
//    ioctl(STDIN, FIONREAD, &bytesWaiting);
//    return bytesWaiting;
//}


