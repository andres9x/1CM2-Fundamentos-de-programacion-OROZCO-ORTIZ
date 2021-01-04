/*Ejemplo 9"Actividad Vacaciones"; 
Valorar al alumno con mayor edad*/

#include <stdio.h>  /* "DIRECTIVAS DE PROCESAMIENTO" */
#include <stdlib.h>


int main(int argc, char** argv) {
    
    printf("Hola!, vamos a tomar como muestra, edades aleatorias para ver \n cual es la edad mayor y menor en nuestro salon de clases");
    
    printf("\n A continuacion introduce las edades:\n ");
    int n;
    int max=0, min=0;
    
    scanf("%d", &n);
    
    int arreglo[n];
    
    for(int i=0;i<n;i++){
        scanf("%d", &arreglo[i]);
    }
    min=arreglo[0];

    for(int i=0; i<n; i++){
        if(arreglo[i]>max){
            max=arreglo[i];  
        } 
        if(min > arreglo[i]){
            min=arreglo[i];
        }
    }
    
    printf("\n La persona con mas edad tiene %d años", max);
    printf("\n La persona con menos edad tiene %d años", min);
    
    return (0);
}
