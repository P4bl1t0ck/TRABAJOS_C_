/*---------Practica 4----------*/
/*Converso de divisas*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) 
{
    //Escribe un program de euros a pecetas ? y mostrar en consola la conversion
    float euros;
    printf("Introduce los euros que quieres convertir \n");
    scanf("%f",&euros);
    // Se puede hacer la operacion nesecaria tambien en los printf´s
    //pecetas = euros *166.36
    printf(" [%.2f] euros equivalen a %.2f pecetas",euros,euros*166.386);
    return 0;
}