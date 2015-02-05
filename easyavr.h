#ifndef __EASYAVR_H_
#define __EASYAVR_H_

#define PIN_ON(x,p) ((PORT ## x) |= 1<<(p))
#define PIN_OFF(x,p) ((PORT ## x) &= ~(1<<(p)))

#endif