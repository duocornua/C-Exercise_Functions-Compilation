#include<stdio.h>
#include <stdlib.h>
#define MAX 10000

int x[MAX],a[MAX][MAX],b[MAX][MAX],m,n,p,q;

void clear(void)
{
	while(getchar()!='\n');
}

void Introduce()
{
	printf("*******************************************************************\n");
	printf("*                Date           :       21/02/2003                *\n");
	printf("*                Student Name   :       TRAN ANH QUAN             *\n");
	printf("*                Student ID     :       HE170941                  *\n");
	printf("*******************************************************************\n");
}

void Menu()
{
	printf("*******************************************************************\n");
	printf("*         Please select the number for appropritate tasks         *\n");
	printf("*                       [1]. QUESTION 1                           *\n");
	printf("*                       [2]. QUESTION 2                           *\n");
	printf("*                       [3]. EXIT                                 *\n");
	printf("*******************************************************************\n");
}

void Menu1()
{
	printf("***************************************************************\n");
	printf("*     Please select the number for appropritate tasks         *\n");
	printf("*                    [a]. Input Arrays                        *\n");
	printf("*                    [b]. Print Arrays                        *\n");
	printf("*                    [c]. Selection Sort                      *\n");
	printf("*                    [d]. Bubble Sort                         *\n");
	printf("*                    [e]. Binary Search                       *\n");
	printf("*                    [B]. Back                                *\n");
	printf("***************************************************************\n");
}

void Menu2()
{
	printf("***************************************************************\n");
	printf("*     Please select the number for appropritate tasks         *\n");
	printf("*                    [a]. Input Arrays                        *\n");
	printf("*                    [b]. Print Arrays                        *\n");
	printf("*                    [c]. Add Arrays                          *\n");
	printf("*                    [d]. Multiply Arrays                     *\n");
	printf("*                    [B]. Back                                *\n");
	printf("***************************************************************\n");
}

void Arraya()
{
	int i;
	printf("\nArray's size = ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("\na[%d]= ",i);
		scanf("%d",&x[i]);
	}
}

void Array_1(int x[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("\na[%d]= %d",i,x[i]);
	}
	printf("\nArray: {   ");
	for(i=0; i<n; i++)
	{
		printf("%d   ",x[i]);
	}
	printf("}");
	printf("\n");
}

void SwapArray(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void Array_2(int x[])
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", x[i]);
	}
	printf("\n");
}

void SelectionSort()
{
	int i, j;
	int y[MAX];
	for (i = 0; i < n; i++)
	{
		y[i] = x[i];
	}
	printf("Sort array by using Selection Sort\n");
	for (i = 0; i < n - 1; i++)
	{
		int z = 0;
		for (j = i + 1; j < n; j++)
		{
			if (y[j] < y[i])
			{
				SwapArray(&y[j], &y[i]);
				z = 1;
			}
		}
		if(z == 0)
		{
			break;
		}
		printf("\n\tStep %d\n", i + 1);
		Array_2(y);
	}
}

void BubbleSort()
{
	int i, j;
	int y[MAX];
	for (i = 0; i < n; i++)
	{
		y[i] = x[i];
	}
	printf("Sort array by using Bubble Sort\n");
	for (i = n - 1; i >= 0; i--)
	{
		int z = 0;
		for (j = 0; j < i; j++)
		{
			if (x[j] > x[j + 1])
			{
				SwapArray(&x[j + 1], &x[j]);
				z = 1;
			}
		}
		if(z == 0)
		{
			break;
		}
		printf("\n\tStep %d\n", n - i);
		Array_2(x);
	}
}

void BinarySearch()
{
	int y;
	printf("Value of number to be searched: ");
	scanf("%d", &y);
	int z=-1, i, l=0,h= n-1;
	do
	{
		i=(l+h+1)/2;
		if(y<x[i])
			h=i-1;
		else if(y>x[i])
			l=i+1;
		else
			z=i;
	}
	while (z==-1 && l<=h);
	if (z == -1)
		printf("Value dont exist in array!\n");
	else
		printf("Position of %d is in %d\n",y, z);
}

void ArrayA()
{
	int i,j;
	printf("\nRows of 1st array = ");
	scanf("%d",&m);
	printf("\nColumns of 1st array = ");
	scanf("%d",&n);
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("\na[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void ArrayB()
{
	int i,j;
	printf("\nRows of 2nd array = ");
	scanf("%d",&p);
	printf("\nColumns of 2nd array = ");
	scanf("%d",&q);
	for(i=0; i<p; i++)
	{
		for(j=0; j<q; j++)
		{
			printf("\nb[%d][%d]= ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
}

void Array_3(int c[MAX][MAX], int x, int y)
{
	int i, j;
	for(i = 0; i < x; i++)
	{
		for(j = 0; j < y; j++)
		{
			printf("%5d", c[i][j]);
		}
		printf("\n");
	}
}

void AddArrays()
{
	int i,j;
	if(m!= p || n != q)
	{
		printf("Can't not add 2 arrays! Please enter valid rows & column of 2 arrays!\n");
		return;
	}
	printf("Sum of 2 arrays: \n");
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%5d", a[i][j] + b[i][j]);
		}
		printf("\n");
	}
}

void MultiplyArrays()
{
	if(n != m)
	{
		printf("Can't not multiply 2 arrays! Please enter valid rows & column of 2 arrays!\n");
		return;
	}
	printf("Multiplication of arrays:\n");
	int i, j, k;
	for (i = 0; i < m; i++)
	{
		for(j = 0; j < q; j++)
		{
			int result = 0;
			for (k = 0; k < n; k++) result+= a[i][k] * b[k][j];
			printf("%5d", result);
		}
		printf("\n");
	}
	printf("\n");
}

void Question_1()
{

	char subchoose;
	do
	{
		Menu1();
		printf("\t\tRequest: ");
		char t;
		while ((t = getchar()) != '\n' && t != EOF);
		scanf("%c", &subchoose);
		if (subchoose == 'a')
		{
			Arraya();
		}
		if (subchoose == 'b')
		{
			Array_1(x,n);
		}
		if (subchoose == 'c')
		{
			SelectionSort();
		}
		if (subchoose == 'd')
		{
			BubbleSort();
		}
		if (subchoose == 'e')
		{
			BinarySearch();
		}
	}
	while (subchoose != 'B');
}

void Question_2()
{

	char subchoose;
	do
	{
		Menu2();
		printf("\t\tRequest: ");
		char t;
		while ((t = getchar()) != '\n' && t != EOF);
		scanf("%c", &subchoose);
		if (subchoose == 'a')
		{
			ArrayA();
			ArrayB();
		}
		if (subchoose == 'b')
		{
			printf("Array A: \n");
			Array_3(a,m,n);
			printf("Array B: \n");
			Array_3(b,p,q);
		}
		if (subchoose == 'c')
		{
			AddArrays();
		}
		if (subchoose == 'd')
		{
			MultiplyArrays();
		}
	}
	while (subchoose != 'B');
}

int main()
{
	Introduce();
	int choose, status;
	do
	{
		Menu();
		printf("\t\t\t Task: ");
		status = scanf("%d", &choose);
		while (status != 1)
		{
			char t;
			while ((t = getchar()) != '\n' && t != EOF);
			printf("\nError! Please enter valid numbers! ");
			status = scanf("%d", &choose);
		}
		if (choose == 1)
		{
			Question_1();
		}
		if (choose == 2)
		{
			Question_2();
		}
	}
	while (choose != 3);
}
