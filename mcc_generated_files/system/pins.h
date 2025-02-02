/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
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

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA2 aliases
#define S1_TRIS                 TRISAbits.TRISA2
#define S1_LAT                  LATAbits.LATA2
#define S1_PORT                 PORTAbits.RA2
#define S1_WPU                  WPUAbits.WPUA2
#define S1_OD                   ODCONAbits.ODCA2
#define S1_ANS                  ANSELAbits.ANSA2
#define S1_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define S1_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define S1_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define S1_GetValue()           PORTAbits.RA2
#define S1_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define S1_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define S1_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define S1_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define S1_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define S1_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define S1_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define S1_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)
// get/set IO_RA5 aliases
#define EN_5V_TRIS                 TRISAbits.TRISA5
#define EN_5V_LAT                  LATAbits.LATA5
#define EN_5V_PORT                 PORTAbits.RA5
#define EN_5V_WPU                  WPUAbits.WPUA5
#define EN_5V_OD                   ODCONAbits.ODCA5
#define EN_5V_ANS                  ANSELAbits.ANSA5
#define EN_5V_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define EN_5V_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define EN_5V_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define EN_5V_GetValue()           PORTAbits.RA5
#define EN_5V_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define EN_5V_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define EN_5V_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define EN_5V_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define EN_5V_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define EN_5V_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define EN_5V_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define EN_5V_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)
// get/set IO_RC0 aliases
#define S2_TRIS                 TRISCbits.TRISC0
#define S2_LAT                  LATCbits.LATC0
#define S2_PORT                 PORTCbits.RC0
#define S2_WPU                  WPUCbits.WPUC0
#define S2_OD                   ODCONCbits.ODCC0
#define S2_ANS                  ANSELCbits.ANSC0
#define S2_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define S2_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define S2_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define S2_GetValue()           PORTCbits.RC0
#define S2_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define S2_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define S2_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define S2_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define S2_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define S2_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define S2_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define S2_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)
// get/set IO_RC3 aliases
#define LED_R_TRIS                 TRISCbits.TRISC3
#define LED_R_LAT                  LATCbits.LATC3
#define LED_R_PORT                 PORTCbits.RC3
#define LED_R_WPU                  WPUCbits.WPUC3
#define LED_R_OD                   ODCONCbits.ODCC3
#define LED_R_ANS                  ANSELCbits.ANSC3
#define LED_R_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define LED_R_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define LED_R_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define LED_R_GetValue()           PORTCbits.RC3
#define LED_R_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define LED_R_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define LED_R_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define LED_R_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define LED_R_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define LED_R_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define LED_R_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define LED_R_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)
// get/set IO_RC4 aliases
#define LED_G_TRIS                 TRISCbits.TRISC4
#define LED_G_LAT                  LATCbits.LATC4
#define LED_G_PORT                 PORTCbits.RC4
#define LED_G_WPU                  WPUCbits.WPUC4
#define LED_G_OD                   ODCONCbits.ODCC4
#define LED_G_ANS                  ANSELCbits.ANSC4
#define LED_G_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define LED_G_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define LED_G_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define LED_G_GetValue()           PORTCbits.RC4
#define LED_G_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define LED_G_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define LED_G_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define LED_G_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define LED_G_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define LED_G_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define LED_G_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define LED_G_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/