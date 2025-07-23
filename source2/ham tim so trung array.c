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

void Array(int a[], int n)
{
	int i, j;
	printf("Duplicate Number: ");
	for (i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(a[i] == a[j])
			{
				if(i==0)
					printf("%d",a[i]);
				else
					printf(", %d",a[i]);
			}
			else
				printf("None");
		}
	}
}

int main()
{
	int a[1000], i, n;
	printf("\nArray's size = ");
	scanf("%d",&n);
	InArray(a,n);
	Array(a,n);
	return 0;
}

