/*
Input
Enter number of rows: 5
		*
		**
		***
		****
		*****
Output  
*/

#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	printf("\n");
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
    }
}
