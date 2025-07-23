#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    getchar();
    for (int i = 0; i < *n; i++)
    {
        char buffer[MAX];
        printf("\nNhap a[%d]: ", i);
        fgets(buffer, MAX, stdin);
        sscanf(buffer, "%d", &a[i]);
    }
}

void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}

void HoanVi(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SapXep(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                HoanVi(&a[i], &a[j]);
            }
        }
    }
}

void Tron2MangTangThanh1MangGiam(int a[], int b[], int c[], int na, int nb, int *nc)
{
    *nc = na + nb;
    SapXep(a, na);
    SapXep(b, nb);
    int vitriA = na - 1, vitriB = nb - 1;
    for (int i = 0; i < *nc; i++)
    {
        if (vitriA >= 0 && vitriB >= 0)
        {
            if (a[vitriA] > b[vitriB])
            {
                c[i] = a[vitriA--];
            }
            else
            {
                c[i] = b[vitriB--];
            }
        }
        else if (vitriB < 0)
        {
            c[i] = a[vitriA--];
        }
        else
        {
            c[i] = b[vitriB--];
        }
    }
}

int main()
{
    int na, nb, nc;
    int a[MAX], b[MAX], c[MAX];

    printf("Nhap mang a:\n");
    nhap(a, &na);
    printf("Mang a: ");
    xuat(a, na);

    printf("\nNhap mang b:\n");
    nhap(b, &nb);
    printf("Mang b: ");
    xuat(b, nb);

    Tron2MangTangThanh1MangGiam(a, b, c, na, nb, &nc);
    printf("\nMang sau khi tron 2 mang : ");
    xuat(c, nc);

    getchar();
    return 0;
}
