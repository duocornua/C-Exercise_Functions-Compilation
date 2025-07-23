//Tinh S(x, n) = x – x^2 + x^3 - … + (-1)^n+1 * x^n
#include <stdio.h>
#include <math.h>

int main() {
   float x, sum = 0;
   int n, i;

   printf("Enter the value of x: ");
   scanf("%f", &x);

   printf("Enter the value of n: ");
   scanf("%d", &n);

   for (i = 1; i <= n; i++) {
      sum += pow(-1, i+1) * pow(x, i);
   }

   printf("S(x, n) = %f", sum);
   return 0;
}

