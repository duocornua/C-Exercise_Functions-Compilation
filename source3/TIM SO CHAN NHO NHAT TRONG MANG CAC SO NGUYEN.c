#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap(int a[], int *n)
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
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}

int timViTriChanDau(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            return i;
        }
    }
    return -1;
}

int timChanNhoNhat(int a[], int n, int viTriChanDau)
{
    int chanMin = a[viTriChanDau];
    for(int i = viTriChanDau + 1; i < n; i++)
    {
        if(a[i] % 2 == 0 && a[i] < chanMin)
        {
            chanMin = a[i];
        }
    }
    return chanMin;
}

int main()
{
    int n;
    int a[MAX];

    nhap(a, &n);
    xuat(a, n);

    int viTriChanDau = timViTriChanDau(a, n);

    if(viTriChanDau == -1)
    {
        printf("\nMang khong co so chan");
    }
    else
    {
        int chanMin = timChanNhoNhat(a, n, viTriChanDau);
        printf("\nGia tri chan be nhat la %d", chanMin);
    }

    getch();
    return 0;
}
