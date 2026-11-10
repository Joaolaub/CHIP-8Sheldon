#ifndef chip8_h
#define chip8_h
#include <stdio.h>
#include <stdint.h>

typedef struct{
uint8_t valor[4096];

}memory;

typedef struct{
uint8_t valor[16];
uint16_t valor[1];


}registers;



#endif