#ifndef BOARD_H
#define BOARD_H

#include "board_common.h"
#include "cpu.h"


#define LED0_PIN            GPIO_PIN(0, 13)     // red
#define LED0_MASK           (1 << 13)

#define LED_PORT            (NRF_P0)                        TBD

#define LED0_ON             (LED_PORT->OUTCLR = LED0_MASK)
#define LED0_OFF            (LED_PORT->OUTSET = LED0_MASK)
#define LED0_TOGGLE         (LED_PORT->OUT   ^= LED0_MASK)

#define BTN0_PIN            GPIO_PIN(0, 12)
#define BTN0_MODE           GPIO_IN_PU


/*

    P0.13   RED LED
    P0.12   push-button

    P0.10   UART 1 TX
    P0.11   UART 1 RX

    P0.8    I2C 0 CLK
    P0.9    I2C 0 DATA

    P0.4    SPI 0 MISO
    P0.5    SPI 0 MOSI
    P0.6    SPI 0 CLK
    P0.7    SPI 0 SS

    P0.2    GPIO
    P0.3    GPIO

    P0.0    SWDIO
    P0.1    SWDCLK

*/

#endif
