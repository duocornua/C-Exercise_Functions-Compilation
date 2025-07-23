#include <stdio.h>
 
int main() {
   char s[] = "VietTuts.Vn";  // khoi tao chuoi s
   char ch = 't';             // ky tu de dem
     
   int i = 0;
   int count = 0;             // bien dem
 
   // dem so lan xuat hien cua ky tu 't' trong chuoi s
   while(s[i] != '\0') {
      if(s[i] == ch)
         count++;
 
      i++;
   }
    
   if(count > 0) {
        printf("Ky tu %c xuat hien %d lan trong chuoi '%s'", ch, count, s);
   } else {
        printf("Ky tu%c khong co mat trong chuoi %s", ch, s);
   }
   return 0;
}
