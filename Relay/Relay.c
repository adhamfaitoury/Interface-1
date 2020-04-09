/*
 * File:   Relay.c
 * Author: M3MO
 *
 * Created on 09 ?????, 2020, 08:00 ?
 */


#include <avr/io.h>
#define Relay 2
int main(void) {
     DDRA |= (1<<Relay);
     PORTA ^=(1<<Relay);
     PORTA |=(1<<Relay);
    
    while (1) {
    }
}
