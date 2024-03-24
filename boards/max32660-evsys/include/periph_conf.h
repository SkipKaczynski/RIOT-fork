#ifndef PERIPH_CONF_H
#define PERIPH_CONF_H

#include "periph_cpu.h"


#if 0

static const uart_conf_t uart_config[] = {
    {
        .dev        = NRF_UARTE0,
        .rx_pin     = GPIO_PIN(0,11),
        .tx_pin     = GPIO_PIN(0,10),
    #ifdef MODULE_PERIPH_UART_HW_FC
        .rts_pin    = GPIO_UNDEF,
        .cts_pin    = GPIO_UNDEF,
    #endif
        .irqn       = UARTE0_UART0_IRQn,
    },
};

#define UART_0_ISR  (isr_uart0)

#define UART_NUMOF  ARRAY_SIZE(uart_config)

#endif


#endif
