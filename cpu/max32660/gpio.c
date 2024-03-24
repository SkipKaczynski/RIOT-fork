
#include "gpio.h"



#if 0


GPIO Port 0                 GPIO0_      0x4000 8000     0x4000 8fff

[0x0000] GPIOn_ENGPIO               Port n Configuration Enable Bit 0 Register
[0x0004] GPIOn_EN_SETGPIO           Port n Configuration Enable Atomic Set Bit 0 Register
[0x0008] GPIOn_EN_CLRGPIO           Port n Configuration Enable Atomic Clear Bit 0 Register

[0x000C] GPIOn_OUT_ENGPIO           Port n Output Enable Register
[0x0010] GPIOn_OUT_EN_SETGPIO       Port n Output Enable Atomic Set Register
[0x0014] GPIOn_OUT_EN_CLRGPIO       Port n Output Enable Atomic Clear Register

[0x0018] GPIOn_OUTGPIO              Port n Output Register
[0x001C] GPIOn_OUT_SETGPIO          Port n Output Atomic Set Register
[0x0020] GPIOn_OUT_CLRGPIO          Port n Output Atomic Clear Register

[0x0024] GPIOn_INGPIO               Port n Input Register

[0x0028] GPIOn_INT_MODEGPIO         Port n Interrupt Mode Register
[0x002C] GPIOn_INT_POLGPIO          Port n Interrupt Polarity Register

[0x0034] GPIOn_INT_ENGPIO           Port n Interrupt Enable Register
[0x0038] GPIOn_INT_EN_SETGPIO       Port n Interrupt Enable Atomic Set Register
[0x003C] GPIOn_INT_EN_CLRGPIO       Port n Interrupt Enable Atomic Clear Register

[0x0040] GPIOn_STATGPIO             Port n Interrupt Status Register
[0x0048] GPIOn_INT_CLRGPIO          Port n Interrupt Clear Register

[0x004C] GPIOn_WAKE_ENGPIO          Port n Wakeup Enable Register
[0x0050] GPIOn_WAKE_EN_SETGPIO      Port n Wakeup Enable Atomic Set Register
[0x0054] GPIOn_WAKE_EN_CLRGPIO      Port n Wakeup Enable Atomic Clear Register

[0x005C] GPIOn_INT_DUAL_EDGEGPIO    Port n Interrupt Dual Edge Mode Register

[0x0060] GPIOn_PAD_CFGGPIO          Port n Pad Control 0 Register
[0x0064] GPIOn_PAD_CFG2GPIO         Port n Pad Control 1 Register

[0x0068] GPIOn_EN1GPIO              Port n Configuration Enable Bit 1 Register
[0x006C] GPIOn_EN1_SETGPIO          Port n Configuration Enable Atomic Set Bit 1 Register
[0x0070] GPIOn_EN1_CLRGPIO          Port n Configuration Enable Atomic Clear Bit 1 Register

[0x0074] GPIOn_EN2GPIO              Port n Configuration Enable Bit 2 Register
[0x0078] GPIOn_EN2_SETGPIO          Port n Configuration Enable Atomic Set Bit 2 Register
[0x007C] GPIOn_EN2_CLRGPIO          Port n Configuration Enable Atomic Clear Bit 2 Register

[0x00A8] GPIOn_ISGPIO               Port n Input Hysteresis Enable Register
[0x00AC] GPIOn_SRGPIO               Port n Slew Rate Select Register

[0x00B0] GPIOn_DSGPIO               Port n Drive Strength Select 0 Register
[0x00B4] GPIOn_DS1GPIO              Port n Drive Strength Select 1 Register

[0x00B8] GPIOn_PSGPIO               Port n Pullup/Pulldown Enable Register


#endif


