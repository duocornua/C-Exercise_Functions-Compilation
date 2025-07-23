#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

#define MAX 100

void nhap(int a[], int *n)
{
    do
    {
        printf("\nNhap so phan tu: ");
        scanf("%d", n);
        if (*n <= 0 || *n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    } while (*n <= 0 || *n > MAX);

    for (int i = 0; i < *n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}

bool kiemTraNguyenTo(int n)
{
    if (n < 2)
    {
        return false;
    }
    else if (n > 2)
    {
        if (n % 2 == 0)
        {
            return false;
        }
        for (int i = 3; i <= sqrt((float)n); i += 2)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

int timSoNguyenToCuoi(int a[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (kiemTraNguyenTo(a[i]) == true)
        {
            return a[i];
        }
    }
    return -1;
}

int main()
{
    int n;
    int a[MAX];

    nhap(a, &n);
    xuat(a, n);

    int nguyenToCuoi = timSoNguyenToCuoi(a, n);
    if (nguyenToCuoi == -1)
    {
        printf("\nMang khong co so nguyen to");
    }
    else
    {
        printf("\nSo nguyen to cuoi cung la %d", nguyenToCuoi);
    }

    getch();
    return 0;
}
