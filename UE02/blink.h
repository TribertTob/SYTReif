#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#define LOW 0
#define HIGH 1

#define IN  0
#define OUT 1

#define GREEN 0
#define RED 7

#define POUT 17

#ifndef GPIO_G3_BLINK_H
#define GPIO_G3_BLINK_H
void ledBlinkRed();
void ledBlinkGreen();
void ledBlinkRandom();
void ledBlinkall();
int GPIOExport(int);
int GPIOUnexport(int);
int GPIODirection(int,int);
int GPIORead(int);
int GPIOWrite(int, int);
#endif
