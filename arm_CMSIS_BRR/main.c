#include "test.h"// no se te olvide este pedo emilio 
#include "Platform_types.h"
#include "stm32l432xx.h"
//GPIO REGISTER PAG 267

int main()
{   

    //RCC-> AHB2ENR |= (1UL << 1); //este se va directamente del RCC a la direccion del AHB2ENR esun puntero practicamente
    //hago el corrimiento el 1 es le bit que quiero y el 1UL el valor que le quiero poner a ese bit
    //RCC->AHB2ENR |= RCC_AHB2ENR_GPIOBEN;//primer puente 
    RCC->AHB2ENR |= RCC_AHB2ENR_GPIOAEN;//hago el corrimiento el 1 es le bit que quiero y el 1UL el valor que le quiero poner a ese bit
    RCC->AHB1ENR |= RCC_AHB2ENR_GPIOAEN;//AHB1
    
//pag218
//pag267
//pag68
//importante
//GPIOs
    
    //PA0
    GPIOA->MODER &= ~(GPIO_MODER_MODE0_Msk );//(<0x3UL<< 0UL ) limpiar
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

 
    //vamosa hacer lo de BRR y BSRR

   while (1)//while infinito
    {
        //BSRR                                              
        GPIOA->BSRR  |= (GPIO_BSRR_BS0_Msk);//lo manda a UP (1) PA0
        for(uint32 i = 0; i < 800000 ; i++){};

        GPIOA->BSRR  |= (GPIO_BSRR_BS1_Msk);//lo manda a UP (1) PA1
        for(uint32 i = 0; i < 800000 ; i++){};

        GPIOA->BSRR  |= (GPIO_BSRR_BS2_Msk);//lo manda a UP (1) PA2
        for(uint32 i = 0; i < 800000 ; i++){};

        GPIOA->BSRR  |= (GPIO_BSRR_BS3_Msk);//lo manda a UP (1) PA3
        for(uint32 i = 0; i < 800000 ; i++){};

        //BRR
        GPIOA->BRR  |= (GPIO_BRR_BR0_Msk);//lo manda a DOWN (0)PA0
        for(uint32 i = 0 ; i < 800000 ; i++){};

        GPIOA->BRR  |= (GPIO_BRR_BR1_Msk);//lo manda a DOWN (0)PA1
        for(uint32 i = 0 ; i < 800000 ; i++){};

        GPIOA->BRR  |= (GPIO_BRR_BR2_Msk);//lo manda a DOWN (0)PA2
        for(uint32 i = 0 ; i < 800000 ; i++){};

        GPIOA->BRR  |= (GPIO_BRR_BR3_Msk);//lo manda a DOWN (0)PA3
        for(uint32 i = 0 ; i < 800000 ; i++){};
        
    }
}
//U casteo del ancho de la arquitectura sin signo 
//UL casteo del ancho y todo  de la arquitectura