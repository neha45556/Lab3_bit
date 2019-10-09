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

	DDRD = 0x00; PORTD = 0xFF;
	DDRB = 0xFE; PORTB = 0x00;


	unsigned char w = 0X00;

	while(1){
		w = PIND + PINB;
	
	if(w >= 70) {
		PORTB = 0x02;
	}
	else if(w > 5){
		PORTB = 0x04;
	}
	else{
		PORTB = 0x00;
	}
}
	return 1;
}
