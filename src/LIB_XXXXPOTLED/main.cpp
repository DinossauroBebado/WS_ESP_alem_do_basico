#include "leds.h" 
#include "pot.h"

class PotenciometroLEDs : public Potenciometro, public Leds {
  private:
    int led1Pin;
    int led2Pin;
    int led3Pin;

  public:
    // Construtor da classe PotenciometroLEDs
    PotenciometroLEDs(int potPin, int led1Pin, int led2Pin, int led3Pin) : Potenciometro(potPin), Leds(led1Pin, led2Pin, led3Pin), led1Pin(led1Pin), led2Pin(led2Pin), led3Pin(led3Pin) {
    }

    // Função para controlar os LEDs com base na tensão lida pelo potenciômetro
    void controlarLeds() {
      float tensao = lerTensao(); // Lê a tensão do potenciômetro

      // Verifica a tensão lida e acende os LEDs conforme necessário
      if (tensao > 3.0) {
        PotenciometroLEDs.allOn(); // Acende todos os LEDs
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
};