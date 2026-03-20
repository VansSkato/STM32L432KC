#include "Mcu.h"
#include "stm32l432xx.h"

void Mcu_Init (const Mcu_ConfigType* ConfigPtr)
{
	RCC->AHB2ENR |=  ConfigPtr->RCC_AHB2ENR;
}
