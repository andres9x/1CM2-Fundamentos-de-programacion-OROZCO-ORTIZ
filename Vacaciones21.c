/*Ejemplo 21 "Actividad Vacaciones"; 
Calculadora de segundos*/
#include <stdio.h>
int main()
{
    int h, m, s, t1, t2, t3, total;
    
    printf("Escribe la cantidad de horas: ");
    scanf("%i", &h);
    
    printf("\n¿Con cuantos minutos?: ");
    scanf("%i", &m);
    
    printf("¿Y cuantos segundos?: ");
    scanf("%i", &s);
    
    t1 = h * 3600;
    t2 = m * 60;
    t3 = s * 1;
    
    total = t1 + t2 + t3;
    
    printf("En total son %i segundos");
    
}
