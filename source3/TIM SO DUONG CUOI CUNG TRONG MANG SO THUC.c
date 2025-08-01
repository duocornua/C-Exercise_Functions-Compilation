#include<stdio.h>
#include<conio.h>
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

float timDuongCuoiCung(float a[], int n)
{
    for(int i = n - 1; i >= 0; i--)
    {
        if(a[i] > 0)
        {
            return a[i];
        }
    }
    return -1;
}

int main()
{
    int n;
    float a[MAX];

    nhap(a, &n);
    xuat(a, n);

    float duongCuoi = timDuongCuoiCung(a, n);
    if(duongCuoi == -1)
    {
        printf("\nMang khong co so duong");
    }
    else
    {
        printf("\nGia tri duong cuoi cung la %.3f", duongCuoi);
    }

    getch();
    return 0;
}
