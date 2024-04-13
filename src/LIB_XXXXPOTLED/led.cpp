#include "led.h"

    // Construtor da classe LED
    LED::LED(int pin) {
      this->pin = pin;
      pinMode(pin, OUTPUT); // Define o pino como saída
    }

    // Função para ligar o LED
    void LED::on() {
      digitalWrite(pin, HIGH); // Define o pino como alto (ligado)
    }

    // Função para desligar o LED
    void LED::off() {
      digitalWrite(pin, LOW); // Define o pino como baixo (desligado)
    }
