/*
 * File:   Buzzer.c
 * Author: M3MO
 *
 * Created on 09 ?????, 2020, 07:56 ?
 */


#include <avr/io.h>
#define Buzzer 3
int main(void) {
    DDRA |= (1<<Buzzer);
    PORTA |=(1<<Buzzer);
    while (1) {
    }
}
