#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int v,p;
	scanf("%d%d",&v,&p);
	for (int i=n-1;i>=p;i--)
	{
		a[i+1]=a[i];
	}
	a[p]=v;
	for (int i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
}
		
		
