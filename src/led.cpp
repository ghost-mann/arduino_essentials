#include <Arduino.h>
#include "led.h"

int ledPin = 9;

void initLED() {
    pinMode(ledPin,OUTPUT);
}

void blinkLED() {
    digitalWrite(ledPin,HIGH);
    delay(1000);
    digitalWrite(ledPin,LOW);
    delay(1000);
}