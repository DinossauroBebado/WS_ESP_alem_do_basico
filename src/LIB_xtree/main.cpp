#include <Arduino.h>
#include "leds.h"

// Exemplo de uso da classe Leds
const int led1Pin = 23; // Pino do LED 1
const int led2Pin = 22; // Pino do LED 2
const int led3Pin = 21; // Pino do LED 3
Leds meusLeds(led1Pin, led2Pin, led3Pin); // Cria uma instância da classe Leds

void setup() {
  // Não é necessário nada no setup para este exemplo
}

void loop() {
  meusLeds.allOn(); // Acende todos os LEDs
  delay(1000); // Aguarda 1 segundo
  meusLeds.allOff(); // Apaga todos os LEDs
  delay(1000); // Aguarda 1 segundo
}
