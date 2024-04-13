#include <Arduino.h> 

class Potenciometro {
  private:
    int pin;

  public:
    // Construtor da classe Potenciometro
    Potenciometro(int pin);

    // Função para ler o valor analógico do potenciômetro e calcular a tensão correspondente
    float lerTensao() ;
};