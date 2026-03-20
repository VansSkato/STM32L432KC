#include "test.h"// no se te olvide este pedo emilio 
#include "Platform_types.h"
#include "stm32l432xx.h"
//GPIO REGISTER PAG 267

int main()
{   

    //RCC-> AHB2ENR |= (1UL << 1); //este se va directamente del RCC a la direccion del AHB2ENR esun puntero practicamente
    //hago el corrimiento el 1 es le bit que quiero y el 1UL el valor que le quiero poner a ese bit
    RCC->AHB2ENR |= RCC_AHB2ENR_GPIOBEN;//primer puente 
    RCC->AHB2ENR |= RCC_AHB2ENR_GPIOAEN;//hago el corrimiento el 1 es le bit que quiero y el 1UL el valor que le quiero poner a ese bit
    
//pag218
//pag267
//pag68
//importante
//GPIOs
    
    //PA0
    GPIOA->MODER &= ~(GPIO_MODER_MODE0_Msk );//(<0x3UL<< 0UL )
    GPIOA->MODER |= (GPIO_MODER_MODE0_0);////(<0x1UL<< 0UL )prendemos el bit que habilita el bit de moder 5 en este caso es el pin PA1
    

    //PA1 
   GPIOA->MODER &= ~(GPIO_MODER_MODE1_Msk );//(<0x3UL<< 0UL )hacemos limpieza con una an negada para solo limpiar ese
   GPIOA->MODER |= (GPIO_MODER_MODE1_0);//(<0x2UL<< 0UL )prendemos el bit que habilita el bit de moder 5 en este caso es el pin PA1

   //PA2
    GPIOA->MODER &= ~(GPIO_MODER_MODE2_Msk );
    GPIOA->MODER |= (GPIO_MODER_MODE2_0);//

    //PA3
    GPIOA->MODER &= ~(GPIO_MODER_MODE3_Msk );
    GPIOA->MODER |= (GPIO_MODER_MODE3_0);

 


   while (1)//while infinito
    {

        GPIOA->ODR ^=(GPIO_ODR_OD0_Msk);//PA0(0x1UL << 0U)
        for (uint32 i = 0; i < 90000; i++){};//para ver la velocidad del LED como parpadea

        GPIOA->ODR ^= (GPIO_ODR_OD1_Msk);//PA1(0x1UL << 1U)
        for (uint32 i = 0; i < 80000; i++){};//para ver la velocidad del LED como parpadea

        GPIOA->ODR ^= (GPIO_ODR_OD2_Msk);//PA2
        for (uint32 i = 0; i < 70000; i++){};

        GPIOA->ODR ^= (GPIO_ODR_OD3_Msk);//PA1
        for (uint32 i = 0; i < 60000; i++){};


 
    }
}
//U casteo del ancho de la arquitectura sin signo 
//UL casteo del ancho y todo  de la arquitectura