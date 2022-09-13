#include <Arduino.h>

/********************************************************
 - Tenemos dos salidas digitales a analógicas (DAC)
 - Son las terminales 25 y 26, tiene un DAC de 8 bits - 256 combinaciones
 - Tenemos del 0 al 255 donde 0 es 0V y 255 es 3.3V
 ********************************************************/

// Configuracion ADC
#define PinADC 34
#define Resolucion 3.3V/4095    // Resolucion de ADC de 12 bits - 4096 combinaciones

// Configuracion de Onda Seno
double j = 0;
#define A 127                   // Amplitud
#define B 128
#define Salida 25
int freq = 50;                  // Frecuencia

// Variables para el ADC
int rADC = 0;
int voltaje = 0;


void setup() {
  Serial.begin(9600);

  analogReadResolution(12);     // Resolucion del ADC. Puede tomar valore del 9 al 12
  //analogSetAttenuation(ADC_11db);   
  //Atenuacion del ADC, puede tomar valores ADC_0db, ADC_2_5db, ADC_6db, ADC_11db
  analogSetPinAttenuation(PinADC,ADC_11db);
}

void loop() {
  freq = analogRead(PinADC);
  Serial.println(freq);
  
  // Nivel de CD
  //dacWrite(25,117);           // Establecer un voltaje en la terminal 25

  // Señal Senoidal
  for (j=0; j<20; j+=0.00120){
    dacWrite(Salida, A * sin(2 * PI * freq * (j * PI/180)) + B);
  }
} //https://www.geogebra.org/m/DcUsxQz4