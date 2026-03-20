#ifndef PORT_CFG_H//esto va ahuevo
#define PORT_CFG_H

#include "port.h"
//variables que estan inicializadas afuera

const uint32 MODER = (GPIO_MODER_MODE0_Msk | GPIO_MODER_MODE1_Msk | GPIO_MODER_MODE5_Msk );//PUERTO GPIOA0
const uint32 Direction = (GPIO_MODER_MODE0_0 | GPIO_MODER_MODE1_0 | GPIO_MODER_MODE5_0 );// para mandarle 01 0 10 estos son las direcciones

const uint32 MODER_B =  (GPIO_MODER_MODE0_Msk | GPIO_MODER_MODE1_Msk | GPIO_MODER_MODE5_Msk );
const uint32 Direction_B = (GPIO_MODER_MODE0_0);

Port_ConfigType PortModers[] =//aqui esta el puerto del moder
{
	{
	GPIOA,		  //0
	MODER,		  //0
	Direction,	  //0
	2,
	},
	{
	GPIOB,		  //1
	MODER_B,	  //1
	Direction_B,  //1
	2,
	},

};

#endif
