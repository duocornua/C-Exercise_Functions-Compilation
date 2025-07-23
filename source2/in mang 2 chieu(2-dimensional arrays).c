#include<stdio.h>

int main()
{
	int n,m;
	printf("\nNhap so hang = ");
	scanf("%d",&n);
	printf("\nNhap so cot = ");
	scanf("%d",&m);
	int i,j;
	int a[n][m];
	for(i=0; i<n; i++)
	{
		for(j=0;j<m;j++)
		{	
			printf("\na[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{	
			printf("%5d",a[i][j]);
		}
			printf("\n");
	}
	return 0;
}

