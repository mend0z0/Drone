/****************************************************************************************************
*
*   Project Name:       Drone - Equilibrium Controller
*   @Brief Description: This file contains the common defines of the application.
*   File Status:	    DRAFT   (DRAFT , PRELIMINARY, CHECKED, RELEASED)
*
*	File Name:	main.h
*	Version:	01
*	Revision:	01
*	Date:		2024/05/23
*	License:	Open-source
*	******************************** Project Description *******************************************
*	@Detailed Description: This controller is supposed to read environmental sensors such as temperature,
*   humidity, pressure, 3-Axis gyroscope, 3-Axis accelerometer, 3-Axis compass, and GPS. Once the data is
*   read, it'll be filtered and be used for equilibrium and navigation calculation.
*
*	********************************  File Description  *******************************************
*	@Detailed Description: This file contains the common defines of the application.
*
*	*********************************  Hardware Info  **********************************************
*   Name:       _HW_EquilibriumController
*   Version:    v1.0
*	*********************************  Processor Info **********************************************
*	Processor:          STM32U575CIU6Q 32-Bits
*	Clock Frequency:    160.0	MHz
*	RAM/SRAM Size:      0.784	MBytes
*	Flash Size:         02.00	MBytes
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
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/****************************************************************************************************
****************************       HEADERS DECLARATION       ****************************************
*****************************************************************************************************/
#include "stm32u5xx_hal.h"
#include "_drv_lpuart1.h"

/****************************************************************************************************
****************************        MACRO DECLARATION         ***************************************
*****************************************************************************************************/

/****************************************************************************************************
****************************   DEFINED VARIABLES DECLARATION    *************************************
*****************************************************************************************************/

/****************************************************************************************************
****************************   		STRUCT DECLARATION  		*************************************
*****************************************************************************************************/

/****************************************************************************************************
**************************     GLOBAL FUNCTIONS DECLARATION      ************************************
*****************************************************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H  */

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
