#include<stdio.h>
int main()
{
  int n;
  long S = 0;
  //s? d?ng dowhile d? y�u c?u ngu?i d�ng nh?p v�o s? l?n hon 0
  //n?u n < 0 th� y�u c?u nh?p l?i
  do
  {
    printf("\nNhap vao so nguyen n lon hon 0: ");
    scanf("%d", &n);
  if(n <= 0)
  {
    printf("\n So n phai lon hon 0, vui long nhap lai !");
  }
  }while(n <= 0);
  //s? d?ng v�ng l?p for d? t�nh t?ng c�c u?c s? c?a n
  printf("Cac uoc so cua %d la: ",n);
  for(int i = 1; i <= n; i++)
  {
    if(n % i == 0)
    {
      printf("%4d", i);
      S = S + i;
    }
  }
  printf("\nTong cac uoc so cua %d l�: %ld", n, S);
}
