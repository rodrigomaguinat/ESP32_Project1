#include <Arduino.h>

/***************************************
 * Tenemos dos salidas digitales a analógicas (DAC) 
 * Son las terminales 25 y 26, tiene un DAC de 8 bits - 256 combinaciones
 * tenemos del 0 al 255  
 * donde 0 es 0v y 255 es 3.3v
 ***************************************/

double j = 0;
#define A 127           // Amplitud
#define f 50            // Frecuencia
#define B 128
#define Salida 25

#define PinADC 34
#define PinDAC 26
#define Resolucion 3.3/4095   // Resolucion de ADC de 12 bits - 4096 combinaciones

int rADC = 0;
int voltaje = 0;

void setup() {
  Serial.begin(9600);

  analogReadResolution(12); // Resolucion del ADC, Puede tomar valores del 9 al 12
  //analogSetAttenuation(ADC_11db); // Atenuacion del ADC, puede tomar valores ADC_0db, ADC_2_5db, ADC_6db, ADC_11db
  analogSetPinAttenuation(PinADC, ADC_11db);
}

void loop() {

  /* Nivel de CD */
  dacWrite(PinDAC, 255);  // Establecer un voltaje en la terminal 26.

  rADC = analogRead(PinADC);

  Serial.print("Valor: ");
  Serial.print(rADC);
  Serial.print(" --> ");
  Serial.print("Voltaje: ");
  Serial.println(rADC*Resolucion,2);
  
   /* Señal senoidal */
 for(j = 0; j<360; j+=0.00120){
   dacWrite(Salida, A * sin(2*PI*f*(j*PI/180)) + B);
   Serial.println(A * sin(2*PI*f*(j*PI/180)) + B);
 }
} 