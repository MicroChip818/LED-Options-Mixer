#include <Arduino.h>

void setup() {
  pinMode(8, OUTPUT); // Red LED
  pinMode(9, OUTPUT); // Yellow LED
  pinMode(10, OUTPUT); // Green LED
  pinMode(11, OUTPUT); // Blue LED
  pinMode(12, OUTPUT); // White LED
}

void loop() {
  int brightness = analogRead(7) / 16; // Brightness ranges from 0 to 255 (8-bit analog)
  int period = analogRead(6) / 4.1363 + 10; // Period ranges from 10 ms to 1000 ms
  int color = analogRead(5) / 819; // Color ranges from 0 (all off) to 5 (all on)

  for (int i = 1; i <= 5; i++) {
    if (color >= i) {
      analogWrite(i + 7, brightness);
    }
  }

  delay(period);

  for (int i = 12; i >= 8; i--) {
    analogWrite(i, 0);
  }

  delay(period);
}