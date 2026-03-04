#ifndef PLATFORM_TYPES_H        /* Si no se ha definido este archivo previamente... */
#define PLATFORM_TYPES_H        /* ...definirlo ahora para evitar inclusiones dobles */



/* --- TIPOS DE DATOS SIN SIGNO (0 a Positivos) --- */
typedef unsigned char  uint8;         /* Entero de 8 bits sin signo (Rango: 0 a 255) */
typedef unsigned short uint16;        /* Entero de 16 bits sin signo (Rango: 0 a 65,535) es igual al int*/
typedef unsigned long uint32;        /* Entero de 32 bits sin signo (Rango: 0 a 4,294,967,295) */


/* --- TIPOS DE DATOS CON SIGNO (Negativos a Positivos) --- */
typedef signed char sint8;         /* Entero de 8 bits con signo (Rango: -128 a 127) */
typedef signed short  sint16;        /* Entero de 16 bits con signo (Rango: -32,768 a 32,767) */
typedef signed long   sint32;        /* Entero de 32 bits con signo (Rango: -2,147,483,648 a 2,147,483,647) */

/* --- TIPOS DE DATOS DE PUNTO FLOTANTE (Decimales) --- */
typedef float    float32;       /* Número decimal de 32 bits (Precisión simple) */


#endif /* PLATFORM_TYPES_H - Fin del archivo */