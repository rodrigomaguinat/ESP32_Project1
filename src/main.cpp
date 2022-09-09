#include <Arduino.h>

// Declaraciones de variables.
int i;

void setup() {
  Serial.begin(9600); // Configuración del puerto serial.

  Serial.println("Ciclo for"); // Envio de cadena de caracteres.
  
  // Comienzo del ciclo for.
  /*************************************************************/
  /*      La variable i comienza a contar desde 0              */
  /*      hasta que la condicion sea falsa con un              */
  /*      incremento de 1 en cada iteracion, se                */
  /*      realizan todas las instrucciones entre llaves.       */
  /*************************************************************/
  for(i=0; i<7; i++){
    Serial.print("Itereacion numero ");
    Serial.println(i);
  }

  Serial.println("");
  Serial.println("Ciclo while");

/**************************************************************/
/*        Primero verifica si la condición es                 */
/*        verdadera y mientras lo sea, ejecutara todo         */
/*        lo que esta entre llaves hasta que la condición     */
/*        sea falsa.                                          */
/**************************************************************/
  while(i>0){
    Serial.print("Itereacion numero ");
    Serial.println(i);
    i--;
  }

  Serial.println("");
  Serial.println("Ciclo do while");

/**************************************************************/
/*        Primero realiza entre llaves y después              */
/*        verifica si la condición es verdadera y             */
/*        mientras lo sea, ejecutara todo de nuevo lo         */
/*        que esta entre llaves hasta que la condición        */
/*        sea falsa.                                          */
/**************************************************************/

  do{
    Serial.print("Itereacion numero ");
    Serial.println(i);
  } while(i==1);
  
  Serial.println("");
  Serial.println("Fin del programa.");
  
}

void loop() {
  
}