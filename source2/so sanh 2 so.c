#include <stdio.h>

int main() {
   int a, b;

    printf("Nhap gia tri a: ");
    scanf("%d", &a);
    printf("Nhap gia tri b: ");
    scanf("%d", &b);

   if(a > b)
      printf("a lon hon b!");
   else
      printf("a nho hon b!");

   return 0;
}
