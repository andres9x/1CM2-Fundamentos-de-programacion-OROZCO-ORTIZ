/*Ejemplo 3 "Actividad Vacaciones"; 
Introducir nuestra calificación en número entero para saber nuestra situación academica*/

#include <stdio.h>

int main() {
int nota;
printf("Que calificación sacaste?\n"); scanf("%d",&nota);
switch(nota) {


case 0: printf("\nJajaja no t pss reprobaste en linea"); break;
case 1: printf("\nUy no, reprobado"); break;
case 2: printf("\nReprobado"); break;
case 3: printf("\nReprobado"); break;
case 4: printf("\nReprobado"); break;
case 5: printf("\nCasi pero tas reprobado"); break;
case 6: printf("\nPansaste bro"); break;
case 7: printf("\nTa bueno eh"); break;
case 8: printf("\nEso mijo!"); break;
case 9: printf("\nAajaasmiiin, rifadillo"); break;
case 10: printf("\nAsumakina, mis respetos"); break;
default: printf("No carnal, pon una entera entre el 1 y 10");
}
printf("\n \nJesús Andrés Orozco Ortiz");
return 0;
}
