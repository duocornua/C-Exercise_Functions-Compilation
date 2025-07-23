//Vi?t chuong trình tìm s? nguyên duong m l?n nh?t sao cho 1 + 2 + … + m < N
#include <stdio.h>

int main() {
   int N, sum = 0, m = 1;

   printf("Enter a positive integer N: ");
   scanf("%d", &N);

   while (sum + m < N) {
      sum += m;
      m++;
   }

   m--;

   printf("The largest positive integer m such that 1 + 2 + ... + m < %d is %d", N, m);

   return 0;
}

