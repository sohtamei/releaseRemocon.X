/**
 * System Driver Source File
 * 
 * @file system.c
 * 
 * @ingroup systemdriver
 * 
 * @brief This file contains the API implementation for the System driver.
 *
 * @version Driver Version 2.0.3
 *
 * @version Package Version 1.0.5
*/

/*
? [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#include "../system.h"

/** 
* @ingroup systemdriver
* @brief Initializes the Peripheral Module Disable (PMD) module.
* @param None.
* @return None.
*/
void PMD_Initialize(void);


void SYSTEM_Initialize(void)
{
    CLOCK_Initialize();
    PIN_MANAGER_Initialize();
    ADC_FVR_Initialize();
    FVR_Initialize();
    PMD_Initialize();
    POWER_Initialize();
    INTERRUPT_Initialize();
}

void PMD_Initialize(void)
{
    //IOCMD IOC enabled; CLKRMD CLKR enabled; NVMMD NVM enabled; FVRMD FVR enabled; SYSCMD SYSCLK enabled; 
    PMD0 = 0x0;
    //TMR0MD TMR0 enabled; TMR1MD TMR1 enabled; TMR2MD TMR2 enabled; NCOMD DDS(NCO) disabled; 
    PMD1 = 0x80;
    //ZCDMD ZCD disabled; CMP1MD CMP1 disabled; ADCMD ADC enabled; DAC1MD DAC1 disabled; CMP2MD CMP2 disabled; 
    PMD2 = 0x47;
    //CCP1MD CCP1 disabled; CCP2MD CCP2 disabled; PWM3MD PWM3 disabled; PWM4MD PWM4 disabled; PWM5MD PWM5 disabled; PWM6MD PWM6 disabled; 
    PMD3 = 0x3F;
    //CWG1MD CWG1 disabled; MSSP1MD MSSP1 disabled; UART1MD EUSART disabled; UART2MD EUSART2 disabled; 
    PMD4 = 0xD1;
    //CLC1MD CLC1 disabled; CLC2MD CLC2 disabled; CLC3MD CLC3 disabled; CLC4MD CLC4 disabled; 
    PMD5 = 0x1E;
}

