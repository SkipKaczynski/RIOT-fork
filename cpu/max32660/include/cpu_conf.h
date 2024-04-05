#ifndef CPU_CONF_H
#define CPU_CONF_H

/**
 * @defgroup        cpu_lm4f120 LM4F
 * @ingroup         cpu
 * @brief           CPU specific implementations for LM4F120
 *
 * @file
 * @brief           Implementation specific CPU configuration options
 */

#include "cpu_conf_common.h"

#include "hw_ints.h"
#include "hw_memmap.h"
#include "hw_nvic.h"
#include "hw_sysctl.h"
#include "hw_types.h"
#include "cortex-m4-def.h"
#include "stellaris_periph/cpu.h"
#include "stellaris_periph/interrupt.h"
#include "stellaris_periph/sysctl.h"
// clude "stellaris_periph/adc.h"
#include "stellaris_periph/gpio.h"
// clude "stellaris_periph/timer.h"
#include "stellaris_periph/pin_map.h"
#include "stellaris_periph/uart.h"
#include "stellaris_periph/ssi.h"
#include "stellaris_periph/fpu.h"
#include "stellaris_periph/rom.h"

#ifdef CPU_MODEL_MAX32660H5QR
#include "vendor/lm4f120h5qr.h"
#endif

/**
 * @brief   ARM Cortex-M specific CPU configuration
 */
#define CPU_DEFAULT_IRQ_PRIO            (1U)
#define CPU_IRQ_NUMOF                   (139U)
#define CPU_FLASH_BASE                  FLASH_BASE
#define CPU_HAS_BITBAND                 (1)

extern void setup_fpu(void);
extern void cpu_clock_init(int);


#endif
