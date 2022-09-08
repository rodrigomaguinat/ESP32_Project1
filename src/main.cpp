#include <Arduino.h>

/* Declaracion de variables */
bool a = true, b = true;
int c = 0, d = 10;
String msg = "Electronica";

void setup() {
  Serial.begin(9600);                         // Inicialización de comunicación serial.

/********************* Sintaxis del If ********************/
/*                   if( (Condicion) ){                   */
/*                     Bloque de codigo                   */
/*                   }                                    */
/*                                                        */
/**********************************************************/

  if((a==b) || (!a==!b)){                     // Pregunta si las dos condicionales son verdaderas.
    Serial.println("A es igual a B");         // Si es verdad se ejecuta esta linea.
  }else{    
    Serial.println("A es diferente de B");    // Si es falso se ejecuta esta linea.
  }

  if(c<d){                                    // Pregunta si la variable C es menor que la variable D.
    Serial.println("C es menor que D");       // Si es verdadero se ejecuta esta linea.
  }else if(c==d){                             // Sino, pregunta si la variable C es igual a D.
    Serial.println("C es igual a D");         // Si lo anterior es verdad se ejecuta esta linea.
  }else {
    Serial.println("C es mayor que D");       // Sino se ejecuta esta linea de codigo.
  }


  if(msg.equals("Electronica")){              // Pregunta si la cadena de caracteres almacenada en msg es igual a "Electronica"
    Serial.println("Contraseña correcta");    // Si es verdad se ejecuta esta linea.
  }else{
    Serial.println("No, no, no, esa no es");  // Sino se ejecuta esta otra linea.
  }

  /* 
  pregunta si c es menor que d, 
  si es VERDADERO el valor almacenado en msg es el que este a la izquierda de los dos puntos, 
  si es FALSO almacena el valor que este a la derecha de los dos puntos. 
  */
  msg = (c<d)?"C es menor que D":"C es mayor que D";  
  Serial.println(msg);                        // Envió del valor de la variable msg al puerto serial.


}

void loop() {
  /* Si el valor de c es mayor a 7, le asignamos el valor de 0. */
  /*
  if(c>7){
    c = 0;
  }
  */

  c = c>7?0:c;                                // Equivalente al if anterior.
  Serial.print("Valor del contador: ");       // Envió de cadena de caracteres.
  Serial.println(c);                          // Envió de la variable C.
  c++;                                        // Incremento de la variab le C en 1.
  delay(500);                                 // Espera 1/2 segundo en esta linea.
}