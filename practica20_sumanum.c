/*-----------------------Pactica 20 oficial-----------------*/
/*Suma numeros de fichero*/
/*Ficheros*/
/*Escribir un proframa que lea un fichero llamado numeros.txt 
que contiene una lista de nuemros(uno en cada fila) y devuelva la suma de dichos 
numeros.*/
#include <stdio.h>

int main (int argc, char *argv[]) 
{
    FILE *f;
    f=fopen("numeros.txt","r");
    int suma=0,numero;


    while (feof(f)==0)
    {
        fscanf(f,"%d",&numero);
        suma = suma + numero;
    }
    printf("La suma de todos los numeros del fichero es:%d\n",suma);

    fclose(f);
    
}