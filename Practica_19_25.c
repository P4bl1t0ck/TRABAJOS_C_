/*---------Practica 19,24--------------*/
/*Desarrolo e inclusion de librerias*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include"19_25_operaciones.h"
int main (int argc, char *argv[]) {
    int op1,op2;
    int rsuma,rresta,rresult;

    printf("Introduce el operando 1 \n");
    scanf("%d",&op1);
    printf("Introduce el operando 2 \n");
    scanf("%d",&op2);
    rsuma=sumar(op1,op2);
    rresta=restar(op1,op2);
    rresult=multiplicar(op1,op2);
    float rdiv=division(op1,op2);

    printf("Suma: %d\n",rsuma);
    printf("Resta: %d\n",rresta);
    printf("Multiplicacion: %d\n",rresult);
    printf("Division: %.2f\n",rdiv);

    
    
}