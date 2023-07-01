/*----------------Practica 9----------------------*/
/*Numero de aprobados y de suspensos.*/
#include<stdio.h>
#include<stdlib.h>
#define LIM 5// Este es una constante que usare.

int main (int argc, char *argv[]) 
{
    /*Desarrolla un programa que solicite la carga de un numero al usuario.A continuacion,debera pedir las notas de ese numero de 
    alumnos,y mostrar por pantalla el numero de alumnos aprobados y suspensos.*/

    int alumnos,contador_aprobados=0,contador_suspensos;
    typedef float f;
    f nota;
    printf("Introduzca el numero de alumnos\n");
    scanf("%d",&alumnos);
    for (int i = 0; i <= alumnos; i++)
    {
        printf("Introduce la nota del alumno :%d\n",i);
        scanf("%f",&nota);
        if (nota>=5)
        {
            contador_aprobados++;
        }else{
            contador_suspensos++;
        }

        printf("EL numero de aporbados es de :%d y el de alumnos suspensos es de:  %d\n",contador_aprobados,contador_suspensos);
    }
    

    return 0;
}