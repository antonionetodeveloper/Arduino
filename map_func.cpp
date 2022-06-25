#include <Arduino.h>

// ports
#define led 3
#define potenciometro A0

void setup(){
  pinMode(led, OUTPUT);
  pinMode(potenciometro, INPUT);
}

void loop(){
  int pot = analogRead(potenciometro);
	analogWrite(led, map(pot, 0, 1023, 0, 255));
	// map(referencia, entrada minima, entrada maxima, saida minima, saida maxima);
}