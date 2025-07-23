#include<stdio.h>
int main()
{
	int n,m=0;
	
	scanf("%d",&n);
	int k=n;
	while (n%2==0)
	{
		m++;
		n=n/2;
	}
	if (n==1) printf("%d",m);
	else printf("%d is not a power of 2",k);
	return 0;
}
