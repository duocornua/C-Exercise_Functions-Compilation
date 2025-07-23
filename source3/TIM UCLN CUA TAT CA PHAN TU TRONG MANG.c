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

int timSoNhoNhat(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

bool kiemTraUocSoChung(int a[], int n, int uocSo)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % uocSo != 0)
        {
            return false;
        }
    }
    return true;
}

int timUocSoLonNhatCuaMang(int a[], int n)
{
    for (int uocSo = timSoNhoNhat(a, n); uocSo >= 1; uocSo--)
    {
        if (kiemTraUocSoChung(a, n, uocSo) == true)
        {
            return uocSo;
        }
    }
    return 1;
}

int main()
{
    int n;
    int a[MAX];

    nhap(a, &n);
    xuat(a, n);

    int kq = timUocSoLonNhatCuaMang(a, n);
    printf("\nUoc So chung lon nhat cua mang la %d", kq);

    getch();
    return 0;
}

