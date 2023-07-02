/*------------Practica 17---------*/
/*Registros anidados*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define PI 3.1416

int main (int argc, char *argv[]) {
    struct tipo1
    {
        int entero1;
        char caracter1;
    };

    struct tipo1 variable1={5,'t'};

    //variable1.entero1=3;// Asignar datos
    // Para asignarles datos a los 2    
    //Registros anidados

    typedef float f;
    struct tipo2
    {
    f real1;
    struct tipo1 variable1;
    };
   /*struct tipo2 variable2;
    variable2.real1=5.5;
    variable2.variable1.entero1=7;*/// descomentar si es justo y nesecario.
    /// tambien
    struct tipo2 variable2 ={5.5,{7,'C'}};
    /*EL primer numero representa la inicializacion de la variable real1 y 
    el segundo vector al los entero1 y caracter de la estructura primaria*/
    printf("%d",variable2.variable1.entero1);
//------------------------------------------------------------------------------------------
 /*Practica 17*/
 /*Calculo de motores*/
 /*Se desea realizar un programa que almacene la informacion de un motor de combustion interna y posteriormente muestre la cilindrada de dichi motor en CV.
 .La informacion del motor se almacenara en una estructura con los siguinetes mienbros y tipos de datos:
 ---Indentificador del motor : valor numerico que indentifica el motor de forma unica
 ---Cilindro: estructura de datos anidada
 ---numero de cilindros: numero entero que indica el numero de cilindros del motor
 ---Cilindrada numero real que se calculara en el programa
 
 ---Diametro numero real (en milimetro)
 ---Carrera numero real (en milimetros)*/

 /*Parece sencilo -_-°*/

 struct cilindro
 {
    float diametro;
    float carrera;
 };

 struct motorCombus
 {
    int identificador;
    struct cilindro cilindro1;
    int num_cilindros;
    float cilindrada;
 };
    struct motorCombus motor1;
    printf("Introducir el identificador \n");
    scanf("%d",&motor1.identificador);
    printf("Ingrese le diametro del cilindro\n");
    scanf("%f",&motor1.cilindro1.diametro);
    printf("Introduce la carrera del cillindro \n");
    scanf("%f",&motor1.cilindro1.carrera);
    printf("Introduce el numero de cilindros\n");
    scanf("%d",&motor1.num_cilindros);

    typedef float Decimal;
    motor1.cilindrada = (motor1.num_cilindros)*(motor1.cilindro1.carrera/10)*PI*pow(motor1.cilindro1.diametro,2)/4;

    printf("Identificador : %d\n",motor1.identificador);
    printf("Diametro(mm): %.2f\n",motor1.cilindro1.diametro);
    printf("Carrera(mm): %.2f\n");
    printf("N° Cilindros : %d\n",motor1.num_cilindros);
    printf("Cilindros : %.2f\n",motor1.cilindrada);
    return 0;
}