#ifndef __AVR_ATmega328__
  #define __AVR_ATmega328__
   #endif

#include <avr/io.h>
#include<util/delay.h>
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"

#define seat_sense !(PIND &(1<<PD3))
#define led_clear PORTD &=~(1<<PD2)

int main()
{
    seat_sensing();
    adc_initialization();
    timer_initialization();
    lcd_initialization();			/* Initialization of LCD*/

    uint16_t temp_var;

	while(1)
    {
        if(seat_sense)
        {
            PORTD|=(1<<PD4);
            if(heater_set){
                led_set;
                _delay_ms(200);
                lcd_off();
                temp_var=adc_sense(2);
                pwm_out(temp_var);

            }
            else
                {
                    led_clear;
                     _delay_ms(200);
                    heater_clear;
                    _delay_ms(200);
                    lcd_off();
                }
        }
        else{
            led_clear;
            _delay_ms(200);
            heater_clear;
            _delay_ms(200);
            lcd_off();
        }
    }
    return 0;
}