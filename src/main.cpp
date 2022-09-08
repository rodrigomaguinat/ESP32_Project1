#include <Arduino.h>

bool a, b;    // Declaración de variables de tipo bool.
int c, d;     // Declaración de variables de tipo enteras.

void setup() {
  Serial.begin(9600);                     // Inicialización de comunicación serial.

  a = true;                               // Asignación de valor a la variable a.
  b = false;                              // Asignación de valor a la variable b.

  Serial.print("valor de A: ");           // Envió de cadena de caracteres.       
  Serial.println(a);                      // Envió del valor de la variable a con salto de linea.

  Serial.print("Valor de B: ");           // Envió de cadena de caracteres. 
  Serial.println(b);                      // Envió del valor de la variable b con salto de linea.

  Serial.print("Valor negado de A: ");    // Envió de cadena de caracteres. 
  Serial.println(!a);                     // Envió del valor negado de a con salto de linea.
  Serial.print("Valor negado de B: ");    // Envió de cadena de caracteres. 
  Serial.println(!b);                     // Envió del valor negado de b con salto de linea.

  Serial.print("A && B: ");               // Envió de cadena de caracteres. 
  Serial.println(a && b);                 // Envió del resultado de la operacion logica AND de a con b con salto de linea.

  Serial.print("A || B: ");               // Envió de cadena de caracteres. 
  Serial.println(a || b);                 // Envió del resultado de la operacion logica OR de a con b con salto de linea.

  c = 5;                                  // Asignación del varlo 5 a la variable c.
  d = 5;                                  // Asignación del valor 5 a la variable d.

  Serial.print("C es igual a D: ");       // Envió de cadena de caracteres. 
  Serial.println(c == d);                 // Envió del resultado de la pregunta ¿c es igual a d?.

  /************************     NOTA    ******************************/
  /*                                                                 */
  /*        c == d                              c = d                */
  /*          ^                                   ^                  */ 
  /*  Esto es una pregunta.              Esto es una asignación.     */
  /*    ¿c es igual a d?.              El valor de d se guarda en c. */ 
  /*                                                                 */
  /*******************************************************************/

  Serial.print("C es diferente de D: ");        // Envió de cadena de caracteres. 
  Serial.println(c != d);                       // Envió del resultado de la pregunta ¿c es diferente de d?.

  Serial.print("C es menor que D: ");           // Envió de cadena de caracteres. 
  Serial.println(c < d);                        // Envió del resultado de la pregunta ¿c es menor que d?.

  Serial.print("C es mayor que D: ");           // Envió de cadena de caracteres. 
  Serial.println(c > d);                        // Envió del resultado de la pregunta ¿c es mayor que d? .

  Serial.print("C es menor o igual que D: ");   // Envió de cadena de caracteres. 
  Serial.println(c <= d);                       // Envio del resultado de la pregunta ¿c es menor o igual a d?.

  Serial.print("C es mayor o igual que D: ");   // Envió de cadena de caracteres. 
  Serial.println(c >= d);                       // Envio del resultado de la pregunta ¿c es mayor o igual a d?.

}

void loop() {
    // Todo se ejecuta en el Setup para verlo una sola vez.
}