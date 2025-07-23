#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap(float a[], int *n)
{
    do
    {
        printf("\nNhap so phan tu: ");
        scanf("%d", n);
        if(*n <= 0 || *n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    } while(*n <= 0 || *n > MAX);

    for(int i = 0; i < *n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}

void xuat(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%8.3f", a[i]);
    }
}

void taoMang(float a[], int n, float b[], float x)
{
    for(int i = 0; i < n; i++)
    {
        b[i] = fabs(x - a[i]);
    }
}

float timMin(float b[], int n)
{
    float min = b[0];
    for (int i = 1; i < n; i++)
    {
        if (b[i] < min)
        {
            min = b[i];
        }
    }
    return min;
}

void xuatKetQua(float a[], float b[], int n)
{
    printf("\nGia tri trong mang gan gia tri x nhat la: ");
    float min = timMin(b, n);
    for (int i = 0; i < n; i++)
    {
        if (b[i] == min)    
        {
            printf("%8.3f", a[i]);
        }
    }
}

int main()
{
    int n;
    float a[MAX];
    float b[MAX];

    nhap(a, &n);
    xuat(a, n);

    float x;
    printf("\nNhap vao gia tri x: ");
    scanf("%f", &x);

    taoMang(a, n, b, x);
    printf("\nKhoang cach tu x = %.3f den cac phan tu trong mang la:\n", x);
    xuat(b, n);

    xuatKetQua(a, b, n);

    getch();
    return 0;
}
