/*----------------Practica 18_24---------------------*/
/*Funciones*/
/*Desarrolo de programas lineal*/
/*Porgramacion estructurado : busca crear || ,
descomponer un problema complejo en pequeños problemas */
/*Descomponer en funciones*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
/*Prototipamos*/
//void suma(int num1,int num2);
//int suma(int num1,int num2);
/*void suma(int num1,int num2,int *result);
//------------------------------
/*Crear un valor de variables y poder psas un parametro pro referencia*/
int main(){
    int num1,num2;
    printf("Introduce un numero 1: \n");
    scanf("%d",&num1);
    printf("Introduce un numero 2: \n");
    scanf("%d",&num2);
    /*Invocamos*/
    int result;/*Creamos una variable y 
    luego pasamos por referencia en la funcion suma*/
    /*Esta le asignamos como parametro la ubicacion 
    de memoria de result que se declaro en la main
    y esta al estar dentro de la funcion void pasa como refencia
    y dentro de la funcion modificamos el espacio de memoria al que apunta el puntero ala 
    y hemos moficamor el valor de en la funcion y la imprimimos en la funcion main.*/
    suma(num1,num2,&result);
    printf("La suma de sus 2 numeros es :%d\n",result);
}
/*Cuando la funcion no devuelve nada y no recibe nada*/
void suma(int num1,int num2,int *result){
    *result = num1+num2;
}
//----------------------------------------------------------------------------------------------//
/*Multiplicar Vector por un valor*/
/*Practica 18-24*/
/*Escribir una funcion que reciba como parametros un vector de enteros , 
(por referencia) y la longitud del vector y un numero(por valor)
La funcion debe multiplicar cada elemento del vector por el numero.*/

void mutiplica_vector(int *vector,int nElem,int numero);

int main()
{
int vector[10] = {1,2,3,4,5,6,7,8,9,10};
multiplica_vector(&vector[0],10,3);
for (size_t i = 0; i < 10; i++)
{
    printf("%d",vector[i]);
}


}
void multiplica_vector(int *vector,int nElem,int numero){
    for (size_t i = 0; i < nElem; i++)
    {
        *(vector+i) = *(vector+i) * numero;
    }
    

}
