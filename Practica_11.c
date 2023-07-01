/*-------------Practica 11------------------------*/
/*Vectores || estructuras de datos&& arreglos */
/*Vector de pesos*/
#include <stdio.h>

int main (int argc, char *argv[]) {
    /*vectores o llamados arrays */
    typedef int tu; // un diferenciador 
    //tu vector[10];/// un elemento de 10 elementos enteros
    tu vector[10]={0,1,2,3,4,5,6,7,8,9};

    printf("%d",vector[3]);/* Para acceder a un elememtno dentro del vector se pone el lugar 
    de la ubicacion donde se encuentra de ejemplo queremos el 4to valor ,el numero de espacio en el vector seria 3 ya que inicia desde 0.*/

    vector[9]=100; /*Para modificar u valor especifico ene l vector*/
    vector[5]=500;
    /*Para acceder dentro de las posciones y los elementos de las posiciones con bucle for o while.*/

    for (size_t i = 0; i < 10; i++)/*Recorrer elementos de un vector*/
    {
        //vector[i];
        /*Ingesamos el valor de i dentro del corchete del vector para haci cada que el int i++ incremente este,
        vaya avanzando dentro de este vector hace hasta llegar al i<10 || =9 de psocicion :)*/
        printf("%d\n",vector[i]);
    }

    /*Cargar por teclado y almacenar en un vectr el peso de 5 personas.obtener 
    el promedio de los mismos .contar cuantas personas pesan mas que el promedio y cuantas pesasn menos.*/
    
    float pesos[5];
    tu suma=0;

    for (size_t i = 0; i < 5; i++)
    {
        printf("Introduxca un pseo para almacenarlo\n");
        scanf("%f",&pesos[i]);
        suma= suma + pesos[i];
    }
    float promedio= suma/5;
    tu cont_mayor_igual=0;
    tu cont_menor_igual=0;
    for (size_t i = 0; i < 5; i++)
    {
        if (pesos[i] >= promedio)
        {
            cont_mayor_igual ++;
        }else{
            cont_menor_igual++;
        }       
    }
    printf("El promedio de pesos es : %.2f",promedio);
    printf("N° pesos mayor o iguales que el promedio :%d,N° pesos menores qu el promedio %d",cont_mayor_igual,cont_menor_igual);
    return 0;
}