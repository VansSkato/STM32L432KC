build : main.o main.elf





main.o : ejemplo1.c
	arm-none-eabi-gcc -mthumb  -c -std=gnu11 -mcpu=cortex-m4 ejemplo1.c -o main.o 




main.elf : ejemplo1.c
	arm-none-eabi-ld main.o -o mian.elf


clean :
	del *.o *.s *.elf *.map
