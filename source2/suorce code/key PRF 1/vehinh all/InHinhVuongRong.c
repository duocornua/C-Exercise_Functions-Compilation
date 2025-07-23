/*
Input
Enter number of rows: 5
Output
    * * * * *
    *       *
    *       *
    *       *
    * * * * *
*/


#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		if ((i==1)||(i==n))
		{
			for(int j=1;j<=n;j++)
			{
				printf("* ");
			}
		}
		else 
		{
			printf("* ");
			for (int i=1;i<=n-2;i++)
			printf("  ");
			printf("* ");
		}
		printf("\n");
	}
return 0;
}
