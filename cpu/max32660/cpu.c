
#include "cpu.h"
#include "kernel_init.h"
#include "irq.h"
#include "sched.h"
#include "thread.h"
#include "irq.h"
#include "periph/init.h"
#include "periph_conf.h"
#include "stdio_base.h"


static void setup_fpu (void)
{
    // tbd
}


static void cpu_clock_init (int clk)
{
    setup_fpu();

    switch (clk)
    {
        case CLK80:
        case CLK50:
        case CLK40:
        case CLK16:
        case CLK1:
        default:
            break;
    }
}


void cpu_init(void)
{
    cortexm_init();

    cpu_clock_init (CLOCK_SOURCE);

    // initialize stdio prior to periph_init() to allow use of DEBUG() there
    early_init();

    // trigger static peripheral initialization
    periph_init();
}

