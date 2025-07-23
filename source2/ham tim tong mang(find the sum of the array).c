#include <stdio.h>

void InArray(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("\na[%d]= ",i);
		scanf("%d",&a[i]);
	}
}

void OutArray(int a[], int n)
{
	int i;
	printf("\nSum =");
	for(i=0; i<n; i++)
	{
		if(i==0)
			printf("  %d",a[i]);
		else
			printf(" + %d",a[i]);
	}
}

int S(int a[], int n)
{
	int sum = 0;
	int i;
	for( i= 0; i<n; i++)
		sum+=a[i];
	return sum;
}

int main()
{
	int n;
	int a[1000];
	printf("\nArray's size = ");
	scanf("%d",&n);
	InArray(a,n);
	printf("Input:\n");
	OutArray(a,n);
	printf(" = %d",S(a,n));
	getchar();
}
