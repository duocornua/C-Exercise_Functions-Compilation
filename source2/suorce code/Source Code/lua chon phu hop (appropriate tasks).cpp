#include<stdio.h>
#include<math.h>

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
	for(i=0; i<n; i++)
	{
		printf("\na[%d]= %d",i,a[i]);
	}
}

void Even(int a[], int n)
{
	int i;
	printf("\n	Even Numbers :	");
	for (i = 0; i < n; i++)
		if (a[i]%2==0)
			printf("%d ",a[i]);
}

void Odd(int a[], int n)
{
	int i;
	printf("\n	Odd Numbers :	");
	for (i = 0; i < n; i++)
		if (a[i]%2!=0)
			printf("%d ",a[i]);
}

int CheckPrimes(int m)
{
	if (m<= 1)
	{
		return 0;
	}
	for (int j = 2; j <= m/2; j++)
	{
		if (m % j == 0)
		{
			return 0;
		}
		return 1;
	}
}

void CountPrimes(int a[], int n)
{
	int i;
	int c=0;
	int p=0;
	for(i=0; i<n; i++)
	{
		p=CheckPrimes(a[i]);
		if(p==1)
			c++;
	}
	printf("Number of primes: %d\n", c);
}

void PrintPrimes(int a[], int n)
{
    int i;
    printf("Primes: ");
    for(i=0;i<n;i++)
        if(CheckPrimes(a[i]))
            printf("%5d",a[i]);
}

void Square(int a[], int n)
{
	int i,s=0;
	for(i=0; i<n; i++)
		s+=pow(a[i],2);
	printf("Sum of squares: %d", s);
}

void Array(int a[],int n){
	int i;
    for(i=0; i<n; i++){
        printf("%d \t",a[i]);
    }
}

void SelectionSort(int a[], int n){
	int min,i;
	for(i=0; i<n-1; i++){
		min = i;
		for(int j=i+1; j<n; j++){
			if (a[j] < a[min]){
				min = j;
			}
		}
		int k = a[i];
        a[i] = a[min];
        a[min] = k;
	}
    printf("\nAfter sort:\n");    
    Array(a,n);    
}

int main()
{
	int choice, status;
	int n,a[n];
	printf("***************************************************************\n");
	printf("*     Please select the character for appropriate tasks       *\n");
	printf("*                  [1]. Question 1                            *\n");
	printf("*                  [2]. Question 2                            *\n");
	printf("*                  [3]. Question 3                            *\n");
	printf("*                  [4]. Question 4                            *\n");
	printf("*                  [5]. Question 5                            *\n");
	printf("*                  [6]. Question 6                            *\n");
	printf("*                  [7]. Exit                                  *\n");
	printf("***************************************************************\n");
	do
	{
		printf("\n\nInput a number to run its procedure: ");
		status = scanf("%d", &choice);
		while (status != 1)
		{
			char t;
			while ((t = getchar()) != '\n' && t != EOF);
			printf("\nInvalid output, please enter numbers ");
			status = scanf("%d", &choice);
		}
		if (choice == 1)
		{
			printf("\nArray's size = ");
			scanf("%d",&n);
			InArray(a,n);
		}
		if (choice == 2)
		{
			OutArray(a,n);
		}
		if (choice == 3)
		{
			Even(a, n);
			Odd(a, n);
		}
		if (choice == 4)
		{
			CountPrimes(a,n);
			PrintPrimes(a,n);
		}
		if (choice == 5)
		{
			Square(a,n);
		}
		if (choice == 6)
		{
			SelectionSort(a,n);
		}
	}
	while (choice != 7);
}
