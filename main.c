#include <avr/io.h>
#include <util/delay.h>
#include "easyavr.h"



int main(void)
{
    DDRD = 0xff;
    while (1) {
        PIN_ON(D, 0);
        _delay_ms(100);
        PIN_OFF(D, 0);
        _delay_ms(100);

    }

}
