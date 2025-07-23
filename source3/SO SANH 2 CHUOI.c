#include <stdio.h>
 
int main() {
   char s1[50];     
   char s2[50];
    
   int n = 0;
   short flag = 1;
    
    printf("Nhap chuoi s1: ");
    gets(s1);
    printf("Nhap chuoi s2: ");
    gets(s2);
     
   // so sanh chuoi s1 voi s2
   while (s1[n] != '\0') {
      if(s1[n] != s2[n]) {
         flag = 0;
         break;
      }
      n++;
   }
     
   if(flag == 1) {
      printf("Chuoi %s va chuoi %s la giong nhau.", s1, s2);
   }else {
      printf("Chuoi %s va chuoi %s la khac nhau.", s1, s2);
   }
 
   return 0;
}
