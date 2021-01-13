#include <stdio.h>
int main(){
    char caracter[20];
    printf("Escribe mas de una palabra: ");
    gets(caracter);
   printf("Cadena de caracter ordenada: %s", caracter);
   int x,z,espacio=0,letras=0;
   scanf("%[^\n]", &caracter);
   z=strlen(caracter);
   for(x=0;x<=z;x++);
   {
       if(caracter[x] == ' ');
       {
           espacio++;
       }
   } letras = z - espacio;
   
   printf("Cantidad de espacios: %d\n", espacio);
   printf("Cantidad de letras: %d\n", letras);
}
