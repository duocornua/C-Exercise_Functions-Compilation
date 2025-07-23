#include <stdio.h>
#include <conio.h>
#include <math.h>

#define MAX 100

void nhap(long long int a[], long long int *n)
{
    do
    {
        printf("\nNhap so phan tu: ");
        scanf("%lld", n);
        if (*n <= 0 || *n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    } while (*n <= 0 || *n > MAX);

    for (long long int i = 0; i < *n; i++)
    {
        printf("\nNhap a[%lld]: ", i);
        scanf("%lld", &a[i]);
    }
}

void xuat(long long int a[], long long int n)
{
    for (long long int i = 0; i < n; i++)
    {
        printf("%4lld", a[i]);
    }
}

int KiemTraNguyenTo(long long int n)
{
    if (n < 2)
    {
        return 0;
    }
    else if (n > 2)
    {
        if (n % 2 == 0)
        {
            return 0;
        }
        for (long long int i = 3; i <= sqrt((float)n); i += 2)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

float TinhTBCongNguyenTo(long long int a[], long long int n)
{
    long long int Tong = 0;
    float dem = 0;
    for (long long int i = 0; i < n; i++)
    {
        if (KiemTraNguyenTo(a[i]) == 1)
        {
            Tong += a[i];
            dem++;
        }
    }
    if (dem == 0)
    {
        printf("\nMang khong co so nguyen to");
        return -1; // tr? v? giá tr? -1 d? d?i di?n cho tru?ng h?p m?ng không có s? nguyên t?
    }
    return Tong / dem;
}

int main()
{
    long long int n;
    long long int a[MAX];

    nhap(a, &n);
    xuat(a, n);

    float TBC = TinhTBCongNguyenTo(a, n);
    if (TBC != -1)
    {
        printf("\nTrung binh cong cac so nguyen to = %.3f", TBC);
    }

    getch();
    return 0;
}
