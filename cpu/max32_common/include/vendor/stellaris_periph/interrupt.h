#ifndef STELLARIS_INTERRUPT_H
#define STELLARIS_INTERRUPT_H


// Macro to generate an interrupt priority mask based on the number of bits
// of priority supported by the hardware.
//
#define INT_PRIORITY_MASK   ((0xFF << (8 - NUM_PRIORITY_BITS)) & 0xFF)


extern tBoolean       IntMasterEnable        (void);
extern tBoolean       IntMasterDisable       (void);
extern void           IntRegister            (unsigned long ulInterrupt, void (*pfnHandler)(void));
extern void           IntUnregister          (unsigned long ulInterrupt);
extern void           IntPriorityGroupingSet (unsigned long ulBits);
extern unsigned long  IntPriorityGroupingGet (void);
extern void           IntPrioritySet         (unsigned long ulInterrupt, unsigned char ucPriority);
extern long           IntPriorityGet         (unsigned long ulInterrupt);
extern void           IntEnable              (unsigned long ulInterrupt);
extern void           IntDisable             (unsigned long ulInterrupt);
extern unsigned long  IntIsEnabled           (unsigned long ulInterrupt);
extern void           IntPendSet             (unsigned long ulInterrupt);
extern void           IntPendClear           (unsigned long ulInterrupt);
extern void           IntPriorityMaskSet     (unsigned long ulPriorityMask);
extern unsigned long  IntPriorityMaskGet     (void);

#endif
