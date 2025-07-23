#include<stdio.h>
int main()
{
  int n;
  long S = 0;
  //s? d?ng dowhile d? yêu c?u ngu?i dùng nh?p vào s? l?n hon 0
  //n?u n < 0 thì yêu c?u nh?p l?i
  do
  {
    printf("\nNhap vao so nguyen n lon hon 0: ");
    scanf("%d", &n);
  if(n <= 0)
  {
    printf("\n So n phai lon hon 0, vui long nhap lai !");
  }
  }while(n <= 0);
  //s? d?ng vòng l?p for d? tính t?ng các u?c s? c?a n
  printf("Cac uoc so cua %d la: ",n);
  for(int i = 1; i <= n; i++)
  {
    if(n % i == 0)
    {
      printf("%4d", i);
      S = S + i;
    }
  }
  printf("\nTong cac uoc so cua %d là: %ld", n, S);
}
