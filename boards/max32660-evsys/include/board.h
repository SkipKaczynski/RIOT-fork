#ifndef BOARD_H
#define BOARD_H

#include "cpu.h"

#define BTN0_PIN            GPIO_PIN(0, 12)
#define BTN0_MODE           GPIO_IN_PU

#define LED0_PIN            GPIO_PIN(0, 13)
#define LED0_MASK           (1 << 13)

#define LED_PORT            (GPIO_PORTF_DATA_R)     // tbd

#define LED0_ON             (LED_PORT |=  LED0_MASK)
#define LED0_OFF            (LED_PORT &= ~LED0_MASK)
#define LED0_TOGGLE         (LED_PORT ^=  LED0_MASK)

#endif
