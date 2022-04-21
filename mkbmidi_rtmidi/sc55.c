#include "config.h"
#include <string.h>
#include <stdio.h>
#if (MACHINE==ATARI)
   #include <tos.h>
#endif
#if (MACHINE==SH3)||(MACHINE==GNU_PC)
//   #include "atariext.h"
#endif


void InitGS(void);
void InitGS()
{
	char	ms[20];
	char	cs,i;
	ms[0]=0xf0;
	ms[1]=0x41;
	ms[2]=0x10;
	ms[3]=0x42;
	ms[4]=0x12;
	ms[5]=0x40;
	ms[6]=0x00;
	ms[7]=0x7f;
	ms[8]=0x00;
	for(cs=i=0;i<4;i++)
		cs+=ms[5+i];
	ms[9]=(128-cs) & 0x7f;
	ms[10]=0xf7;
	Midiws(10,ms);
}

void SendGSMsgx(void);
void SendGSMsgx()
{
	char	ms[30];
	char	cs,i;
                    /**************/
	char	text[]="STE MKBC V1.0   ";
	ms[0]=0xf0;
	ms[1]=0x41;
	ms[2]=0x10;
	ms[3]=0x45;
	ms[4]=0x12;
	ms[5]=0x10;
	ms[6]=0x00;
	ms[7]=0x00;
	strcpy(&(ms[8]),text);
	for(cs=i=0;i<19;i++)
		cs+=ms[5+i];
	ms[24]=(128-cs) & 0x7f;
	ms[25]=0xf7;
	Midiws(25,ms);
}

void SendGSMsg(char *txt);
void SendGSMsg(char *txt)
{
	char	ms[30];
	char	cs,i,text[20];
                    /**************/
/*	char	text[]="STE MKBC V1.0   ";*/
	if (strlen(txt) > 16)
		txt[16]='\0';
	sprintf(text,"%-16s",txt);
	ms[0]=0xf0;
	ms[1]=0x41;
	ms[2]=0x10;
	ms[3]=0x45;
	ms[4]=0x12;
	ms[5]=0x10;
	ms[6]=0x00;
	ms[7]=0x00;
	strcpy(&(ms[8]),text);
	for(cs=i=0;i<19;i++)
		cs+=ms[5+i];
	ms[24]=(128-cs) & 0x7f;
	ms[25]=0xf7;
	Midiws(25,ms);
}

void SC55ExclDt1Single(long adr, char str);
void SC55ExclDt1Single(long adr, char str)
{
	char	ms[200];
	char	cs,i;
	ms[0]=0xf0;
	ms[1]=0x41;
	ms[2]=0x10;
	ms[3]=0x42;
	ms[4]=0x12;
	ms[5]=(adr >> 16) & 0x7f;
	ms[6]=(adr >> 8)  & 0x7f;
	ms[7]= adr & 0x7f;
	ms[8]=str;
	for(cs=i=0;i<4;i++)
		cs+=ms[5+i];
	ms[9]=(128-cs) & 0x7f;
	ms[10]=0xf7;
	Midiws(10,ms);
}


/*****************************************************************
**																**
**  Absenden eines Datenblockes vom Typ DT1 an SC55				**
**	=======================================						**
**	void SC55ExclDt1(long adr, char size, char *str);			**
**	adr: Adresse in Byte 2-0									**
**	size: Anzahl bytes in Array str								**
**																**
*****************************************************************/
void SC55ExclDt1(long adr, char size, char *str);
void SC55ExclDt1(long adr, char size, char *str)
{
	char	ms[200];
	char	cs;
   int   i;
	ms[0]=0xf0;
	ms[1]=0x41;
	ms[2]=0x10;
	ms[3]=0x42;
	ms[4]=0x12;
	ms[5]=(adr >> 16) & 0x7f;
	ms[6]=(adr >> 8)  & 0x7f;
	ms[7]= adr & 0x7f;
	for (i=0; i<size; i++)
		ms[i+8]=str[i];
	for(cs=i=0;i<size+3;i++)
		cs+=ms[5+i];
	ms[8+size]=(128-cs) & 0x7f;
	ms[9+size]=0xf7;
	Midiws(9+size,ms);
}

/*
void SC55ExclRq1(long adr, long sz, char size, char *str);
void SC55ExclRq1(adr, sz, size, str)
long	adr, sz;
char	size;
char	*str;
{
	char	ms[200];
	char	cs,i;
	ms[0]=0xf0;
	ms[1]=0x41;
	ms[2]=0x10;
	ms[3]=0x42;
	ms[4]=0x12;
	ms[5]=0x40;
	ms[6]=0x00;
	ms[7]=0x7f;
	ms[8]=0x00;
	for(cs=i=0;i<4;i++)
		cs+=ms[5+i];
	ms[9]=(128-cs) & 0x7f;
	ms[10]=0xf7;
	Midiws(10,ms);
}
*/

