#include "port.h"
#include "stm32l432xx.h"

void Port_Init (const Port_ConfigType* ConfigPtr)//aqui inicializamos los moders

{
//	GPIOA->MODER &=  ~(ConfigPtr->MODER);
//
//	GPIOA->MODER |=  (ConfigPtr->Direction);
//
//
//
//
//	//GPIOB
//	GPIOB->MODER &= ~(GPIO_MODER_MODE1_Msk );//Input "Boton"

	for(uint8 i = 0 ; i <= ConfigPtr[i].size ; i++)// (sizeof(ConfigPtr)/sizeof(ConfigPtr[0])) es para ver cuantas configuraciones en el typedef de Port_ConfigType tiene
	{
	ConfigPtr[i].Port->MODER &= ~(ConfigPtr[i].MODER);
	ConfigPtr[i].Port->MODER |= (ConfigPtr[i].Direction);
	}


}
