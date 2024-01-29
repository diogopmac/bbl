#include <motors.h>

void setup() {
//initmot(PWM_D,DIR_D,PWM_E,DIR_E);
//              (PWM_B,DIR_B,PWM_A,DIR_A);
  initmot(11,13,3,12);
}

void loop() {
  mDir(100,FRENTE);
  mEsq(0,FRENTE);
  delay(1000);
  mDir(255,FRENTE);
  mEsq(0,FRENTE);
  delay(1000);
  mDir(100,TRAS);
  mEsq(0,TRAS);
  delay(1000);
  mDir(0,FRENTE);
  mEsq(100,FRENTE);
  delay(1000);
  mDir(0,FRENTE);
  mEsq(255,FRENTE);
  delay(1000);
  mDir(0,TRAS);
  mEsq(100,TRAS);
  delay(1000);
}
