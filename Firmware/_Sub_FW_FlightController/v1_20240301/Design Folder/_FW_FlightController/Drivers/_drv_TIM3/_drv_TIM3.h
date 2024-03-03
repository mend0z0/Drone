/****************************************************************************************************
*
*   	Project Name:       Quadcopter._FW_FlightController
*   	@Brief Description:
*   	File Status:	    DRAFT   (DRAFT , PRELIMINARY, CHECKED, RELEASED)
*
*	File Name:	_drv_TIM3.h
*	Version:	01
*	Revision:	00
*	Date:		2024/03/02
*	License:	Open-source
********************************* Project Description *******************************************
*	@Detailed Description:
*
*
********************************* File Description *******************************************
*	@Detailed Description:
*
*
*
**********************************  Hardware Info  **********************************************
*   	Name:       _HW_FlightController
*   	Version:    v1.0
**********************************  Processor Info **********************************************
*	Processor:          STM32U575ZIT6QU (Cortex�-M33) 32-Bits
*	Clock Frequency:    160.00		MHz
*	RAM Size:           784.00		KBytes
*	Flash Size:         2.00		MBytes
*   	SRAM1 Size:         192.00   	KBytes
*   	SRAM2 Size:         64.00   	KBytes
*   	SRAM3 Size:         512.00   	KBytes
*   	SRAM4 Size:         16.00   	KBytes
************************************  Case Style  ***********************************************
*	Local Variables = camelCase			Global Variables = g_camelCase
*	Headers = SCREAMIN_SNAKE_CASE
*   	Macros = SCREAMING_SNAKE_CASE
*   	Const Variables = SCREAMING_SNAKE_CASE
*	Functions = PascalCase				Initialize Functions = _lower_case
*	Struct = lower_case				Struct.members = camelCase
*	Enum = lower_case				Enum Members = SNAKE_CASE
*	Pointer Variables = p_camelCase
************************************ Contact Info ***********************************************
*	Author: Siavash Taher Parvar
*	GitHub: www.github.com/Mend0z0
****************************************************************************************************/
#ifndef _DRV_TIM3_H_
#define _DRV_TIM3_H_
/****************************************************************************************************
****************************       HEADERS DECLARATION       ****************************************
*****************************************************************************************************/
#include "main.h"

/****************************************************************************************************
****************************        MACRO DECLARATION         ***************************************
*****************************************************************************************************/

/****************************************************************************************************
****************************   DEFINED VARIABLES DECLARATION    *************************************
*****************************************************************************************************/

#define	TIM3_OUTPUT_INDEX_MAX	4	// It's the number of motors that are controlled by the MCU
#define	TIM3_RESET_VALUE_CCR	0	// It's the reset default value for Capture/compare register

/****************************************************************************************************
****************************   		STRUCT DECLARATION  		*************************************
*****************************************************************************************************/

struct timx_vars{
	__IO uint16_t ccrValue[TIM3_OUTPUT_INDEX_MAX];	// This variables hold the new value for CCR outputs
	__IO bool timUpdateAvailable;
};

/****************************************************************************************************
**************************     GLOBAL FUNCTIONS DECLARATION      ************************************
*****************************************************************************************************/

/****************************************************************************************************
*   	@Brief Description: 	Updating CCR DMA holder registers
*   	Function Status: 	PRILIMINARY   (DRAFT , PRILIMINARY, CHECKED, RELEASED)
*
*************************************************************************************************
*	Function Name:		TIM3Update()
*	Function Scope:		Global
*	Function Parameters:	__IO uint16_t *ccrValues
*	Function Return Type:	void
*************************************************************************************************
*   	Function Parameters Description:  Input values to update CCR registers and changing PWM pulse width
*   	Function Return Type Description: void
*************************************************************************************************/
void TIM3Update( __IO uint16_t *ccrValues );

#endif /* _DRV_TIM3_H_  */

/****************************************************************************************************
*	Revision History (Description (author, date: yyyy/mm/dd))
*
****************************************************************************************************/

/*                                 FUNCTION DECLARATION TEMPLATE                                   */
/****************************************************************************************************
*   @Brief Description:
*
*	************************************************************************************************
*	Function Name:
*	Function Parameters:
*	Function Return Type:
****************************************************************************************************/

/************************************     END OF THE FILE      *************************************/
