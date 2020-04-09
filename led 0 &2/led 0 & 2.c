/*
 * File:   led 0 & 2.c
 * Author: M3MO
 *
 * Created on 09 ?????, 2020, 07:41 ?
 */


#include <avr/io.h>
#define Led2 3
#define Led0 2

int main(void) {
    
DDRD |= (1<<Led2);
DDRC |=(1<<Led0);
PORTD |=(1<<Led2); 
PORTC |=(1<<Led0);
        
    
    
    while (1) {
    }
}
