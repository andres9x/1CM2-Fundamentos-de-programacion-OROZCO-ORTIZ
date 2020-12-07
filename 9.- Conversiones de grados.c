#include <stdio.h>

int main()
{
    float a=0, b=0, c=0, d=0, e=0, e2=0;
    printf("Converciones\n Tomando la unidad como 35\n");
    
    printf("De °C a °F: ");
    a=((35)*(9/5)+32);
    printf("%.2f\n", a);
    
    
    printf("De °F a °C: ");
    b=((35-32)*(5/9));
    printf("%.2f\n", b);
    
    printf("De °K a °C: ");
    c=(35+273.15);
    printf("%.2f\n", c);
    
    printf("De °F a °K: ");
    d=((35-32)*(5/9)+273.15);
    printf("%.2f\n", d);
    
    printf("De °K a °F: ");
    e=(35-273.15)*(9/5)+32;
    printf("%.2f\n", e);
    
     printf("De °K a °C: ");
    e2=(35-273.15);
    printf("%.2f\n", e2);
}
