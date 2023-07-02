/*------------------Practica 22-------------------*/
/*Entradas de un museo*/
/*Registros Anidados*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main () {
    /*Se desea realizar un programa qu permita controlar la entrada de los asistentes a un museo
    para ello el programa ira solicitando ,por cada grupo de asistentes,informacion de la hora de acceso,el numero de personas que forman
    el grupo y las edades de cada una de ellas .Una vez introducida la informacion ,el programam mostrara el precio 
    total de la entrada grupal.
    
    ---Hora de entrada
    ---Numero de asistentes
    ---Precio Total
    
    ---Hora
    ---Minuto*/

    
    struct hora_entrada
    {
        int hora;
        int minuto;
    };

    struct entrada
    {
        struct hora_entrada hora1;
        int asistentes;
        float precio;
    };

        struct entrada e1;
        char continuar ='S';
        while (continuar == 'S' || 's')
        {
            printf("Introduce el hora de entrada \n");
            scanf("%d",&e1.hora1.hora);
            printf("El minuto de entrada\n");
            scanf("%d",&e1.hora1.minuto);
            printf("Introduce el numero de asistentes\n");
            scanf("%d",&e1.asistentes);
            int total=0;
            for (size_t i = 0; i < e1.asistentes; i++)
            {
                int edad;
               printf("Introduce la edad del asistente %d",(i+1));
               scanf("%d",&edad);
               if (edad <6)
               {
                total=total+0;
               }else if (edad >= 6 && edad <= 15)
               {
                    total =total +5;
               }else if (edad >= 16 && edad <= 26 || edad > 65)
               {
                    total=total +8;
               }else {
                total=total +10;
               } 
            }
            if (e1.asistentes >= 5 )
            {
                e1.precio=total-total*0.1;
            }else{
                e1.precio=total;
            }
            printf("Hora de entrada del grupo %d\n",e1.hora1.hora);
            printf("Minuto de entrada del grupo %d\n",e1.hora1.minuto);
            printf("Precio de las entradas del grupo %.2f\n",e1.precio);

            printf("¿Quieres continuar con otro grupo?(Y/N)\n");
            scanf("%d",&continuar);
            while (continuar == '\n')
            /*En caso de que el buffer se
             quede con espacio de linea y si es asi volver a pedir el &continuar*/
            {
               scanf("%d",&continuar);
            }
            
        }
        printf("Hasta la proxima\n");
    return 0;
}