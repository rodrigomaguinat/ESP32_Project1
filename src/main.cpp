#include <Arduino.h>

/********************************************************
 NOTA
 Las terminales de la 34 a la 39 no tienen resistencias 
 Pull-Up ni Pull-Down y no pueden ser usadas como salidas
 ********************************************************/

#define Interrupcion 23
#define Salida 2
 
volatile boolean toggle = true;
volatile unsigned long tiempoDeInterrupcionAnterior = 0;
#define tiempoDeRebote 400

/* Declaración de la función de interrupción */
// IRAM_ATTR : Definimos que se tratará de una Interrupción Externa
void IRAM_ATTR funcionDeInterrupcion();

void setup() {

  Serial.begin(9600);
  pinMode(Salida, OUTPUT);
  pinMode(Interrupcion, INPUT_PULLUP);                            // Configuración de resistencia Pull-Up 
  //pinMode(Interrupcion, INPUT_PULLDOWN);                        // Configuración de resistencia Pull-Down 
  attachInterrupt(digitalPinToInterrupt(Interrupcion), funcionDeInterrupcion, FALLING);  // Flanco de bajada 
  //attachInterrupt(digitalPinToInterrupt(Interrupcion), funcionDeInterrupcion, RISING); // Flanco de subida 
  //attachInterrupt(digitalPinToInterrupt(Interrupcion), funcionDeInterrupcion, CHANGE); // Detecta ambos flancos

}

void loop() {

  Serial.println("Mensaje");
  delay(1000);

  if (toggle){
    Serial.println("Estoy en el if");
  }

  // Instrucción 1
  // Instrucción 2
  // Instrucción 3
  
}

/* Definición de la función de interrupción */
void IRAM_ATTR funcionDeInterrupcion() {
  if(millis() - tiempoDeInterrupcionAnterior > tiempoDeRebote){

    digitalWrite(Salida, toggle);
    Serial.println("Interrupcion");
    toggle ^= true; 
    //toggle = toggle^true    
    // togglear : ir de un falso a un verdadero (prender o apagar LED); cambiar de estado
    
    tiempoDeInterrupcionAnterior = millis();
  }                                                            
}