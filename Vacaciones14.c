/*Ejemplo 14 "Actividad Vacaciones"; 
Identificar mediante la calificacion de un alumno, si esta aprobado o reprobado*/

#include <stdio.h>
#include <conio.h>

main()
{
    float promedio;
    printf("Ingresa el promedio:\n");
    scanf("%f", &promedio);
    /*Aqui voy a empezar una estructura selectiva doble if-else*/
    if (promedio>=6)
    {
        printf("Aprobado");
        
    }
    else    /*El else significa "Si no..." o sea si no se cumple lo de "if(promedio>6)"*/
    {
        printf("Reprobado");
        
    }
    getch();  /* Se usa para producri una pausa en el programa hasat que el ususaio presione 
               una tecla, para que sriva se pone la directiva de procesamiento "#include <conio.h>"*/
}
