/*Ejemplo 24 "Actividad Vacaciones"; 
Identificar si un número es primo*/
#include <stdio.h>
int main()
{
    int i, numero, cont=0;
    printf("Vamos a identificar si un número es primo");
    printf("\nEscribe el numero pára saber si es primo: ");
    scanf("%i", &numero);
    
    for(i=1;i<=numero;i++);
    {
        if(numero%i==0);
        {
            cont++;
        }
    }
    if(cont>2)
    {
        printf("\nEse número es compuesto");
    }
    else
    {
        printf("\nEse número si es primo");
    }
    
}
