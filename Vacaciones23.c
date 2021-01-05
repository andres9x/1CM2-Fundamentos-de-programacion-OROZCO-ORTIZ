/*Ejemplo 23 "Actividad Vacaciones"; 
Sumar los primeros tantos numeros*/
#include <stdio.h>
int main()
{
    int cont, n, suma=0;
    
    printf("Escribe los numeros que vamos a sumar");
    scanf("%i", &n);
    
    cont = 1;
    
    while(cont <= n);
    {
        suma+=cont;
        cont++;
    }
    printf("\nLa suma es %i", suma);
}
