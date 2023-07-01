/*----------Practica 8----------*/
/*Sentencias repetitivas For*/
#include <stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[]) 
{
    typedef int n;
    n o=0;/// Se ve chistoso jajajaj
    n op=8;/// Se puede jugar con los valores para la interpretacion y impreesion en la pantalla de wl ciclo while
    /*Estructura repetitiva for*/
    /*Se repetira cuantas veces en el delimintante
    del medio una instruccion dentro de las llaves*/
    for (int x = 0; x<=10; x++)
    {
        //Se ejecutara 10 veces.
        // Empezando desde 0.
        // Con el <= el valor x llegara hasta 10.
        // si cambiamos el valor de x++(x=x+1)a x+2 este se incrementara cada 2.
        printf("%d\n",x);
    }
    /*Estructura repetitiva While*/
    /*Si se cumple una
     condicion esta cumplira la instruccion dentro del corchete*/
     /* Este bucle ahora nunca terminara hasta que 
     hagamos que su condicion sea distinta ala hora de completarse*/
    while (o<10 && op<10 ) // Infinite loop
    {
        printf("%d\n",o);
        o++;// Iterative
    }

    /*----------------Practica 8---------------------*/
    /*Multiplos de 3 entre 1 y 100.*/
    /*Escribir un programa que muestre por pantalla todos los multiplos de 3 y 100.*/

    for (n i = 1; i <= 100; i++)
    {/// Se repite del 1 al 100.
        if (i%3==3)//Comprobacion si es multiplo de 3.
        {
            printf("%d\n",i);//Imprimira todos los numeros multipos de 3.
        }
    }
    
    
    
    return 0;
}