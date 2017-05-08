#include "heartbeat.h"

HeatBeatDetector heartbeat();

void setup() {
  
}

int currentBPM;
int bpmHistory[10];

void loop() {
  currentBPM = heartbeat.getBPM();
}