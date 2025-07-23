/*
Input
Enter number of rows: 5
Enter number of collumns:8
Output
    ********
    *      *
    *      *
    *      *
    ********
*/


#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&m,&n);
	
	for (int i=1;i<=m;i++)
	{
		if ((i==1)||(i==m))
		{
			for(int j=1;j<=n;j++)
			{
				printf("%d",i);
			}
		}
		else 
		{
			printf("%d",i);
			for (int i=1;i<=n-2;i++)
			printf(" ");
			printf("%d",i);
		}
		printf("\n");
	}
return 0;
}
