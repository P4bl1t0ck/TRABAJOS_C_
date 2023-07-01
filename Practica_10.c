/*-------------Practica 10------------*/
/*Suma y promedio de valores.*/
#include <stdio.h>

int main (int argc, char *argv[]) 
{
    /*Desarrola un programa que solicite constantemente la carfa d eun numero al usuario.El progrma finalizara cuando el usuario introduzca un 0 ,momento en el que se debe visualizar la
    suma y el promedio de todos losnumeros introducidos.*/

    typedef int entero;
    typedef float flotante;
    entero suma=0,contador=0,numero=-1;
    while (numero != 0)
    {
        printf("Ingrese el numero \n");
        scanf("%d",&numero);
        contador++;
        suma +=numero;
    }
    flotante promedio=suma/contador;
    printf("La suma de todos los numeros es : %d y el promedio es : %.2f",suma,promedio);
 

    return 0;
}