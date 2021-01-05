/*Ejemplo 10 "Actividad Vacaciones"; 
Funciones matematicas*/
#include <stdio.h>
#include <stdlib.h>  /* "DIRECTIVAS DE PROCESAMIENTO" */
#include <math.h>

int main() {
int cafecito;

printf("Hola!, Vamos a probar las funciones matematicas en lenguaje C\nElige que tipo de funcion quieres demostrar\n"); 
printf("(1) Función Exponencial\n");
printf("(2) Raiz cuadrada\n");
printf("(3) Logaritm Natural\n");
printf("(4) Funcion que Redondea a x al entero mas pequeño que no sea menor que x\n");
scanf("%d",&cafecito);

switch(cafecito) {

case 1:
    printf("Funcion Exponencial");
    
    printf("\n %.2f",exp(2)); 
    break;
    
    
case 2: printf("Raiz cuadrada de 81");
    printf("\n %.2f",sqrt(81)); 
break;


case 3:  printf("Funcion Logaritmo Natural de e");
  
    printf("\n %.2f",log(2.718282)); break;
    
    
case 4: printf("Funcion que Redondea a x al entero mas pequeño que no sea menor que x");
    
    printf("\n %.2f",ceil(8.2541));  break;

default: printf("Solo puedes seleccionar entre el 1 y el 4");

}

return 0;
}
