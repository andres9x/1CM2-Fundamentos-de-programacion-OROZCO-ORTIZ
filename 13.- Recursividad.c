void cifrasIter(int val) 
{ 
   while (val>0){ 
       printf("%d_", val%10); 
       val/=10; 
   } 
}

int factIter (int n) 
{ 
int res=1; 
   while (n>1) 
      res*=n--;  // atención decremento después de la multiplicación 
   return res; 
}
