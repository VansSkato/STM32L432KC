#include "stm32l432xx.h"
//GPIO REGISTER PAG 267

int main()
{

    //RCC-> AHB2ENR |= (1UL << 1); //este se va directamente del RCC a la direccion del AHB2ENR esun puntero practicamente
    //hago el corrimiento el 1 es le bit que quiero y el 1UL el valor que le quiero poner a ese bit
    RCC->AHB2ENR |= RCC_AHB2ENR_GPIOBEN;//primer puente
    RCC->AHB2ENR |= RCC_AHB2ENR_GPIOAEN;//hago el corrimiento el 1 es le bit que quiero y el 1UL el valor que le quiero poner a ese bit
    //RCC->AHB1ENR |= RCC_AHB2ENR_GPIOAEN;//AHB1

//pag218
//pag267
//pag68
//importante
//GPIOs

//PB1
    GPIOB->MODER &= ~(GPIO_MODER_MODE1_Msk);
//PA0
    GPIOA->MODER &= ~(GPIO_MODER_MODE0_Msk);
    GPIOA->MODER |= (GPIO_MODER_MODE0_0);



   while (1)//while infinito
    {
        if((GPIOB->IDR & 2u))//PARA VER SI LE ESTA LLEGANDO 1 AL PB1
        {
           GPIOA->BSRR  |= (GPIO_BSRR_BS0_Msk);//lo manda a UP (1) PA0
        }
        else
        {
            GPIOA->BRR  |= (GPIO_BRR_BR0_Msk);
        }

    }
}
//U casteo del ancho de la arquitectura sin signo
//UL casteo del ancho y todo  de la arquitectura
