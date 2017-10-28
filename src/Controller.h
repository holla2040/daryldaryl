#ifndef Controller_h
#define Controller_h

#include <Arduino.h>

class Controller
{
  public:
    Controller(int tilt, int pan, int button1, int button2, int button3, int buttonj);
    int tilt();
    int pan();

    int button1();
    int button2();
    int button3();
    int buttonj();
  private:
    int _tilt;
    int _pan;

    int _button1;
    int _button2;
    int _button3;
    int _buttonj;
};

#endif
