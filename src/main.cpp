#include <Arduino.h>

// Declaracion de variables
String msg;
int dia = 2;

// Configuraciones iniciales
void setup(){
  Serial.begin(9600);   // Configuracion de la comunicacion serial
  delay(5000);

  // Selector; verifica cual de los casos es igual a la variable
  switch(dia){
    case 1:             // Instrucciones del caso 1, termina hasta encontrar la palabra (break)
      msg = "Lunes ";   // Puede ser mas de una instruccion
      // ...            
      break;            // Final del caso 1
    case 2:
      msg = "Martes ";
      break;
    case 3:
      msg = "Miercoles ";
      break;
    case 4:
      msg = "Jueves ";
      break;
    case 5:
      msg = "Viernes ";
      break;
    case 6:
      msg = "Sabado ";
      break;
    case 7:
      msg = "Domingo ";
      break;
    default:
      msg = "No existe ese dia";
      break;
  }
}

void loop(){
  Serial.print("El dia es : ");
  Serial.println(msg);  // Envio de cadena de caracteres
  delay(2000);
}