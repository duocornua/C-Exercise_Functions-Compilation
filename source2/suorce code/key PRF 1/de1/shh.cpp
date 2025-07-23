#include<stdio.h>
int main()
{
	int n;
	int s=0;
	scanf("%d",&n);
	for (int i=1;i<n;i++)
	{
		if (n%i==0)
		s=s+i;
	}
	if(n==s)
	{
		printf("%d is a perfect number",n);
	}
	else printf("%d is not a perfect number",n);
}
