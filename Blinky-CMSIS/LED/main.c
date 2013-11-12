/******************************************************************************
 * @file     main.c
 * @version  V1.00
 * $Revision: 5 $
 * $Date: 13/10/30 8:20a $ 
 * @brief    GPIO project for Mini51 series MCU
 *
 * @note
 * Copyright (C) 2013 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/   
#include <stdio.h>
#include "mini51series.h"
#include "gpio.h"

void SYS_Init(void)
{
    /* Unlock protected registers */
    //SYS_UnlockReg();
    // no unlocking required, since no protected registers are updated
		
/*---------------------------------------------------------------------------------------------------------*/
/* Init System Clock                                                                                       */
/*---------------------------------------------------------------------------------------------------------*/

    /* Enable external 12MHz XTAL, internal 22.1184MHz */
 //   CLK->PWRCON |= CLK_PWRCON_XTL12M | CLK_PWRCON_IRC22M_EN_Msk;

		// Stay with reset value = internal oscillator

    /* Waiting for clock ready */
    //CLK_WaitClockReady(CLK_CLKSTATUS_XTL_STB_Msk | CLK_CLKSTATUS_IRC22M_STB_Msk);

    /* Switch HCLK clock source to XTL */
   // CLK_SetHCLK(CLK_CLKSEL0_HCLK_S_XTAL,CLK_CLKDIV_HCLK(1));
		// Stay with reset value = internal oscillator
    
    /* STCLK to XTL STCLK to XTL */
   // CLK_SetSysTickClockSrc(CLK_CLKSEL0_STCLK_S_XTAL);    
		// Stay with reset value = internal oscillator

    /* Enable IP clock */       
    CLK_EnableModuleClock(UART_MODULE);                        
                
    /* Select IP clock source */
//    CLK_SetModuleClock(UART_MODULE,CLK_CLKSEL1_UART_S_XTAL,CLK_CLKDIV_UART(1));
    CLK_SetModuleClock(UART_MODULE,CLK_CLKSEL1_UART_S_IRC22M,CLK_CLKDIV_UART(1));

/*---------------------------------------------------------------------------------------------------------*/
/* Init I/O Multi-function                                                                                 */
/*---------------------------------------------------------------------------------------------------------*/
    /* Set P0 multi-function pins for UART RXD and TXD */
    SYS->P0_MFP &= ~(SYS_MFP_P01_Msk | SYS_MFP_P00_Msk);
    SYS->P0_MFP |= (SYS_MFP_P01_RXD | SYS_MFP_P00_TXD);  

    /* To update the variable SystemCoreClock */   
	 // SystemCoreClockUpdate();         
	 // Save some code space by implicitly setting clock speed.
		SystemCoreClock= __IRC22M;
		CyclesPerUs      = (__IRC22M / 1000000);
		
		
    /* Lock protected registers */
   // SYS_LockReg();    
}
 
void UART_Init(void)
{
/*---------------------------------------------------------------------------------------------------------*/
/* Init UART                                                                                               */
/*---------------------------------------------------------------------------------------------------------*/
    /* Reset IP */
    SYS_ResetModule(SYS_IPRSTC2_UART_RST_Msk);
    
    /* Configure UART and set UART Baudrate */
    UART_Open(UART, 115200);
    
}

void delay_loop(void)
{
    __IO uint32_t j;

    for(j=0;j<60000;j++);
    for(j=0;j<60000;j++);
    for(j=0;j<60000;j++);
    for(j=0;j<60000;j++);
}



int main(void)
{
    /* If define INIT_SYSCLK_AT_BOOTING in system_M051Series.h, HCLK will be set to 50MHz in SystemInit(void)*/
    if(SYS->RegLockAddr == 1) // In end of main function, program issued CPU reset and write-protection will be disabled.
        SYS_LockReg();

	
	 
    /* Init System, IP clock and multi-function I/O */
    SYS_Init(); //In the end of SYS_Init() will issue SYS_LockReg() to lock protected register. If user want to write protected register, please issue SYS_UnlockReg() to unlock protected register.    

    /* Init UART for printf */
    UART_Init();
/*
    printf("+---------------------------------+\n");
    printf("|    Mini51 NuTiny Sample Code    |\n");
    printf("+---------------------------------+\n");
*/
    /*set P0.0 to output mode */
    GPIO_SetMode(P0, BIT0, GPIO_PMD_OUTPUT);

    while(1)
    {
				printf("Hello World!\n");
        P00 = 0;
        delay_loop();
        P00 = 1;
        delay_loop();
    }
}

#ifdef USE_ASSERT
/**
  * @brief  The function prints the source file name and line number where the assert_param() error
      occurs, and then stops in an infinite loop. User can add his own codes here if necessary.
  * @param  file: source file name.
  * @param  line: line number.
  * @retval None.
  */

void assert_error(uint8_t * file, uint32_t line)
{
    /*en: Infinite loop */
    while(1) ;

}
#endif
/*** (C) COPYRIGHT 2013 Nuvoton Technology Corp. ***/
