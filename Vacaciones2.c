/*Ejemplo 2 "Actividad Vacaciones"; 
Elegir de nuestro menú de comidas, un platillo y una bebida*/
#include <stdio.h>
#include <stdlib.h>  /* "DIRECTIVAS DE PROCESAMIENTO" */
#include <math.h>

int main() {
int platillo;

printf("Bienvenid@ a su restaurante preferido, por favor elija su platillo (0 - 10)\n"); scanf("%d",&platillo);

switch(platillo) {
case 0: printf("\nHamburguesa"); break;
case 1: printf("\nPollo rostizado"); break;
case 2: printf("\nFrijoles"); break;
case 3: printf("\nPizza"); break;
case 4: printf("\nEspagueti"); break;
case 5: printf("\nTacos"); break;
case 6: printf("\nEnchiladas"); break;
case 7: printf("\nBisteck"); break;

default: printf("Solo puede digitar entre 0 y 7");

}

printf("\n¿Con que bebida quiere acompañar su plato?(0 - 4)\n"); scanf("%d",&platillo);

switch(platillo) {
case 0: printf("\nRefresco"); break;
case 1: printf("\nAgua de sabor"); break;
case 2: printf("\nCafé"); break;
case 3: printf("\nVino"); break;
case 4: printf("\nCerveza"); break;

default: printf("Solo puede digitar entre 0 y 4");

}

printf("\n*En seguida preparamos su orden, buen provecho*\n");
return 0;
}
