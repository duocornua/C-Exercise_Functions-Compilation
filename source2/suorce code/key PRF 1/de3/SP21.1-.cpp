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
	int d[1000];
	for (int i=0;i<n;i++)
	{
		d[a[i]]=0;
	}
	for (int i=0;i<n;i++)
	{
		d[a[i]]+=1;
	}
	int max=-1;
	for (int i=0;i<n;i++)
	{
		if ((d[a[i]]>=max && a[i]>=100 && a[i]<=999))
		{
			max=d[a[i]];
		}
	}
	for (int i=0;i<n;i++)
	{
		if ((d[a[i]]==max && a[i]>=100 && a[i]<=999))
		{
			printf("%d",a[i]);
			return 0;
		}
	}
	printf("No three-digit number");
}
		
		
		
		
