#include "stm32f4xx.h"
//#define STM32F411xE
#define GPIOAEN                   (1U << 0)
#define GPIOBEN                   (1U << 1)

#define PIN5                      (1U << 5)
#define LED_PIN                    PIN5


int main(void)
 {
	RCC->AHB1ENR |= GPIOAEN; // Enable clock for GPIOA
	GPIOA->MODER |= (1 << 10); // Setting BIT 11 to 0 and BIT 10 to 1 sets PIN 5 to General purpose output mode.
	GPIOA->MODER &= ~(1 << 11);
	while(1)
	{
		GPIOA->ODR ^= LED_PIN;//Toggle LED_PIN
		for(int i= 0; i<100000; i++);//delay

	}


	}


