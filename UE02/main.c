#include "blink.h"
#include <string.h>
#include <stdio.h>

int main (int argc, char *argv[]){

printf("%d",GPIOExport(POUT));		//POUT = Red
printf("%d",GPIODirection(POUT,OUT));
printf("%d",GPIOWrite(POUT,HIGH));

//printf("%d",GPIOWrite(POUT,LOW));

if(!strcmp(argv[1],"rot")){
	printf("Rot");
	ledBlinkRed();
}
if(!strcmp(argv[1],"green")){
	ledBlinkGreen();
}

return 0;
}

