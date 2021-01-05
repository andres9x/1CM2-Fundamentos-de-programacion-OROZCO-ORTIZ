/*Ejemplo 16 "Actividad Vacaciones"; 
Descuento en ropa*/

#include <stdio.h>   /*Son las "DIRECTIVAS DE PROCESAMIENTO NECESARIAS"*/
main() 
{
    printf("Bienvenido a tu nuevo trabajo, la tineda de ropa, \npor apertura tenemos la promoción de Veinte porciento de \ndescuento en cada compra mayor o igual a $800\n");
    
    printf("Lista de productos:\n(1)Tenis...$1200\n(2)Chamarra...$600\n(3)Pantalón...$450\n");
    printf("Suma el valor de los productos, el programa \nnos dirá el costo total con descuento, sea el caso");
    
    float precio;
    printf("\nIngresa el cobro total: $");
    scanf("%f", &precio);
    
    if (precio>=800)
    precio=precio-(precio*0.2);
    printf("Cobra al cliente: $ %f", precio);
}
