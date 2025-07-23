#include<stdio.h>
int main()
{int x,y;
 printf("Nhap x va y: ");
 do{ 
     scanf("%d%d",&x, &y);
     int t=x, x=y, y=t;
     printf("Sau khi hoan doi: %d %d\n",x,y);
     printf("\n");
 }
 while (x!=0 && y!=0);
 return 0;
}
