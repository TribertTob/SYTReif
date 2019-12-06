#ifndef GPIO_G3_BLINK_H
#define GPIO_G3_BLINK_H
#include <stdio.h>
#include <stdbool.h>

static int GPIOExport(int);
static int GPIOUnexport(int);
static int GPIODirection(int,int);
static int GPIORead(int);
static int GPIOWrite(int,int);

#endif
