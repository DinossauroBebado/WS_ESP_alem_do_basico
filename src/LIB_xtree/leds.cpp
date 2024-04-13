#include "leds.h"


   
    // Função para acender todos os Leds
    void Leds::allOn() {
      led1.on();
      led2.on();
      led3.on();
    }

    // Função para apagar todos os Leds
    void Leds::allOff() {
      led1.off();
      led2.off();
      led3.off();
    }

    // Função para acender LED 1
    void Leds::led1On() {
      led1.on();
    }

    // Função para apagar LED 1
    void Leds::led1Off() {
      led1.off();
    }

    // Função para acender LED 2
    void Leds::led2On() {
      led2.on();
    }

    // Função para apagar LED 2
    void Leds::led2Off() {
      led2.off();
    }

    // Função para acender LED 3
    void Leds::led3On() {
      led3.on();
    }

    // Função para apagar LED 3
    void Leds::led3Off() {
      led3.off();
    }
