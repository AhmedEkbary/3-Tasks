/*
 * File:   newmain.c
 * Author: ADMIN
 *
 * Created on April 9, 2020, 9:38 PM
 */


#include <xc.h>
#define LED2 3
#define LED1 7
#define LED0 2

int main(void) {

    //DDRA --- DDRB --- DDRC --- DDRD Data Direction
    DDRD |= (1 << LED2);
    DDRC |= (1 << LED0);
    DDRC |= (1 << LED1);

    PORTD |= (1 << LED2);
    PORTC |= (1 << LED0);
    PORTC |= (1 << LED1);

    while (1) {

    }
}
