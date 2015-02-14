#ifndef __EASYAVR_H_
#define __EASYAVR_H_


// Sets pin of port to 1
//
//  Example for PD2: PIN_ON(D, 2)
#define PIN_ON(port,pin) ((PORT ## port) |= _BV(P ## port ## pin))


// Sets pin of port to 0
//
//  Example for PD2: PIN_OFF(D, 2)
#define PIN_OFF(port,pin) ((PORT ## port) &= ~_BV(P ## port ## pin))


// Sets pin of port to 0
//
//  Example for PD2: PIN_SET(D, 2, 1)
#define PIN_SET(port,pin,val) (val > 0 ? PIN_ON(port,pin) : PIN_OFF(port,pin))


// Sets all of port pins to OUTPUT mode
//
//  Example for PORTD: PORT_AS_OUTPUT(D)
#define PORT_AS_OUTPUT(port) ((DDR ## port) = 0xFF)

// Sets all of port pins to INPUT mode
//
//  Example for PORTD: PORT_AS_INPUT(D)
#define PORT_AS_INPUT(port) ((DDR ## port) = 0x00)

#endif