#include "blink.h"
#include <stdio.h>
#include <wiringPi.h>

int ledBlinkall(){
return 0;
}

int ledBlinkGreen(){
return 0;
}

void ledBlinkRed(){
wiringPiSetup();
pinMode(RED,OUTPUT);
	while(true){
		digitalWrite(RED,HIGH);
		delay(500);
		digitalWrite(RED,LOW);
		delay(500);
	}
}

int ledBlinkRandom(){
return 0;
}
