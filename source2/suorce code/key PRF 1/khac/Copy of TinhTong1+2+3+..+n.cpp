#include<stdio.h>
int main()
{
	int n,m,s=0,i=1;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
   		s+=i;
    	if (s>=n) 
		break;
	}
	printf("m = %d",i-1);
}
