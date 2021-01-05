/*Ejemplo 18 "Actividad Vacaciones"; 
Concurso*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    int x;
    srand(time(NULL));
    printf("Vamos a generar un numero al ,azar entre 0 y 10 para saber si ganaste, un viaje, un auto o nada\nEl 5 y 0 son ganadores. Numero generado:  ");
    x=rand()%11;
    printf("%d\n", x);
    
    switch(x)
    {
        case 0:
        {
            printf("Ganaste un Viaje");
            break;
        }
        case 5:
        {
            printf("Ganaste un Auto");
            break;
        }
        default:
        {
            printf("No ganaste");
            break;
        }
        
    }
}
