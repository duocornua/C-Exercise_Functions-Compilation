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
    for(int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}

void duaChanVeDau(int a[], int ViTriDoi)
{
    int tam = a[ViTriDoi];           
    for(int i = ViTriDoi; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = tam;
}

void dua0VaoGiua(int a[], int ViTriDoi, int ViTriChanCuoi)
{
    for(int i = ViTriDoi; i > ViTriChanCuoi; i--)
    {
        a[i] = a[i - 1];        
    }
    a[ViTriChanCuoi] = 0;
}

void duaChanVeDauLeVeCuoi0NamGiuaMang(int a[], int n)
{
    int i, dem;
    int ViTriChanCuoi = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0 && a[i] != 0)
        {
            duaChanVeDau(a, i);
        }
    }
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            ViTriChanCuoi = i;
            break;
        }
    }
    for(i; i < n; i++) 
    {
        if(a[i] == 0)
        {
            dua0VaoGiua(a, i, ViTriChanCuoi);
        }
    }
}

int main(void)
{
    int n;
    int a[MAX];

    nhap(a, &n);
    xuat(a, n);
    duaChanVeDauLeVeCuoi0NamGiuaMang(a, n);
    printf("\nDua chan ve dau, le ve cuoi, 0 nam giua mang: ");
    xuat(a, n);

    getch();
    return 0;
}
