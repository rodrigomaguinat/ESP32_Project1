#include <Arduino.h>

#define Salida 2

volatile bool toggle = true;
void IRAM_ATTR onTimer();   // Declarar la función de interrupción

hw_timer_t *timer0 = NULL;   // Declarar un apuntador de tipo hw_timer_t


void setup() {

  Serial.begin(9600);                             // Configuración de comunicación serial 

  pinMode(Salida, OUTPUT);                        // Configuración de la terminal Salida como salida
  // Activando algo, puede ser un LED, motor, etc

  timer0 = timerBegin(0, 80, true);                // Inicializamos el timer
  /*******************************
   * 1.- El primer parámetro es el timer que vamos a utilizar, puede tomar valores de 0 a 3 (hay 4 Timer), todos los timer son de 64 bits
   * 2.- El segundo parámetro es el valor del preescaler, el prescaler es de 16 bits lo cual puede tomar valores de 0 a 65536 ('onTimer' es el nombre de mi Función de Interrupción)
   * 3.- El tercer parámetro indica si el contador cuenta hacia arriba o hacia abajo, puede tomar valores booleanos, true o false respectivamente.
   ******************************/

  timerAttachInterrupt(timer0, &onTimer, true);    // Indicamos que función de interrupción se ejecutara.
  /********************************
   * 1.- El primer parámetro es el apuntador '*timer0'
   * 2.- El segundo parámetro es la dirección de memoria de la función de interrupción que se ejecutara.
   * 3.- El tercer parámetro indica si la interrupción a generar es de flanco o de nivel, toma valores booleanos, true y false respectivamente.
   ********************************/

  timerAlarmWrite(timer0, 10000, true);          // Establecer el limite del contador
  /********************************
   * 1.- El primer parámetro es el apuntador *timer0.
   * 2.- El segundo parámetro es el valor al que tiene que llegar el contador para ejecutar la función de interrupción. 
            (1000000 :  1      seg -    1 parpadeo  en 1 seg)  - cuando es muy lento, una señal es dificil de ser capturada
            (  10000 : 10 mili seg -  100 parpadeos en 1 seg)
            (   1000 : 10 kilo seg - 1000 parpadeos en 1 seg)  // podemos tener esto, porque tenemos una precision de 1 micro seg
   * 3.- El tercer argumento indica si el contador debe volver a cero o no (o reiniciar)
   *******************************/

  timerAlarmEnable(timer0);                        // Habilitamos la interrupción del timer.

  /* Tambien podemos deshabilitar el timer con */
  //timerAlarmDisable(timer);
  
}

void loop() {
    digitalWrite(Salida, toggle);                 // Que el digitalWrite de Salida cambie o se togglee
}


// Función de interrupción.
void IRAM_ATTR onTimer() {
  toggle ^= true;                                // El toogle va a cambiar (invierte el valor)
  //toggle =toggle xor true
  
  // cada 1 seg cambia el valor del toggle
}