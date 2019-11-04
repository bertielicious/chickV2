#include "config.h"
#include <stdio.h>
void assignData(lcd s)
{
    PORTCbits.RC4 = s.RS;
    PORTBbits.RB5 = s.D7;
    PORTBbits.RB6 = s.D6;
    PORTCbits.RC7 = s.D5;
    PORTCbits.RC6 = s.D4;
    //printf("RS = %d\t,D7 = %d\t, D6 = %d\t, D5 = %d\t, D4 = %d\n", s.RS, s.D7, s.D6, s.D5, s.D4); 
}
