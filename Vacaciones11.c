/*Ejemplo 11 "Actividad Vacaciones"; 
¿Que tipo de pozole eres?*/

#include <stdio.h>

int main() {
int nota;
printf("  ¿Que tipo de pozole eres?\n"); 
printf("(1)Te gusta el pollo y las tostadas, tomas coca en las mañanas\n");
printf("(2)Le caes bien a tus amigos pero das mala\n  impresion a los que apenas te hablan\n");
printf("(3)Eres cristiano y vegano, medio fastidioso pero amable\n");
printf("(4)El gordito buen pedo\n");
printf("(5)Madrugas en domingo y haces tu tarea el dia que la dejan\n");
printf("(6)La neta caes mal, criticon y no saludas en las mañanas\n");
scanf("%d",&nota);
switch(nota) {


case 1: printf("\nEres Pozole verde"); break;
case 2: printf("\nEres Pozole rojo"); break;
case 3: printf("\nEres pozole zordo"); break;
case 4: printf("\nTú no eres pozole, eres tamal"); break;
case 5: printf("\nPozole recien hecho del 15 de septembre"); break;
case 6: printf("\nCasi pero tas reprobado"); break;
default: printf("No carnal, pon uno entero entre el 1 y 6");
}
printf("\n \nJesús Andrés Orozco Ortiz");
return 0;
}
