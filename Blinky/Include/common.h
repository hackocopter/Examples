/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* Copyright(c) 2010 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

#ifndef   __COMMON_H__
#define   __COMMON_H__

#include <stdint.h>
#include <stdio.h>
#include "M051.h"
#include "Register_Bit.h"
#include "Uart.h"

void Un_Lock_Reg(void);
void Lock_Reg(void);
void PLL_Enable(void);
void NSR_Enable(void);
void NSR_Disable(void);

#endif  //__COMMON_H__
