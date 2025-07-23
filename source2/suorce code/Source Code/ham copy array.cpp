#include<stdio.h>
void InArray(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("\nA[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void OutArray(int a[], int n)
{	int i;
	for(i=0;i<n;i++)
	{
		printf("\nB[%d]= %d\n",i,a[i]);
	}
}
int main()
{
	int n;
	printf("\nArray's size = ");
	scanf("%d",&n);
	int A[n];
	printf("\nArray A:\n");
	InArray(A,n);
	printf("\nArray B:\n");
	OutArray(A,n);
	return 0;
}
