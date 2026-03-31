#ifndef DIO1_CFG_H//esto va ahuevo
#define DIO_CFG_H


#include "Dio.h"

/*
 * Estos yo los voy a definir en el Dio.c
 * Dentro de la funcion gracias a los If(Channel==1) este seria el Dio=1 poque El dio1 es = 1
 *
 * */


Dio_LevelType Dio0 = 0;//pin 0
Dio_LevelType Dio5 = 5;//pin 1    Leer parte superior --^


Dio_LevelType Dio2 = 2;//pin 2 del PuertoB



Dio_LevelType STD_HIGH = 1;
Dio_LevelType STD_LOW = 0;

#endif

