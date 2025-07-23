#include<stdio.h>
int main()
{
	int n;
	int m;
	scanf("%d",&n);
	while (n>0)
	{
		m=m*10+n%10;
		n=n/10;
	}
	printf("%d",m);
return 0;
}
