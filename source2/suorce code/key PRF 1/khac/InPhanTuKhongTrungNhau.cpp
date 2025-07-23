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
	int d[100000];
	for (int i=0;i<n;i++)
	{
		d[a[i]]+=1;
	}
	for (int i=0;i<n;i++)
	{
		if (d[a[i]]==1) printf("%d",a[i]);
	}
return 0;
}
