#include <Arduino.h>

// Se define la terminal del LED que tiene el ESP32.
#define LedPin 14             // Constante o Macros 
//int ledPin = 12;
#define pi 3.14
//Constante : esto ya no es una variable, no ocupa un lugar en la memoria


void setup() {
  // Inicializando comunicación serial para poder comunicarse con el MOnitor Virtual
  Serial.begin(9600);
  //   9600 : ideal cuando no usamos wifi
  // 115200 : consume muchos recursos
  
  // Declaro mi GPIO14 como salida --> D14
  pinMode(LedPin, OUTPUT);       
  // Configuramos LedPin que corresponde a la terminal 2 como salida. 
  // Del ESP32 saldrá algo; un Voltaje

  // Envio una trama (texto) al Monitor Serial
  Serial.println("Hello, ESP32!");
}

void loop() {
  // Enviando un voltaje de 3.3V a mi GPIO14
  digitalWrite(LedPin, HIGH); //  LedPin toma un estado ALTO o 1 logico.
  // Publico el estado de mi LED por el Monitor Serial
  Serial.println("Estado : PRENDIDO");
  // Retardo de 1s
  delay(1000);                // Esperamos 1000 mili-Segundos que es igual a 1 Segundo.
  
  // Enviando un voltaje de 0V a mi GPIO14
  digitalWrite(LedPin, LOW);  // LedPin toma un estado BAJO o 0 logico.
  // Publico el estado de mi LED por el Monitor Serial
  Serial.println("Estado : APAGADO");
  // Retardo de 1s 
  delay(1000);                // Esperamos 1000 mili-Segundos que es igual a 1 Segundo.
}