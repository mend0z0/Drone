/****************************************************************************************************
*
*   Project Name:       Quadcopter._FW_FlightController
*   @Brief Description:
*   File Status:	    DRAFT   (DRAFT , PRELIMINARY, CHECKED, RELEASED)
*
*	File Name:	_drv_general.h
*	Version:	01
*	Revision:	00
*	Date:		2024/03/01
*	License:	Open-source
*	******************************** Project Description *******************************************
*	@Detailed Description:
*
*
*	******************************** File Description *******************************************
*	@Detailed Description:
*
*
*
*	*********************************  Hardware Info  **********************************************
*   Name:       _HW_FlightController
*   Version:    v1.0
*	*********************************  Processor Info **********************************************
*	Processor:          STM32U575ZIT6QU (Cortex�-M33) 32-Bits
*	Clock Frequency:    160.00		MHz
*	RAM Size:           784.00		KBytes
*	Flash Size:         2.00		MBytes
*   SRAM1 Size:         192.00   	KBytes
*   SRAM2 Size:         64.00   	KBytes
*   SRAM3 Size:         512.00   	KBytes
*   SRAM4 Size:         16.00   	KBytes
*	***********************************  Case Style  ***********************************************
*	Local Variables = camelCase			Global Variables = g_camelCase
*	Headers = SCREAMIN_SNAKE_CASE
*   Macros = SCREAMING_SNAKE_CASE
*   Const Variables = SCREAMING_SNAKE_CASE
*	Functions = PascalCase				Initialize Functions = _lower_case
*	Struct = lower_case					Struct.members = camelCase
*	Enum = lower_case					Enum Members = SNAKE_CASE
*	Pointer Variables = p_camelCase
*	*********************************** Contact Info ***********************************************
*	Author: Siavash Taher Parvar
*	GitHub: www.github.com/Mend0z0
****************************************************************************************************/
#ifndef _DRV_GENERAL_H_
#define _DRV_GENERAL_H_
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

/****************************************************************************************************
**************************     GLOBAL FUNCTIONS DECLARATION      ************************************
*****************************************************************************************************/

/****************************************************************************************************
*   @Brief Description:	Configuring general peripherals like RCC and so on...
*   Function Status: 	PRILIMINARY   (DRAFT , PRILIMINARY, CHECKED, RELEASED)
*
*	************************************************************************************************
*	Function Name:			_init_General()
*	Function Scope:			Global
*	Function Parameters:	void
*	Function Return Type:	void
*	************************************************************************************************/
void _init_General( void );

#endif /* _DRV_GENERAL_H_  */

/****************************************************************************************************
*	Revision History (Description (author, date: yyyy/mm/dd))
*
****************************************************************************************************/

/************************************     END OF THE FILE      *************************************/
