/*
 * Test.cpp
 *
 * Created: 6.10.2021 12:03:10
 * Author : lukas
 */ 

#include <avr/io.h>

#define BOARD_TYPE 2017

int main(void)
{
	
	#if BOARD_TYPE == 2018
		DDRD |= (1<<PORTD6);
		DDRD |= (1<<PORTD3); 
		DDRD |= (1<<PORTD5); 
	#else
		 
	#endif
    /* Replace with your application code */
    while (1) 
    {
    }
}

