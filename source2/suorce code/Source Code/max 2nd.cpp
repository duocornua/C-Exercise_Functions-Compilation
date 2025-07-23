#include<stdio.h>
#include <stdio.h>
void SelSort(int array[],int n);
void max(int a[], int n);
int main()
{
	int array[100], n,i;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &array[i]);
	SelSort(array,n);
	max(array, n);
	return 0;
}
void SelSort(int array[], int n)
{
	int i, j, position, swap;
	for(i = 0; i < (n - 1); i++)
	{
		position=i;
		for(j = i + 1; j < n; j++)
		{
			if(array[position]>array[j])
				position=j;
		}
		if(position != i)
		{
			swap=array[i];
			array[i]=array[position];
			array[position]=swap;
		}
	}
}
void max(int a[], int n)
{
	int max = a[0], max2=0;
	for (int i = 0; i < n; i++)
	{
		if (max >= a[i])
			max = a[i];
		max2= a[i-1];
	}
	printf("%d",max2);
}

