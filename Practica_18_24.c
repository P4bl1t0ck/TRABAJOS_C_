/*----------------Practica 18_24---------------------*/
/*Funciones*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
/*Prototipo las funciones o como una declaracion de estas */

void suma(int num1,int num2); 
int sumas(int num1,int num2,int *resulta);

int main (int argc, char *argv[]) {
    /*Funciones*/
    /*Programacion estructurada en descomposicion de funciones,en el separar una funcion donde resolvera un problema*/
    /*Invoco a la funcion*/
     int num1,num2;
    printf("Introduce un numero 1\n");
    scanf("%d",&num1);
    printf("Intorduce el numero 2\n");
    scanf("%d",&num2);
    int r=num1+num2;
    printf("La suma es de : %d\n",r);
    suma(num1,num2);
    int result =sumas(num1,num2,&resulta);
    printf("La suma es : &d\n",result);
    int resulta;

    return 0;
}

/*Debe devolver algo si no esta sera void*/
void suma(int num1 ,int num2,){
    /*Aki hize una funcion para resolver el problema y una suma */
    int num1,num2;
    printf("Introduce un numero 1\n");
    scanf("%d",&num1);
    printf("Intorduce el numero 2\n");
    scanf("%d",&num2);
    int r=num1+num2;
    printf("La suma es de : %d\n",r);
}
int sumas(int num1,int num2,int *resulta ){
    int result=num1+num2;
    return result;
}


void multiplicaVector(int *vector,int nElem,int numero);
int main(){
/*Escribir una funcion que reciba como parametros un vector de enteros(por referencia) y la longitud del vector y un numero (por valor)
 la funcion debe multiplicar cada elemento del vector por el numero.*/
    int vector[10]={1,2,3,4,5,6,7,8,9,10};
    multiplicaVector(&vector[0],10,3);
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ",vector[i]);
    }
    
 return 0;
}
void multiplicaVector(int *vector,int nElem,int numero){
for (size_t i = 0; i < nElem; i++){
    *(vector+i) = *(vector+i) * numero;
}
}
