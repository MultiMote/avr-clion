#ifndef __EASYAVR_H_
#define __EASYAVR_H_

#define PIN_ON(x,p) ((PORT ## x) |= _BV(P ## x ## p))
#define PIN_OFF(x,p) ((PORT ## x) &= ~_BV(P ## x ## p))
#define PIN_SET(x,p,v) (v > 0 ? PIN_ON(x,p) : PIN_OFF(x,p))

#endif