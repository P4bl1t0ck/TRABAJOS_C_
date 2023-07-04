/*Ficheros o archivos*/
/*Practica 19*/
/*Escribir un progrma que íde un numero entero entre 1 y 10 y 
guarde en un archivo de texto de nombre tabla.txt de se numero.*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    int numero;
    printf("Introduzca el numero: \n");
    scanf("%d",&numero);

    FILE *f;
    f=fopen("tabla.txt","w");
    for (size_t i = 0; i < 10; i++)
    {
        fprintf(f,"%d\n",i*numero);
    }
    fclose(f);
    
    return 0;
}