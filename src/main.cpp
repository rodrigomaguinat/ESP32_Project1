#include <Arduino.h>

/***************************** NOTA *****************************
 * Las terminales de la 34 a la 39 no tienen resistencias Pull-Up
 * ni Pull-Down y no pueden ser usadas como salidas.
 */

#define PinIN 18
#define PinOUT 2

void setup() {
  pinMode(PinOUT, OUTPUT);

  //pinMode(PinIN, INPUT);
  pinMode(PinIN, INPUT_PULLDOWN);
  //pinMode(PinIN, INPUT_PULLUP);
}

void loop() {

  if(digitalRead(PinIN)){             // Lectura del estado de la entrada PinIN (si se presiona el botón)
    digitalWrite(PinOUT, HIGH);       // Establece el valor en Alto en la salida PinOUT (enciende la luz)
  }else{
    digitalWrite(PinOUT, LOW);        // Establece el valor en Baja en la salida PinOUT 
  }
}