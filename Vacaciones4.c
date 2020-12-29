/*Ejemplo 4 "Actividad Vacaciones"; 
Prepara tu café*/
#include <stdio.h>
#include <stdlib.h>  /* "DIRECTIVAS DE PROCESAMIENTO" */
#include <math.h>

int main() {
int cafecito;

printf("Hola!, bienvenido a la cafetería orozco, ¿Que tipo de café quieres?\n"); 
printf("(1) Café Americano\n");
printf("(2) Expresso de café\n");
printf("(3) Café Latte\n");
printf("(4) Café Capuccino\n");
scanf("%d",&cafecito);

switch(cafecito) {

case 1: printf("\nCafé Americano"); break;
case 2: printf("\nExpresso de café"); break;
case 3: printf("\nCafé Latte"); break;
case 4: printf("\nCafé personalizado"); break;

default: printf("Solo puedes seleccionar entre el 1 y el 4");

}

printf("\n¿Con que tipo de leche?\n"); 
printf("(1) Entera");
printf(" (2) Deslactosada\n");

scanf("%d",&cafecito);

switch(cafecito) {
case 1: printf("\nEntera"); break;
case 2: printf("\nDeslactosada"); break;


default: printf("Solo puedes seleccionar entre el 1 y el 2");

}


printf("\n¿Frío o caliente?\n"); 
printf("(1) Frio");
printf(" (2) Caliente\n");

scanf("%d",&cafecito);

switch(cafecito) {
case 1: printf("\nFrio"); break;
case 2: printf("\nCaliente"); break;


default: printf("Solo puedes seleccionar entre el 1 y el 2");

}
printf("\n*En seguida preparamos su orden, buen provecho*\n");
return 0;
}
