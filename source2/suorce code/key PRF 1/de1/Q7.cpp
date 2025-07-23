#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n + 1];
	for (int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int k;
	scanf("%d",&k);
	for (int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
			{
				if (a[i]+a[j]==k)
				{
					printf("%d\n%d\n",i,j);
					return 0;
				}
			}
	}
}
			
