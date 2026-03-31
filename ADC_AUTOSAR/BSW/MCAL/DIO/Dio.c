#include "Dio.h"
#include "stm32l432xx.h"

 Dio_LevelType Dio_ReadChannel (Dio_ChannelType ChannelId)
 {
	Dio_LevelType respuesta;//Es una variable de Dio_LevelType

	//Dio_LevelType boton;//no se si aqui este mal

	if(ChannelId == 0)//Dio 0
	{
		respuesta = (GPIOA-> IDR &(1<<0));//IDR ES PARA ENTRADA, PARA LEER
	}
	if(ChannelId == 5)//Dio 1
		{
			respuesta = (GPIOA-> IDR &(1<<5));//IDR ES PARA ENTRADA, PARA LEER
		}
	if(ChannelId == 2)// Dio 2
		{
			respuesta = (GPIOB-> IDR &(1<<5));//IDR ES PARA ENTRADA, PARA LEER
		}
	return respuesta;
}

void Dio_WriteChannel (Dio_ChannelType ChannelId,Dio_LevelType Level)

{
//para ver el pin
//para ver si es 1 o 0

	if(ChannelId == 0)//Es para ver si el pin es 0 este es el DIO 0
	{
		if(Level ==1)
		{
			GPIOA->BSRR |= (GPIO_BSRR_BS0_Msk);//level es igual a 1 lo prende
		}
		else
		{
			GPIOA->BRR |= (GPIO_BRR_BR0_Msk);//si level es diferente de 1 lo tiene que apagar
		}
	}

	if(ChannelId == 5)//Es para ver si el pin es 0 este es el DIO 1
		{
			if(Level ==1)
			{
				GPIOA->BSRR |= (GPIO_BSRR_BS5_Msk);//level es igual a 1 lo prende
			}
			else
			{
				GPIOB->BRR |= (GPIO_BRR_BR5_Msk);//si level es diferente de 1 lo tiene que apagar
			}
		}

}
