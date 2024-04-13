#include <Arduino.h>

class LED {
  private:
    int pin;

  public:
    // Construtor da classe LED
    LED(int pin) {
      this->pin = pin;
      pinMode(pin, OUTPUT); // Define o pino como saída
    }

    // Função para ligar o LED
    void on() {
      digitalWrite(pin, HIGH); // Define o pino como alto (ligado)
    }

    // Função para desligar o LED
    void off() {
      digitalWrite(pin, LOW); // Define o pino como baixo (desligado)
    }
};

// Exemplo de uso da classe LED
const int ledPin = 23; // Pino do LED
LED meuLED(ledPin); // Cria uma instância da classe LED

void setup() {
  // Não é necessário nada no setup para este exemplo
}

void loop() {
  meuLED.on(); // Liga o LED
  delay(1000); // Aguarda 1 segundo
  meuLED.off(); // Desliga o LED
  delay(1000); // Aguarda 1 segundo
}