/*-------------Practica 13----------*/
/*Cadena de caracteres*/
#include <stdio.h>

int main (int argc, char *argv[]) {
    char cadena[100]="Esto es una cadena";// acaba en \0
    char cadena2[100]="Estps es una cadena\0";
    char cadena3[100]={'e','s','t','o','\0'}; // 
    /*Son cadenas */

    for (size_t i = 0; i < 100; i++)
    {
        printf("%c\n",cadena[i]);
    }
    printf("\n");
    cadena[3]= 'A';
    printf("%c\n",cadena[3]);
    printf("\n%s",cadena3);
    /*Imprime cadenas*/
    /*Introducir las cadenas de caracteres*/
    printf("Introduce la cadena\n");
    scanf("%s",cadena3);// Al ser una cadena no hace falta poner el & solo el nombre del char
  //  printf("%s",cadena3);
/*Tiene un problema esta no regoge todos los caracteres,
Mejor sirve usar la funcion gets() la cual tomara todo lo que estara en el buffer*/
    gets(cadena3);
    printf("%s",cadena3);
//-------------------------------------------------------------------------------
    /*Cadenas enlazadas*/
    /*Escribir un program que pide 4 cadenas por 
    teclado y las muestre por la salida separadas por un '-'.*/
    char palabra[50],palabra2[50],palabra3[50],palabra4[50];

    printf("Introduce la cadena 1:\n");
    gets(palabra);
     printf("Introduce la cadena 2:\n");
    gets(palabra2);
     printf("Introduce la cadena 3:\n");
    gets(palabra3);
     printf("Introduce la cadena 4:\n");
    gets(palabra4);
    printf("%s - %s - %s - %s \n",palabra,palabra2,palabra3);


    return 0;

}