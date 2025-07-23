#include<stdio.h>  
#include<conio.h>  

//int main(){  
//  int i,giaithua=1,sobatky;  
//  
//  printf("Nhap mot so bat ky: ");  
//  scanf("%d",&sobatky);  
//  
//  for(i=1;i<=sobatky;i++){  
//      giaithua=giaithua*i;  
//  }  
//  printf("\nGiai thua cua %d la: %d",sobatky,giaithua);  
//  
//  printf("\n\n===========================\n");
//  printf("VietJack chuc cac ban hoc tot!");
//  getch();  
//}  
int main()
{
   int c, n, a = 1;
   printf("nhap so de tinh giai thua\n");
   scanf("%d", &n);
   for (c = 1; c <= n; c++) a = a * c;      
   printf("giai thua cua %d = %d\n", n, a);
   return 0;
}

