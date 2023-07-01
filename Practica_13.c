/*-------------------Practica 13-------------*/
/*Habitaciones de un hotel*/
/*Matrices && arreglos*/
#include <stdio.h>

int main (int argc, char *argv[]) {

    // bidimensional
    int m[3][2]={{0,1},{2,3},{4,5}};// un vector dentro de un vector
    /*Primer corchete refleja el vector y los segundos 
    reflejan el numero de elementos como 3 elementos de pares ordenados o unamatriz 3x2.*/
    /*El primer corchete refleja el numero de elementos el 
    vector que serian 3 y el segundo de cuantos elementos enteros va tener dentro del vector principal 2 */
    //Para acceder a los elementos
    //De ejemplo el vector {2,3}
    /*El 1° corchete [1] es igual al vector {2,3} sin olvidar que empieza simpre desde 0.*/
    /*El 2° corchete [1] es igual al valor dentro de {2,3} recordando que empieza desde 0 seria == 3*/
    /*Ejemplo el primer vector y el primer elemento seria : m[0][0]*/
    printf("%d\n",m[0][0]);
    printf("%d\n",m[1][1]);

    /*modificar el valor de un corchete*/
    // vector 2
    m[2][0]=40;
    /* Para evitar el hacer esto a mano se usa un ciclo for que facilitara el recorrido de los vectores,como en anteriores ejercicios solo que este 
    al tener un vector extra esta debe de tener tambien un for que recorra las filas de ese vector o en criollo ,un for de 2 o un for anidado . (Un for dentro de otro)*/

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            printf("%d\n",m[i][j]); // Como recorrera el i y j.
        }
    }

    // otra forma de ver una matriz
    int m[3][2]={{0,1},
                 {2,3},
                 {4,5}}; 
                 // Es mas visual recomendable para las primeras veces manipulando matrices 
 //---------------------------------------------------------------------------------------------------
  /*Practica 13*/
  /*Habitaciones de un hotel*/   
  /*En un hotal la informacion de las habitaciones se guarda en un vector bidimensional,cada posicion del vector  es asu vez otro vector en el que la primera posicion indica el numero de habitacion,
   y las tres siguientes posiciones el precio de la habitacion en temporada baja,media y alta*/ 
   /*Ejemplo [[1,120,150,220],[2,130,160,230],[3,100,120,200]]*/
   /*Escribe un programa en el que se dfefina 
   una matriz como la anterior y muestre el promedio de cada una de las temporadas*/

   int informacion[3][4]={{1,120,150,220},{2,130,160,230},{3,100,120,200}};

    int suma_temp_baja=0,suma_temp_media=0,suma_temp_alta=0;

    for (size_t i = 0; i < 3; i++){
        for (size_t j = 1; j < 4; j++)// El numero de la habitacion no la usaremos
        {
            if (j==1)
            {
                suma_temp_baja=suma_temp_baja+informacion[i][j];
            }
            if (j==2)
            {
                suma_temp_media=suma_temp_media+informacion[i][j];
            }
            if (j==3)
            {
                suma_temp_alta=suma_temp_alta+informacion[i][j];
            } 
        }
    }
    float promedio_temp_baja= suma_temp_baja/3;
    float promedio_temp_media=suma_temp_media/3;
    float promedio_temp_alta=suma_temp_alta/3;
    printf("Promedio temporada baja %.2f\nPromedio temporada media %.2f\nPromedio temporada alta: %.2f",promedio_temp_baja,promedio_temp_media,promedio_temp_alta);
    






    return 0;
}