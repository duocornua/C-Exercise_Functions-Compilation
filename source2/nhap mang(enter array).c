#include<stdio.h>
void InArray(int a[], int kt)
{	int i;
	for(i=0;i<kt;i++)
	{	printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
int main()
{
	int kt;
	printf("kt = ");
	scanf("%d",&kt);
	int A[kt];
	InArray(A,kt);
	return 0;
}
