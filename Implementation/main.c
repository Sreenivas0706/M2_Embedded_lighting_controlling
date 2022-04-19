/*
 * main.c
 *
 * Created: 11-04-2022 07:24:23
 * Author : Asus Aa
 */ 

#include <avr/io.h>


int main(void)
{
   DDRB=DDRB&0b11111101;
   DDRC=DDRC|0b01000000; 
    while (1) 
    {
		if(PINB & 0b0000010)
		PORTC=PORTC|0b01000000;
		 else
		 PORTC=PORTC&0b10111111;
    }
}

