#ifndef STELLARIS_SYSTICK_H
#define STELLARIS_SYSTICK_H

extern void          SysTickEnable        (void);
extern void          SysTickDisable       (void);
extern void          SysTickIntRegister   (void (*pfnHandler)(void));
extern void          SysTickIntUnregister (void);
extern void          SysTickIntEnable     (void);
extern void          SysTickIntDisable    (void);
extern void          SysTickPeriodSet     (unsigned long ulPeriod);
extern unsigned long SysTickPeriodGet     (void);
extern unsigned long SysTickValueGet      (void);

#endif
