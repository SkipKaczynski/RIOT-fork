#ifndef PERIPH_CONF_H
#define PERIPH_CONF_H

/**
 * @ingroup     boards_ek-lm4f120xl
 *
 * @name        Peripheral MCU configuration for the ek-lm4f120xl board
 */

#include "periph_cpu.h"
#include "macros/units.h"

/**
 * @name Define the nominal CPU core clock in this board
 * @{
 */
#define CLK80                           1
#define CLK50                           2
#define CLK40                           3
#define CLK16                           4
#define CLK1                            5
#define CLOCK_SOURCE                    CLK40
#define CLOCK_CORECLOCK                 MHZ(80)


static const timer_conf_t timer_config[] = {
    {
        .dev      = WTIMER0_BASE,
        .max      = 0xffffffff,
        .irqn     = Timer0A_IRQn,
        .sysctl   = SYSCTL_PERIPH_WTIMER0,
        .intbase  = INT_WTIMER0A,
        .channels = 1
    },
    {
        .dev      = WTIMER1_BASE,
        .max      = 0xffffffff,
        .irqn     = Timer1A_IRQn,
        .sysctl   = SYSCTL_PERIPH_WTIMER1,
        .intbase  = INT_WTIMER1A,
        .channels = 1
    },
};

#define TIMER_NUMOF         ARRAY_SIZE(timer_config)

#define TIMER_0_ISR         isr_wtimer0a
#define TIMER_1_ISR         isr_wtimer1a

/**
 * @name UART configuration
 */
#define UART_NUMOF          (1U)
#define UART_IRQ_PRIO       1
/* UART clock runs with 40MHz */
#define UART_CLK            ROM_SysCtlClockGet()
/* UART 0 device configuration */
#define UART_0_DEV          UART0_BASE
#define UART_0_CLK          (40000000)
#define UART_0_IRQ_CHAN     UART0_IRQn
#define UART_0_ISR          isr_uart0
/* UART 0 pin configuration */
#define UART_0_PORT         GPIOA
#define UART_0_TX_PIN       UART_PA1_U0TX
#define UART_0_RX_PIN       UART_PA0_U0RX


#endif
