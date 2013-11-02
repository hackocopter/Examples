/*-----------------------------------------------------------------------------------------------*/
/*                                                                                               */
/* Copyright(c) 2010 Nuvoton Technology Corp. All rights reserved.                               */
/*                                                                                               */
/*-----------------------------------------------------------------------------------------------*/
#ifndef __M05xx_H__
#define __M05xx_H__

#define FLASH_BA        0x00000000UL
#define SRAM_BA         0x20000000UL
#define INT_BA          0x40000000UL
#define WDT_BA          0x40004000UL
#define TMR_BA01        0x40010000UL
#define TMR_BA23        0x40110000UL
#define I2C0_BA         0x40020000UL
#define SPI0_BA         0x40030000UL
#define SPI1_BA         0x40034000UL
#define PWMA_BA         0x40040000UL
#define UART0_BA        0x40050000UL
#define PWMB_BA         0x40140000UL
#define UART1_BA        0x40150000UL
#define ADC_BA          0x400E0000UL
#define GCR_BA          0x50000000UL
#define CLK_BA          0x50000200UL
#define GP_BA           0x50004000UL
#define FMC_BA          0x5000C000UL
#define EBI_BA          0x50010000UL
#define SCS_BA          0xE000E000UL

/* System Manager Control Registers, GCR_BA = 0x50000000 */
#define PDID            (*((volatile unsigned long *) (GCR_BA+0x00000000)))
#define RSTSRC          (*((volatile unsigned long *) (GCR_BA+0x00000004)))
#define IPRSTC1         (*((volatile unsigned long *) (GCR_BA+0x00000008)))
#define IPRSTC2         (*((volatile unsigned long *) (GCR_BA+0x0000000C)))
#define BODCR           (*((volatile unsigned long *) (GCR_BA+0x00000018)))
#define PORCR           (*((volatile unsigned long *) (GCR_BA+0x00000024)))
#define P0_MFP          (*((volatile unsigned long *) (GCR_BA+0x00000030)))
#define P1_MFP          (*((volatile unsigned long *) (GCR_BA+0x00000034)))
#define P2_MFP          (*((volatile unsigned long *) (GCR_BA+0x00000038)))
#define P3_MFP          (*((volatile unsigned long *) (GCR_BA+0x0000003C)))
#define P4_MFP	        (*((volatile unsigned long *) (GCR_BA+0x00000040)))
#define RegLockAddr     (*((volatile unsigned long *) (GCR_BA+0x00000100)))
#define RCADJ           (*((volatile unsigned long *) (GCR_BA+0x00000110)))

/* SCS_BA = 0xE000E000 */
/* Sysem Tick */
#define SYST_CSR        (*((volatile unsigned long *) (SCS_BA+0x00000010)))
#define SYST_RVR        (*((volatile unsigned long *) (SCS_BA+0x00000014)))
#define SYST_CVR        (*((volatile unsigned long *) (SCS_BA+0x00000018)))
/* Nested Vector Interrupt */
#define NVIC_ISER       (*((volatile unsigned long *) (SCS_BA+0x00000100)))
#define NVIC_ICER       (*((volatile unsigned long *) (SCS_BA+0x00000180)))
#define NVIC_ISPR       (*((volatile unsigned long *) (SCS_BA+0x00000200)))
#define NVIC_ICPR       (*((volatile unsigned long *) (SCS_BA+0x00000280)))
#define NVIC_IPR0       (*((volatile unsigned long *) (SCS_BA+0x00000400)))
#define NVIC_IPR1       (*((volatile unsigned long *) (SCS_BA+0x00000404)))
#define NVIC_IPR2       (*((volatile unsigned long *) (SCS_BA+0x00000408)))
#define NVIC_IPR3       (*((volatile unsigned long *) (SCS_BA+0x0000040C)))
#define NVIC_IPR4       (*((volatile unsigned long *) (SCS_BA+0x00000410)))
#define NVIC_IPR5       (*((volatile unsigned long *) (SCS_BA+0x00000414)))
#define NVIC_IPR6       (*((volatile unsigned long *) (SCS_BA+0x00000418)))
#define NVIC_IPR7       (*((volatile unsigned long *) (SCS_BA+0x0000041C)))
/* System Control Registers */
#define CPUID           (*((volatile unsigned long *) (SCS_BA+0x00000D00)))
#define ICSR            (*((volatile unsigned long *) (SCS_BA+0x00000D04)))
#define AIRCR           (*((volatile unsigned long *) (SCS_BA+0x00000D0C)))
#define SCR             (*((volatile unsigned long *) (SCS_BA+0x00000D10)))
#define SHPR2           (*((volatile unsigned long *) (SCS_BA+0x00000D1C)))
#define SHPR3           (*((volatile unsigned long *) (SCS_BA+0x00000D20)))

/* Clock Control, CLK_BA = 0x50000200 */
#define PWRCON          (*((volatile unsigned long *) (CLK_BA+0x00000000)))
#define AHBCLK          (*((volatile unsigned long *) (CLK_BA+0x00000004)))
#define APBCLK          (*((volatile unsigned long *) (CLK_BA+0x00000008)))
#define CLKSTATUS       (*((volatile unsigned long *) (CLK_BA+0x0000000C)))
#define CLKSEL0         (*((volatile unsigned long *) (CLK_BA+0x00000010)))
#define CLKSEL1         (*((volatile unsigned long *) (CLK_BA+0x00000014)))
#define CLKDIV          (*((volatile unsigned long *) (CLK_BA+0x00000018)))
#define CLKSEL2         (*((volatile unsigned long *) (CLK_BA+0x0000001C)))
#define PLLCON          (*((volatile unsigned long *) (CLK_BA+0x00000020)))
#define FRQDIV          (*((volatile unsigned long *) (CLK_BA+0x00000024)))

/* GPIO , GP_BA = 0x50004000 */
#define P0_PMD          (*((volatile unsigned long *) (GP_BA+0x00000000)))
#define P0_OFFD         (*((volatile unsigned long *) (GP_BA+0x00000004)))
#define P0_DOUT         (*((volatile unsigned long *) (GP_BA+0x00000008)))
#define P0_DMASK        (*((volatile unsigned long *) (GP_BA+0x0000000C)))
#define P0_PIN          (*((volatile unsigned long *) (GP_BA+0x00000010)))
#define P0_DBEN         (*((volatile unsigned long *) (GP_BA+0x00000014)))
#define P0_IMD          (*((volatile unsigned long *) (GP_BA+0x00000018)))
#define P0_IEN          (*((volatile unsigned long *) (GP_BA+0x0000001C)))
#define P0_ISRC         (*((volatile unsigned long *) (GP_BA+0x00000020)))
						
#define P1_PMD          (*((volatile unsigned long *) (GP_BA+0x00000040)))
#define P1_OFFD         (*((volatile unsigned long *) (GP_BA+0x00000044)))
#define P1_DOUT         (*((volatile unsigned long *) (GP_BA+0x00000048)))
#define P1_DMASK        (*((volatile unsigned long *) (GP_BA+0x0000004C)))
#define P1_PIN          (*((volatile unsigned long *) (GP_BA+0x00000050)))
#define P1_DBEN         (*((volatile unsigned long *) (GP_BA+0x00000054)))
#define P1_IMD          (*((volatile unsigned long *) (GP_BA+0x00000058)))
#define P1_IEN          (*((volatile unsigned long *) (GP_BA+0x0000005C)))
#define P1_ISRC         (*((volatile unsigned long *) (GP_BA+0x00000060)))

#define P2_PMD          (*((volatile unsigned long *) (GP_BA+0x00000080)))
#define P2_OFFD         (*((volatile unsigned long *) (GP_BA+0x00000084)))
#define P2_DOUT         (*((volatile unsigned long *) (GP_BA+0x00000088)))
#define P2_DMASK        (*((volatile unsigned long *) (GP_BA+0x0000008C)))
#define P2_PIN          (*((volatile unsigned long *) (GP_BA+0x00000090)))
#define P2_DBEN         (*((volatile unsigned long *) (GP_BA+0x00000094)))
#define P2_IMD          (*((volatile unsigned long *) (GP_BA+0x00000098)))
#define P2_IEN          (*((volatile unsigned long *) (GP_BA+0x0000009C)))
#define P2_ISRC         (*((volatile unsigned long *) (GP_BA+0x000000A0)))

#define P3_PMD          (*((volatile unsigned long *) (GP_BA+0x000000C0)))
#define P3_OFFD         (*((volatile unsigned long *) (GP_BA+0x000000C4)))
#define P3_DOUT         (*((volatile unsigned long *) (GP_BA+0x000000C8)))
#define P3_DMASK        (*((volatile unsigned long *) (GP_BA+0x000000CC)))
#define P3_PIN          (*((volatile unsigned long *) (GP_BA+0x000000D0)))
#define P3_DBEN         (*((volatile unsigned long *) (GP_BA+0x000000D4)))
#define P3_IMD          (*((volatile unsigned long *) (GP_BA+0x000000D8)))
#define P3_IEN          (*((volatile unsigned long *) (GP_BA+0x000000DC)))
#define P3_ISRC         (*((volatile unsigned long *) (GP_BA+0x000000E0)))
						 
#define P4_PMD          (*((volatile unsigned long *) (GP_BA+0x00000100)))
#define P4_OFFD         (*((volatile unsigned long *) (GP_BA+0x00000104)))
#define P4_DOUT         (*((volatile unsigned long *) (GP_BA+0x00000108)))
#define P4_DMASK        (*((volatile unsigned long *) (GP_BA+0x0000010C)))
#define P4_PIN          (*((volatile unsigned long *) (GP_BA+0x00000110)))
#define P4_DBEN         (*((volatile unsigned long *) (GP_BA+0x00000114)))
#define P4_IMD          (*((volatile unsigned long *) (GP_BA+0x00000118)))
#define P4_IEN          (*((volatile unsigned long *) (GP_BA+0x0000011C)))
#define P4_ISRC         (*((volatile unsigned long *) (GP_BA+0x00000120)))
						
#define DBNCECON        (*((volatile unsigned long *) (GP_BA+0x00000180)))

#define P00_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000200)))
#define P01_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000204)))
#define P02_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000208)))
#define P03_DOUT        (*((volatile unsigned long *) (GP_BA+0x0000020C)))
#define P04_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000210)))
#define P05_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000214)))
#define P06_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000218)))
#define P07_DOUT        (*((volatile unsigned long *) (GP_BA+0x0000021C)))
#define P10_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000220)))
#define P11_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000224)))
#define P12_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000228)))
#define P13_DOUT        (*((volatile unsigned long *) (GP_BA+0x0000022C)))
#define P14_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000230)))
#define P15_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000234)))
#define P16_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000238)))
#define P17_DOUT        (*((volatile unsigned long *) (GP_BA+0x0000023C)))
#define P20_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000240)))
#define P21_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000244)))
#define P22_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000248)))
#define P23_DOUT        (*((volatile unsigned long *) (GP_BA+0x0000024C)))
#define P24_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000250)))
#define P25_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000254)))
#define P26_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000258)))
#define P27_DOUT        (*((volatile unsigned long *) (GP_BA+0x0000025C)))
#define P30_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000260)))
#define P31_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000264)))
#define P32_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000268)))
#define P33_DOUT        (*((volatile unsigned long *) (GP_BA+0x0000026C)))
#define P34_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000270)))
#define P35_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000274)))
#define P36_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000278)))
#define P37_DOUT        (*((volatile unsigned long *) (GP_BA+0x0000027C)))
#define P40_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000280)))
#define P41_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000284)))
#define P42_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000288)))
#define P43_DOUT        (*((volatile unsigned long *) (GP_BA+0x0000028C)))
#define P44_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000290)))
#define P45_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000294)))
#define P46_DOUT        (*((volatile unsigned long *) (GP_BA+0x00000298)))
#define P47_DOUT        (*((volatile unsigned long *) (GP_BA+0x0000029C)))
						
/* I2C, I2C0_BA = 0x40020000UL */
#define	I2CON           (*((volatile unsigned long *) (I2C0_BA+0x00000000)))
#define	I2CADDR0        (*((volatile unsigned long *) (I2C0_BA+0x00000004)))
#define	I2DAT           (*((volatile unsigned long *) (I2C0_BA+0x00000008)))
#define I2STATUS        (*((volatile unsigned long *) (I2C0_BA+0x0000000C)))
#define I2CLK           (*((volatile unsigned long *) (I2C0_BA+0x00000010)))
#define I2TOC           (*((volatile unsigned long *) (I2C0_BA+0x00000014)))
#define	I2CADM0         (*((volatile unsigned long *) (I2C0_BA+0x00000024)))

/* PWMA_BA = 0x40040000 */
#define PPRA            (*((volatile unsigned long *) (PWMA_BA+0x00000000)))
#define CSRA            (*((volatile unsigned long *) (PWMA_BA+0x00000004)))
#define PCRA            (*((volatile unsigned long *) (PWMA_BA+0x00000008)))
#define CNR0A           (*((volatile unsigned long *) (PWMA_BA+0x0000000C)))
#define CMR0A           (*((volatile unsigned long *) (PWMA_BA+0x00000010)))
#define PDR0A           (*((volatile unsigned long *) (PWMA_BA+0x00000014)))
#define CNR1A           (*((volatile unsigned long *) (PWMA_BA+0x00000018)))
#define CMR1A           (*((volatile unsigned long *) (PWMA_BA+0x0000001C)))
#define PDR1A           (*((volatile unsigned long *) (PWMA_BA+0x00000020)))
#define CNR2A           (*((volatile unsigned long *) (PWMA_BA+0x00000024)))
#define CMR2A           (*((volatile unsigned long *) (PWMA_BA+0x00000028)))
#define PDR2A           (*((volatile unsigned long *) (PWMA_BA+0x0000002C)))
#define CNR3A           (*((volatile unsigned long *) (PWMA_BA+0x00000030)))
#define CMR3A           (*((volatile unsigned long *) (PWMA_BA+0x00000034)))
#define PDR3A           (*((volatile unsigned long *) (PWMA_BA+0x00000038)))
#define PIERA           (*((volatile unsigned long *) (PWMA_BA+0x00000040)))
#define PIIRA           (*((volatile unsigned long *) (PWMA_BA+0x00000044)))
#define CCR0A           (*((volatile unsigned long *) (PWMA_BA+0x00000050)))
#define CCR2A           (*((volatile unsigned long *) (PWMA_BA+0x00000054)))
#define CRLR0A          (*((volatile unsigned long *) (PWMA_BA+0x00000058)))
#define CFLR0A          (*((volatile unsigned long *) (PWMA_BA+0x0000005C)))
#define CRLR1A          (*((volatile unsigned long *) (PWMA_BA+0x00000060)))
#define CFLR1A          (*((volatile unsigned long *) (PWMA_BA+0x00000064)))
#define CRLR2A          (*((volatile unsigned long *) (PWMA_BA+0x00000068)))
#define CFLR2A          (*((volatile unsigned long *) (PWMA_BA+0x0000006C)))
#define CRLR3A          (*((volatile unsigned long *) (PWMA_BA+0x00000070)))
#define CFLR3A          (*((volatile unsigned long *) (PWMA_BA+0x00000074)))
#define CAPENRA         (*((volatile unsigned long *) (PWMA_BA+0x00000078)))
#define POEA            (*((volatile unsigned long *) (PWMA_BA+0x0000007C)))

/* PWMB_BA = 0x40140000 */
#define PPRB            (*((volatile unsigned long *) (PWMB_BA+0x00000000)))
#define CSRB            (*((volatile unsigned long *) (PWMB_BA+0x00000004)))
#define PCRB            (*((volatile unsigned long *) (PWMB_BA+0x00000008)))
#define CNR0B           (*((volatile unsigned long *) (PWMB_BA+0x0000000C)))
#define CMR0B           (*((volatile unsigned long *) (PWMB_BA+0x00000010)))
#define PDR0B           (*((volatile unsigned long *) (PWMB_BA+0x00000014)))
#define CNR1B           (*((volatile unsigned long *) (PWMB_BA+0x00000018)))
#define CMR1B           (*((volatile unsigned long *) (PWMB_BA+0x0000001C)))
#define PDR1B           (*((volatile unsigned long *) (PWMB_BA+0x00000020)))
#define CNR2B           (*((volatile unsigned long *) (PWMB_BA+0x00000024)))
#define CMR2B           (*((volatile unsigned long *) (PWMB_BA+0x00000028)))
#define PDR2B           (*((volatile unsigned long *) (PWMB_BA+0x0000002C)))
#define CNR3B           (*((volatile unsigned long *) (PWMB_BA+0x00000030)))
#define CMR3B           (*((volatile unsigned long *) (PWMB_BA+0x00000034)))
#define PDR3B           (*((volatile unsigned long *) (PWMB_BA+0x00000038)))
#define PIERB           (*((volatile unsigned long *) (PWMB_BA+0x00000040)))
#define PIIRB           (*((volatile unsigned long *) (PWMB_BA+0x00000044)))
#define CCR0B           (*((volatile unsigned long *) (PWMB_BA+0x00000050)))
#define CCR2B           (*((volatile unsigned long *) (PWMB_BA+0x00000054)))
#define CRLR0B          (*((volatile unsigned long *) (PWMB_BA+0x00000058)))
#define CFLR0B          (*((volatile unsigned long *) (PWMB_BA+0x0000005C)))
#define CRLR1B          (*((volatile unsigned long *) (PWMB_BA+0x00000060)))
#define CFLR1B          (*((volatile unsigned long *) (PWMB_BA+0x00000064)))
#define CRLR2B          (*((volatile unsigned long *) (PWMB_BA+0x00000068)))
#define CFLR2B          (*((volatile unsigned long *) (PWMB_BA+0x0000006C)))
#define CRLR3B          (*((volatile unsigned long *) (PWMB_BA+0x00000070)))
#define CFLR3B          (*((volatile unsigned long *) (PWMB_BA+0x00000074)))
#define CAPENRB         (*((volatile unsigned long *) (PWMB_BA+0x00000078)))
#define POEB            (*((volatile unsigned long *) (PWMB_BA+0x0000007C)))

/* SPI0_BA = 0x40030000 */
#define SPI0_CNTRL      (*((volatile unsigned long *) (SPI0_BA+0x00000000)))
#define SPI0_DIVIDER    (*((volatile unsigned long *) (SPI0_BA+0x00000004)))
#define SPI0_SSR        (*((volatile unsigned long *) (SPI0_BA+0x00000008)))
#define SPI0_RX0        (*((volatile unsigned long *) (SPI0_BA+0x00000010)))
#define SPI0_RX1        (*((volatile unsigned long *) (SPI0_BA+0x00000014)))
#define SPI0_TX0        (*((volatile unsigned long *) (SPI0_BA+0x00000020)))
#define SPI0_TX1        (*((volatile unsigned long *) (SPI0_BA+0x00000024)))
#define SPI0_VARCLK     (*((volatile unsigned long *) (SPI0_BA+0x00000034)))

/* SPI1_BA = 0x40034000 */
#define SPI1_CNTRL      (*((volatile unsigned long *) (SPI1_BA+0x00000000)))
#define SPI1_DIVIDER    (*((volatile unsigned long *) (SPI1_BA+0x00000004)))
#define SPI1_SSR        (*((volatile unsigned long *) (SPI1_BA+0x00000008)))
#define SPI1_RX0        (*((volatile unsigned long *) (SPI1_BA+0x00000010)))
#define SPI1_RX1        (*((volatile unsigned long *) (SPI1_BA+0x00000014)))
#define SPI1_TX0        (*((volatile unsigned long *) (SPI1_BA+0x00000020)))
#define SPI1_Tx1        (*((volatile unsigned long *) (SPI1_BA+0x00000024)))
#define SPI1_VARCLK     (*((volatile unsigned long *) (SPI1_BA+0x00000034)))

/* Timer0,1, TMR_BA01 = 0x40010000 */
#define TCSR0           (*((volatile unsigned long *) (TMR_BA01+0x00000000)))
#define TCMPR0          (*((volatile unsigned long *) (TMR_BA01+0x00000004)))
#define TISR0           (*((volatile unsigned long *) (TMR_BA01+0x00000008)))
#define TDR0            (*((volatile unsigned long *) (TMR_BA01+0x0000000C)))

#define TCSR1           (*((volatile unsigned long *) (TMR_BA01+0x00000020)))
#define TCMPR1          (*((volatile unsigned long *) (TMR_BA01+0x00000024)))
#define TISR1           (*((volatile unsigned long *) (TMR_BA01+0x00000028)))
#define TDR1            (*((volatile unsigned long *) (TMR_BA01+0x0000002C)))

/* Timer2,3, TMR_BA23 = 0x40011000 */
#define TCSR2           (*((volatile unsigned long *) (TMR_BA23+0x00000000)))
#define TCMPR2          (*((volatile unsigned long *) (TMR_BA23+0x00000004)))
#define TISR2           (*((volatile unsigned long *) (TMR_BA23+0x00000008)))
#define TDR2            (*((volatile unsigned long *) (TMR_BA23+0x0000000C)))

#define TCSR3           (*((volatile unsigned long *) (TMR_BA23+0x00000020)))
#define TCMPR3          (*((volatile unsigned long *) (TMR_BA23+0x00000024)))
#define TISR3           (*((volatile unsigned long *) (TMR_BA23+0x00000028)))
#define TDR3            (*((volatile unsigned long *) (TMR_BA23+0x0000002C)))

/* WDT_BA = 0x40004000UL */
#define WTCR            (*((volatile unsigned long *) (WDT_BA+0x00000000)))

/* UART0_BA = 0x40050000 */
#define UA0_RBR         (*((volatile unsigned long *) (UART0_BA+0x00000000)))
#define UA0_THR         (*((volatile unsigned long *) (UART0_BA+0x00000000)))
#define UA0_IER         (*((volatile unsigned long *) (UART0_BA+0x00000004)))
#define UA0_FCR         (*((volatile unsigned long *) (UART0_BA+0x00000008)))
#define UA0_LCR         (*((volatile unsigned long *) (UART0_BA+0x0000000C)))
#define UA0_MCR         (*((volatile unsigned long *) (UART0_BA+0x00000010)))
#define UA0_MSR         (*((volatile unsigned long *) (UART0_BA+0x00000014)))
#define UA0_FSR         (*((volatile unsigned long *) (UART0_BA+0x00000018)))
#define UA0_ISR         (*((volatile unsigned long *) (UART0_BA+0x0000001C)))
#define UA0_TOR         (*((volatile unsigned long *) (UART0_BA+0x00000020)))
#define UA0_BAUD        (*((volatile unsigned long *) (UART0_BA+0x00000024)))
#define UA0_IRCR        (*((volatile unsigned long *) (UART0_BA+0x00000028)))
#define UA0_RS485_CSR   (*((volatile unsigned long *) (UART0_BA+0x0000002C)))
#define UA0_FUN_SEL     (*((volatile unsigned long *) (UART0_BA+0x00000030)))

/* UART1_BA = 0x40150000 */
#define UA1_RBR         (*((volatile unsigned long *) (UART1_BA+0x00000000)))
#define UA1_THR         (*((volatile unsigned long *) (UART1_BA+0x00000000)))
#define UA1_IER         (*((volatile unsigned long *) (UART1_BA+0x00000004)))
#define UA1_FCR         (*((volatile unsigned long *) (UART1_BA+0x00000008)))
#define UA1_LCR         (*((volatile unsigned long *) (UART1_BA+0x0000000C)))
#define UA1_MCR         (*((volatile unsigned long *) (UART1_BA+0x00000010)))
#define UA1_MSR         (*((volatile unsigned long *) (UART1_BA+0x00000014)))
#define UA1_FSR         (*((volatile unsigned long *) (UART1_BA+0x00000018)))
#define UA1_ISR         (*((volatile unsigned long *) (UART1_BA+0x0000001C)))
#define UA1_TOR         (*((volatile unsigned long *) (UART1_BA+0x00000020)))
#define UA1_BAUD        (*((volatile unsigned long *) (UART1_BA+0x00000024)))
#define UA1_IRCR        (*((volatile unsigned long *) (UART1_BA+0x00000028)))
#define UA1_RS485_CSR   (*((volatile unsigned long *) (UART1_BA+0x0000002C)))
#define UA1_FUN_SEL     (*((volatile unsigned long *) (UART1_BA+0x00000030)))

/* ADC_BA = 0x400E0000 */
#define ADDR0           (*((volatile unsigned long *) (ADC_BA+0x00000000)))
#define ADDR1           (*((volatile unsigned long *) (ADC_BA+0x00000004)))
#define ADDR2           (*((volatile unsigned long *) (ADC_BA+0x00000008)))
#define ADDR3           (*((volatile unsigned long *) (ADC_BA+0x0000000C)))
#define ADDR4           (*((volatile unsigned long *) (ADC_BA+0x00000010)))
#define ADDR5           (*((volatile unsigned long *) (ADC_BA+0x00000014)))
#define ADDR6           (*((volatile unsigned long *) (ADC_BA+0x00000018)))
#define ADDR7           (*((volatile unsigned long *) (ADC_BA+0x0000001C)))
#define ADCR            (*((volatile unsigned long *) (ADC_BA+0x00000020)))
#define ADCHER          (*((volatile unsigned long *) (ADC_BA+0x00000024)))
#define ADCMPR0         (*((volatile unsigned long *) (ADC_BA+0x00000028)))
#define ADCMPR1         (*((volatile unsigned long *) (ADC_BA+0x0000002C)))
#define ADSR            (*((volatile unsigned long *) (ADC_BA+0x00000030)))
#define ADCALR          (*((volatile unsigned long *) (ADC_BA+0x00000034)))

/* EBI , EBI_BA = 0x50010000 */
#define EBICON          (*((volatile unsigned long *) (EBI_BA+0x00000000)))
#define EXTIME          (*((volatile unsigned long *) (EBI_BA+0x00000004)))

/* FMC_BA = 0x5000C000 */
#define ISPCON          (*((volatile unsigned long *) (FMC_BA+0x00000000)))
#define ISPADR          (*((volatile unsigned long *) (FMC_BA+0x00000004)))
#define ISPDAT          (*((volatile unsigned long *) (FMC_BA+0x00000008)))
#define ISPCMD          (*((volatile unsigned long *) (FMC_BA+0x0000000C)))
#define ISPTRG          (*((volatile unsigned long *) (FMC_BA+0x00000010)))
#define DFBADR          (*((volatile unsigned long *) (FMC_BA+0x00000014)))
#define FATCON          (*((volatile unsigned long *) (FMC_BA+0x00000018)))

#endif
