# -----------------------------------------------------------------------------
# MAKEFILE COMENTADO PARA STM32L432KC
# Maestro de Programación en C
# -----------------------------------------------------------------------------

# REGLA 1: OBJETIVO FINAL (Build)
# -----------------------------------------------------------------------------
# "build" es la meta. Le decimos a Make: "Para terminar, necesito main.elf".
# Como main.elf depende de main.o, Make buscará cómo hacer main.o automáticamente.
build : main.elf

# REGLA 2: EL ENLAZADO (LINKER)
# -----------------------------------------------------------------------------
# Objetivo: main.elf (El ejecutable final)
# Depende de: main.o (El archivo compilado)
main.elf : main.o
# DESGLOSE DEL COMANDO DEL LINKER:
# arm-none-eabi-ld : El programa "Arquitecto" (Linker). Une las piezas.
#
# -T STM32l432kc.ld : (Target Script) "Usa este plano". Le dice al linker
#                     cómo distribuir la memoria (dónde está la FLASH y la RAM)
#                     según las reglas que escribimos en el archivo .ld.
#
# -Map=main.map     : (Map file) "Genera un mapa". Crea un archivo de texto
#                     llamado main.map que nos sirve de reporte para ver
#                     exactamente en qué dirección de memoria quedó cada función.
#
# main.o            : El ingrediente de entrada (tu código ya compilado).
#
# -o main.elf       : (Output) "Salida". El nombre del archivo final que generaremos.

	arm-none-eabi-ld -T STM32l432kc.ld -Map=main.map main.o -o main.elf

# REGLA 3: LA COMPILACIÓN (COMPILER)
# -----------------------------------------------------------------------------
# Objetivo: main.o (El archivo objeto/código máquina sin enlazar)
# Depende de: main.c (Tu código fuente en C)
main.o : main.c
# DESGLOSE DEL COMANDO DEL COMPILADOR:
# arm-none-eabi-gcc : El programa "Cocinero" (Compilador GCC para ARM).
#
# -mthumb           : (Machine Thumb) Obligatorio para Cortex-M. Le dice que use
#                     el set de instrucciones "Thumb" (más eficiente) en lugar
#                     del set "ARM" clásico de 32 bits. Sin esto, da error.
#
# -c                : (Compile only) "Solo compila". Traduce C a código máquina,
#                     pero DETENTE antes de enlazar. No busca librerías todavía.
#                     Esto es lo que crea el archivo .o.
#
# -std=gnu11        : (Standard) "Dialecto". Usamos el estándar C versión 2011
#                     con extensiones de GNU. Define qué gramática es válida.
#
# -mcpu=cortex-m4   : (Machine CPU) "Cerebro". Optimiza el código específicamente
#                     para el procesador Cortex-M4 (el que tiene tu STM32).
#
# main.c            : El archivo de entrada (tu código escrito).
#
# -o main.o         : (Output) El nombre del archivo objeto resultante.
	
	arm-none-eabi-gcc -mthumb -c -std=gnu11 -mcpu=cortex-m4 main.c -o main.o

# REGLA 4: LIMPIEZA
# -----------------------------------------------------------------------------
# Útil para borrar todo y empezar de cero si algo sale mal.
clean :
# del : Comando de Windows para borrar archivos.
# *.o : Borra todos los objetos.
# *.elf : Borra el ejecutable.
# *.map : Borra el archivo de mapa.
	del *.o *.elf *.map