/*
 * Discover the STM32U5, the new secure, high-performance, and ultra-low power STM32 microcontrollers that will revolutionize your design
 */

#include "main.h"
#include "stm32u575xx.h"

#define	COLOR_RED		1
#define	COLOR_GREEN		2
#define	COLOR_BLUE		3

#define	MAX_CNT			30000

void LPUART1_IRQHandler( void )
{

}

void LPTIM1_IRQHandler( void )
{
	LPTIM1->ICR |= LPTIM_ICR_UECF;	//clear the UE flag
}

void delay( void )
{
	for(uint32_t cnt = 0; cnt < MAX_CNT; ++cnt);
}

void _init_LPTIM1( void )
{
	RCC->CCIPR3 |= RCC_CCIPR3_LPTIM1SEL_1;		// HSI16 selected

	LPTIM1->CFGR |= LPTIM_CFGR_PRESC;			// Input clock is 32MHz so PRESC = 32MHz/128 = 250 kHz

	LPTIM1->CFGR |= LPTIM_CFGR_PRELOAD;			// Registers are updated at the end of the current LPTIM period

	LPTIM1->ARR = 40000;						// (1.25 ms(LPUART Baud rate) * 128(BuffSize)) / (1 / (32 MHz (in_clk) / 128 (pre-scaler))) = 40000 :)

	LPTIM1->CR |= LPTIM_CR_ENABLE;				// LPTIM is enabled

	LPTIM1->DIER |= LPTIM_DIER_UEIE;			// Enable Update Event Interrupt. This line should be placed after the LPTIM is enabled.

	while(!(LPTIM1->ISR & LPTIM_ISR_DIEROK))	// Waiting until the DIEROK sets so we can make sure the interrupt is enabled.
	{
		//maybe adding a timeout...
	}
	LPTIM1->ICR |= LPTIM_ICR_DIEROKCF;			// Writing 1 to this bit clears the DIEROK flag in the LPTIM_ISR register.

	LPTIM1->CR &= ~LPTIM_CR_ENABLE;				// LPTIM is disabled
}

void _init_lpuart1( void )
{
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
}

void _init_LEDs( void )
{
	uint32_t tempVar;

	RCC->AHB2ENR1 |= RCC_AHB2ENR1_GPIOBEN | RCC_AHB2ENR1_GPIOCEN | RCC_AHB2ENR1_GPIOGEN;
	tempVar = RCC->AHB2ENR1;

	tempVar = 0;

	GPIOB->MODER &= ~GPIO_MODER_MODE7_1;		// BLUE
	GPIOC->MODER &= ~GPIO_MODER_MODE7_1;		// GREEN
	GPIOG->MODER &= ~GPIO_MODER_MODE2_1;		// RED
}

void BlinkLEDs( uint8_t color )
{
	if(color == COLOR_RED)
	{
		GPIOG->ODR ^= GPIO_ODR_OD2;
	}
	else if(color == COLOR_GREEN)
	{
		GPIOC->ODR ^= GPIO_ODR_OD7;
	}
	else if(color == COLOR_BLUE)
	{
		GPIOB->ODR ^= GPIO_ODR_OD7;
	}
}

void _init_RCC( void )
{
	RCC->CR |= RCC_CR_MSISON;					// 1: MSIS (MSI system) oscillator on

	while(!(RCC->CR & RCC_CR_MSISRDY))			// 1: MSIS (MSI system) oscillator ready
	{

	}

	RCC->CR |= RCC_CR_HSION;					// 1: HSI16 oscillator on

	while(!(RCC->CR & RCC_CR_HSIRDY));			// 1: HSI16 oscillator ready

	RCC->CFGR1 |= RCC_CFGR1_SW_0;				// 01: HSI16 selected as system clock

}

void _init_PWR( void )
{
	/*RCC->CR |= RCC_CR_MSISON;					// 1: MSIS (MSI system) oscillator on

	while(!(RCC->CR & RCC_CR_MSISRDY))			// 1: MSIS (MSI system) oscillator ready
	{

	}
	// 10: HSI16 clock selected as PLL1 clock entry,
	// 11: PLL1 input (ref1_ck) clock range frequency between 8 and 16 MHz,
	// 0001: division by 2,

	RCC->PLL1CFGR |= RCC_PLL1CFGR_PLL1SRC_1 | RCC_PLL1CFGR_PLL1RGE | RCC_PLL1CFGR_PLL1MBOOST_0;

	RCC->PLL1CFGR |= (RCC_PLL1CFGR_PLL1M_1 | RCC_PLL1CFGR_PLL1M_0);	// 0011: division by 4

	RCC->PLL1CFGR |= RCC_PLL1CFGR_PLL1REN;		// 1: pll1_r_ck output enabled

	RCC->PLL1DIVR = 0x03010278;					// 0000011: pll1_r_ck = vco1_ck / 4 and 0x078: PLL1N = 120 as a result the output frequency of PLL is 120MHz.

	RCC->CR |= RCC_CR_HSION;					// 1: HSI16 oscillator on

	while(!(RCC->CR & RCC_CR_HSIRDY));			// 1: HSI16 oscillator ready

	//RCC->CFGR1 |= RCC_CFGR1_SW_0;				// 01: HSI16 selected as system clock

	//PWR->CR3 |= PWR_CR3_REGSEL;					// 1: SMPS selected

	//PWR->VOSR |= ;				// Set BOOSTEN in PWR_VOSR. This step can be done together with 	VOS programming
	//while(!(PWR->VOSR & PWR_VOSR_BOOSTRDY));	// Wait until the BOOSTRDY flag is set in PWR_VOSR.

	PWR->VOSR |= PWR_VOSR_VOS | PWR_VOSR_BOOSTEN;					// Program VOS[1:0] to range P in PWR_VOSR
	while(!(PWR->VOSR & PWR_VOSR_VOSRDY));		// Wait until the VOSRDY flag is set in PWR_VOSR.

	PWR->SVMCR |= PWR_SVMCR_PVDE | PWR_SVMCR_IO2VMEN;	// 1: PVD enabled, 1: VDDIO2 voltage monitor enabled

	//Adjust number of wait states according new frequency target in range P (LATENCY bits in FLASH_ACR, and WSC bits in RAMCFG_MxCR).
	FLASH->ACR |= FLASH_LATENCY_3;				// Three wait states:

	RCC->PLL1CFGR |= (RCC_PLL1CFGR_PLL1M_1 | RCC_PLL1CFGR_PLL1M_0);	// 0011: division by 4

	RCC->PLL1CFGR |= RCC_PLL1CFGR_PLL1REN;		// 1: pll1_r_ck output enabled

	RCC->PLL1DIVR = 0x03010278;					// 0000011: pll1_r_ck = vco1_ck / 4 and 0x078: PLL1N = 120 as a result the output frequency of PLL is 120MHz.

	RCC->CR |= RCC_CR_PLL1ON;					// 1: PLL1 ON

	while(!(RCC->CR & RCC_CR_PLL1RDY));			// 1: PLL1 locked

	//4 set the PLL1 as system clock
	RCC->CFGR1 |= RCC_CFGR1_SW;					// 11: PLL pll1_r_ck used as system clock*/

	/*
	 * 	The following sequence must be done before using any I/O from PG[15:2]:
			1. If VDDIO2 is independent from VDD:
	*/

	PWR->SVMCR |= PWR_SVMCR_IO2VMEN;				// Enable the IO2VM by setting IO2VM in PWR_SVMCR.
	while(!(PWR->SVMSR & PWR_SVMSR_VDDIO2RDY));		// Wait until VDDIO2RDY is set in PWR_SVMSR.
	PWR->SVMCR |= PWR_SVMCR_IO2SV;					// Set IO2SV in PWR_SVMCR to remove the VDDIO2 power isolation.

	/*
	 * The following sequence must be done before using any of these analog peripherals: analog
			to digital converters, digital to analog converters, comparators, operational amplifiers,
			voltage reference buffer:
				1. If VDDA is independent from VDD:
				a) Enable the AVM1 or AVM2 by setting AVM1EN or AVM2EN in PWR_SVMCR.
				b) Wait for the AVM wake-up time.
				c) Wait until VDDA1RDY or VDDA2RDY is set in PWR_SVMCR.
				d) Disable the AVM for consumption saving (optional).
				2. Set the ASV in PWR_SVMCR to remove the VDDA power isolation.
		 */

}





int main(void)
{
	FLASH->ACR |= FLASH_ACR_PRFTEN;

	//_init_PWR();
	_init_RCC();
	_init_LEDs();


	while (1)
	{
		BlinkLEDs( COLOR_GREEN );
		delay();
		BlinkLEDs( COLOR_RED );
		delay();
		BlinkLEDs( COLOR_BLUE );
		delay();
	}
}
