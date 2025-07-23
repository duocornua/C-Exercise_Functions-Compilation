#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>
#define MAX 100

void NhapMang(int a[][MAX], int *dong, int *cot)
{
    //Nh?p s? dòng
    do
    {
        printf("\nNhap vao so dong: ");
        scanf("%d", dong);

        if (*dong < 1 || *dong > MAX)
        {
            printf("\nSo dong khong hop le. Xin kiem tra lai!");
        }

    } while (*dong < 1 || *dong > MAX);

    //Nh?p s? c?t
    do
    {
        printf("\nNhap vao so cot: ");
        scanf("%d", cot);

        if (*cot < 1 || *cot > MAX)
        {
            printf("\nSo cot khong hop le. Xin kiem tra lai!");

        }

    } while (*cot < 1 || *cot > MAX);

    //Nh?p giá tr? cho t?ng ph?n t? trong ma tr?n
    for (int i = 0; i < *dong; i++)
    {
        for (int j = 0; j < *cot; j++)
        {
            printf("\nNhap a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void XuatMang(int a[][MAX], int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n\n");
    }
}

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int DemSoNguyenToTrongMaTran(int a[][MAX], int dong, int cot)
{
    int dem = 0;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (isPrime(a[i][j]))
            {
                dem++;
            }
        }
    }
    return dem;
}

int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, &dong, &cot);
    XuatMang(a, dong, cot);

    int dem = DemSoNguyenToTrongMaTran(a, dong, cot);
    printf("\nSo luong so nguyen to trong ma tran = %d", dem);
    getch();
    return 0;
}
