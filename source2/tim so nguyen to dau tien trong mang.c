//Find the first prime number in a 1-dimensional array of integers. If the array has no prime numbers, return – 1
#include <stdio.h>

int is_prime(int n) {
   if (n < 2) {
      return 0;
   }
   for (int i = 2; i <= n/2; i++) {
      if (n % i == 0) {
         return 0;
      }
   }
   return 1;
}

int main() {
   int n, i, arr[100], prime = -1;

   printf("Enter the size of the array: ");
   scanf("%d", &n);

   printf("Enter %d integers:\n", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   for (i = 0; i < n; i++) {
      if (is_prime(arr[i])) {
         prime = arr[i];
         break;
      }
   }

   if (prime == -1) {
      printf("There is no prime number in the array");
   } else {
      printf("The first prime number in the array is %d", prime);
   }

   return 0;
}

