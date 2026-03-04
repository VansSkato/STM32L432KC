ENTRY(Reset_Handler)






MEMORY
{
    FLASH (rx) : ORIGIN = 0x8000000, LENGTH = 256K
    SRAM1 (rwx) : ORIGIN = 0x20000000, LENGTH = 64K
}
SECTIONS
{
    .text :
    {
        . = ALIGN(4);
        *(.text)
        *(.rodata)
        . = ALIGN(4);
    } > FLASH

    .data :
    {
            . = ALIGN(4);
            *(.data)
            . = ALIGN(4);
    } > SRAM1 AT > FLASH
    
    .bss :
    {
            . = ALIGN(4);
            *(.bss)
            . = ALIGN(4);
    } > SRAM1

}