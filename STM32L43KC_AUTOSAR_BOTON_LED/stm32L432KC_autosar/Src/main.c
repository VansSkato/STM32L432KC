#include "stm32l432xx.h"
#include "Mcu.h"
#include "Mcu_cfg.h"
#include "port.h"
#include "port_cfg.h"
#include "Dio.h"
#include "Dio_cfg.h"
#include "Platform_Types.h"
//GPIO REGISTER PAG 267

int main()//para inicializar los puertos de la tarejta
{
	Mcu_Init (&McuDriversCFG);//registros son los clocks y es un puntero & DEvolver la direccion de la variable
	Port_Init(PortModers);//aqui no pongo & porque es un arreglo, porque te manda la direccion



	//antes del while son funciones y eso
   while (1)//while infinito
    {
	   if(Dio_ReadChannel(Dio2))// tiene que mandar 11 ara que entre al if Aqui deberia ir el DIO 2
	   {
		   Dio_WriteChannel(Dio0,STD_HIGH);
		   Dio_WriteChannel(Dio5,STD_HIGH);
		   //for(uint32 delay = 0; delay< 2000000; delay++);
	   }
	   else
	   {
		   Dio_WriteChannel(Dio0,STD_LOW);
		   Dio_WriteChannel(Dio5,STD_LOW);
		   //for(uint32 delay = 0; delay< 2000000; delay++);
	   }


    }
}
//U casteo del ancho de la arquitectura sin signo
//UL casteo del ancho y todo  de la arquitectura
