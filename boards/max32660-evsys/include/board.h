#ifndef BOARD_H
#define BOARD_H

/**
 * @ingroup     boards_ek-lm4f120xl
 * @brief       Board specific definitions for the Stellaris Launchpad LM4F120 board
 */

#include "cpu.h"


#define BTN0_PIN            GPIO_PIN(5, 4)
#define BTN1_PIN            GPIO_PIN(5, 0)

#define BTN0_MODE           GPIO_IN_PU
#define BTN1_MODE           GPIO_IN_PU


#define LED0_PIN            GPIO_PIN(5, 1)
#define LED1_PIN            GPIO_PIN(5, 2)
#define LED2_PIN            GPIO_PIN(5, 3)

#define LED_PORT            (GPIO_PORTF_DATA_R)
#define LED0_MASK           (1 << 7)
#define LED1_MASK           (1 << 2)
#define LED2_MASK           (1 << 1)

#define LED0_ON             (LED_PORT |=  LED0_MASK)
#define LED0_OFF            (LED_PORT &= ~LED0_MASK)
#define LED0_TOGGLE         (LED_PORT ^=  LED0_MASK)

#define LED1_ON             (LED_PORT |=  LED1_MASK)
#define LED1_OFF            (LED_PORT &= ~LED1_MASK)
#define LED1_TOGGLE         (LED_PORT ^=  LED1_MASK)

#define LED2_ON             (LED_PORT |=  LED2_MASK)
#define LED2_OFF            (LED_PORT &= ~LED2_MASK)
#define LED2_TOGGLE         (LED_PORT ^=  LED2_MASK)


#endif
