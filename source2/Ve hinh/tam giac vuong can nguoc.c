#include <stdio.h>

int main() {
   int n,i,j;

   n = 5;

   printf("Ve tam giac sao vuong can:\n\n");
   for(i = 0; i < n; i++) {
      for(j=0; j<i; j++)
         printf("  "); 

      for(j=i; j < n; j++)
         printf(" *");

      printf("\n");
      
   }
   
   return 0;
}
