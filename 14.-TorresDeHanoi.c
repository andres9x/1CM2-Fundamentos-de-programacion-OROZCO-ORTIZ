#include <stdio.h>
 
void moverDiscos (int n, int origen, int destino, int aux);
 
int main(){
   int cantDiscos;
   printf("Ingresa la cantidad de discos que vas a usar: ");
   scanf("%d", &cantDiscos);
  
    printf ("\n\nIngresa 5 discos o menos para su correcto funcionamiento\n\n\n");
      system ("PAUSE");
      return 0;
   }
   printf ("\n");
      moverDiscos(cantDiscos, 1, 2, 3);
   printf ("\n\n");
   system ("PAUSE");
 
  return 0;
}
 
void moverDiscos (int n, int origen, int destino, int aux){

   if (n > 0){
     
      moverDiscos (n-1, origen, aux, destino);
     
      printf("Muevo un disco de %d a %d\n", origen, destino);
      
      moverDiscos (n-1, aux, destino, origen);
   }
}
