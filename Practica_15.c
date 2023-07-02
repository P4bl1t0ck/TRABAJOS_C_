/*--------------------Practica 15------------------*/
/*Buscar caracter en Cadena*/
#include <stdio.h>

int main (int argc, char *argv[]) {
    /*Desarrollar un programa que pida por teclado una cadena y un caracter y devuelva
    si dicho caracter se encuentra en la cadena y si es asi la posicion de la primera aparicion del mismo.*/

    char cadena[50];
    char caracter;

    printf("Introduzca una cadean \n");
    gets(cadena);
    printf("Introduzca un caracter\n");
    caracter=getchar();
    /*La funcion getchar(),permite  leer un caracter y l reservara en el char caracter*/

    int i=0;
    int pos=-1;
    while (cadena[i] != '\0'&& pos==-1){
        if (cadena[i]== caracter)
        {
            pos=i;
        }
        i++;
    }
    if (pos != -1)
    {
        printf("El caracter %c se encuentra en la cadena %s en la posicion %d",caracter,cadena,pos);
    }
    else{
        printf("El caracter %c no se enceuntra en la cadena %s\n",caracter,cadena);

    }
    /*Este programa sirve para encontrar un caracter de la cadena escrita */



    return 0;
}