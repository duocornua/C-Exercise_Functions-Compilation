
#include <stdio.h>
 
int main()
{
   int array[100], position, c, n, value;
   printf("Nhap so phan tu: ");
   scanf("%d", &n);
 
   printf("Nhap phan tu:\n");
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
   
 //  printf("Mang da nhap:");
 //  for (c = 0; c < n; c++)
  //    printf("%d ", array[c]);

   printf("\nNhap vi tri chen phan tu: \n");
   scanf("%d", &position);
 
   printf("Nhap phan tu muon chen: \n");
   scanf("%d", &value);
   
   // D?ch chuy?n c�c ph?n t? t? v? tr� c?n ch�n (position) v? ph�a sau 1 don v?
   // V� l�m tr?ng v? tr� position
   for (c = n - 1; c >= position - 1; c--)
      array[c+1] = array[c];
   
   /*Ch�n ph?n t? v�o ch? tr?ng v?a t?o*/
   array[position-1] = value;
 
   printf("Mang sau khi chen:\n");
   for (c = 0; c <= n; c++)
      printf("%d ", array[c]);
}
