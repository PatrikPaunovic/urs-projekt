#define F_CPU 7372800UL

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <stdio.h>			/* Include std. i/p o/p file */
#include <string.h>			/* Include string header file */

#include "SPI_Slave_H_file.h"


int main(void)
{
	uint8_t count;
	char buffer[5];
	
	DDRA = 0x01;
	
	//LCD_Init();
	SPI_Init();
	
	//LCD_String_xy(1, 0, "Slave Device");
	//LCD_String_xy(2, 0, "Receive Data:    ");
	while (1)			/* Receive count continuous */
	{
		count = SPI_Read();
		PORTA = 0x01;
		_delay_ms(500);
		PORTA = 0;
		//sprintf(buffer, "%d   ", count);
		//LCD_String_xy(2, 13, buffer);
	}

}