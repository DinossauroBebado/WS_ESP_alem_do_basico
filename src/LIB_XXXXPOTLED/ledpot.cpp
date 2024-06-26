#include "ledpot.h"

void PotenciometroLEDs::controlarLeds() {
      float tensao = lerTensao(); // Lê a tensão do potenciômetro

      // Verifica a tensão lida e acende os LEDs conforme necessário
      if (tensao > 3.0) {
        allOn(); // Acende todos os LEDs
      } else if (tensao > 2.0) {
        allOff(); // Apaga todos os LEDs
        digitalWrite(led1Pin, HIGH); // Liga o LED 1
        digitalWrite(led2Pin, HIGH); // Liga o LED 2
      } else if (tensao > 1.0) {
        allOff(); // Apaga todos os LEDs
        digitalWrite(led1Pin, HIGH); // Liga o LED 1
      } else {
        allOff(); // Apaga todos os LEDs
      }
    }