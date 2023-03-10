/*
 * SPI_Slave_H_file.h
 *
 */ 


#ifndef SPI_SLAVE_H_FILE_H_
#define SPI_SLAVE_H_FILE_H_

#define F_CPU 7372800UL							/* Define CPU Frequency e.g. here its 8MHz */
#include <avr/io.h>								/* Include AVR std. library file */

#define MOSI 5									/* Define SPI bus pins */
#define MISO 6
#define SCK 7
#define SS 4

void SPI_Init();								/* SPI Initialize function */
char SPI_Transmit(char);						/* SPI transmit data function */
char SPI_Receive();								/* SPI Receive data function */


#endif /* SPI_SLAVE_H_FILE_H_ */