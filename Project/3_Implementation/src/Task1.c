#ifndef __AVR_ATmega328__
  #define __AVR_ATmega328__
   #endif

#include "Task1.h"
#define PORTD _SFR_IO8(0x0B)

void seat_sensing(){
    DDRD|=(1<<PD2); //Set D2= 1
    DDRD&=~(1<<PD3); //Clear bit
    PORTD|=(1<<PD3); //Set bit
    DDRD&=~(1<<PD4); //Clear bit
    PORTD|=(1<<PD4); //Set bit
}