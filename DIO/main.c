/*
 * main.c
 *
 *  Created on: Dec 17, 2022
 *      Author: LENOVO
 */
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRA = 0b00001111;

	while (1)
	{
		PORTA = 0b00000001;
		for (int i=0; i<4; i++)
		{
		PORTA <<= 1;
		_delay_ms(1000);
		}
	}
}



