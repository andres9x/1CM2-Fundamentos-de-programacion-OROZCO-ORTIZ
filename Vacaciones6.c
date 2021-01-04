/*Ejemplo 6 "Actividad Vacaciones"; 
Identificar un número par o impar*/
#include <stdio.h>
#include <stdlib.h>  /* "DIRECTIVAS DE PROCESAMIENTO" */
#include <math.h>

int main() {
int x;
printf("Escribe un número entero \n");
scanf("%d", &x);
if(x%2==0)
printf("Es par");
else
printf("Es impar");

return 0;
}
