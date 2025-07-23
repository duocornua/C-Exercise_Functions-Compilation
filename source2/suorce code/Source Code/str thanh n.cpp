#include<stdio.h>
#include<stdlib.h>
 
int main() {
   int num;
   char str_age[3];
 
   printf("Nhap tuoi: ");
   scanf("%s", str_age);
 
   num = atoi(str_age);
   printf("\nTuoi vua nhap: %d", num);
 
   return (0);
}
