
#include "main.h"
#include "stm32u575xx.h"

void LPUART1_IRQHandler( void )
{

}

int main(void)
{

	RCC->CR |= RCC_CR_HSION;											// 1: HSI16 oscillator on

	while(!(RCC->CR & RCC_CR_HSIRDY));									// 1: HSI16 oscillator ready

	RCC->AHB2ENR1 |= RCC_AHB2ENR1_GPIOAEN;								// IO port A clock enabled

	//PA2 = LPUART1_TX & IT'S AF8
	//PA3 = LPUART1_RX & IT'S AF8
	GPIOA->MODER |= GPIO_MODER_MODE2_1 | GPIO_MODER_MODE3_1;			// Set the GPIO mode as Alternate function
	GPIOA->OTYPER &= ~(GPIO_OTYPER_OT2 | GPIO_OTYPER_OT3);				// Set the output push-pull
	GPIOA->OSPEEDR &= ~(GPIO_OSPEEDR_OSPEED2 | GPIO_OSPEEDR_OSPEED3);	// Set the speed as low speed
	GPIOA->PUPDR &= ~(GPIO_PUPDR_PUPD2 | GPIO_PUPDR_PUPD3);				// No pull-up, pull-down

	GPIOA->AFR[0] |= GPIO_AFRL_AFSEL2_3 | GPIO_AFRL_AFSEL3_3;			// Set the Alternate function to AF8.

	//-----------------------------------------------------------------------------------------------------------------------------

	//init the LPUART1
	RCC->CCIPR3 |= RCC_CCIPR3_LPUART1SEL_1;		// HSI16 selected

	//Set the baud rate
	LPUART1->PRESC = USART_PRESC_PRESCALER_3;	// 16 MHz / 32
	LPUART1->BRR = 13333;						// It'll make the baud-rate to be ((16 MHz * 256) / 32) / 13333 ~= 9600

	LPUART1->CR2 |= USART_CR2_STOP_1;			// 2 stop bits

	LPUART1->CR1 |= USART_CR1_RXFFIE;			// An LPUART interrupt is generated when RXFF=1 in the LPUART_ISR register
	LPUART1->CR1 |= USART_CR1_RE;				// Receiver is enabled and begins searching for a start bit
	LPUART1->CR3 |= USART_CR3_DMAR;				// DMA mode is enabled for reception

	LPUART1->CR1 |= USART_CR1_TE;				// Transmitter is enabled
	LPUART1->CR3 |= USART_CR3_DMAT;				// DMA mode is enabled for transmission

	LPUART1->CR1 |= USART_CR1_UE;				// LPUART enabled

	while (1)
	{

	}

}
