#include<stdio.h>
int main()
{ int x , s ;
  s = 0;
  printf("Nhap so:");
  do
  { scanf("%d",&x);
  if (x!=0)
  s= s + x ;
  } while (x!=0);
  printf("Tong:%d",s);
  return 0 ;
}

