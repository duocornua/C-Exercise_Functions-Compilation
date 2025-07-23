#include <stdio.h>
 
int main() {
   char s1[] = "VietTuts.Vn";    // khai bao mot chuoi
   char s2[10];                  // bien de luu chuoi sao chep
 
   int length = 0;
 
   // sao chep chuoi s1
   while(s1[length] != '\0') {
      s2[length] = s1[length];
      length++;
   }
 
   s2[length] = '\0';        // gia tri null, ket thuc chuoi
 
   printf("Chuoi s1 = %s \n", s1);
   printf("Chuoi s2 = %s \n", s2);
 
   return 0;
}
