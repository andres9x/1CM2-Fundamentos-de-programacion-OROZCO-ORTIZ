#include <stdio.h>
int main() {
    
    printf("Escribe mas de una palabra:\n");
    
    char caracter [20];
    do{
        scanf("%s", caracter);
        if(!feof(stdin)){
            printf("\n %s", caracter);
        }
    }
    while(!feof(stdin));
}
