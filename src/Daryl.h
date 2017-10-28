#ifndef Daryl_h
#define Daryl_h

#include "Arduino.h"

class Daryl
{
  public:
    Daryl(int tilt, int pan, int jaw, int eyeleft, int eyemiddle, int eyeright);
    void tilt(int);
    void pan(int);
    void jaw(int);
  private:
    int _tilt;
    int _pan;
    int _jaw;

    int _eyesLeft;
    int _eyesMiddle;
    int _eyesRight;
};

#endif
