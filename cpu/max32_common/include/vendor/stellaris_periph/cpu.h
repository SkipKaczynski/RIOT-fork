#ifndef STELLARIS_CPU_H
#define STELLARIS_CPU_H

extern unsigned long CPUcpsid      (void);
extern unsigned long CPUcpsie      (void);
extern unsigned long CPUprimask    (void);
extern void          CPUwfi        (void);
extern unsigned long CPUbasepriGet (void);
extern void          CPUbasepriSet (unsigned long ulNewBasepri);

#endif
