#ifndef __EASYAVR_H_
#define __EASYAVR_H_


//  Sets pin of port to 1
//
//  Example for PD2: PIN_ON(D, 2)
#define PIN_ON(port,pin) ((PORT ## port) |= _BV(P ## port ## pin))


//  Sets pin of port to 0
//
//  Example for PD2: PIN_OFF(D, 2)
#define PIN_OFF(port,pin) ((PORT ## port) &= ~_BV(P ## port ## pin))


//  Sets pin of port to value
//
//  Example for PD2: PIN_SET(D, 2, 1)
#define PIN_SET(port,pin,val) (val > 0 ? PIN_ON(port,pin) : PIN_OFF(port,pin))


//  Sets pins of port by bitmask
//
//  Example for PORTD: PORT_MASK(D, 0b00001111)
#define PORT_SET_MASK(port,mask) ((PORT ## port) = mask)

//  Sets all of port pins to OUTPUT mode
//
//  Example for PORTD: PORT_AS_OUTPUT(D)
#define PORT_AS_OUTPUT(port) ((DDR ## port) = 0xFF)

//  Sets all of port pins to INPUT mode
//
//  Example for PORTD: PORT_AS_INPUT(D)
#define PORT_AS_INPUT(port) ((DDR ## port) = 0x00)

//  Sets pin of port to OUTPUT mode
//
//  Example for PD1: PORT_AS_OUTPUT(D, 1)
#define PIN_AS_OUTPUT(port,pin) ((DDR ## port) |= _BV(P ## port ## pin))


//  Sets pin of port to INPUT mode
//
//  Example for PD1: PORT_AS_INPUT(D, 1)
#define PIN_AS_INPUT(port,pin) ((DDR ## port) &= ~_BV(P ## port ## pin))

//  Checks pin's value of port
//  Returns 1 or 0
//
//  Example for PORTD: CHECK_PIN(D, 2)
#define CHECK_PIN(port,pin) (((PIN ## port) & (1 << (PIN ## port ## pin))) != 0)


#endif