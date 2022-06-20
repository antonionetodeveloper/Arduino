/*-----------------   "RAINBOW"   -----------------*/

#include <Arduino.h>
#define red 2
#define blue 4
#define green 7
#define button 8

// 1 ... 7
int color = 0;


void setup(){
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(button, INPUT);
  
  Serial.begin(9600);
}

void loop(){
  if(color == 7){
    color = 0;
  }

  if(digitalRead(button) == HIGH){
    color += 1;
    changeColor(color);
    Serial.println(color);
  }
  
  delay(100);
}


void changeColor(int num){

  if(num == 1){ // Red
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
  }
  
  if(num == 2){ // Green
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
  }
  
  if(num == 3){ // Blue
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
  }
  
  if(num == 4){ // Laranja
    digitalWrite(red, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
  }
  
  if(num == 5){ // Ciano
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(blue, HIGH);
  }
  
  if(num == 6){ // Magenta
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
  }
  
  if(num == 7){ // Branco
    digitalWrite(red, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(blue, HIGH);
  }

}
