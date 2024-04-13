#include "ledpot.h"

// Exemplo de uso da classe PotenciometroLEDs
const int potPin = 4; // Pino do potenciômetro
const int led1Pin = 23; // Pino do LED 1
const int led2Pin = 22; // Pino do LED 2
const int led3Pin = 21; // Pino do LED 3
PotenciometroLEDs meuPotLeds(potPin, led1Pin, led2Pin, led3Pin); // Cria uma instância da classe PotenciometroLEDs

void setup() {
  // Não é necessário nada no setup para este exemplo
}

void loop() {
  meuPotLeds.controlarLeds(); // Controla os LEDs com base na tensão lida pelo potenciômetro
}
