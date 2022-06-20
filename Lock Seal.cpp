#include <Arduino.h>

// ports
#define button 2
#define led 4

// 0 = false, 1 = true
int isClicked = 0;
int isLocked = 0;

void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if(digitalRead(button) == HIGH){
    isClicked = 1;
    isLocked = 0 ;
    
  }else{
    isLocked = 1;
  }

  keyUp();
}

void keyUp(){
  if(isClicked == 1 && isLocked == 1){
    isClicked = 0;
    isLocked = 0;
    
    turnONorOFF();
  }
}

void turnONorOFF(){
  if(digitalRead(led) == HIGH){
    digitalWrite(led, LOW);
  }else{
    digitalWrite(led, HIGH);
    
  }
}
