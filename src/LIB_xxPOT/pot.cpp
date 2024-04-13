#include "pot.h"

    Potenciometro::Potenciometro(int pin) {
      this->pin = pin;
      pinMode(pin, INPUT); // Define o pino como entrada
    }

    // Função para ler o valor analógico do potenciômetro e calcular a tensão correspondente
    float Potenciometro::lerTensao() {
      int valorAnalogico = analogRead(pin); // Lê o valor analógico do potenciômetro
      float tensao = valorAnalogico * (3.3 / 4095.0); // Converte o valor analógico para tensão (0-3.3V)
      return tensao;
    }
