/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* Copyright(c) 2010 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

#ifndef __UART_H__
#define __UART_H__

void UART_Init(void);
void Send_Data_To_PC (uint8_t c);
uint8_t Receive_Data_From_PC(void);
void Show_Pass(void);
void Show_Fail(void);

#endif
