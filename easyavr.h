#ifndef __EASYAVR_H_
#define __EASYAVR_H_


//  Sets pin of port to 1
//
//  Example for PD2: PIN_ON(PORTD, 2)
#define PIN_ON(port,pin) ((port) |= (1 << (pin)))


//  Sets pin of port to 0
//
//  Example for PD2: PIN_OFF(PORTD, 2)
#define PIN_OFF(port,pin) ((port) &= ~(1 << (pin)))


//  Sets pin of port to value
//
//  Example for PD2: PIN_SET(PORTD, 2, 1)
#define PIN_SET(port,pin,val) (((val) > 0) ? PIN_ON((port),(pin)) : PIN_OFF((port),(pin)))

//  Sets all of port pins to OUTPUT mode
//
//  Example for PORTD: PORT_AS_OUTPUT(DDRD)
#define PORT_AS_OUTPUT(ddr) ((ddr) = 0xFF)

//  Sets all of port pins to INPUT mode
//
//  Example for PORTD: PORT_AS_INPUT(DDRD)
#define PORT_AS_INPUT(ddr) ((ddr) = 0x00)

//  Sets pin of port to OUTPUT mode
//
//  Example for PD1: PORT_AS_OUTPUT(DDRD, 1)
#define PIN_AS_OUTPUT(ddr,pin) ((ddr) |= (1 << (pin)))


//  Sets pin of port to INPUT mode
//
//  Example for PD1: PORT_AS_INPUT(DDRD, 1)
#define PIN_AS_INPUT(ddr,pin) ((ddr) &= ~(1 << (pin)))

//  Checks pin's value of port
//  Returns 1 or 0
//
//  Example for PD2: CHECK_PIN(PIND, 2)
#define CHECK_PIN(pinreg,pin) (((pinreg) & (1 << (pin))) != 0)


#endif