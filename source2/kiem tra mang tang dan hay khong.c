//Check if array is ascending or not, print -1
#include <stdio.h>

int main() {
   int n, i, arr[100], is_sorted = 1;

   printf("Enter the size of the array: ");
   scanf("%d", &n);

   printf("Enter %d integers:\n", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   for (i = 1; i < n; i++) {
      if (arr[i] < arr[i-1]) {
         is_sorted = 0;
         break;
      }
   }

   if (is_sorted) {
      printf("The array is sorted in ascending order");
   } else {
      printf("-1");
   }

   return 0;
}

