#include <Arduino.h>

const int potPin = 36, leds[] = {23, 19, 18, 5, 17, 16, 4, 0};

void setup() {
  for (int i = 0; i < 8; i++) pinMode(leds[i], OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {
  int n = map(analogRead(potPin), 0, 4095, 0, 8);
  for (int i = 0; i < 8; i++) digitalWrite(leds[i], i < n);
  delay(100);
}