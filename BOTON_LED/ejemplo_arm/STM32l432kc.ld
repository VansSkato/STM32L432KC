ENTRY(Reset_Handler)


MEMORY
{
    FLASH (rx) : ORIGIN = 0x8000000, LENGTH = 256K
    SRAM1 (rwx) : ORIGIN = 0x20000000, LENGTH = 64K
}

_estack = ORIGIN(SRAM1) + LENGTH(SRAM1);        /*La ultima direccion de la stack*/

SECTIONS
{
    .text :
    {
        . = ALIGN(4);
        *(.isr_vector_tbl)       /*creamos la seccion de memoria tabla de vectores de interruptores*/
        *(.text)
        *(.rodata)
        . = ALIGN(4);
        _etext = .;         /*guarda el final de la seccion de data*/
    } > FLASH

    .data :
    {
            . = ALIGN(4);
            _sdata = .;         /*guarda el inicio de la seccion  data*/
            *(.data)
            . = ALIGN(4);
            _edata = .;         /*guarda el final de la seccion data*/
    } > SRAM1 AT > FLASH
    
    .bss :
    {
            . = ALIGN(4);
            _sbss = .;      /*guarda el inicio de la seccion  bss*/
            *(.bss)
            . = ALIGN(4);
            _ebss = .;      /*guarda el final de la seccion bss*/
    } > SRAM1


    
}   