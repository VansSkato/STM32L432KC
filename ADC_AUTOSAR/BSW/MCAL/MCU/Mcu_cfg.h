#include "Mcu.h"

//variables que estan inicializadas afuera
const uint32 rcc_ahb2enr = ( (1<<0) | (1<<1) | RCC_AHB2ENR_ADCEN);//lo que quiera configurar

//Es para habilitar los puertos que estan en el AHB2ENR con corriemientos,
//Ejemplo pagina 218 datasheet tarjeta
Mcu_ConfigType McuDriversCFG =
{
	rcc_ahb2enr

};
