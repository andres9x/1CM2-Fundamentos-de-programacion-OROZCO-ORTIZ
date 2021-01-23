#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
    int a1, a2, a3;
    float a;
    
    scanf("%d, %d, %d,", &a1, &a2, &a3);
    a=(a1+a2+a3)/3;
    
    FILE* datos;
    datos=fopen("datos.txt", "wt");
    
    printf(datos, "%d\n, %d\n, %d\n, %f\n");
    fclose(datos);
    
}
