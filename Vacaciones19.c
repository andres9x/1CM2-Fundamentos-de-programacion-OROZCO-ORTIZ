/*Ejemplo 19 "Actividad Vacaciones"; 
Hipotenusa de un triangulo*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float Hipotenusa, Catetoopuesto, Catetoadyacente;
    printf("Escriba el valor de los catetos\n");
    scanf("%f %f", &Catetoadyacente, &Catetoopuesto);
    Hipotenusa=sqrt(pow(Catetoadyacente,2)+pow(Catetoopuesto,2));
    
    printf("La Hipotenusa =%f", Hipotenusa);
}
