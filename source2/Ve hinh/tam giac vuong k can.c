#include<stdio.h>
#include<math.h>
#include<string.h>


int main() {
   int i, j, n;
   scanf("%d", &n);

   for (i = 1; i <=n; i++) {
      for (j = 1; j <= 2*(n-i); j++) {
         printf(" ");
      }
      for (j = 1; j <= 2*i-1; j++) {
         printf("*");
      }
      printf("\n");
   }
   
   return 0;
}
