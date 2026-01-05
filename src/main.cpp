#include <Arduino.h>
#include "led.h"
#include "analog_led.h"

void setup() {
  init_analog_led();
}

void loop() {
  analogLED();
}