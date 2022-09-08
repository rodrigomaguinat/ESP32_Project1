#include <Arduino.h>

/* La variable bool solo puede guardar valores VERDADERO o FALSO (true - false) */
bool var = true;
bool var2 = false;
 
/****** OPERADOR MODULO ******/
/*             %             */


/* Se puede declarar varias variables con un solo tipo de variable, 
   solo hay que separar los nombres de las variables por comas. */
     int       a=3,    b, c=0, d=0; 
/*    ^         ^      ^  
    Tipo      Nombre  Nombre  */


void setup() {
  Serial.begin(9600);     // Inicialización de comunicación serial.
  b = 3;                  // Asignación del valor de 3 en la variable b.

  Serial.print("3%3: ");  // Envio de una cadena de caracteres por comunicación serial.
  Serial.println(a%b);    // Envio de la operación modulo de a entre b y despues un salto de linea.

  a = 4;                  // Asignación del valor de 4 en la variable a.
  Serial.print("4%3: ");  // Envio de una cadena de caracteres por comunicación serial.
  Serial.println(a%b);    // Envio de la operación modulo de a entre b y despues un salto de linea.

  a = 5;                  // Asignación del valor de 5 en la variable a.
  Serial.print("5%3: ");  // Envio de una cadena de caracteres por comunicación serial.
  Serial.println(a%b);    // Envio de la operación modulo de a entre b y despues un salto de linea.

  /* Se les asigno este valor de forma que en el 
     incremento o decremento empezara desde 0. */
  a = 0;                  // Asignación del valor de 0 en la variable a.
  b = 0;                  // Asignación del valor de 0 en la variable b.
}

void loop() {

  // Operación alternativa para realizar un incremento. =>   a = a + 1;

  a++;                                      // Realizamos un incremento en 1 a la variable a.
  Serial.print("Incremento de A: ");        // Envio de una cadena de caracteres por comunicación serial.
  Serial.println(a);                        // Envio del valor de la variable a por comunicación serial con salto de linea.

  // Operación alternativa para realizar un decremento. =>   b = b - 1;

  b--;                                      // Realizamos un decremento en 1 a la variable b.
  Serial.print("Decremento de B: ");        // Envio de una cadena de caracteres por comunicación serial.
  Serial.println(b);                        // Envio del valor de la variable b por comunicación serial con salto de linea.

  // Operación alternativa para realizar un incremento. =>   c = c + 2;

  c+=2;                                     // Realizamos un incremento en 2 a la variable c.
  Serial.print("Incremento de C en 2: ");   // Envio de una cadena de caracteres por comunicación serial.
  Serial.println(c);                        // Envio del valor de la variable b por comunicación serial con salto de linea.

  // Operación alternativa para realizar un decremento. =>   d = d - 4; 

  d-=4;                                     // Realizamos un incremento en 4 a la variable d.
  Serial.print("Decremento de D en 4:");    // Envio de una cadena de caracteres por comunicación serial.
  Serial.println(d);                        // Envio del valor de la variable d por comunicación serial con salto de linea.


  delay(1000);                              // Esperamos 1 segundo en esta linea.
}