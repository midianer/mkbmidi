#ifndef __TYPEDEFS_H
#define __TYPEDEFS_H


/* typedefs.h */


#if (MACHINE==ATARI)
   #define UINT32 unsigned long
   #define t_uint32 unsigned long
   #define UINT16 unsigned short
   #define UINT8  unsigned char
   #define t_uint8  unsigned char
   #define INT8   char
   #define INT16  short
   #define INT32  long
   #define lpPTR  unsigned long
#endif

#if (MACHINE==GNU_PC)
   #define UINT32 unsigned long
   #define t_uint32 unsigned long
   #define UINT16 unsigned short
   #define UINT8  unsigned char
   #define t_uint8  unsigned char
   #define INT8   char
   #define INT16  short
   #define INT32  long
   #define lpPTR  unsigned long
#endif

enum SustMode {SustModeNop, SustModeSust, SustModeRot};
enum MidiChan {EnChan0=0,EnChan1,EnChan2,EnChan3,EnChan4,EnChan5,EnChan6,EnChan7,EnChan8,EnChan9,EnChan10,EnChan11,EnChan12,EnChan13,EnChan14,EnChan15};
enum VolType  {VolCtr1=0, VolCtr2};
enum ModCtrlType  {ModulationOff=0, ModulationOn=1};
enum AllNotesOffType  {NO_ALLNOTES_OFF=0, ALLNOTES_OFF};
enum JV1080_PanelModeType  {PerformPanel, PatchPanel, NoChange};
enum PerfCommonType { FULL_PERFCOMMON, SMALL_PERFCOMMON};

#ifdef NIE
typedef struct {  
   long   adr;
   long   size;
   int    daten[19];
} PERF_PART;

typedef struct {
   long      adr;
   long      size;
   char      name[12];
   int       daten[52];
   PERF_PART part[16];
} PERF_STR;
#endif

typedef struct {
   long   adr;
   long   size;
   char   name[13];
   unsigned char perfc[52];
   struct { long adr;
            long size;
          } tone_hdr[16];
   unsigned char   part[19][16];
} PERF_STR;

typedef struct {
   long   adr;
   long   size;
   char   name[13];
   unsigned char perfc[52];
} PERFCOMMON_STR;



/* patch.c */

typedef struct {  
   long   adr;
   long   size;
   int      daten[128];
} PATCH_TONE;

typedef struct {
   long   adr;
   long   size;
   char   name[13];
   int    daten[60];
   struct { 
      long adr;
      long size;
   }
   tone_hdr[4];
   unsigned char   tone[129][4];
} PATCH_STR;



/* Songdat1.c */

struct  t_split {
   char            swtch;
   char            low;
   char            high;
   char            transpose;
   enum MidiChan   outchan;
   char            volume;
   enum SustMode   ctrltype0;
   enum VolType    VolCtr;
   unsigned char   InChan;
};


#define SPLITVAL   1
#define SPLITINVAL   0
/*#define ALLNOTES_OFF      1*/
/*#define NO_ALLNOTES_OFF      0*/
#define InChan0    0
#define InChan1    1
/*enum InChanType { InChan0, InChan1 };*/

struct t_splits {
   PERFCOMMON_STR        *perfcomm;
   int                   splitval;
   enum AllNotesOffType  notesoffsw;
   enum PerfCommonType   perfcommon;
   struct t_split        split[16];
   char                  Check[5];
};

struct t_splitpgm {
   unsigned   int   swtch;
   unsigned   int   pgmbank0;
   unsigned   int   pgmbank32;
   unsigned   int   pgm;
   unsigned   int   chan;
};

struct t_song {
      char            pgmname[32];
      enum            JV1080_PanelModeType   jv1080_panelmode;
                      /*   0: performance   */
                      /*   1: patch      */
                      /*   2: no change   */
      char            jv1080_bank0;
      char            jv1080_bank32;
      char            jv1080_pgm;
      struct t_splits **next_splits;
      PERF_STR        *perform;
      struct {
         PATCH_STR *patch_ptr; 
         long adr;
      } patch[10];
      struct t_splitpgm   splitpgm[16];
   };




#define MNUMBER_JV1080_SPLIT  0x12345678UL
#define MNUMBER_JV1080_SPLITS 0x12346789UL

typedef struct tag_t_split_jv1080 {
   UINT8               swtch;
   unsigned char       InChan;
   UINT8               bank;
   UINT8               pgm;
   INT8                pgmname[14];
   char                low;
   char                high;
   char                transpose;
   enum MidiChan       outchan;
   char                volume;
   enum SustMode       ctrltype0;
   enum VolType        VolCtr;
   enum ModCtrlType    ModCtrl;
   lpPTR               next;
   UINT32              mnumber;
} t_split_jv1080;

typedef struct tag_t_splits_jv1080 {
   INT8                  split_name[64];
   PERFCOMMON_STR        *perfcomm;
   int                   splitval;
   enum AllNotesOffType  notesoffsw;
   enum PerfCommonType   perfcommon;
   t_split_jv1080        split_xxyy[16];
   UINT32                mnumber;
} t_splits_jv1080;

typedef struct tag_t_splits_z4 {
   UINT32                mnumber;
} t_splits_z4;

typedef struct tag_t_splits_jx8p {
   UINT32                mnumber;
} t_splits_jx8p;

typedef struct tag_t_instrument {
   UINT32               valid;
   t_splits_jv1080      *JV1080;
   t_splits_jx8p        *JX8P;
   t_splits_z4          *Z4;
} t_instrument;

typedef struct tag_t_songinfo_JV1080 {
   UINT32               pgmnr;
} t_songinfo_JV1080;

typedef struct tag_t_songinfo_JX8P {
   UINT32               pgmnr;
} t_songinfo_JX8P;

typedef struct tag_t_songinfo_Z4 {
   UINT32               pgmnr;
} t_songinfo_Z4;

typedef struct tag_t_song_xxyy {
   char                 pgmname[32];
   char                 filename[32];
   t_instrument         *instrument;
   t_songinfo_JV1080    JV1080;
   t_songinfo_JX8P      JX8P;
   t_songinfo_Z4        Z4;
} t_song_xxyy;

#endif // __TYPEDEFS_H

