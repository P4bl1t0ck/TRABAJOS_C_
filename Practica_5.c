/*---------Practica 5---------*/
/*El uso de la funcion typedef*/
#include <stdio.h>
#include<stdlib.h>
#define nombre 3
#define PI 3.1416
int main (int argc, char *argv[]) 
{
    /*La funcion typedef funciona para dar un nombre y darle como valor a una pri
    mitiva como int,float,double,char,como tambien con estructuras de datos*/

    int valor;
    typedef int enteros; 
    /*Primero la funcion 
    y luego el tipo de dato que se desea y el nombre*/
    enteros valor1;
    enteros valor2;
    typedef long enteros_largos;
    enteros_largos valor3;

    /*Tipos enumerados */
    // definir una serie de datos propios que se determinen en determinado conjunto
    //Se usara typedef

    typedef enum {lunes,martes,miercoles,jueves,viernes,sabado,domingo} semana;
    /*Semana podra tener solo los datos de su conjunto ya declarad dentro de sus propio tipo de dato */
    /*Los diferentes tipos de datos que puedan tener la variable semana de ejmplo:*/
/*Se les asocia a los valores dentro del conjunto semana co
n numeros el cual si pusieramos 1 en vez de luens funcionaria*/
    semana dia_semana1=lunes; 
    semana dia_semana2=miercoles;
    /*De todos sus valores le declaramos con una y hacemos nu condicional if ql cual 
    imprimira si o no estamos en el dia de la semana iguala de la variable dia_semana1*/

    if(dia_semana1== lunes){ ///Condcional si fuera lunes
        printf("Estamos en lunes \n");
    }else{// Si es lunes imprime
        printf("No estamos en Lunes \n");
    }
    /*Aki de ejemplo use un condicional */
    if(dia_semana2==martes){
        printf("Estamos en martes\n");
    }else{
        printf("No estamos en martes \n");
    }
    /*Constantes definidas*/
    // Se usa una directiva para definir una constante
    printf("%d",nombre);
    float r;
    float resultado;
    printf("Ingrese el valor del radio del circulo para calcular su area \n");
    scanf("%f",&r);
    resultado=(r*r)*PI;
    printf("Su area del circulo es de : %d \n",resultado);

    /*Bloques de contenidos*/
    //Se usaran bloques de logica
    enteros num=7;// y -2
    enteros num2=3;
    enteros num3=0;
    if(num > 0 && num2 > 0){
        if(num3 > 0)
        {
            printf("Los 3 numeros son positivos: \n");
        }
        printf("Ambos numeros son  positivo \n");
    }
    else if(num > 0 || num2 > 0)
    {
        printf("Algunos de los numeros es positivo \n");
    }
    else
    {
        printf("Ninguno de los 2 es positivo \n");
    }

    printf("\nFind del programa\n");

    /*---------Practica 5----------*/
    /*Calificaciones de Alunado*/
    /*Escribe un programa que pida al usuario su nota y compruebe si ha suspendido (<5),si ha 
    sacado un suficiente (5),un bien (6),un notable(7-8) o un sobre saliente(9-10).*/
    enteros nota;
    printf("Ingrese la noat del alumno\n");
    scanf("%d",&nota);

    if(nota<5){
        printf("Suspendido \n");
    }else if (nota == 6)
    {
        printf("Bien\n");
    }else if (nota ==7 || nota ==8)
    {
        printf("Notable\n");
    }else if (nota==9 || nota ==10)
    {
        printf("Sobresaliente\n");
    }
    else{
        printf("Nota introducida no valida \n");
    }
    
    
    
    return 0;
}