/*Ejemplo 20 "Actividad Vacaciones"; 
Aumento de salario*/
#include <stdio.h>


int main()
{
    float salario, aumento, nuevosalario;
    printf("¿Cual es tu salario? $");
    scanf("%f", &salario);
    aumento=salario*0.11;
    nuevosalario=salario+aumento;
    printf("Tu nuevo salario con aumento es $%f", nuevosalario);
}
