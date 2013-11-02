/*
		Example code for a JX 385 compatible Quadcopter
		
		cpldcpu, Nov 2nd, 2013
		
		"Blinky" for the integrated blue LEDs in the quadcopter, which are connected to P0.0

		This is based on the GPIO example by Nuvoton
		
		Changes: 
		- Only blink P0.0
		- Use internal RC oscillator instead of external XTAL.

*/

#include "Common.h"

#define P0_MODE               0x5555
#define P1_MODE               0x5555
#define P2_MODE               0x5555
#define P3_MODE	              0x5555

void TMR0_Delay1ms(uint32_t ulCNT);
void Timer0_Init(void);

/*en:************************************************************************************
  Parameter:       	ulCNT:	delay time, unit is millisecond.                                     
  Description:     	Timer0 used for a delay function.                                    
****************************************************************************************/

void TMR0_Delay1ms(uint32_t ulCNT)
{
    TCMPR0 = 22118;                              //22.118MHz/12000 = 1KHz 
    TCSR0 |= CEN | TMR_IE;                       //Enable timer0 interrupt and start timer0
    while (ulCNT != 1)                          
    {
        while((TISR0&TMR_TIF) != TMR_TIF);       //Wait until timer0 expired
   	    TISR0 |= TMR_TIF;                        //Clear timer0 interrupt flag
        ulCNT--;
    }
    TCSR0 &= ~CEN;                               //Stop timer0
}

/*en:************************************************************************************
  Description           	Initialize timer0, period mode.                                    
****************************************************************************************/
void Timer0_Init()
{
    APBCLK |= TMR0_CLKEN;                                  //Enable timer0 APB clock
    CLKSEL1 = CLKSEL1 & (~TM0_CLK) | TM0_22M;              //Select internal 22.1M clk as timer0 clock source
    TCSR0  |= CRST;                                        //Reset timer0
    TCSR0  &= 0xFFFFFF00 ;                                 //Clock no division
    TCSR0   = TCSR0 & (~TMR_MODE) | MODE_PERIOD;           //Period mode
}

main(void)
{
	
	// Lets just use the default 22.1Mhz internal oscillator
	/*
    Un_Lock_Reg();                                         //Unlock protected register bits, so that user can access them
    PWRCON |= XTL12M_EN;                                   //Enable external 12M crystal
    while((CLKSTATUS & XTL12M_STB) == 0);                  //Wait until 12M crystal stable
		
		
    CLKSEL0 = (CLKSEL0 & (~HCLK)) | HCLK_12M;              //Select external 12M crystal as system clock
    Lock_Reg();                                            //Re-lock protected register bits
*/

	
    P0_PMD = (P0_PMD & (~Px0_PMD)) | Px0_OUT;               //Configure P0.0 in output mode
    
    Timer0_Init();

    while(1)
    {
        P0_DOUT &= ~DMASK0;                                    // P0.0 = 0 (LED on)
				TMR0_Delay1ms(250);
        
        P0_DOUT |=  DMASK0;                                    // P0.0 = 1 (LED off)
				TMR0_Delay1ms(250);
    }
}
