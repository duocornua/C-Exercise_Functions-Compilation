#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if (i==1) printf(" * ");
		else if ((i==n))
		{
			for (int i=1;i<=n;i++)
			{
				printf(" * ");
			}
		}
		else
		{
			printf(" * ");
			for (int j=1;j<=i;j++)
			{
				printf("  ");
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
