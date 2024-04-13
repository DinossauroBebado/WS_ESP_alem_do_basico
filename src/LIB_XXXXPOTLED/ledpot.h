#include "pot.h"
#include "leds.h"



class PotenciometroLEDs : public Potenciometro, public Leds {
  private:
    int led1Pin;
    int led2Pin;
    int led3Pin;

  public:
    // Construtor da classe PotenciometroLEDs
    PotenciometroLEDs(int potPin, int led1Pin, int led2Pin, int led3Pin) : Potenciometro(potPin), Leds(led1Pin, led2Pin, led3Pin), led1Pin(led1Pin), led2Pin(led2Pin), led3Pin(led3Pin){}
    

    // Função para controlar os LEDs com base na tensão lida pelo potenciômetro
    void controlarLeds();
    };