#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;

	for (int i=2;i<=n+1;i++)
	{
		for (int j=1;j<(2*i-1)/2;j++)
		{
			printf("%c",65+j-1);
		}
		for (int j=(2*i-1)/2;j>=1;j--)
		{
			printf("%c",65+j-1);
		}
		printf("\n");
    }
}
