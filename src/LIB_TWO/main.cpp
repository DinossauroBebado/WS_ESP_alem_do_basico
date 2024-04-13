#include "led.h"

// Exemplo de uso da classe LED
const int ledPin = 23; // Pino do LED
LED meuLED(ledPin); // Cria uma instância da classe LED

void setup() {
  // Não é necessário nada no setup para este exemplo
}

void loop() {
  meuLED.on(); // Liga o LED
  delay(1000); // Aguarda 1 segundo
  meuLED.off(); // Desliga o LED
  delay(1000); // Aguarda 1 segundo
}

