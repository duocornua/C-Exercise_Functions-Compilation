#include <stdio.h>

#define MAX 100

void binhPhuongChan(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            a[i] = a[i] * a[i];
        }
    }
}

void nhapMang(int a[], int *n)
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

void xuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n;
    int a[MAX];

    nhapMang(a, &n);
    printf("\nMang ban dau: ");
    xuatMang(a, n);

    binhPhuongChan(a, n);
    printf("\nMang sau khi binh phuong cac so chan: ");
    xuatMang(a, n);

    return 0;
}
