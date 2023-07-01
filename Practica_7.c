/*--------Practica 7---------*/
/*Dias de la semana*/
#include <stdio.h>
#include<stdlib.h>
int main (int argc, char *argv[]) {
    int n =2;
    switch (n>0) // condicion dentro de la varibale a evaluar
    {
    case (1):
        printf("La variable contiene 1:");
        printf("[N] es mayor de 0:");
        break;
    case (2):
        printf("La variable contiene 2:");
        printf("[N] no es mayor a 0:");
        break;
     default: // En caso de queninguca de las opciones se cumpla
            printf("La variable no contiene los valores ni 1 ni 2:");
        break;
    }
 /*Escribe un programa que pide un numero al usuario y muestre el dia de la semana al 
 que equivale.si se produce un numero fuera del rango valido (1-7),se debe mostrar un mensaje de error.*/
    typedef int entero;
    entero dia;
    printf("Introduce un numero en el rango [1,7]\n");
    scanf("%d",&dia);
    switch (dia)
    {
    case (1):
        printf("Es el dia [%d] : lunes \n",dia);
        break;
    case(2):
        printf("Es el dia [%d] : Martes \n",dia);
        break;
    case(3):
        printf("Es el dia [%d] : Miercoles \n",dia);
        break;
    case(4):
        printf("Es el dia [%d] : Jueves \n",dia);
        break;
    case(5):
        printf("Es el dia [%d] : Viernes \n",dia);
        break;
    case(6):
        printf("Es el dia [%d] : Sabado \n",dia);
        break;
    case(7):
        printf("Es el dia [%d] : Domingo \n",dia);
        break;
    default:
    printf("ERROR!! el dia[%d],no se encuentra en los dia de la semana \n",dia);
        break;
    }

    return 0;
}