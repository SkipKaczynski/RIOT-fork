
#include "cpu.h"
#include "board.h"

#include "periph/gpio.h"

void board_init (void)
{
    gpio_init (LED0_PIN, GPIO_OUT) ;
    gpio_set  (LED0_PIN) ;

    gpio_init (BTN0_PIN, BTN0_MODE) ;
}

