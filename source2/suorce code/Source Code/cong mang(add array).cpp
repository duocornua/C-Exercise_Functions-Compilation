#include <stdio.h>
 
int main() {
   int even[5] = {0, 2, 4, 6, 8};
   int odd[6]  = {1, 3, 5, 7, 9, 11};
    
   int i, index;
   int eSize = 5;
   int oSize = 6;
    
   // khoi tao mang moi
   int arr[eSize + oSize];
    
   index = 0;
  
   // them mang even vao mang arr
   for(i = 0; i < eSize; i++) {
      arr[index] = even[i];
      index++;
   }
   // them mang odd vao mang arr 
   for(i = 0; i < oSize; i++) {
      arr[index] = odd[i];
      index++;
   }
 
   printf("Tron hai mang thanh mot mang:\n\n");
   printf("\nMang chan: ");
   for(i = 0; i < eSize; i++)
      printf(" %d", even[i]);
 
   printf("\nMang le: ");
   for(i = 0; i < oSize; i++)
      printf(" %d", odd[i]);
 
   printf("\nMang sau khi tron: ");
   for(i = 0; i < 10; i++)
      printf(" %d", arr[i]);
    
   return 0;
}
