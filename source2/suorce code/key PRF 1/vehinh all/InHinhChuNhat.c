/*
Input
Enter number of rows: 5
Enter number of collumns:5
Output
    *****
	*****
    *****
    *****
    *****
    *****
*/
#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	
	
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			printf("* ");
		}
		
		printf("\n");
	}
}
