/*---------Practica 6----------*/
/*Precio de coche*/
#include <stdio.h>
#include<stdlib.h>
int main (int argc, char *argv[]) 
{
    /*Escribir un progrma que se utilice para calcular el precio final de venta de coches de segunda mano de un consesionario.para ello.el programa debe pedi
    r al usuario que introduzca el precio base del vehiculo ,el numero de kilometros y su consumo.*/
    typedef int enteros;
    typedef float f;
    enteros precio_base,kilometros;
    f consumo,precio_final;
    printf("Introduce el precio base del vehiculo\n");
    scanf("%d",&precio_base);
    printf("Ingrese le numero de kilometros\n");
    scanf("%d",kilometros);
    printf("Ingrese el consumo hecho el carro\n");
    scanf("%f",consumo);

    if (kilometros<20000 && consumo<=5)
    {
        precio_final=precio_base*1.2;
    }else if (kilometros>20000 && consumo<=5)
    {
        precio_final=precio_base*1.1;
    }else if (consumo>5)
    {
        precio_final=precio_base*1.05;
    }
    
    printf("El precio final del vehiculo es de %.2f\n",precio_final);
    
    



    return 0;
}