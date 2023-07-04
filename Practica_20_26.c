/*Biblioteca estandar de C */
/*Definicion*/
/*Conjunto de librerias estandarizadas la Organizacion Internacional para la Estandarización(ISO).
Se encuentran presentes en cualquier compilador de C.
Continene funciones para operaciones comunes que se pueden realizar en nuestros programas como el manejo de cadenas ,E/s, funciones matematicas,etc.
Para acceder a alguna de las librerias de l abiblioteca , es nesecario incluir su fichero de cabecera.
*/

/*Ficheros de cabezera*/

//<assert.h>: Para operaciones relacionadas con la depuracion de un programa
//<ctype.h>: Funciones para clasificacion y conversion de tipos de datos
//<errno.h>: Manejo de errores
//<float.h>: Valores maximos y minimos de datos reales(Decimales)
//<limits.h>: Valores maximos y minimos de datos enteros
//<locale.h>: Funciones nesecarias para adaptar un programa a un pais determinado

//<math.h>:  Funciones matematicas
//<setjmp.h>:  Funciones para crear y manipular el entorno al hacer llamadas : registros,pila,etc
//<signal.h>: Manipular las distintas señales del sistema
//<stdarg.h>: Manipular de listas de argumentos de longitud variable
//<stddef.h>: Define algunos tipos especiales y el simbolo null
//<stdio.h>: Operaciones de entrada y salida

//<stdlib.h>: Funciones de utilidad comolas rutinas de conversion de cadenas,generador de numeros aleatorios
//,rutinas de asignacion de memoria , y rutinas de control de procesos
//<string.h>: Tratamiento de cadenas
//<time.h>:  Manipular la fecha y hora del sistema.

/*Estas librerias pueden llegar a ser muy utiles ala hora de nesecitar mayor complejidad en un programa */
/*Nota: Nesecitamos practica con las pocas funciones planteadas en el curso.*/

#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(){
    //ctype.h : isdigit()
    printf("%d\n",isdigit('r'));// Aparecera un 0
    //math.h : sqrt()
    printf("%.2f\n",sqrt(7));
    //limits.h : INT_MAX
    printf("%d\n",INT_MAX);
    //stdlib.h : rand
    srand(time(NULL));//Semilla
    printf("%d\n",rand () % 11);// para usarla se escribe el limitante de donde a donde
    // de ejemplo arriba es 1 a 10 pero sumado 1 el cual seria % 11.
    //string.h : strlen
    printf("%d\n",strlen("Cadena de prueba"));//Cuenta la cantidad de caracteres
    //time.h : time , difftime
    time_t comienso,final;
    comienso = time (NULL);//se guarda en la variable
    for (size_t i = 0; i < 100000; i++)
    {
        printf("-");
    }
    final = time (NULL);
    printf("Se generaron 100000 '-' en : %f\n",difftime(comienso,final));
}

