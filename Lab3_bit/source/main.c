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


        

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00; PORTA = 0xFF;
    DDRC = 0xFF; PORTC = 0x00;
    
   unsigned char A = 0x00;
    unsigned char C = 0x00; 

    while(1){
        A = PINA; //input PINA all of A
        
    

    if(A == 0x01 || A = 0x02){
        C = 0x20;
    }
    else if(A == 0x03 || A =0x04){
        C = 0x30;
    }
    else if(A == 0x05 || A == 0x06){
        C = 0x38;
    }
    else if(A == 0x07 || A == 0x08 || A == 0x09){
        C = 0x3C;
    }
    else if(A == 0x0A || A == 0x0B || A == 0x0C){
        C = 0x3E;
    }
     else if(A == 0x0D || A == 0x0E || A == 0x0F){
        C = 0x3F;
    }
    if(A == 0x30){
          C = 0x80;
    }
      PORTC = C;
    }
    return 1;
    
}
