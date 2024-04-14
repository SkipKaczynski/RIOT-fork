
#include <stdio.h>

#include "cpu.h"
#include "cpu_conf.h"
#include "periph/gpio.h"
#include "periph_conf.h"

#define ENABLE_DEBUG 0
#include "debug.h"

#define NUM_OF_PORT 6
#define NUM_OF_PINS 8

// Mask out the pin type from the gpio_mode_t value
#define TYPE(mode)  (mode >> 4)

// Mask out the pin mode from the gpio_mode_t value
#define MODE(mode)  (mode & 0x0f)

// Extract the pin number of the given pin
static inline uint8_t _pin_num(gpio_t pin)
{
    return (pin & 0x0f);
}

// Extract the port number of the given pin
static inline uint8_t _port_num(gpio_t pin)
{
    return (pin >> 4);
}


#ifdef MODULE_PERIPH_GPIO_IRQ
typedef struct {
    gpio_cb_t   cb;     // callback called from GPIO interrupt
    void *      arg;    // argument passed to the callback
} gpio_state_t;

static gpio_state_t gpio_config [NUM_OF_PORT] [NUM_OF_PINS];
#endif


int gpio_init (gpio_t pin, gpio_mode_t mode)
{
    // tbd
    (void) pin ;
    (void) mode ;

    return 0;
}


int gpio_read (gpio_t pin)
{
    // tbd
    (void) pin ;

  #if 1
    return -1 ;
  #endif
}


void gpio_set (gpio_t pin)
{
    // tbd
    (void) pin ;
}


void gpio_clear (gpio_t pin)
{
    // tbd
    (void) pin ;
}


void gpio_toggle (gpio_t pin)
{
    if (gpio_read (pin)) { gpio_clear (pin) ; }
    else                 { gpio_set   (pin) ; }
}


void gpio_write (gpio_t pin, int value)
{
    if (value) { gpio_set   (pin) ; }
    else       { gpio_clear (pin) ; }
}



#ifdef MODULE_PERIPH_GPIO_IRQ

static void _isr_gpio (uint32_t port_num)
{
    (void) port_num ;
    // tbd
}


int gpio_init_int
   (gpio_t        pin,
    gpio_mode_t   mode,
    gpio_flank_t  flank,
    gpio_cb_t     cb,
    void *        arg)
{
    (void) pin ;
    (void) mode ;
    (void) flank ;
    (void) cb ;
    (void) arg ;

    // tbd
}

void gpio_irq_enable (gpio_t pin)
{
    // tbd
}

void gpio_irq_disable (gpio_t pin)
{
    // tbd
}

#endif

