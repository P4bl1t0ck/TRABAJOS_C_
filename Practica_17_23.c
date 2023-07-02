/*-----------Practica 23-17-------------*/
/*Punteros y sus usos || aplicaciones*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main (int argc, char *argv[]) {
    /*Punteros y dificultad mayor |-_-|° */
    /*Un puntero una variable es capaz de guardar una ubicacion de memoria y sus datos */

    int numero=6;
    int *p = &numero;
    // ya a contener la dirrecion de memoria del valor
    printf("La variable Puntero a numero contiene la dirrecion de memoria: %p\n",&p);
    printf("El valor de la variable situada en la dirreccion de memoria ala que apunta es : &d\n",*p);
    // &p : Ubicacion de memoria
    // *p : Valor de la variable
    char cadena[30]="Esta es una cadena de prueba";
    char *c = &cadena[0];

    for (size_t i = 0; i < 30; i++)
    {
        printf("%c",*(c+1)); // Para imprimir los valores de las diferrentes dirreciones de la cadena
    }
    printf("\n");

    int vector[5]= {1,2,3,4,5}; /// Para la impresion de un vector con solo un puntero :)
    int *pv=&vector[0];
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d",*(pv+i));
    }
    printf("\n");

    struct registro
    {
        int num;
        char car;
    };
    
    struct registro r1;
    struct registro *r=&r1;
    (*r).num = 5;
    r->car = 'a';
    printf("El campo num  de la estructura a la que apunta r es : %d\n",(*r).num);
    printf("El campo car  de la estructura a la que apunta r es : %c\n",r1.car);
    

 //------------------------------------------------------------------------------
 /*Practica 17*/
 /*Punteros*/
 /*Crear un vector de 5 numeros reales introducidos por teclado.A continuacion,declarar un punteo al 
    vector y calcular la media de sus elementos empleado dicho puntero.*/

    float vector[5];
    for (size_t i = 0; i < 5; i++)
    {
        printf("Introduce un numero real \n");
        scanf("%f",&vector);
    }
    float *p=&vector[0];
    float media=0;

    for (size_t i = 0; i < 5; i++)
    {
        media = media + *(p+i); //sumaremos todas las posciones 
    }
    
    printf("La media de los valores del vector es %.2f\n",media);
    


 return 0;
}