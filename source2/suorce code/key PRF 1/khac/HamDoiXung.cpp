#include<stdio.h>
int isSymatric(int a[],int size)
{
	for (int i=0;i<size/2;i++)
	{
		if (a[i]!=a[size-1-i])
		return 0;
	}
	return 1;
}
int main()
{
	int n;
	while (n<=0||n>=20){
	fflush(stdin);
	scanf("%d",&n);}
	int a[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
		printf("%d",isSymatric(a,n));
	
}
