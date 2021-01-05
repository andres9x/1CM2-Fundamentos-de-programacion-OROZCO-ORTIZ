/*Ejemplo 15 "Actividad Vacaciones"; 
Generar un número aleatorio*/

#include <stdio.h> 
#include <stdlib.h>   /*Son las "DIRECTIVAS DE RPOCESAMIENTO NECESARIAS"*/
#include <time.h>

main()
{
    srand(time(NULL));
    printf("%d", rand());
}

