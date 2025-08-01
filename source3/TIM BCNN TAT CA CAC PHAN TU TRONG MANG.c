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

int TimSoLonNhat(int a[], int n)
{
    int max = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];  //max = (max>A[i]) ? max : A[i];
        }
    }
    return max;
}

int TimBoiChungNhoNhat(int a[], int n)
{
    int BoiSo = TimSoLonNhat(a, n); 
    for(int i = 0; i < n; i++)
    {
        if(BoiSo % a[i] != 0)
        {
            BoiSo += TimSoLonNhat(a, n);
            i = -1;     // reset l?i i
        } 
    }
    return BoiSo;
}

int main()
{
    int n;
    int a[MAX];

    nhap(a, &n);
    xuat(a, n);

    int Kq = TimBoiChungNhoNhat(a, n);
    printf("\nBoi chung nho nhat cua mang la %d", Kq);

    getchar();
    return 0;
}
