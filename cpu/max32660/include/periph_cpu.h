#ifndef PERIPH_CPU_H
#define PERIPH_CPU_H

/**
 * @ingroup         cpu_lm4f120
 *
 * @brief           CPU specific definitions for internal peripheral handling
 */


#include "cpu.h"


/**
 * @brief   Overwrite the default gpio_t type definition
 */
#define HAVE_GPIO_T
typedef uint32_t gpio_t;
#define GPIO_PIN(x, y) ((gpio_t)((x<<4) | y))


/**
 * @brief   Override GPIO modes
 */
#define HAVE_GPIO_MODE_T
typedef enum {
    GPIO_IN    = (GPIO_DIR_MODE_IN  | (GPIO_PIN_TYPE_STD     << 4)),
    GPIO_IN_PD = (GPIO_DIR_MODE_IN  | (GPIO_PIN_TYPE_STD_WPD << 4)),
    GPIO_IN_PU = (GPIO_DIR_MODE_IN  | (GPIO_PIN_TYPE_STD_WPU << 4)),
    GPIO_OUT   = (GPIO_DIR_MODE_OUT | (GPIO_PIN_TYPE_STD     << 4)),
    GPIO_OD    = (GPIO_DIR_MODE_OUT | (GPIO_PIN_TYPE_OD      << 4)),
    GPIO_OD_PU = (GPIO_DIR_MODE_OUT | (GPIO_PIN_TYPE_OD_WPU  << 4)),
} gpio_mode_t;

/**
 * @brief   Override values for pin direction configuration
 */
#define HAVE_GPIO_DIR_T
typedef enum {
  GPIO_DIR_IN  = GPIO_DIR_MODE_IN,      /**< configure pin as input */
  GPIO_DIR_OUT = GPIO_DIR_MODE_OUT      /**< configure pin as output */
} gpio_dir_t;


/**
 * @brief   Override active flank configuration values
 */
#define HAVE_GPIO_FLANK_T
typedef enum {
    GPIO_FALLING = GPIO_FALLING_EDGE,    /**< emit interrupt on falling flank */
    GPIO_RISING  = GPIO_RISING_EDGE,     /**< emit interrupt on rising flank */
    GPIO_BOTH    = GPIO_BOTH_EDGES       /**< emit interrupt on both flanks */
} gpio_flank_t;


/**
 * @brief   Available ports on the LM4F120
 */
enum {
  PORT_A = 0,
  PORT_B = 1,
  PORT_C = 2,
  PORT_D = 3,
  PORT_E = 4,
  PORT_F = 5,
};


typedef struct {
    uint32_t dev;       /**< Address of timer base */
    uint32_t max;       /**< Max tick value of timer */
    int irqn;           /**< Number of the higher timer IRQ channel */
    uint32_t sysctl;    /**< Address of timer system control */
    uint32_t intbase;   /**< Interrupt base of timer */
    int channels;       /**< Number of channels for the timer */
} timer_conf_t;


#endif
