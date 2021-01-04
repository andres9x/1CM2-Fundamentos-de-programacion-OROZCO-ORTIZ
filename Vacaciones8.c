/*Ejemplo 8"Actividad Vacaciones"; 
Comparar el precio de un vaso de Café Latte en los diferentes establecimientos mas populares */
#include <stdio.h>
#include <stdlib.h>  /* "DIRECTIVAS DE PROCESAMIENTO" */
#include <stdio.h>
#include <stdlib.h>

int main() {
    double precioa, preciob, precioc, media;
printf(" Hola! Haremos una comparación de cuanto vale un café latte en zacatecas, \n para eso visitaremos algunos establecimientos y compararemos precios\n");
    printf("\n Primero escribe el precio del café en Starbucks\n");
    scanf("%lf", &precioa);
    printf("\n Ahora escribe el precio ofertado en Gloria Jeans Coffees\n");
    scanf("%lf", &preciob);
    printf("\n Por ultimo escribe el precio en café dali\n");
    scanf("%lf", &precioc);

    media = (precioa + preciob + precioc) / 3;
    printf ("\n El precio de un café latte en promedio es de %lf ", media);
    return 0;
}
