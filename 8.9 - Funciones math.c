/*Funcion residuo de xfy como un número de punto flotante */

#include <stdio.h>
#include <stdlib.h>  /*Tenemos las "DIRECTIVAS DE PROCESAMIENTO" */
#include <math.h>

int main(int argc, char** argv) {       /*Función pincipal*/
    double x = 45;
    printf("Funcion residuo de xfy como un número de punto flotante");
    printf("\n \n Ejemplo 1:");
    printf("\n %.2f",fmod(2, 4)); 
    
    printf("\n Ejemplo 2:");
    printf("\n %.2f",fmod(3, 22)); 
    
    printf("\n Ejemplo 3:");
    printf("\n %.2f",fmod(25.2, 5)); 
    
    printf("\n \n Jesus Andres Orozco Ortiz");
    
}
