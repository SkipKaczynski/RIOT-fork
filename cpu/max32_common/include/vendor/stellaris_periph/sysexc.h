#ifndef STELLARIS_SYSEXC_H
#define STELLARIS_SYSEXC_H


//*****************************************************************************
//
// Values that can be passed to SysExcIntEnable, SysExcIntDisable, and
// SysExcIntClear as the ulIntFlags parameter, and returned from
// SysExcIntStatus.
//
//*****************************************************************************
#define SYSEXC_INT_FP_IXC       0x00000020  // FP Inexact exception interrupt
#define SYSEXC_INT_FP_OFC       0x00000010  // FP Overflow exception interrupt
#define SYSEXC_INT_FP_UFC       0x00000008  // FP Underflow exception interrupt
#define SYSEXC_INT_FP_IOC       0x00000004  // FP Invalid operation interrupt
#define SYSEXC_INT_FP_DZC       0x00000002  // FP Divide by zero exception int
#define SYSEXC_INT_FP_IDC       0x00000001  // FP Input denormal exception int

extern void          SysExcIntRegister   (void (*pfnHandler)(void));
extern void          SysExcIntUnregister (void);
extern void          SysExcIntEnable     (unsigned long ulIntFlags);
extern void          SysExcIntDisable    (unsigned long ulIntFlags);
extern unsigned long SysExcIntStatus     (tBoolean bMasked);
extern void          SysExcIntClear      (unsigned long ulIntFlags);

#endif
