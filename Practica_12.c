/*------------------Practica 12----------------------*/
/*Maximo y minimo de un vector*/
#include <stdio.h>

int main (int argc, char *argv[]) {
    /*Escribir un programa que dado un vector 
    de enteros de 10 elemenos,muestre el valor maximo y el minimo.*/

    int vector[10]={4,7,9,75,-5,6,12,-18,0,1};
    int max=vector[0]; //El primer elemento se considera el max y min
    int min=vector[0];

    for (size_t i = 0; i < 10; i++)
    {
        if (vector[i]>min)
        {
            max=vector[i];
        }
        if (vector[i]<min)
        {
            min=vector[i];
        }  
    }
    printf("Valor maximo: %d\nValor Minimo : %d",max,min);


    return 0;
}