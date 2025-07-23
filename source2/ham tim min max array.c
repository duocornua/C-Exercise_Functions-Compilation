#include <stdio.h>

void InArray(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\na[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
int max(int a[], int n)
{	
	int i;
	int max = a[0];
	for (i = 0; i < n; i++)
		if (max < a[i])
			max = a[i];
	return max;
}

int min(int a[], int n)
{
	int i;
	int min = a[0];
	for (i = 0; i < n; i++)
		if (min > a[i])
			min = a[i];
	return min;
}
int main()
{
	int a[1000];
	int n;
	printf("\nArray's size = ");
	scanf("%d", &n);
	InArray(a, n);
	printf("\nMax = %d", max(a, n));
	printf("\nMin = %d", min(a, n));
	return 0;
}
