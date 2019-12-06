#include "blink.h"
#include <string.h>

int main (int argc, char *argv[]){

if(strcmp(argv[1],"rot")==true){
	ledBlinkRed();
}else if(strcmp(argv[1],"gruen")==true){
//	ledBlinkGreen();
}else if(strcmp(argv[1],"all")){
//	ledBlinkall();
}else{
//	ledBlinkRandom();
}



return 0;
}

