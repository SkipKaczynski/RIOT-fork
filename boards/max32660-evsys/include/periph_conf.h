#ifndef PERIPH_CONF_H
#define PERIPH_CONF_H

#include "periph_cpu.h"
#include "macros/units.h"

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

#endif
