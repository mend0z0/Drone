/****************************************************************************************************
*
*   Project Name:       Quadcopter._FW_FlightController
*   @Brief Description:
*   File Status:	    DRAFT   (DRAFT , PRELIMINARY, CHECKED, RELEASED)
*
*	File Name:	_drv_LPUART.c
*	Version:	01
*	Revision:	00
*	Date:		2024/03/01
*	License:	Open-source
*	******************************** Project Description *******************************************
*	@Detailed Description:
*
*
*
*	******************************** File Description *******************************************
*	@Detailed Description:
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
*	Author:	Siavash Taher Parvar
*	GitHub: github.com/Mend0z0
****************************************************************************************************/

/****************************************************************************************************
****************************       HEADERS DECLARATION       ****************************************
*****************************************************************************************************/
#include "_drv_LPUART1.h"

/****************************************************************************************************
****************************   CONST VARIABLES DECLARATION    ***************************************
*****************************************************************************************************/

/****************************************************************************************************
****************************   GLOB. VARIABLES DECLARATION    ***************************************
*****************************************************************************************************/

/****************************************************************************************************
***********************     STATIC/LOCAL FUNCTIONS DECLARATION      *********************************
*****************************************************************************************************/
void LPUART1_IRQHandler( void )
{

}

void _init_LPDMA( void );
void _init_LPUART1( void );

/****************************************************************************************************
****************************         GLOBAL FUNTIONS         ****************************************
*****************************************************************************************************/

/****************************************************************************************************
****************************         STATIC FUNTIONS         ****************************************
*****************************************************************************************************/

/****************************************************************************************************
*   @Brief Description:
*   Function Status: 	DRAFT   (DRAFT , PRELIMINARY, CHECKED, RELEASED)
*
*	************************************************************************************************
*	Function Name:
*	Function Scope:         Local(static)
*	Function Parameters:
*	Function Return Type:
*	************************************************************************************************
*	@Detailed Description: (Do numbering and tag the number to each part of code)
*   Function Parameters Description:
*   Function Return Type Description:
*   Comments should be added in front of each line. (This line should be deleted)
*	************************************************************************************************
*	Revision History (Description (author, date: yyyy/mm/dd))
*
****************************************************************************************************/
void _init_LPDMA( void )
{

}

/****************************************************************************************************
*   @Brief Description: Configure LPUART1 Peripheral
*   Function Status: 	PRELIMINARY   (DRAFT , PRELIMINARY, CHECKED, RELEASED)
*
*	************************************************************************************************
*	Function Name:			_init_LPUART1()
*	Function Scope:         Local(static)
*	Function Parameters:	void
*	Function Return Type:	void
*	************************************************************************************************
*	@Detailed Description: (Do numbering and tag the number to each part of code)
*   Function Parameters Description:	void
*   Function Return Type Description:	void
*	************************************************************************************************
*	Revision History (Description (author, date: yyyy/mm/dd))
*
****************************************************************************************************/
void _init_LPUART1( void )
{
	static bool initFlag = false;	//This variable will check if LPUART has been initialized or not.
	if(initFlag == true)
	{
		return;						// If we have initialized it before then we'll exit from the function.
	}






	initFlag = true;
}

/***************************************************************************************************/
/**********************************                             ************************************/
/********************                     END OF THE CODE                         ******************/
/**********************************                             ************************************/
/***************************************************************************************************/

/*                                   GLOBAL FUNCTION TEMPLATE                                      */

/****************************************************************************************************
*   @Brief Description:
*   Function Status: 	DRAFT   (DRAFT , PRILIMINARY, CHECKED, RELEASED)
*
*	************************************************************************************************
*	Function Name:
*	Function Scope:			Global
*	Function Parameters:
*	Function Return Type:
*	************************************************************************************************
*   Function Parameters Description:
*   Function Return Type Description:
*   Comments should be added in front of each line. (This line should be deleted)
*	************************************************************************************************
*	Revision History (Description, author, date: yyyy/mm/dd)
*
****************************************************************************************************/

/*                               STATIC/LOCAL FUNCTION TEMPLATE                                    */

/****************************************************************************************************
*   @Brief Description:
*   Function Status: 	DRAFT   (DRAFT , PRELIMINARY, CHECKED, RELEASED)
*
*	************************************************************************************************
*	Function Name:
*	Function Scope:         Local(static)
*	Function Parameters:
*	Function Return Type:
*	************************************************************************************************
*	@Detailed Description: (Do numbering and tag the number to each part of code)
*   Function Parameters Description:
*   Function Return Type Description:
*   Comments should be added in front of each line. (This line should be deleted)
*	************************************************************************************************
*	Revision History (Description (author, date: yyyy/mm/dd))
*
****************************************************************************************************/

/************************************     END OF THE FILE      *************************************/
