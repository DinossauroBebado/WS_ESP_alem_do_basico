#include "led.h"


class Leds {
  private:
    LED led1;
    LED led2;
    LED led3;

  public:
    // Construtor da classe Leds
    Leds(int pin1, int pin2, int pin3) : led1(pin1), led2(pin2), led3(pin3) {
    }

    // Função para acender todos os LEDs
    void allOn();

    // Função para apagar todos os LEDs
    void allOff();

    // Função para acender LED 1
    void led1On();

    // Função para apagar LED 1
    void led1Off() ;

    // Função para acender LED 2
    void led2On() ;

    // Função para apagar LED 2
    void led2Off();

    // Função para acender LED 3
    void led3On();

    // Função para apagar LED 3
    void led3Off();
};