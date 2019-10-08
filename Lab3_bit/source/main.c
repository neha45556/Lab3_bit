/*	Author: ngupt009
 *  Partner(s) Name: Surya Singh
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif


        

int main(void){
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0xFF; PORTB = 0x00;
	DDRC = 0xFF; PORTC = 0x00;

unsigned char A = 0x00;
unsigned char B = 0x00;
unsigned char C = 0x00;

while(1){
	A = PINA;
	
	B = ( A & 0x0F ) >> 4 ;
	C = ( A & 0xF0) << 4;
	
	PORTB = B;
	PORTC = C;
        
        return 1; 
     }
}

