#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[100], n, insert = 0, i;
	printf("Phan mem nay se xoa phan tu chan trong day cua ban.");
	printf("Nhap day cua ban, nhap 0 de ket thuc nhap:\n");
	for (i = 0; i < INT_MAX; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
		if (a[i] == 0)
			break;
	}
	n = i;
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			for (int j = i; j <= n; j++)
			{
				a[j] = a[1 + j];
			}
			n--;
			i--;//thieu dong nay thi no deo chay dung chu co lam sao :)
		}
	}

	printf("\nDay moi cua ban la\n");
	for (i = 0; i < n; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	printf("\n=================================\n");
	system("pause");
}
