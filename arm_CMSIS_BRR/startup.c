#include <stdint.h>
#include "Platform_types.h"

extern uint32 _etext;/*utiliza una variable creada deste otro archvio eso es el extern*/
extern uint32 _sdata;
extern uint32 _edata;
extern uint32 _sbss;
extern uint32 _ebss;
extern uint32 _estack;


void Reset_Handler(void);
void Default_Handler(void);
int main(void);

//Default
void NMI_Handler(void)__attribute__((weak,alias("Default_Handler")));
void Hard_Fault_Handler(void)__attribute__((weak,alias("Default_Handler")));
void Mem_Manage_Handler(void)__attribute__((weak,alias("Default_Handler")));
void Bus_Fault_Handler(void)__attribute__((weak,alias("Default_Handler")));
void Usage_Fault_Handler(void)__attribute__((weak,alias("Default_Handler")));

void Sv_Call_Handler(void)__attribute__((weak,alias("Default_Handler")));
void Debug_Handler(void)__attribute__((weak,alias("Default_Handler")));
void Pend_SV_Handler(void)__attribute__((weak,alias("Default_Handler")));
void Sys_Tick_Handler(void)__attribute__((weak,alias("Default_Handler")));
//Fabricante
void WWDG_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void PVD_PVM_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void RTC_TAMP_STAMP_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void RTC_WKUP_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void FLASH_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void RCC_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void EXTI0_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void EXTI1_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void EXTI2_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void EXTI3_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void EXTI4_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));

void DMA1_CH1_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void DMA1_CH2_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void DMA1_CH3_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void DMA1_CH4_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void DMA1_CH5_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void DMA1_CH6_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void DMA1_CH7_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));

void ADC1_2_CH7_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));

void CAN1_TX_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void CAN1_RX0_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void CAN1_RX1_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void CAN1_SCE_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));

void EXIT9_5_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));

void TIM1_BRK_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void TIM1_UP_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void TIM1_TRG_COM__IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void TIM1_CC_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void TIM2_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void TIM3_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));//

void I2C1_EV_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void I2C1_ER_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void I2C1_EV_4_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void I2C1_ER_4_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));

void SPI1_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void SPI2_4_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));

void USART1_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void USART2_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void USART3_4_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));

void EXTI15_10_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void RTC_ALARM_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));//

void SDMMC1_4_1_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));//

void SP13_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));//

void UART_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));//

void TIM6_DACUNDER_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void TIM7_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));

void DMA2_CH1_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void DMA2_CH2_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void DMA2_CH3_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void DMA2_CH4_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void DMA2_CH5_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));

void DFSM1_FLT0_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void DFSM1_FLT1_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));//

void COMP2_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void LPTIM1_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void LPTIM2_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));

void USB_FS_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));

void DMA2_CH6_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void DMA2_CH7_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
/*Aver que pasa*/
void LPUART1_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
/*Aver que pasa*/
void QUASPI_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
/*Aver que pasa*/
void I2C3_EV_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void I2C3_ER_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
/*Aver que pasa*/
void SAI1_1_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));//
/*Aver que pasa*/
void SWPMI1_5_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
/*Aver que pasa*/
void TSD_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void LCD_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void AES_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void RNG_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void FPU_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void CRS_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));

void COMP3_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void I2C4_EV_3_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));
void I2C4_ER_IRQTHandler(void)__attribute__((weak,alias("Default_Handler")));


uint32 vector_table[] __attribute__((section(".isr_vector_tbl"))) = // se guarda en el linker en el : isr_vector_tbl
{
    (uint32)&_estack,    //& devuelve la direccion donde esta en memoria (direccion de memoria )
    (uint32)&Reset_Handler,
    (uint32)&NMI_Handler,
    (uint32)&Hard_Fault_Handler,
    (uint32)&Mem_Manage_Handler,
    (uint32)&Bus_Fault_Handler,
    (uint32)&Usage_Fault_Handler,
    0, //es una espacio de memoria resevado sale pagina 321/1600 dice reservado y se pasa 4 espacios de memoria
    0, //es una espacio de memoria resevado sale pagina 321/1600 dice reservado y se pasa 4 espacios de memoria
    0, //es una espacio de memoria resevado sale pagina 321/1600 dice reservado y se pasa 4 espacios de memoria
    0, //es una espacio de memoria resevado sale pagina 321/1600 dice reservado y se pasa 4 espacios de memoria 
    (uint32)&Sv_Call_Handler,
    (uint32)&Debug_Handler,
    0,//es una espacio de memoria resevado sale pagina 321/1600 dice reservado y se pasa 4 espacios de memoria 
    (uint32)&Pend_SV_Handler,
    (uint32)&Sys_Tick_Handler,
    (uint32)&WWDG_IRQTHandler,
    (uint32)&PVD_PVM_IRQTHandler,
    (uint32)&RTC_TAMP_STAMP_IRQTHandler,
    (uint32)&RTC_WKUP_IRQTHandler,
    (uint32)&FLASH_IRQTHandler,
    0,//es una espacio de memoria resevado sale pagina 321/1600 dice reservado y se pasa 4 espacios de memoria 
    0,//es una espacio de memoria resevado sale pagina 321/1600 dice reservado y se pasa 4 espacios de memoria 
    (uint32)&RCC_IRQTHandler,
    (uint32)&EXTI0_IRQTHandler,
    (uint32)&EXTI1_IRQTHandler,
    (uint32)&EXTI2_IRQTHandler,
    (uint32)&EXTI3_IRQTHandler,
    (uint32)&EXTI4_IRQTHandler,
    (uint32)&DMA1_CH1_IRQTHandler,
    (uint32)&DMA1_CH2_IRQTHandler,
    (uint32)&DMA1_CH3_IRQTHandler,
    (uint32)&DMA1_CH4_IRQTHandler,
    (uint32)&DMA1_CH5_IRQTHandler,
    (uint32)&DMA1_CH6_IRQTHandler,
    (uint32)&DMA1_CH7_IRQTHandler,
    (uint32)&ADC1_2_CH7_IRQTHandler,
    (uint32)&CAN1_TX_IRQTHandler,
    (uint32)&CAN1_RX0_IRQTHandler,
    (uint32)&CAN1_RX1_IRQTHandler,
    (uint32)&CAN1_SCE_IRQTHandler,
    (uint32)&EXIT9_5_IRQTHandler,
    (uint32)&TIM1_BRK_IRQTHandler,
    (uint32)&TIM1_UP_IRQTHandler,
    (uint32)&TIM1_TRG_COM__IRQTHandler,
    (uint32)&TIM1_CC_IRQTHandler,
    (uint32)&TIM2_IRQTHandler,
    (uint32)&TIM3_IRQTHandler,
    0,//es una espacio de memoria resevado sale pagina 321/1600 dice reservado y se pasa 4 espacios de memoria 
    (uint32)&I2C1_EV_IRQTHandler,
    (uint32)&I2C1_ER_IRQTHandler,
    (uint32)&I2C1_EV_4_IRQTHandler,
    (uint32)&I2C1_ER_4_IRQTHandler,
    (uint32)&SPI1_IRQTHandler,
    (uint32)&SPI2_4_IRQTHandler,
    (uint32)&USART1_IRQTHandler,
    (uint32)&USART2_IRQTHandler,
    (uint32)&USART3_4_IRQTHandler,
    (uint32)&EXTI15_10_IRQTHandler,
    (uint32)&RTC_ALARM_IRQTHandler,
    0,//es una espacio de memoria resevado sale pagina 321/1600 dice reservado y se pasa 4 espacios de memoria 
    0,//es una espacio de memoria resevado sale pagina 321/1600 dice reservado y se pasa 4 espacios de memoria 
    0,//es una espacio de memoria resevado sale pagina 321/1600 dice reservado y se pasa 4 espacios de memoria 
    0,//es una espacio de memoria resevado sale pagina 321/1600 dice reservado y se pasa 4 espacios de memoria 
    0,//es una espacio de memoria resevado sale pagina 321/1600 dice reservado y se pasa 4 espacios de memoria 
    0,//es una espacio de memoria resevado sale pagina 321/1600 dice reservado y se pasa 4 espacios de memoria 
    0,//es una espacio de memoria resevado sale pagina 321/1600 dice reservado y se pasa 4 espacios de memoria 
    (uint32)&SDMMC1_4_1_IRQTHandler,
    0,//es una espacio de memoria resevado sale pagina 321/1600 dice reservado y se pasa 4 espacios de memoria 
    (uint32)&SP13_IRQTHandler,
    (uint32)&UART_IRQTHandler,
    0,//es una espacio de memoria resevado sale pagina 321/1600 dice reservado y se pasa 4 espacios de memoria 
    (uint32)&TIM6_DACUNDER_IRQTHandler,
    (uint32)&TIM7_IRQTHandler,
    (uint32)&DMA2_CH1_IRQTHandler,
    (uint32)&DMA2_CH2_IRQTHandler,
    (uint32)&DMA2_CH3_IRQTHandler,
    (uint32)&DMA2_CH4_IRQTHandler,
    (uint32)&DMA2_CH5_IRQTHandler,
    (uint32)&DFSM1_FLT0_IRQTHandler,
    (uint32)&DFSM1_FLT1_IRQTHandler,
    0,//es una espacio de memoria resevado sale pagina 321/1600 dice reservado y se pasa 4 espacios de memoria 
    (uint32)&COMP2_IRQTHandler,
    (uint32)&LPTIM1_IRQTHandler,
    (uint32)&LPTIM2_IRQTHandler,
    (uint32)&USB_FS_IRQTHandler,
    (uint32)&DMA2_CH6_IRQTHandler,
    (uint32)&DMA2_CH7_IRQTHandler,
    (uint32)&LPUART1_IRQTHandler,
    (uint32)&QUASPI_IRQTHandler,
    (uint32)&I2C3_EV_IRQTHandler,
    (uint32)&I2C3_ER_IRQTHandler,
    (uint32)&SAI1_1_IRQTHandler,
    0,//es una espacio de memoria resevado sale pagina 321/1600 dice reservado y se pasa 4 espacios de memoria 
    (uint32)&SWPMI1_5_IRQTHandler,
    (uint32)&TSD_IRQTHandler,
    (uint32)&LCD_IRQTHandler,
    (uint32)&AES_IRQTHandler,
    (uint32)&RNG_IRQTHandler,
    (uint32)&FPU_IRQTHandler,
    (uint32)&CRS_IRQTHandler,
    (uint32)&COMP3_IRQTHandler,
    (uint32)&I2C4_EV_3_IRQTHandler,
    (uint32)&I2C4_ER_IRQTHandler,

    

};


void Reset_Handler(void)
{
    uint32 data_mem_size = (uint32)&_edata - (uint32)&_sdata;//Esta resta me devuelve el tamaño completo del .data en la Flash
    
    uint32* p_src_mem = (uint32*)&_etext;//este es un puntero del _etext
    uint32* p_dest_mem = (uint32*)&_sdata;//este es un puntero del _sdata
    for (uint32 i = 0; i < data_mem_size; i++)//este for es para hacer la copia de la flash a la ram 
    {
        *p_dest_mem++= *p_src_mem;//aqui hago la copia, el ++ es para que vaya a la siguiente del destmem
    }

    uint32 bss_mem_size = (uint32)&_ebss - (uint32)&_sbss;
    p_dest_mem = (uint32*)&_sdata;//este es un puntero del _sdata

    for (uint32 i = 0; i < bss_mem_size; i++)//este for es para hacer la copia de la flash a la ram de la bss 
    {
        *p_dest_mem++ = 0;//aqui hago la copia, el ++ es para que vaya a la siguiente del dest_mem
    }

    
    
    main();//aqui tendria que llamar la funcion del boot loader
}






void Default_Handler(void)//While infinito
{
    while(1)
    {
        //Do nothing
    }
}

