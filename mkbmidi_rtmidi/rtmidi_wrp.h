#ifndef __RTMIDI_WRP_H
#define __RTMIDI_WRP_H

void RtMidiInit(void);
void RtMidiClose(void);
int RtMidiGetMessage(uint8_t * midi_msg);
void RtMidiSendMessage(uint16_t len, uint8_t * midi_msg);


#endif // __RTMIDI_WRP_H
