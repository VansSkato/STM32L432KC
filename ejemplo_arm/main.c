#include "test.h"// no se te olvide este pedo emilio 
#include "Platform_types.h" 
/*
IMPORTANTE INCLUIR EL TEST.H 
*/
#define PERIPHERAL_BASE (0x40000000UL)//UL es para que ocupar el largo de la arquitectura es un casteo EL PERIPHERAL
#define AHB2PERIPH_BASE (PERIPHERAL_BASE + 0x8000000UL)//Agregue el puente AHB2
#define AHB1PERIPH_BASE (PERIPHERAL_BASE + 0x20000UL)//Agregue el puente AHB1
#define RCC_base (AHB1PERIPH_BASE + 0x1000UL)//Agregue la direccion en la que inicia el reloj
typedef struct//todo los registros del RCC
{
    uint32 CR;//offset 0x00
    uint32 ICSRC;//offset 0x04
    uint32 CFGR;//offset 0x8
    uint32 PLLCFGR;//offset 0x0C
    uint32 PLLSAI1CFGR;//offset 0x10
    uint32 RESERVADO;//offset 0x14
    uint32 CIER;//offset 0x18
    uint32 CIFR;//offset 0x1C
    uint32 CICR;//offset 0x20
    uint32 RESERVADO2;//offset 0x24
    uint32 AHB1RSTR;//offset 0x28
    uint32 AHB2RSTR;//offset 0x2C
    uint32 AHB3RSTR;//offset 0x30
    uint32 RESERVADO3;//offset 0x34
    uint32 APB1RSTR1;//offset 0x38
    uint32 APB1RSTR2;//offset 0x3C
    uint32 APB2RSTR;//offset 0x40
    uint32 RESERVADO4;//offset 0x44
    uint32 AHB1ENR;//offset 0x48
    uint32 AHB2ENR;//offset 0x4C
    uint32 AHB3ENR;//offset 0x50
    uint32 RESERVADO5;//offset 0x54
    uint32 APB1ENR1;//offset 0x58
    uint32 APB1ENR2;//offset 0x5C
    uint32 APB2ENR;//offset 0x60
    uint32 RESERVADO6;//offset 0x64
    uint32 AHB1SMENR;//offset 0x68
    uint32 AHB2SMENR;//offset 0x6C
    uint32 AHB3SMENR;//offset 0x70
    uint32 RESERVADO7;//offset 0x74
    uint32 APB1SMENR1;//offset 0x78
    uint32 APB1SMENR2;//offset 0x7C
    uint32 APB2SMENR;//offset 0x80
    uint32 RESERVADO8;//offset 0x84
    uint32 CCIPR;//offset 0x88
    uint32 RESERVADO9;//offset 0x8C
    uint32 BDCR;//offset 0x90
    uint16 CSR;//offset 0x94
    uint32 CRRCR;//offset 0x98
    uint32 CCIPR2;//offset 0x9C
    
}RCC_typedef;


#define RCC ((RCC_typedef*)RCC_base)

typedef struct //todo los registros del GPIOA
{
    uint32 MODER; //0x00
    uint32 OTYPER;//0x04
    uint32 OSPEEDR;//0x08
    uint32 PUPDR;//0x0C
    uint32 IDR;//0x10
    uint32 ODR;//0x14
    uint32 BSRR;//0x18
    uint32 LCKR;//0x1C
    uint32 AFLR;//0x20
    uint32 AFRH;//0x24
    uint32 BRR;//0x28


}GPIOx_typedef;

#define GPIOA ((GPIOx_typedef*)AHB2PERIPH_BASE)//defino al GPIOA(todas sus direcciones)
#define GPIOB_BASE (AHB2PERIPH_BASE + 0x0400UL)
#define GPIOB ((GPIOx_typedef*)GPIOB_BASE)


int main()
{   

    RCC-> AHB2ENR |= (1UL << 1); //este seva directamente del RCC a la direccion del AHB2ENR esun puntero practicamente
    //hago el corrimiento el 1 es le bit que quiero y el 1UL el valor que le quiero poner a ese bit
    /*
    Tip PRO siempre limpiar el registro
    */
   GPIOB -> MODER &= ~(3UL << 6);// aqui en el registro 10 vamos a poner el 3 (0011) y como son 11 pasa el 1 al 11, y como los va a negar pues los hace 0
   //los bits del moder, es este caso es el PA5 del micro en el datasheet y usermanual, el el 5 es el MODER
   GPIOB -> MODER |= (1UL << 6);//aqui prendemos el PA5 o el MODER porque el moder es 01 es el  General purpose output mode Pag.267 pdf.0015
    

   while (1)//while infinito
    {
       // GPIOB->ODR = ( GPIOA -> ODR ^ (1UL >> 3));
       GPIOB -> ODR ^= (1UL << 3 );// Estamos activado el ODR del GPIOB que este caso es el 3 PAG 269
       for (uint32 i = 0; i < 70000; i++){};//para ver la velocidad del LED como parpadea 
    }
}
//U casteo del ancho de la arquitectura sin signo 
//UL casteo del ancho y todo  de la arquitectura