/********************************************************************/
/*                                                                  */
/*	Programm:									MKB / MIDI.C		*/
/*                                                                  */
/********************************************************************/

/* -------------------------------------------------------------------- */
/*       Include-Files einbinden.                                       */
/* -------------------------------------------------------------------- */

#include "config.h"
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include "typedefs.h"
#include "rtmidi_wrp.h"
#include "midi.h"

/* -------------------------------------------------------------------- */
/*       Typendefinition.                                               */
/* -------------------------------------------------------------------- */

typedef enum
{
    FALSE,
    TRUE
}
boolean;


/* -------------------------------------------------------------------- */
/*  Midi-Aktionen                                                       */
/* -------------------------------------------------------------------- */


typedef struct MidiBuffer_s {
   uint8_t  sysex_buffer[512];
   uint32_t sysexsize;
   uint32_t ShortMsg;
   uint8_t  ShortSize;
   uint8_t  LastCmd;
   uint8_t  sysexvalid;
} MidiBuffer_t;
      

MidiBuffer_t MidiBuffer;

 
uint32_t midistmgetmsg_p(uint8_t  mc);
uint32_t midistmgetmsg_p(uint8_t  mc)
{
   uint8_t  cmd;
   uint32_t cmd32;

   //while (GetMidiByteReadyXX() != 0)
   {
//      cmd=GetMidiByteXX();
//      cmd32=(uint32_t)cmd;
      cmd = mc;
      cmd32=(uint32_t)mc;
#if (LOCAL_DEBUG==2)
      printf(">%x %lx\n", cmd, cmd32);
#endif
      if ((cmd & 0x80) == 0x80)
      {  
         if ((cmd & 0xf0) == 0xf0)
         {
            if (cmd == 0xf0) /* Sysex */
            {
               MidiBuffer.ShortSize=0xff;
               MidiBuffer.sysexsize=0;
               MidiBuffer.sysexvalid=0;
               #if (LOCAL_DEBUG==1)
                  printf("Sysex Start\n");
               #endif
            }
            else if (cmd == 0xf7) /* Sysex End */
            {
               #if (LOCAL_DEBUG==1)
                  printf("Sysex End\n");
               #endif
               if(MidiBuffer.ShortSize==0xff)
               {
                  MidiBuffer.ShortSize=0xfe;
               }
            }
         }
         else /* Rest */
         {
            MidiBuffer.ShortSize=0;
            MidiBuffer.LastCmd=cmd;
            MidiBuffer.ShortMsg = cmd32;
         }
      }

      switch(MidiBuffer.ShortSize)
      {
         case 0xfe:
            MidiBuffer.sysex_buffer[MidiBuffer.sysexsize]=cmd;
            MidiBuffer.sysexsize++;
            MidiBuffer.sysexvalid=1;
#if (LOCAL_DEBUG==1)
            printf("Sysex fe: 1:%lx %x %x %x\n",MidiBuffer.sysexsize, MidiBuffer.sysex_buffer[0], MidiBuffer.sysex_buffer[1], MidiBuffer.sysex_buffer[2]);
#endif
            break;
         case 0xff:
            MidiBuffer.sysex_buffer[MidiBuffer.sysexsize]=cmd;
            MidiBuffer.sysexsize++;
#if (LOCAL_DEBUG==2)
            printf("Sysex ff: 1:%lx %x %x %x\n",MidiBuffer.sysexsize, MidiBuffer.sysex_buffer[0], MidiBuffer.sysex_buffer[1], MidiBuffer.sysex_buffer[2]);
#endif
            break;
         case 0:
         	MidiBuffer.ShortSize++;
#if (LOCAL_DEBUG==1)
            printf("->%d %lx %lx\n",MidiBuffer.ShortSize, cmd32, MidiBuffer.ShortMsg);
#endif
            break;
         case 1:
            MidiBuffer.ShortMsg = ((MidiBuffer.ShortMsg & 0xffff00ffl) | (cmd32 << 8));
#if (LOCAL_DEBUG==1)
            printf("-->%d %lx %lx\n",MidiBuffer.ShortSize, cmd32, MidiBuffer.ShortMsg);
#endif
            if ((MidiBuffer.LastCmd & 0xe0) == 0xc0)
            {
               MidiBuffer.ShortSize=1;
               return(MidiBuffer.ShortMsg);
            }
            MidiBuffer.ShortSize++;
            break;
         case 2:
            MidiBuffer.ShortMsg = ((MidiBuffer.ShortMsg & 0xff00ffffl) | (cmd32 << 16));
#if (LOCAL_DEBUG==1)
            printf("--->%d %lx %lx\n",MidiBuffer.ShortSize, cmd32, MidiBuffer.ShortMsg);
#endif
         	MidiBuffer.ShortSize = 0;
            if (     ((MidiBuffer.LastCmd & 0x80) == 0x80) 
                 ||  ((MidiBuffer.LastCmd       ) == 0xe0)
               )
            {
               MidiBuffer.ShortSize=1;
               return(MidiBuffer.ShortMsg);
            }
            MidiBuffer.ShortSize=1;
         break;
         default:
         break;
      }
   }
   return(0xffffffffl);
}   

void InitMidi_p(void);
void InitMidi_p(void)
{
   MidiBuffer.sysexsize=0;
   MidiBuffer.sysexvalid=0;
   MidiBuffer.ShortMsg = 0xffffffffl;
   MidiBuffer.ShortSize = 0;
#if (LOCAL_DEBUG==1)
   printf("InitMidi\n");
#endif
}




/* -------------------------------------------------------------------- */
/*  Midi-Aktionen                                                       */
/* -------------------------------------------------------------------- */


//uint32_t midistmgetmsg(int fd);
//uint32_t midistmgetmsg(int fd)
//{
//   enum t_mstate { Idle0, RStat1, RStat2, R2_3, R3_3, R2_2 };
//   static enum t_mstate mstate = Idle0;
//   static uint8_t last_cmdlen=0;
//   static uint8_t m_datan, m_data0, m_data1, m_data2;
//   ssize_t len;
//   
//   if (fd == 0)
//      return 0xffffffff;
//
//   while(1)
//   {
//      len = read(fd, &m_datan, (size_t) 1);
//      if(len <= 0)
//	  return 0xffffffff;
//      printf("m_datan: 0x%02x\n", m_datan);
//      if((m_datan & 0xf8) == 0xf8)
//      {
//         return (uint32_t)m_datan;
//      }
//      switch(mstate)
//      {
//         case RStat1:
//            if((m_datan & 0x80) != 0x80)  // running status
//            {
//               m_data1 = m_datan;
//               if (last_cmdlen==2) 
//               {
//                  return (((uint32_t)m_data1)<<8) | m_data0;
//               }
//               if (last_cmdlen==3) 
//               {
//                  mstate=RStat2;
//               }
//            }
//            break;
//
//         case RStat2:
//            if((m_datan & 0x80) != 0x80)  // running status
//            {
//               m_data2 = m_datan;
//               mstate=RStat1;
//               return (((uint32_t)m_data2)<<16) | (((uint32_t)m_data1)<<8) | m_data0;
//            }
//            break;
//	    
//         case Idle0:
//            if((m_datan & 0xC0) == 0x80)
//            {
//               m_data0 = m_datan;
//               mstate=R2_3;
//            }
//            if((m_datan & 0xE0) == 0xE0)
//            {
//               m_data0 = m_datan;
//               mstate=R2_3;
//            }
//            if((m_datan & 0xC0) == 0xC0)
//            {
//               m_data0 = m_datan;
//               mstate=R2_2;
//            }
//            break;
//         case R2_3:
//            m_data1 = m_datan;
//            mstate=R3_3;
//            break;
//	 case R3_3:
//            m_data2 = m_datan;
//            mstate=RStat1;
//            last_cmdlen=3;            
//            return (((uint32_t)m_data2)<<16) | (((uint32_t)m_data1)<<8) | m_data0;
//            break;
//         case R2_2:
//            m_data1 = m_datan;
//            mstate=RStat1;
//            last_cmdlen=2;
//            return (((uint32_t)m_data1)<<8) | m_data0;
//            break;
//         default:
//            break;
//      }
//   }
//   return 0xffffffff;
//};



void InitMidi();
void InitMidi()
{
   RtMidiInit();
}

void CloseMidi();
void CloseMidi()
{
  RtMidiClose();
}

void MidiMSG_Send(uint16_t len, uint8_t * midi_msg) {
  RtMidiSendMessage(len, midi_msg);
}

void Midiws(UINT32 len, UINT8 *data)
{
  RtMidiSendMessage(len+1, data);
}

void MidiShortMSG_Send( UINT32 MidiMsg )
{
   uint8_t imbuf[3];
   uint8_t len;

   imbuf[0] = MidiMsg & 0xff;
   imbuf[1] = (MidiMsg >> 8 ) & 0xff;
   imbuf[2] = (MidiMsg >> 16 ) & 0xff;
   switch(imbuf[0] & 0xf0) 
   {
     case 0x80:
     case 0x90:
     case 0xA0:
     case 0xB0:
     case 0xE0:
        len=3;
	break;
     case 0xC0:
     case 0xD0:
        len=2;
	break;
     default:
        return;
   }
   printf("MidiShortMSG_Send 0x%02x %d\n", imbuf[0], len);
   MidiMSG_Send(len, imbuf);
  return;
}

uint32_t  MidiShortMSG_Get(uint8_t * ptr)
{
   int len = RtMidiGetMessage(ptr);

   //if (len==0) return NULL;
   //if (len < 4) // TODO SYSEX MEssage?
   return len;
}


void MidiLongMSG_Send(UINT8  *sysexbuffer, int len);
void MidiLongMSG_Send(UINT8  *sysexbuffer, int len)
{
   int i;
   //fd = open("/dev/snd/midiC3D0", O_RDWR|O_NONBLOCK);
   //write(fd, sysexbuffer, len);
   //close(fd);
}

UINT32  MidiLongMSG_Get(UINT8 *SysExBuffer)
{
return 0;
}


/* malloc */
#ifdef NIE
void InitMidi(void);
void InitMidi(void)
{
#if (MACHINE==ATARI)
	ior = Iorec(2);
	ior->ibuftl = ior->ibufhd = 0;
#endif
#if (MACHINE==GNU_PC)
   printf("MIDI.C: Init Midi\n");
   initmidi_w32api();

#endif
#if (MACHINE==SH3)
#endif
}
#endif

/* Falls Zeichen im Midi-Eingangspuffer Return 1, sonst Return 0 */
char GetMidiByteReady(void);
char GetMidiByteReady()
{
#if (MACHINE==ATARI)
	if (ior->ibufhd == ior->ibuftl)
		return(0);
	else
		return(1);
#endif
#if (MACHINE==SH3)
	return(0);
#endif
#if (MACHINE==GNU_PC)
//	printf("MIDI.C: GetMidiByteReady\n");
	return(0);
#endif
}


char GetMidiByte(void);
char GetMidiByte()
{

#if (MACHINE==ATARI)

	unsigned char *ch1,mb;


	while(ior->ibufhd == ior->ibuftl);

	(ior->ibufhd)++;
	if (ior->ibufhd == ior->ibufsiz)
	{
		ior->ibufhd=0;
		ch1 = (unsigned char *) ior->ibuf;
	}
	else
		ch1 = (unsigned char *) ior->ibuf + ior->ibufhd;

	mb = *ch1;

	gb[n++]=mb;
	if (n >=200) n=0;
/*	printf("Head:%d Tail:%d Char:0x%x\n",ior->ibufhd,ior->ibuftl,mb);
*/

	return(mb);
#endif
#if (MACHINE==SH3)
	return(0);
#endif
#if (MACHINE==GNU_PC)
	printf("MIDI.C: GetMidiByte\n");
	return(0);
#endif
}

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
/*
      if(DebugMode > 0)
         printf("AllNotesOff 0x%02x\n",controller);
*/
   }
}


void SendPgmChgWithBank(char chan, char bank0, char bank32, char pgm);
void SendPgmChgWithBank(char chan, char bank0, char bank32, char pgm)
{
#if (MACHINE==GNU_PC)
   UINT32 MidiMsg;
#endif
	unsigned char	c1[10];
	c1[0]=0xb0 | chan;
	c1[1]=0x0;
	c1[2]=bank0;
	#if (MACHINE==GNU_PC)
	   MidiMsg = ((UINT32)c1[0]) | (((UINT32)c1[1])<<8) | (((UINT32)c1[2])<<16);
	   MidiShortMSG_Send( MidiMsg );
	   printf("SendPgmChgWithBank %06lx\n",MidiMsg);
	#endif
	#if (MACHINE==ATARI)
           Midiws(2,c1);
	#endif

	c1[0]=0xb0 | chan;
	c1[1]=0x20;
	c1[2]=bank32;
	#if (MACHINE==GNU_PC)
	   MidiMsg = ((UINT32)c1[0]) | (((UINT32)c1[1])<<8) | (((UINT32)c1[2])<<16);
	   MidiShortMSG_Send( MidiMsg );
	   printf("SendPgmChgWithBank %06lx\n",MidiMsg);
	#endif
	#if (MACHINE==ATARI)
           Midiws(2,c1);
	#endif

	c1[0]=0xc0 | chan;
	c1[1]=pgm;
	#if (MACHINE==GNU_PC)
	   MidiMsg = ((UINT32)c1[0]) | (((UINT32)c1[1])<<8);
	   MidiShortMSG_Send( MidiMsg );
	   printf("SendPgmChgWithBank %06lx\n",MidiMsg);
	#endif
	#if (MACHINE==ATARI)
        Midiws(1,c1);
	#endif
}

