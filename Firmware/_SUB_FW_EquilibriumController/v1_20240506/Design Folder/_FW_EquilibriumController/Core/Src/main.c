/****************************************************************************************************
*
*   Project Name:       Drone - _SUB_FW_EquilibriumController.main
*   @Brief Description: This file is the main file of the project.
*   File Status:	    DRAFT   (DRAFT , PRELIMINARY, CHECKED, RELEASED)
*
*	File Name:	main.c
*	Version:	01
*	Revision:	01
*	Date:		2024/05/23
*	License:	Open-source
*	******************************** Project Description *******************************************
*	@Detailed Description: This controller is supposed to read environmental sensors such as temperature,
*   humidity, pressure, 3-Axis gyroscope, 3-Axis accelerometer, 3-Axis compass, and GPS. Once the data is
*   read, it'll be filtered and be used for equilibrium calculation.
*
*	******************************** File Description *******************************************
*	@Detailed Description: This file contains the initializations, created and scheduled tasks functions.
*
*	*********************************  Hardware Info  **********************************************
*   Name:       _SUB_HW_EquilibriumController
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
*	Author:	Siavash Taher Parvar
*	GitHub: github.com/Mend0z0
****************************************************************************************************/

/****************************************************************************************************
****************************       HEADERS DECLARATION       ****************************************
*****************************************************************************************************/
#include "main.h"

/****************************************************************************************************
****************************   CONST VARIABLES DECLARATION    ***************************************
*****************************************************************************************************/

/****************************************************************************************************
****************************   GLOB. VARIABLES DECLARATION    ***************************************
*****************************************************************************************************/

/****************************************************************************************************
****************************        ISR DECLARATION           ***************************************
*****************************************************************************************************/

/****************************************************************************************************
***********************     STATIC/LOCAL FUNCTIONS DECLARATION      *********************************
*****************************************************************************************************/

void _init_RCC( void );

/****************************************************************************************************
****************************         GLOBAL FUNTIONS         ****************************************
*****************************************************************************************************/

/****************************************************************************************************
****************************         STATIC FUNTIONS         ****************************************
*****************************************************************************************************/

/****************************************************************************************************
*   @Brief Description: The main function of the project.
*   Function Status: 	DRAFT   (DRAFT , PRELIMINARY, CHECKED, RELEASED)
*
*	************************************************************************************************
*	Function Name:			main()
*	Function Scope:         Local(static)
*	Function Parameters:	void
*	Function Return Type:	int
*	************************************************************************************************
*	@Detailed Description: (Do numbering and tag the number to each part of code)
*   Function Parameters Description: void
*   Function Return Type Description: It'll always return 0.
*	************************************************************************************************
*	Revision History (Description (author, date: yyyy/mm/dd))
*
****************************************************************************************************/
int main(void)
{
	_init_RCC();

	while (1)
	{

	}

	return 0;
}

void _init_RCC( void )
{
	// The MSIS is used as system clock source after startup from reset, configured at 4 MHz.

	//Enable HSI16
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


