#include "blink.h"

int ledBlinkall(){
return 0;
}

int ledBlinkGreen(){
return 0;
}

void ledBlinkRed(){
pinMode(RED,OUTPUT);
	while(true){
		digitalWrite(RED,HIGH);
		delay(5);
		digitalWrite(RED,LOW);
		delay(5);
	}
}

int ledBlinkRandom(){
return 0;
}
