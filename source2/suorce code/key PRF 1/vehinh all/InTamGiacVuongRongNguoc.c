#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if (i==n) printf("*");
		else if ((i==1))
		{
			for (int i=1;i<=n;i++)
			{
				printf("*");
			}
		}
		else
		{
			printf("*");
			for (int j=1;j<=n-i;j++)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
