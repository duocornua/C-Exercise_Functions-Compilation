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

int timViTriAmDau(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            return i;
        }
    }
    return -1;
}

float timAmLonNhat(float a[], int n, int viTriAmDau)
{
    float amMax = a[viTriAmDau];

    for (int i = viTriAmDau + 1; i < n; i++)
    {
        if (a[i] < 0 && a[i] > amMax)
        {
            amMax = a[i];
        }
    }
    return amMax;
}

int main()
{
    int n;
    float a[MAX];

    nhap(a, &n);
    xuat(a, n);
    int viTriAmDau = timViTriAmDau(a, n);
    if(viTriAmDau == -1)
    {
        printf("\nMang khong co so am");
    }
    else
    {
        float amMax = timAmLonNhat(a, n, viTriAmDau);
        printf("\nSo am lon nhat la: %.3f", amMax);
    }

    getch();
    return 0;
}
