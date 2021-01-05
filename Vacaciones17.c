/*Ejemplo 17 "Actividad Vacaciones"; 
Numero operado al azar*/

#include <stdio.h>
#include <stdlib.h>/*Son las "DIRECTIVAS DE PROCESAMIENTO NECESARIAS"*/
main() 
{
    float a, b;
    float x;
    int l;
    
    printf("Escribe 2 números: \n");
    scanf("%f %f", &a, &b);
    
    printf("Ingresa la operaion que desees:");
    printf("\n(1)Suma");
    printf("\n(2)Resta");
    printf("\n(3)Multiplicación");
    scanf("%d ", &l);
    
    switch(l)
    {
        case 1: 
        {
            x=a+b;
            printf("%f", l); break;
        }
        
        case 2:
        {
            x=a-b;
            printf("%f", l); break;
            
        }
        
        case 3:
        {
            x=a*b;
            printf("%f", l); break;
        }
        default:
        {
            printf("Solo puedes seleccionar entre 1 y 3"); break;
        }
    }
    system("pause");
    
}
