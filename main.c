 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.2
 *
 * @version Package Version: 3.1.2
*/

/*
? [2024] Microchip Technology Inc. and its subsidiaries.

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
#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/system/interrupt.h"

uint32_t led_count = 0;

static void extINT_ISR(void)
{
	EN_5V_LAT = 1;
	ADCON0bits.ADON = 1;
	FVRCONbits.FVREN = 1;
	__delay_us(50);
	uint16_t batt_voltage = 0;
	batt_voltage = (uint16_t)((1024UL * 1024UL) / ADC_FVR_GetConversion(channel_FVR_BUF1));

	if(batt_voltage <= 2200) {
		LED_R_LAT = 1;		// red
	} else if(batt_voltage <= 2400) {
		LED_R_LAT = 1;		// orange
		LED_G_LAT = 1;
	} else {
		LED_G_LAT = 1;		// green
	}

	led_count = 0;
}

int main(void)
{
	SYSTEM_Initialize();
	// If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
	// If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts 
	// Use the following macros to: 

	// S1 interrupt
	INT_SetInterruptHandler(extINT_ISR);

	INTCONbits.INTEDG = 0;

	INTERRUPT_GlobalInterruptEnable(); 
	INTERRUPT_PeripheralInterruptEnable(); 

	EN_5V_LAT = 1;
	LED_R_LAT = 0;
	LED_G_LAT = 0;

	#define LED_DURATION	100
	#define SLEEP_DURATION	(1UL*1000)
	uint32_t sleep_count = 0;
	while(1)
    {
		if(led_count < LED_DURATION) {
			led_count++;
			if(led_count >= LED_DURATION) {
				LED_R_LAT = 0;
				LED_G_LAT = 0;
			}
		}

		if(S1_PORT == 0) {
			sleep_count = 0;
		} else {
			sleep_count++;
			if(sleep_count >= SLEEP_DURATION) {
				sleep_count = 0;
				EN_5V_LAT = 0;
				ADCON0bits.ADON = 0;
				FVRCONbits.FVREN = 0;

				SLEEP();

			}
		}
		__delay_ms(1);
    }
}
