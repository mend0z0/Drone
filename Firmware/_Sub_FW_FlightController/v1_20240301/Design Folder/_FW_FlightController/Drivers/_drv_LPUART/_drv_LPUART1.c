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

const uint32_t LPUART1_IRQ_PRIORITY = 1;	// LPUART1 interrupt vector priority.

/****************************************************************************************************
****************************   GLOB. VARIABLES DECLARATION    ***************************************
*****************************************************************************************************/

struct{
	uint8_t recievedData[LPUART_BUFFER_SIZE];
	uint8_t transmittedData[LPUART_BUFFER_SIZE];
}lpuart;


/****************************************************************************************************
***********************     STATIC/LOCAL FUNCTIONS DECLARATION      *********************************
*****************************************************************************************************/
void LPUART1_IRQHandler( void )
{

}

static void _init_GPIO( void );
static void _init_LPDMA( void );
static void _init_LPUART1( void );

/****************************************************************************************************
****************************         GLOBAL FUNTIONS         ****************************************
*****************************************************************************************************/

/****************************************************************************************************
****************************         STATIC FUNTIONS         ****************************************
*****************************************************************************************************/

/****************************************************************************************************
*   @Brief Description: Configure GPIO to get connected to LPUART
*   Function Status: 	PRELIMINARY   (DRAFT , PRELIMINARY, CHECKED, RELEASED)
*
*	************************************************************************************************
*	Function Name:			_init_GPIO()
*	Function Scope:         Local(static)
*	Function Parameters:	void
*	Function Return Type:	void
*	************************************************************************************************
*	@Detailed Description: (Do numbering and tag the number to each part of code)
*   Function Parameters Description:
*   Function Return Type Description:
*   Comments should be added in front of each line. (This line should be deleted)
*	************************************************************************************************
*	Revision History (Description (author, date: yyyy/mm/dd))
*
****************************************************************************************************/
static void _init_GPIO( void )
{
	// PA2 = LPUART1_TX
	// PA3 = LPUART1_RX

	RCC->AHB2ENR1 |= 	RCC_AHB2ENR1_GPIOAEN;		// IO port A clock enabled

	GPIOA->MODER |= 	GPIO_MODER_ODR3_1 | 		// Alternate function mode
						GPIO_MODER_ODR2_1			// Alternate function mode
						;

	GPIOA->OSPEEDR |= 	GPIO_OSPEEDR_OSPEED3_0 |	// Medium speed
						GPIO_OSPEEDR_OSPEED2_0		// Medium speed
						;

	GPIOA->AFR[0] |= 	GPIO_AFRL_AFSEL3_3 |		// AF8
						GPIO_AFRL_AFSEL2_3			// AF8
						;
}

/****************************************************************************************************
*   @Brief Description:
*   Function Status: 	DRAFT   (DRAFT , PRELIMINARY, CHECKED, RELEASED)
*
*	************************************************************************************************
*	Function Name:			_init_LPDMA()
*	Function Scope:         Local(static)
*	Function Parameters:	void
*	Function Return Type:	void
*	************************************************************************************************
*	@Detailed Description: (Do numbering and tag the number to each part of code)
*   Function Parameters Description:
*   Function Return Type Description:
*   Comments should be added in front of each line. (This line should be deleted)
*	************************************************************************************************
*	Revision History (Description (author, date: yyyy/mm/dd))
*
****************************************************************************************************/
static void _init_LPDMA( void )
{
	static bool initFlag = false;	//This variable will check if LPUART has been initialized or not.
	if(initFlag == true)
	{
		return;						// If we have initialized it before then we'll exit from the function.
	}

	RCC->AHB3ENR |=		RCC_AHB3ENR_LPDMA1EN;					// LPDMA1 clock enabled

	//-----------	RX
	LPDMA1_Channel0->CCR |=	DMA_CCR_PRIO_1;						// Low priority, High weight

	LPDMA1_Channel0->CTR2 |= ((0UL) << DMA_CTR2_REQSEL_Pos);	// lpuart1_rx_dma

	LPDMA1_Channel0->CTR1 |= DMA_CTR1_DINC;						// destination incrementing single

	LPDMA1_Channel0->CSAR = &LPUART1->RDR;						// source address
	LPDMA1_Channel0->CDAR = &lpuart.recievedData[0];			// destination address

	LPDMA1_Channel0->CCR |= DMA_CCR_EN;							// write: enable channel, read: channel enabled

	//-----------	TX
	LPDMA1_Channel1->CCR |=	DMA_CCR_PRIO_1;						// Low priority, High weight

	LPDMA1_Channel1->CTR1 |= DMA_CTR1_SINC;						// source incrementing single

	LPDMA1_Channel1->CTR2 |= ((1UL) << DMA_CTR2_REQSEL_Pos);	// lpuart1_tx_dma

	LPDMA1_Channel1->CSAR = &lpuart.transmittedData[0];			// source address
	LPDMA1_Channel1->CDAR = &LPUART1->TDR;						// destination address

	LPDMA1_Channel1->CCR |= DMA_CCR_EN;							// write: enable channel, read: channel enabled

	initFlag = true;
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
static void _init_LPUART1( void )
{
	static bool initFlag = false;							//This variable will check if LPUART has been initialized or not.
	if(initFlag == true)
	{
		return;												// If we have initialized it before then we'll exit from the function.
	}

	// LPUART1 kernel clock source.
	RCC->CCIPR3 |= RCC_CCIPR3_LPUART1SEL_1;					// HSI16 selected

	_init_GPIO();											// Configure GPIO

	LPUART1->BRR = 0x8AE3;									// Baud rate = 115200, Tx/Rx baud = (256 * Fclk (16 MHz)) / BRR

	LPUART1->CR1 |= USART_CR1_TE 	|						// Transmitter enable
					USART_CR1_RE							// Receiver enable
					;

	LPUART1->CR2 |= USART_CR2_STOP_1;						// 2 stop bit

	LPUART1->CR3 |= USART_CR3_DMAT	|						// DMA mode is enabled for transmission
					USART_CR3_DMAR							// DMA mode is enabled for reception
					;

	_init_LPDMA();											// Configure DMA

	NVIC_SetPriority( LPUART1_IRQn, LPUART1_IRQ_PRIORITY);	// Set LPUART1 NVIC priority
	NVIC_EnableIRQ(LPUART1_IRQn);							// Enable NVIC

	LPUART1->CR1 |= USART_CR1_UE;							// LPUART enable

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
