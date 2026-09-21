#include <Arduino.h>

void setup() {
  pinMode(8, OUTPUT); // Red LED
  pinMode(9, OUTPUT); // Yellow LED
  pinMode(10, OUTPUT); // Green LED
  pinMode(11, OUTPUT); // Blue LED
  pinMode(12, OUTPUT); // White LED
}

void loop() {
  int brightness = analogRead(7) / 16; // Brightness range: 0-255 (8-bit PWM value)
  int period = analogRead(6) / 4.1363 + 10; // Blink period: 10-1000 (ms)
  int color = analogRead(5) / 819; // Color range: 0-5 (# of LEDs turned on at a time)

  for (int i = 1; i <= 5; i++) { // More pins will be lighted up with a higher color value
    if (color >= i) {
      analogWrite(i + 7, brightness);
    }
  }

  delay(period);

  for (int i = 12; i >= 8; i--) { // Turns off all LEDs regardless of color value
    analogWrite(i, 0);
  }

  delay(period);
}