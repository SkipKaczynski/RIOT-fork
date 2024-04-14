#ifndef CPU_CONF_H
#define CPU_CONF_H

#include "cpu_conf_common.h"

#include "hw_ints.h"
#include "hw_memmap.h"
#include "hw_nvic.h"
#include "hw_sysctl.h"
#include "hw_types.h"

#include "cortex-m4-def.h"

#include "stellaris_periph/cpu.h"
#include "stellaris_periph/fpu.h"
#include "stellaris_periph/gpio.h"
#include "stellaris_periph/interrupt.h"
#include "stellaris_periph/pin_map.h"
#include "stellaris_periph/rom.h"
#include "stellaris_periph/sysctl.h"

#if 0
#else
#ifdef CPU_MODEL_MAX32660H5QR
#include "vendor/lm4f120h5qr.h"
#endif
#endif

/**
 * @brief   ARM Cortex-M specific CPU configuration
 */
#define CPU_DEFAULT_IRQ_PRIO            (1U)
#define CPU_IRQ_NUMOF                   (139U)
#define CPU_FLASH_BASE                  FLASH_BASE
#define CPU_HAS_BITBAND                 (1)

#endif
