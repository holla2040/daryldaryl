#include <Arduino.h>
#include "Daryl.h"

Daryl::Daryl(int pan, int tilt, int jaw,int eyeleft, int eyemiddle, int eyeright) {
  pinMode(pan, OUTPUT);
  pinMode(tilt, OUTPUT);
  pinMode(jaw, OUTPUT);
  _pan = pan;
  _tilt = tilt;
  _jaw = jaw;

  _eyesLeft = eyeleft;
  _eyesMiddle = eyemiddle;
  _eyesRight = eyeright;
}

void Daryl::pan(int v) {
}

void Daryl::tilt(int v) {
}

void Daryl::jaw(int v) {
}


