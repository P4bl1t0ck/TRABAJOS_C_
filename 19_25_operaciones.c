#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include"19_25_operaciones.h"
int sumar(int op1,int op2){
    return op1+op2;
}

int restar(int op1,int op2){
    return op1-op2;
}
int multiplicar(int op1,int op2){
    return op1*op2;
}
float  division(int op1,int op2){
    if (op2==0)
    {
        return 0;
    }else{
        return (float)op1/op2;
    }
}