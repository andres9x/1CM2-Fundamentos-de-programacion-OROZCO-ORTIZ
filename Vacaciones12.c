/*Ejemplo 12 "Actividad Vacaciones"; 
Configura tu nuevo automovil*/

#include <stdio.h>

int main() {
int nota;
printf(" Bienvenido a la nueva agencia automotriz\n  Aquí podrás configurar tu nuevo auto. Empecemos!\n");
printf("\n Vamos a elegir el tipo de Motor\n");
printf("(1)Motor de combustión interna\n");
printf("(2)Motor eléctrico\n");

scanf("%d",&nota);
switch(nota) {


case 1: printf("\n> Tendrás un excelente sonido, la responsabilidad de manetenrlo y cuidarlo\n  pero sobre todo lo mejor en sensaciones al conducir <"); break;
case 2: printf("\n> La mayor potencia con el mejor torque a bajas revoluciones, excelente elección <"); break;

default: printf("No no, Solo puedes elegir entre el 1 y 2");
}

printf("\nAhora, ¿Que tipo de llantas quieres?\n");
printf("\n(1)Llantas Michelin");
printf("\n(2)Llantas x (cualquiera)");
scanf("%d",&nota);
switch(nota) {


case 1: printf("\n> Mayor torque, mas pegado en las curvas y arranque instantaneo <"); break;
case 2: printf("\n> Perfecto para uso leve <"); break;

default: printf("No no, Solo puedes elegir entre el 1 y 2");
}

printf("\n¿Cual interior prefieres?\n");
printf("\n(1)Interior de lujo y forrado en piel");
printf("\n(2)Interior deportivo 100%");
scanf("%d",&nota);
switch(nota) {


case 1: printf("\n> El mejor comfort, ideal para cualquier evento <"); break;
case 2: printf("\n> Un interior muy minimalista por no decir simple, \n  ni para poner una botella de agua tendras dentro <"); break;

default: printf("No no, Solo puedes elegir entre el 1 y 2");
}



printf("\n \nJesús Andrés Orozco Ortiz");
return 0;
}
