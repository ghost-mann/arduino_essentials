#include <Arduino.h>
#include "analog_led.h"

int analog_led_pin = 10;

void init_analog_led() {
    pinMode(analog_led_pin,OUTPUT);
}

void analogLED() {
    for (int value = 0; value <= 255; value += 5) {
    analogWrite(analog_led_pin, value);
    delay(30);
    }

    for (int value = 255; value <= 0; value -= 5) {
    analogWrite(analog_led_pin,value);
    delay(30);
    }
}