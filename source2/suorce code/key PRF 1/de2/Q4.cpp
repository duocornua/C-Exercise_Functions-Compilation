#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(int j=1;j<=n;j++)
	{
		if (j==1) 
		{
			for (int i=1;i<=n-1;i++)
			{
				printf(" ");
			}
				printf("*");
		}
		else if ((j==n))
		{
			for (int i=1;i<=n;i++)
			printf("*");
		}
		else
		{	
			for (int i=1;i<=n-j;i++)
			{
				printf(" ");
			}
				printf("*");
			for (int i=1;i<=j-2;i++)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
