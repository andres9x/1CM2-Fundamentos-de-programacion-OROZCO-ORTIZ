/*Ejemplo 13 "Actividad Vacaciones"; 
Biografia de Benito Juarez*/

#include <stdio.h>

int main() {
int nota;
printf(" Biografía de Benito Juarez por apartados\n");
printf("(1)Nombre y vocación\n");
printf("(2)Fechas relevantes\n");
printf("(3)Sus inicios\n");
printf("(4)Como se convirtió en abogado\n");
scanf("%d",&nota);
switch(nota) {


case 1: printf("\nBenito Pablo Juárez García fue un abogado y político mexicano, \n  de origen indígena, presidente de México en varias ocasiones, \n  del 21 de enero de 1858 al 18 de julio de 1872."); break;
case 2: printf("\nNacimiento: 21 de marzo de 1806, Guelatao de Juárez\n  Fallecimiento: 18 de julio de 1872, Palacio Nacional, Ciudad de México"); break;
case 3: printf("\nSu primer trabajo en la ciudad fue como cuidador de  \nganado y ganaba dos reales diarios en la casa de Don Antonio Maza, donde  \nsu hermana María Josefa servía como cocinera. Don Antonio Salanueva, \n impresor y miembro de la Orden Tercera de San Francisco, lo recibió en su casa y \n  se encargó de su primera educación; “leer, escribir y aprender de memoria el Catecismo del Padre Ripalda” "); break;
case 4: printf("\nEn enero de 1834 presentó su examen de jurisprudencia \n  práctica ante la Corte de Justicia del Estado y aprobó, por lo que le\n  expidieron el título de abogado."); break;
default: printf("No no, Solo puedes elegir entre el 1 y 4");
}

printf("\n \nJesús Andrés Orozco Ortiz");
return 0;
}
