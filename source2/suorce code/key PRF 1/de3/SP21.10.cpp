#include<stdio.h>
bool tham[1000];
int main()
{
	int n;
	int b[1000];
	int count;
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
	int max=-1,k;
	bool kq=true;
	for (int i=0;i<n;i++)
	{
		if ((d[a[i]]>=max && a[i]>=100 && a[i]<=999))
		{
			max=d[a[i]];
		}
	}
	for (int i=0;i<n;i++)
	{
		if (d[a[i]]==max && a[i]>=100 && a[i]<=999 && tham[a[i]]==false)
		{
			b[count++]=a[i];
			tham[a[i]]=true;
		}
	}	
	for (int i=0;i<count;i++)
		{
		for (int j=i+1;j<count;j++)
			{	if (b[i]>b[j])
				{
				int t=b[i];
				b[i]=b[j];
				b[j]=t;
				}
			}
		}
	for (int i=0;i<count;i++)
	{
		{	
			printf("%d ",b[i]);
			kq=false;
		}
	}
	if (kq==true) printf("No three-digit number");
}
		
		
		
		
