#include "blink.h"
#include <string.h>
#include <stdio.h>

int main (int argc, char *argv[]){

if(!strcmp(argv[1],"red")){
	ledBlinkRed();
}
if(!strcmp(argv[1],"green")){
	ledBlinkGreen();
}

if(!strcmp(argv[1],"all")){
	ledBlinkall();
}

if(!strcmp(argv[1],"rand")){
	ledBlinkRandom();
}

return 0;
}

