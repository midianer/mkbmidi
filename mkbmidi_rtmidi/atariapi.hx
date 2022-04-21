#ifdef __local_midi_atariapi
#else
   extern void InitMidi(void);
   extern INT32 MidiShortMSG_Send(UINT32 msg);
   extern INT32 MidiLongMSG_Send(UINT8 *ExData, UINT32 ExSize);
   extern UINT32 MidiShortMSG_Get(void);
#endif
