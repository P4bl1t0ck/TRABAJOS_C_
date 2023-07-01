/*----------------Pratica 1-----------------*/
#include <stdio.h>/*Ingresa varios elementos que se usan en la main
como prinft,scanf y los varios tipos de datos.*/ 
/*Este programa ejemplifica del entorno de desarrollo 
para escribir progrramas en lenguaje c 
mediante muestra un mensaje de bienvenida en la pantalla*/
int main () 
{
    //Muestra por pantalla el mensaje indicado
    printf("Hola Mundo Lenguaje C\n");
    /*Int = valor entero 16 bits*/
    /*Float =Valor real 32 bits*/
    /*double =Valor en doble precision 64 bits*/
    /*char= caracter 8 bits*/
    int numero_entero=16;
    float numero_real_simple=5.6;
    double numero_real_double=1000.4567;
    char caracter='t';
    //Operadores
    //suma,resta,multiplcion,division decimal,resto(operador modulo)
    //operadores aritmetricos para numeros :+,-,*,/,%.

    ////Operadores comparativos
    // == igual(Literalmete significa igual)
    // != distinto
    // > mayor ,>= mayor o igual
    // < menor ,<= menor o igual

    ////Operadores Logicos
    // || (1 si alguna de las condiciones se cumple  'ó' || 'or' o 0 si ninguna de sus condiciones).
    // && (1 si todas las condiciones se cumplen 'Y' || 'and' si ninguna de todas las condiciones deuvelve 0).
    // not (Invierte el resultado de la condicion invierte las condiciones si es 0 vuelve 1).

    ///Operadores de asignacion
    // = (asigna valor ala variable).
    // += (suma valor variable y asigna).
    // -= (resta valor variable y asigna).
    // *= (Multiplica valor variale y asigna).
    // /= (Divide valor a variable y asigna).


    ///// Entrada de datos y salida de infromación por la pantalla.
    int numero=6;
    int numero2=10;
    float num=7.5;
    double numa=7.5;
    char caracte='d';
    printf("El contenido de la variable numero y numero2 es %d y %d",numero,numero2);
    printf("El contenido de num es : %.2f",num);
    printf("El contenido de numa es : %.2lf",numa);///para imprimir con double es %lf
    printf("El contenido de Char es de : %c ",caracte);/// para char es %c
    /// Leer datos de entrada y pueda almacenar aen alguna variable
    int n;
    double a;
    float m;
    char b;
    printf("Introduce un numero:  \n");
    scanf("%d",&n);
    scanf("%f",&m);
    scanf("%lf",&a);
    scanf("%c",&b);
    printf("El contenido de n es de : %d %.2f %.2lf %c",n,m,a,b);
    return 0;/// Devuelve 0
}