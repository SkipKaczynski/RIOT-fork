/**
 * @ingroup     cpu_lm4f120
 * @{
 *
 * @file        cpu.c
 * @brief       Implementation of the CPU initialization
 *
 * @author      Rakendra Thapa <rakendrathapa@gmail.com>
 * @}
 */

#include "cpu.h"
#include "kernel_init.h"
#include "irq.h"
#include "sched.h"
#include "thread.h"
#include "irq.h"
#include "periph/init.h"
#include "periph_conf.h"
#include "stdio_base.h"


static void setup_fpu(void)
{
    ROM_FPUEnable();
    ROM_FPULazyStackingEnable();
}


static void cpu_clock_init(int clk)
{
    setup_fpu();

    switch(clk){
        case CLK80:
            ROM_SysCtlClockSet(SYSCTL_SYSDIV_2_5 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);
            break;
        case CLK50:
            ROM_SysCtlClockSet(SYSCTL_SYSDIV_4 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);
            break;
        case CLK40:
            ROM_SysCtlClockSet(SYSCTL_SYSDIV_5 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);
            break;
        default:
        case CLK16:
            ROM_SysCtlClockSet(SYSCTL_SYSDIV_1 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);
            break;
        case CLK1:
            ROM_SysCtlClockSet(SYSCTL_SYSDIV_1 | SYSCTL_USE_PLL | SYSCTL_XTAL_1MHZ | SYSCTL_OSC_MAIN);
            break;
    }
}


void cpu_init(void)
{
    /* initializes the Cortex-M core */
    cortexm_init();

    /* initialize the clock system */
    cpu_clock_init(CLOCK_SOURCE);

    /* initialize stdio prior to periph_init() to allow use of DEBUG() there */
    early_init();

    /* trigger static peripheral initialization */
    periph_init();
}

