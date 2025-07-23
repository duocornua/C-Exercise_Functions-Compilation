#include<stdio.h>
#include<math.h>

#define MAX 100

void nhap (int a[], int *n)
{
    do
    {
        printf("\nNhap so phan tu: ");
        scanf("%d", n);
        if(*n <= 0 || *n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }while(*n <= 0 || *n > MAX);

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
        printf("%8d", a[i]);
    }
}

void DemChuSo(int a[], int n, int b[])
{
    // Duy?t m?ng a
    for (int i = 0; i < n; i++)
    {
        int themang = abs(a[i]);
        while (themang != 0)
        {
            int ChuSo = themang % 10;
            themang /= 10;

            b[ChuSo]++;
        }
    }
}

int TimChuSoXuatItNhat(int a[], int n, int b[])
{
    int ChuSoMin = abs(a[0] % 10);
    for (int i = 0; i < 10 ; i++)
    {
        if (b[i] != 0)
        {
            ChuSoMin = (b[ChuSoMin] < b[i]) ? ChuSoMin : i;
        }
    }
    return ChuSoMin;
}

int main()
{
    int n;
    int a[MAX];

    nhap(a, &n);
    xuat(a, n);

    int b[10] = {0};
    DemChuSo(a, n, b);

    int ChuSoMin = TimChuSoXuatItNhat(a, n, b);

    printf ("\nChu so xuat hien it nhat la %d, xuat hien %d lan\n", ChuSoMin, b[ChuSoMin]);
    printf("Cac so xuat hien it nhat la: ");

    for (int i = 0; i < 10; i++)
    {
        // Ch? xét nh?ng ch? s? có s? l?n xu?t hi?n > 0
        if (b[i] == b[ChuSoMin])
        {
            printf("%d (%d lan) ", i, b[i]);
        }
    }

    getchar();
    return 0;
}


/////
#include<stdio.h>
#include<math.h>

#define MAX 100

void nhap (int a[], int *n)
{
    do
    {
        printf("\nNhap so phan tu: ");
        scanf("%d", n);
        if(*n <= 0 || *n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }while(*n <= 0 || *n > MAX);

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
        printf("%8d", a[i]);
    }
}

void DemChuSo(int a[], int n, int b[])
{
    // Duy?t m?ng a
    for (int i = 0; i < n; i++)
    {
        int themang = abs(a[i]);
        while (themang != 0)
        {
            int ChuSo = themang % 10;
            themang /= 10;

            b[ChuSo]++;
        }
    }
}

int TimChuSoXuatItNhat(int a[], int n, int b[])
{
    int ChuSoMin = abs(a[0] % 10);
    for (int i = 0; i < 10 ; i++)
    {
        if (b[i] != 0)
        {
            ChuSoMin = (b[ChuSoMin] < b[i]) ? ChuSoMin : i;
        }
    }
    return ChuSoMin;
}

int main()
{
    int n;
    int a[MAX];

    nhap(a, &n);
    xuat(a, n);

    int b[10] = {0};
    DemChuSo(a, n, b);
    for (int i = 0; i < 10; i++)
    {
        // Ch? xét nh?ng ch? s? có s? l?n xu?t hi?n > 0
        if (b[i] != 0)
        {
            printf("\nChu so %d xuat hien %d lan", i, b[i]);

        }
    }

    int ChuSoMin = TimChuSoXuatItNhat(a, n, b);
    printf ("\nChu so xuat hien it nhat la %d",ChuSoMin);

    getchar();
    return 0;
}
