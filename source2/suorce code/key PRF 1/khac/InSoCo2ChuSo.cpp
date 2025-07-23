#include<stdio.h>
bool tham[1000];
int main()
{
	int a[7];
	for (int i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
		int d[1000];
		int max=-1;
	for (int i=0;i<7;i++)
	{
		d[a[i]]=0;
	}
	for (int i=0;i<7;i++)
	{
		d[a[i]]+=1;
	}
	bool kq=false;
	for (int i=0;i<7;i++)
	{
		if (d[a[i]]>max && a[i]>=10 && a[i]<100) 
		{
			max=d[a[i]];
		}	
	}
	for (int i=0;i<7;i++)
	{
		if (d[a[i]]==max && a[i]>=10 && a[i]<100 && tham[a[i]]==false) 
		{
			printf("%d ",a[i]);
			tham[a[i]]=true;
			kq=true;
		}
	}
	if (kq==false) printf("no two-digit number");	
}
	
