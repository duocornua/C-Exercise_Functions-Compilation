#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n, i, j;
	scanf("%d", &n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		for (int j=1;j<=n-i+1;j++)
		{
		printf("%c",65+j-1);
		}
		for (int j=n-i;j>=1;j--)
		{
			printf("%c",65+j-1);
		}			
		printf("\n");
	}
}
