#ifndef __MIDI_H
#define __MIDI_H

/* -------------------------------------------------------------------- */
/*       Typendefinition.                                               */
/* -------------------------------------------------------------------- */

/* -------------------------------------------------------------------- */
/*	Midi-Aktionen														*/
/* -------------------------------------------------------------------- */

#include <inttypes.h>

void Midiws(UINT32 len, UINT8 *data);
void MidiMSG_Send(uint16_t len, uint8_t * midi_msg);
uint32_t  MidiShortMSG_Get(uint8_t * ptr);
void MidiShortMSG_Send( UINT32 MidiMsg );
UINT32 MidiLongMSG_Get(UINT8 *SysExBuffer);
extern void MidiLongMSG_Send(UINT8  *sysexbuffer, int len);
extern void InitMidi();
extern void CloseMidi();
char GetMidiByteReady(void);
char GetMidiByte(void);
void AllNotesOff(UINT8 controller);
#ifdef NIE
void AllNotesOff(void);
#endif
void SendPgmChgWithBank(char chan, char bank0, char bank32, char pgm);
/*
char TonNames[][5]={
   "A0",
   "AIS0", 
   "H0",
   "C1",
   "CIS1",
   "D1",
   "DIS1",
   "E1",
   "F1",
   "FIS1",
   "G1",
   "GIS1"
};
*/

/* Definition Midi-Tonnummern */
#define A0		21
#define AIS0	22
#define H0		23
#define C1		24
#define CIS1	25
#define D1		26
#define DIS1	27
#define E1		28
#define F1		29
#define FIS1	30
#define G1		31
#define GIS1	32
#define A1		33
#define AIS1	34
#define H1		35
#define C2		36
#define CIS2	37
#define D2		38
#define DIS2	39
#define E2		40
#define F2		41
#define FIS2	42
#define G2		43
#define GIS2	44
#define A2		45
#define AIS2	46
#define H2		47
#define C3		48
#define CIS3	49
#define D3		50
#define DIS3	51
#define E3		52
#define F3		53
#define FIS3	54
#define G3		55
#define GIS3	56
#define A3		57
#define AIS3	58
#define H3		59
#define C4		60
#define CIS4	61
#define D4		62
#define DIS4	63
#define E4		64
#define F4		65
#define FIS4	66
#define G4		67
#define GIS4	68
#define A4		69
#define AIS4	70
#define H4		71
#define C5		72
#define CIS5	73
#define D5		74
#define DIS5	75
#define E5		76
#define F5		77
#define FIS5	78
#define G5		79
#define GIS5	80
#define A5		81
#define AIS5	82
#define H5		83
#define C6		84
#define CIS6	85
#define D6		86
#define DIS6	87
#define E6		88
#define F6		89
#define FIS6	90
#define G6		91
#define GIS6	92
#define A6		93
#define AIS6	94
#define H6		95
#define C7		96
#define CIS7	97
#define D7		98
#define DIS7	99
#define E7		100
#define F7		101
#define FIS7	102
#define G7		103
#define GIS7	104
#define A7		105
#define AIS7	106
#define H7		107
#define C8		108


/* Kanalnummern */
#define	Chan0  0
#define	Chan1  1
#define	Chan2  2
#define	Chan3  3
#define	Chan4  4
#define	Chan5  5
#define	Chan6  6
#define	Chan7  7
#define	Chan8  8
#define	Chan9  9
#define	Chan10  10
#define	Chan11  11
#define	Chan12  12
#define	Chan13  13
#define	Chan14  14
#define	Chan15  15
#define	Chana  10
#define	Chanb  11
#define	Chanc  12
#define	Chand  13
#define	Chane  14
#define	Chanf  15

#endif  // __MIDI_H
