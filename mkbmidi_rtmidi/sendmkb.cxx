/* gcc ../2001-12-06/mkb.c -g -c -Wall -I. -I../2001-12-06 -I../2002-07-01 -I/usr/include/mingw  -o ./Work/mkb.s 1>>compile.log 2>>compile.log
*/
/************************************************************************/
/*                                                                      */
/*       Programm: Masterkeyboardfunktionen für 1040 STE // PC // SH3   */
/*       Datum:    20.03.04                                             */
/*                                                                      */
/************************************************************************/

#define JV1080_DATE_STRING "MKB 20.03.04"
#define MKB_DATE_STRING "20.03.2004"

/* -------------------------------------------------------------- */
/*       Global Configuration                                     */
/* -------------------------------------------------------------- */
#include "config.h"

/* -------------------------------------------------------------- */
/*       Include-Files einbinden.                                 */
/* -------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>
#if (MACHINE==ATARI)
	#include <ext.h>
	#include <tos.h>
#endif
#include <stdlib.h>
//#include <process.h>
#include "typedefs.h"
#if (MACHINE==ATARI)
	#include <graphics.h>
	#include <aes.h>
	#include <vdi.h>
   #include "atariapi.h"
#endif
#include <time.h>
#if (MACHINE==SH3)
#endif
#if (MACHINE==GNU_PC)
//   #include <io.h>
//   #include <conio.h>
//   #include "midi_w32api.h"
#endif
/*#include <sys/soundcard.h>*/

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

int   DebugMode=0;

void SendMKB(void);
void SendMKB()
{
   FILE	*fp;
   int handle;
   INT32 a, b, cbuff;
   UINT32 i,j;
   unsigned char cmd[512], c;
/*
   char	fname[]="sysex.log";
*/
   char	fname[]="MKB.PRG";

   size_t fl, fs;
   time_t  t1, t2;
   time_t  tt0, tt1;

   t1=time(&t1);
   printf("Uebertragung der Datei <%s> ...\n",fname);
   cmd[0]=0xf0;
   cmd[1]=0x01;      /* Manu ID */
   cmd[2]=0x00;      /* CMD: Filename */
   for(i=3; i<15; i++)
      cmd[i]=0;
   fs=strlen(fname);
   strcpy((char*)&cmd[3],fname);
   cmd[15]=0xf7;
   MidiLongMSG_Send(cmd, 16);

   for(  tt0=tt1=time(NULL); ; tt1=time(NULL) ) 
   {
      if (tt1 > tt0+3)
      {
         printf("timeout\n");
         return;
      }
      if(0xfal == MidiShortMSG_Get())
         break;
   };

   fp=fopen(fname,"rb");
   handle=fileno(fp);
   b = fl = filelength(handle);
   printf("Dateigroesse: %7ld Bytes\n",fl);
   cmd[0]=0xf0;
   cmd[1]=0x01;      /* Manu ID */
   cmd[2]=0x01;      /* CMD: Filesize */
   sprintf((char*)cmd+3,"%ld",fl);
   fs=strlen((char*)cmd+3);
   cmd[fs+3]=0xf7;
   MidiLongMSG_Send(cmd, fs+4);

   for(  tt0=tt1=time(NULL); ; tt1=time(NULL) ) 
   {
      if (tt1 > tt0+3)
      {
         printf("timeout\n");
         return;
      }
      if(0xfal == MidiShortMSG_Get())
         break;
   };

   cbuff = 100;
   for(i=0; (i<(10000)) && (b > 0l); i++)
   {
      if ((b-cbuff)>0l)
      {
         b -= cbuff;
         a=cbuff;
      }
      else
      {
         a=b;
         b=0l;
      }
      cmd[0]=0xf0;
      cmd[1]=0x01;      /* Manu ID */
      cmd[2]=0x02;      /* CMD: Filedaten */
      for(j=0; j<a; j++)
      {
         c=getc(fp);
         cmd[3+2*j]=(c<<2)&0x3c;
         cmd[4+2*j]=(c>>2)&0x3c;
      }
      cmd[3+2*a]=0xf7;
      printf("%ld %ld\n",b, a);
      MidiLongMSG_Send(cmd, 4+2*a);
      for(  tt0=tt1=time(NULL); ; tt1=time(NULL) ) 
      {
         if (tt1 > tt0+3)
         {
            printf("timeout\n");
            return;
         }
         if(0xfal == MidiShortMSG_Get())
            break;
      };

   }
   
   fclose(fp);

   cmd[0]=0xf0;
   cmd[1]=0x01;      /* Manu ID */
   cmd[2]=0x03;      /* CMD: Ende */
   cmd[3]=0xf7;
   MidiLongMSG_Send(cmd, 4);
   for(  tt0=tt1=time(NULL); ; tt1=time(NULL) ) 
   {
      if (tt1 > tt0+3)
      {
         printf("timeout\n");
         return;
      }
      if(0xfal == MidiShortMSG_Get())
         break;
   };


   t2=time(&t2);
   printf("Uebertragung beendet\n");
   printf("Uebertragungszeit: %6ld Sekunden\n",t2-t1);
   if(t2 > t1)
      printf("Ubertragungsrate: %6ld(*2) Bytes/Sekunde (Effektiv)\n",fl/(t2-t1));

}



int main(void);
int main()
{
   unsigned char cmd;
   char Stop=0;

#if (MACHINE==GNU_PC)
   char inputlinecr[256];
   char inputcmd[256];
   int  input_par1;
#endif
   int  i;
   
#if (MACHINE==GNU_PC)
   printf("MKB.C: **************************************************************\n");
   printf("MKB.C: *                                                            *\n");
   printf("MKB.C: *                      MKB_PC                                *\n");
   printf("MKB.C: *                                                            *\n");
   printf("MKB.C: **************************************************************\n");
   printf(JV1080_DATE_STRING"\n");
#endif

	InitMidi();
	InitGS();
	SendGSMsg(JV1080_DATE_STRING);
	Send1040Msg(JV1080_DATE_STRING);

	do
	{
      if ( _kbhit() )
      {
         inputcmd[0]='\0';
         fgets(inputlinecr, 250, stdin);
         sscanf(inputlinecr,"%s",inputcmd);
         if(strcmp(inputcmd,"q")==0) 
         {
            printf("Finish program\n");
            Stop=1;
         }
         else if(strcmp(inputcmd,"")==0) 
         {
         }
         else if(strcmp(inputcmd,"s")==0) 
         {
            printf("Send MKB Data\n");
            SendMKB();
         }
         else
            printf("Bad Command\n");
         printf("-->");
         fflush(stdout);
      }
   }
   while(Stop==0);
   
	return(0);
}
