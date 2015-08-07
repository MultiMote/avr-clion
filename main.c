#include <avr/io.h>
#include <util/delay.h>
#include "easyavr.h"

#define LED_PORT PORTD
#define LED_PIN 0
#define LED_DDR DDRD

int main(void)
{
    PIN_AS_OUTPUT(LED_DDR, LED_PIN);

    while (1) {
        PIN_ON(LED_PORT, LED_PIN);
        _delay_ms(100);
        PIN_OFF(LED_PORT, LED_PIN);
        _delay_ms(100);
    }
}
