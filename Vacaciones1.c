/*Ejemplo 1 "Actividad Vacaciones"; 
Calcular el perimetro de una circunferencia, donde el usuario introduce el radio*/
#include <stdio.h>
#define PI 3.14159 /*Aqui estoy definiendo el valor de "pi"*/
#include <stdlib.h>  /*Tenemos las "DIRECTIVAS DE PROCESAMIENTO" */
#include <math.h>

int main()
{
    float p;
    float r;
    printf("Calcular el perimetro de una circunferencia");
    printf("\nEscriba el tamaño del radio \n");
    scanf("%f", &r);
    p = 2*3.1415*r;
    printf("\n El perimetro de la circunferencia es: %f");
    
    return 0;
}
