#include <stdio.h>
#include <string.h>

int main() {
   char str[] = "    Anh    Quan   ";
   int len = strlen(str);
   int i, j;

   // xóa kho?n tr?ng ? d?u
   while (str[0] == ' ') {
      for (i = 0; i < len; i++) {
         str[i] = str[i+1];
      }
      len--;
   }

   // Xóa kho?ng tr?ng ? cu?i
   while (str[len-1] == ' ') {
      len--;
   }
   str[len] = '\0';

   // Xóa kho?ng tr?ng l?p l?i
   for (i = 0; i < len; i++) {
      if (str[i] == ' ' && str[i+1] == ' ') {
         for (j = i; j < len; j++) {
            str[j] = str[j+1];
         }
         len--;
         i--;
      }
   }

   printf("%s", str);
   return 0;
}

