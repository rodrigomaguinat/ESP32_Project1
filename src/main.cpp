#include <Arduino.h>

#define PinADC 34
#define Resolucion 3.3/4095     // Resolucion de ADC de 12bits - 4096 combinaciones 
//#define Resolucion 3.3/2047   // Resolucion de ADC de 11bits - 2048 combinaciones
//#define Resolucion 3.3/1023   // Resolucion de ADC de 10bits - 1024 combinaciones
//#define Resolucion 3.3/511    // Resolucion de ADC de 9bits - 512 combinaciones

int rADC = 0;
// int voltaje = 0;

void setup() {
  Serial.begin(9600);

  analogReadResolution(12); // Resolucion del ADC, Puede tomar valores del 9 al 12
  //analogSetAttenuation(ADC_11db); // Atenuacion del ADC, puede tomar valores ADC_0db, ADC_2_5db, ADC_6db, ADC_11db
  analogSetPinAttenuation(PinADC, ADC_11db);

  /***************************************
   * La atenuación de 0 dB (ADC_0db) proporciona un voltaje de escala completa de 1,1 V
   * La atenuación de 2,5 dB (ADC_2_5db) proporciona un voltaje de escala completa de 1,5 V
   * La atenuación de 6 dB (ADC_6db) proporciona un voltaje de escala completa de 2,2 V
   * La atenuación de 11 dB (ADC_11db) proporciona un voltaje de escala completa de 3,9 V (Nota)
   * 
   * A una atenuación de 11 dB, el voltaje máximo está limitado por VDDA, no por el voltaje de escala completa.
   **************************************/


  //https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/peripherals/adc.html

}

void loop() {
  
  rADC = analogRead(PinADC);

  Serial.print("Valor: ");
  Serial.print(rADC);
  Serial.print(" --> ");
  Serial.print("Voltaje: ");
  Serial.println(rADC*Resolucion,2);
  
  delay(500);
}