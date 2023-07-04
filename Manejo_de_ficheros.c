#include <stdio.h>

int main (int argc, char *argv[]) {
/// Para lectura de un fichero
    FILE *f;/// crear una variable puntero File 
    //Abirmos toda la estructura dentro dle fichero
    /*F=fopen("prueba.txt","r");//"r" abrir para leer si contenido
    char *linea;

    while (feof(F)==0)
    {
        fscanf(F,"%s",linea);// Variable del archivo,tratarla como cadena,almacenarla en una cadena

        printf("%s\n",linea);
    }
    fclose(f);// Siempre que abrimos cerramos el archivo
    */
   //Escritura  en el fichero
   /*f=fopen("prueba.txt","w");// "w" para escribir 
   char *cadena = "Esta es una cadena de prueba";
   fprintf(f,"%s\n",cadena); // salida en el fichero
   fclose(f); */

   f=fopen("prueba.txt","a");// Añadir "a"
   char *cadena = "Esta es otra cadena de prueba";
   fprintf(f,"%s\n",cadena);
   fclose(f);
    return 0;
}