#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=i;j++)
		{
			printf("%c",65-1+j);
		}
		printf("\n");
    }
}
