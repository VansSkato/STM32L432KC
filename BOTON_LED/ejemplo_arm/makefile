#Variables 
GCC = arm-none-eabi-gcc 
LD = arm-none-eabi-ld
CFLAGS = -mthumb  -c -std=gnu11 -mcpu=cortex-m4
LDFLAGS = -T STM32l432kc.ld -Map=main.map
#debuguear
openocd :
	openocd -f interface/stlink.cfg -f target/stm32l4x.cfg 

build :  test.o main.o startup.o main.elf #Poner en orden como van las cosas, porque se ejecuta na por 1 


rebuild :  clean test.o main.o startup.o main.elf


main.o : main.c 
	$(GCC) $(CFLAGS) main.c -o main.o 


test.o : test.c 
	$(GCC) $(CFLAGS) test.c -o test.o 


main.elf: main.c test.c
	$(LD) $(LDFLAGS) main.o test.o startup.o -o main.elf  

startup.o: startup.c 
	$(GCC) $(CFLAGS) startup.c -o startup.o


clean :
	del *.o *.s *.elf *.map


