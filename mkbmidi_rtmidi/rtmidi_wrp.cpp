#include <iostream>
#include <cstdlib>
#include <cstring>
#include <map>
#include "RtMidi.h"

// g++ -I./rtmidi -Wall -D__LINUX_ALSA__ -o rtmidi_wrp.o -c rtmidi_wrp.cpp



//void mycallback( double deltatime, std::vector< unsigned char > *message, void *userData )
//{
//  unsigned int nBytes = message->size();
//  for ( unsigned int i=0; i<nBytes; i++ )
//    std::cout << "Byte " << i << " = " << (int)message->at(i) << ", ";
//  if ( nBytes > 0 )
//    std::cout << "stamp = " << deltatime << std::endl;
//}
static RtMidiIn  *midiin = 0;
static RtMidiOut *midiout = 0;

extern "C" void RtMidiInit(void) {
  // Create an api map.
  std::map<int, std::string> apiMap;
  apiMap[RtMidi::MACOSX_CORE] = "OS-X CoreMIDI";
  apiMap[RtMidi::WINDOWS_MM] = "Windows MultiMedia";
  apiMap[RtMidi::UNIX_JACK] = "Jack Client";
  apiMap[RtMidi::LINUX_ALSA] = "Linux ALSA";
  apiMap[RtMidi::RTMIDI_DUMMY] = "RtMidi Dummy";

  std::vector< RtMidi::Api > apis;
  RtMidi :: getCompiledApi( apis );

  std::cout << "\nCompiled APIs:\n";
  for ( unsigned int i=0; i<apis.size(); i++ )
    std::cout << "  " << apiMap[ apis[i] ] << std::endl;
  std::cout << std::endl;

  midiout = new RtMidiOut(apis[0], "MKBClientO");

  midiout->openVirtualPort("MKBout");
  
  midiin = new RtMidiIn(apis[0], "MKBClientI");

  midiin->openVirtualPort("MKBin");
}

extern "C" void RtMidiClose(void) {
  delete midiin;
  delete midiout;
}

extern "C" int RtMidiGetMessage(uint8_t * midi_msg) {
  std::vector<unsigned char> message;
  int nBytes;
  double stamp;
  stamp = midiin->getMessage( &message );
  nBytes = message.size();
  for(int i=0; i<nBytes; i++) {
    midi_msg[i] = message[i];
  }
  return nBytes;
}

extern "C" void RtMidiSendMessage(uint16_t len, uint8_t * midi_msg) {
  std::vector<unsigned char> message;
  message.clear();
  for(int i=0; i<len; i++) {
    message.push_back(midi_msg[i]);
  }
  midiout->sendMessage( &message );
}
