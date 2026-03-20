#include <stdio.h>
struct coche
{
    char asientos;
    char llantas;
    char llave;
    char frenos;
    char lapiz;
    int puertas;
    int ventanas;
}porsche;
const int constante = 10;
int main ()
{
    porsche.puertas= 10;//asi asigno valor a las variables que estana adentro de porsche 
    porsche.llantas=11;
    porsche.ventanas =12;
    porsche.asientos =13;
    printf("%d",sizeof(porsche));//sizeof da tamaño en bites 


return 0;
}

