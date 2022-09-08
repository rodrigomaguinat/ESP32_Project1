#include <Arduino.h>

// Variable de tipo boleano, solo puede almacenar verdadero o falso (true, false)
bool myBool = true;
bool myBool2 = false;

// Variable de tipo byte (1 byte)
byte myByte = 1;
byte myByte2;

// Variable de tipo caracter (1 byte)
char myChar = 'E';
char myChar2;

// Variable de tipo entero (2 bytes)
int myInt = 1;
int myInt2;

// Variable de tipo decimal simple (4 bytes) hasta 6 decimales
float myFloat = 1.0;
float myFloat2;

// Variable de tipo entero largo (4 bytes) valores enteros
long myLong = 1;
long myLong2;

// Variable de tipo doble decimal (8 bytes) hasta 14 decimales
double myDouble = 1.0;
double myDouble2;

// Variable de tipo cadena de caracteres
String myString = "Hola mundo";
String myString2;


// Variable uint8_t
uint8_t my_uint_8 = 12;


void setup() {
  myByte2 = 117;
  Serial.begin(9600);
}

void loop() {
  Serial.print("Byte : ");
  Serial.println(myByte2);
  Serial.print("Espacio de memoria de varible int : ");
  Serial.println(sizeof(myInt));
  Serial.print("Espacio de memoria de varible uint8_t : ");
  Serial.println(sizeof(my_uint_8));

  delay(2000);
}