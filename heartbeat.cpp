#ifndef _HeartBeat_c
#define _HeartBeat_c

#include "Arduino.h"
#include "heartbeat.h"

HeartBeatDetector::HeartBeatDetector(int pin) {
  
}


class HeartBeatDetector {
  public:
    HeartBeatDetector(int pin);
    int getBPM();
  private:
    volatile int BPM;
    volatile int IBI;
    volatile boolean Pulse;
    volatile boolean QS;
    volatile int rate[10];
    volatile unsigned long sampleCounter;
    volatile unsigned long lastBeatTime;
    volatile int P;
    volatile int T;
    volatile int thresh;
    volatile int amp;
    volatile boolean firstBeat;
    volatile boolean secondBeat;
}


#endif