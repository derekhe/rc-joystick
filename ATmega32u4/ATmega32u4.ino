#include "HID-Project.h"

#define DEBUG 0

void setup() {
  pinMode(5, INPUT);
  pinMode(6, INPUT);

  Gamepad.begin();
#ifdef DEBUG
  Serial.begin(230400);
#endif
}

void loop() {
  long ch1 = pulseIn(5, HIGH, 50000);
  long ch2 = pulseIn(6, HIGH, 50000);

  int16_t x = map(ch1, 1000, 2000, 0, 32768);
  int16_t y = map(ch2, 1000, 2000, 0, 32768);

#ifdef DEBUG
  Serial.print(ch1);
  Serial.print(',');
  Serial.print(ch2);
  Serial.print(',');
  Serial.print(x);
  Serial.print(',');
  Serial.print(y);
  Serial.print('\n');
#endif

  Gamepad.xAxis(x);
  Gamepad.yAxis(y);
  Gamepad.write();
}
