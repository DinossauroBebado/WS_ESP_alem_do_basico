#include <Arduino.h>
#include "pot.h"


// Exemplo de uso da classe Potenciometro
const int potPin = 4; // Pino do potenciômetro
Potenciometro meuPot(potPin); // Cria uma instância da classe Potenciometro

void setup() {
  Serial.begin(9600); // Inicializa a comunicação serial
}

void loop() {
  float tensao = meuPot.lerTensao(); // Lê a tensão do potenciômetro
  Serial.print("Tensao: ");
  Serial.print(tensao, 3); // Imprime a tensão com 3 casas decimais
  Serial.println("V");
  delay(500); // Aguarda 500 milissegundos
}
