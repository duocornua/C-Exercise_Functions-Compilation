#include<stdio.h>
int main()
{ char c1, c2, t, c;
  int d;
  printf("Nhap c1, Nhap c2:");
  scanf("%c %c", &c1,&c2);
  if (c1>c2)
  {t=c1; c1=c2; c2=t;}
   d=c2-c1;
printf("d=%d\n",d);
for (c=c1; c<=c2; c++)
{printf ("%c, %d, %o, %X\n", c, c, c, c);}
return 0;
}
