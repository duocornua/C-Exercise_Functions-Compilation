#include<stdio.h>
int main()
{
	float a[5];
	for (int i=0;i<5;i++)
	{
		scanf("%f",&a[i]);
	}
	for (int i=0;i<5;i++)
	{
		for (int j=i+1;j<5;j++)
		{
			if (a[i]>a[j])
			{
				float t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for (int i=0;i<5-1;i++){
	printf("%.3f>",a[i]);}
	printf("%.3f",a[5-1]);
}
