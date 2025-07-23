#include<stdio.h>

int tham[1000];

int main()
{
	int n;
	scanf("%d",&n);
	int a[n + 1];
	for (int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int d[1000];
	for (int i=0;i<n;i++)
	{
		d[a[i]]=0;
	}
	for (int i=0;i<n;i++)
	{
		d[a[i]]+=1;
	}
	
	for (int i=0;i<n;i++)
	{
		if ( tham[a[i]] == 0) { 
			printf ("%d-%d\n",a[i],d[a[i]]);
			tham[a[i]] = 1;
		}
	}
}
