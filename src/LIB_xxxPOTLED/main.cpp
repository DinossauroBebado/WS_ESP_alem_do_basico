#include "leds.h"
#include "pot.h"

// Exemplo de uso das classes Potenciometro e Leds
const int potPin = 4; // Pino do potenciômetro
const int led1Pin = 21; // Pino do LED 1
const int led2Pin = 22; // Pino do LED 2
const int led3Pin = 23; // Pino do LED 3
Potenciometro meuPot(potPin); // Cria uma instância da classe Potenciometro
Leds meusLeds(led1Pin, led2Pin, led3Pin); // Cria uma instância da classe Leds

void setup() {
  // Não é necessário nada no setup para este exemplo
  Serial.begin(9600);
}

void loop() {
  float tensao = meuPot.lerTensao(); // Lê a tensão do potenciômetro
  Serial.println(tensao);
  // Verifica a tensão lida e acende os LEDs conforme necessário
  if (tensao > 3.0) {
    meusLeds.allOn(); // Acende todos os LEDs
  } else if (tensao > 2.0 && tensao < 3) {
    meusLeds.allOn(); // Acende LED 1 e LED 2
    meusLeds.led3Off(); // Desliga LED 3
  } else if (tensao > 1.0 && tensao < 2) {
    meusLeds.allOn(); // Acende apenas LED 1
    meusLeds.led2Off(); // Desliga LED 2
    meusLeds.led3Off(); // Desliga LED 3
  } else {
    meusLeds.allOff(); // Desliga todos os LEDs
  }

  delay(100); // Aguarda 100 milissegundos
}