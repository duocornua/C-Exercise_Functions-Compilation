#include<stdio.h>
#include<string.h>
 
int main() {
   char s[100][100];
   char t[100];
   int i, j;
   int size;
 
   printf("\nNhap so luong chuoi: ");
   scanf("%d", &size);

   printf("\nNhap %d chuoi bat ky: \n", size);
   for (i = 0; i < size; i++) {
      scanf("%s", s[i]);
   }
   // sap xep chuoi
   for (i = 1; i < size; i++) {
      for (j = 1; j < size; j++) {
         if (strcmp(s[j - 1], s[j]) > 0) {
            strcpy(t, s[j - 1]);
            strcpy(s[j - 1], s[j]);
            strcpy(s[j], t);
         }
      }
   }
 
   printf("\nSap xep thu tu cua cac chuoi:");
   for (i = 0; i < size; i++) {
      printf("\n%s", s[i]);
   }
   return(0);
}
