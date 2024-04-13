// Include the ESP32 Arduino Core library
#include <Arduino.h>

// Define the number of LEDs and their corresponding pins
const int numLEDs = 3; // Change this according to the number of LEDs you have
int ledPins[numLEDs] = {21, 22, 23}; // Define the pin numbers

void setup() {
  // Initialize each LED pin as an output
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Turn on each LED one by one
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn LED on
    delay(500); // Wait for half a second
  }

  // Turn off each LED one by one
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], LOW); // Turn LED off
    delay(500); // Wait for half a second
  }
}
