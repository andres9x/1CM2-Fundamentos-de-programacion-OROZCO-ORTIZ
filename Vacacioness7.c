/*Ejemplo 7 "Actividad Vacaciones"; 
Identificar el volumen de un clindro*/
#include <stdio.h>
#include <stdlib.h>  /* "DIRECTIVAS DE PROCESAMIENTO" */
#include <math.h>

int main() {
    const double pi = 3.141593; 
    double D, H, R, V;

    printf ("Escribe el diametro\n");
    scanf ("%lf", &D);
    printf ("Ahora escribe la altura\n");
    scanf ("%lf", &H);

    R = D/2; V = Pi * pow(R, 2) * H;
    printf ("El volumen del cilindro es %lf ", V);
   return 0;
}
