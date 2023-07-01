/*------Practica 3----*/
#include <stdio.h>
// Area de un rectangulo
int main (int argc, char *argv[]) 
{
 ///Calcule el area de unrectangulo con scanf y uso de printf´s.
    float base,altura;
    printf("Introduzca la base del rectangulo :\n");
    scanf("%f",&base);
    printf("Introduzca la altura del rectangulo : \n");
    scanf("%f",&altura);
    float area=base*altura;
    printf("El area del rectangulo de base %.2f es _ %.2f\n",base,altura,area);

    return 0;

}