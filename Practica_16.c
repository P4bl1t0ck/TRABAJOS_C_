/*--------------Practica 16-----------------*/
/*Registros || estructurasa de datos*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (int argc, char *argv[]) {

     /**/
 /* las estructuras datosnos permitiran guardar differente stipos de datos de tipo basico*/
 /*Es como un arreglo vectorial o una matriz solo que la matriz puede contener
  un solo tipo de dato mienstras que el tipo de struct puede con varias */

    struct registro{
       int dato_entero;
        float dato_float;
        char dato_cadena[30];
        int dato_vector[10];
    };
    //Se puede tener diferentes tipos de datos como int,float,char, o arrays
    //Creamos variables de diferrentes tipos de datos
    struct registro variable;
    /*El como acceder a estos datos dentro de los estructuras con puntos*/
    variable.dato_entero=20;
    /*Ponemos el nombre de la variable struct y escribimos'.'el dato 
    interior de la struct y le asignamos un valor*/
    variable.dato_float=5.5;
    //Para las cadenas es distinto es un funcion llamada strcpy que viene incluida con la libreria <string.h>
    strcpy(variable.dato_cadena,"Nueva Cadena");
    variable.dato_vector[0]=4;

    printf("El dato de tipo float de mi [registro] es : %.2f\n",variable.dato_float);
    /*Se le asigna la variable como se pudo acceder a ese*/

    struct registro vector[10];
    vector[0].dato_entero=7;
    printf("El dato de tipo entero del primer elemeto del vector es : %d",vector[0].dato_entero);

//----------------------------------------------------------------------------
 /*Practica 16*/
 /*Jugadores de un equipo de futbol*/
 /*Crear un programa que pida al usuario los nombres,edades y alturas de los jugadores de un equipo de baloncesto(5 jugadores)
 posteriormente le presentara unmenu que le permita*/
 /*1 listar losnombre y alturas de los jugadores;*/
 /*2.buscar un jugadro por su nombre y presentar su altura y edad;*/
 /*3.indicar el nombre y la edad del jugador mas alto del equipo*/

    typedef struct estructura_de;/*Nota: Se puede hacer con un 
    typedf lo mismo que una vriable int o float*/
    struct jugador{
        char nombre[10];
        int edad;
        float altura;
    };
    
    struct jugador jugadores[5];

    for (int  i = 0; i < 5; i++)
    {
        printf("Introduze el nombre del jugador %d\n",i+1);
        gets(jugadores[i].nombre);
        printf("Introduce la edad del jugador %d\n",i+1);
        scanf("%d",&jugadores[i].edad);
        printf("La altura del jugador %d\n",i+1);
        scanf("%f",&jugadores[i].altura);

        fflush(stdin);/*Limpiamos el bufer de entrada para evitar que tome el espacio como parte del elemento y limpiar al momento de tomar un valor*/
    }
    int opcion=-1;
   
    while (opcion != 0)
    {
    printf("Introduce la opcion que deseas realizar:\n[1]Listar jugador \n[2]Buscar jugador \n[3]Jugador mas alto\n0-salir\n");     
    scanf("%d",&opcion);
    fflush(stdin);
    if (opcion==1)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("Jugador de nombre %s y altura %.2f\n",jugadores[i].nombre,jugadores[i].altura);
        }     
    }
    if (opcion==2)
    {
     char nombre_jugador[50];
     printf("Introduce el nombre del jugador que dese buscar \n");
     gets(nombre_jugador);
     int encontrado =0;

     for (int  i = 0; i <5; i++)
     {
        if (strcmp(jugadores[i].nombre,nombre_jugador)==0) {
            encontrado=1;
            printf("La edad del jugador es %d y su altura es %.2f\n",jugadores[i].edad,jugadores[i].altura);
        }
        
     }
     if (encontrado == 0)
     {
        printf("Jugador no encontrado \n");
     }
    }
    if (opcion==3)
    {
        float mayor_altura=jugadores[0].altura;
        char nombre_mayor_altura[50];
        int edad_mayor_altura=jugadores[0].edad;
        strcpy(nombre_mayor_altura,jugadores[0].nombre);
        for (int  i = 1; i < 5; i++)
        {
            if (jugadores[i].altura > mayor_altura)
            {
                strcpy(nombre_mayor_altura,jugadores[i].nombre);
                edad_mayor_altura = jugadores[i].nombre;
                edad_mayor_altura=jugadores[i].edad;
                mayor_altura=jugadores[i].altura;
            }
            
        }
        printf("El nombre del jugador de mayor altura es de :%s y su edad es %d\n",nombre_mayor_altura,edad_mayor_altura);
    }
    }
    return 0;
}