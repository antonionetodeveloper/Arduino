#include <Arduino.h>

#define input A0
int leds[] = {7, 6, 5, 4, 3, 2};

void setup(){
	for(int c = 0; c < 6; c++){
		pinMode(leds[c], OUTPUT);
	}
	pinMode(input, INPUT);
}


void loop(){
	int input_value = analogRead(input);
	acender(map(input_value, 0, 1023, 1, 6));
}

void acender(int led_num){
	// led_num vai de 1 a 6
	// contabilizando 6 leds

	for(int c = 0; c < led_num; c++){
		digitalWrite(leds[c], HIGH);
	}
	for(int c = led_num ; c < 6 ; c++){
		digitalWrite(leds[c], LOW);
	}
}
