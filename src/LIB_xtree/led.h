#include <Arduino.h>

class LED {
  private:
    int pin;

  public:
    // Construtor da classe LED
    LED(int pin) ;
    // Função para ligar o LED
    void on();
    // Função para desligar o LED
    void off();
    
};