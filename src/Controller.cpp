#include <Arduino.h>
#include "Controller.h"

Controller::Controller(int pan, int tilt, int button1,int button2, int button3, int buttonj) {
  pinMode(pan, INPUT);
  pinMode(tilt, INPUT);
  _pan = pan;
  _tilt = tilt;

  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(buttonj, INPUT_PULLUP);
  _button1 = button1;
  _button2 = button2;
  _button3 = button3;
  _buttonj = buttonj;
}

int Controller::pan() {
    return 0;
}

int Controller::tilt() {
    return 0;
}

int Controller::button1() {
    return 0;
}

int Controller::button2() {
    return 0;
}

int Controller::button3() {
    return 0;
}

int Controller::buttonj() {
    return 0;
}

