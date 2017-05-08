#ifndef _HeartBeat_h
#define _HeartBeat_h

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