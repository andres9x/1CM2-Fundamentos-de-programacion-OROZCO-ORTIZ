/*Ejemplo 5 "Actividad Vacaciones"; 
Caja registradora*/
#include <stdio.h>
#include <stdlib.h>  /* "DIRECTIVAS DE PROCESAMIENTO" */
#include <math.h>

int main() {
float cash;
float cobro=0;
float pago=0;
float cambio=0;

printf("Hola!, bienvenido a la caja registradora\n"); 
printf("¿Cuanto vas a cobrar?\n");
scanf("%f", cobro);
printf("\nMuy bien\n");
printf("Con cuanto te pagaron?\n");
scanf("%f",pago);
cambio=(pago)-(cobro);
printf("Su cambio es: $");
printf("%f", cambio);

return 0;
}
