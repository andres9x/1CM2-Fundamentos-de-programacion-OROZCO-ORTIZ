/*Ejemplo 25 "Actividad Vacaciones"; 
Hacer aparecer en pantalla las letras del abecedario*/
#include <stdio.h>
int main()
{
    char letra = 'a';
    
    printf("Hola! Aqui solo tenemos como objetivo visualizar el abecedario:\n");
    do{
        printf("%c.", letra);
        letra++;
    }
    while(letra<='z');
    
    printf("\nHasta pronto!");
}

