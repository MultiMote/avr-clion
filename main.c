#include <avr/io.h>
#include <util/delay.h>

#define LED_PORT PORTD
#define LED_PIN 0
#define LED_DDR DDRD

int main(void)
{
    LED_DDR |= _BV(LED_PIN);

    while (1) {
        LED_PORT |= _BV(LED_PIN);
        _delay_ms(100);
        
        LED_PORT &= ~_BV(LED_PIN);
        _delay_ms(100);
    }
}
