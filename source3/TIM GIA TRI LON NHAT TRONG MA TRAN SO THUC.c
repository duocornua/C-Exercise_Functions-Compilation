#include <stdio.h>

#include <math.h>
#define MAX_SIZE 100
#include <conio.h>
void NhapMang(int a[][MAX_SIZE], int *dong, int *cot)
{
   
    do
    {
        printf("\nNhap vao so dong: ");
        scanf("%d", dong);

        if (*dong < 1 || *dong > MAX_SIZE)
        {
            printf("\nSo dong khong hop le. Xin kiem tra lai!");
        }

    } while (*dong < 1 || *dong > MAX_SIZE);

    
    do
    {
        printf("\nNhap vao so cot: ");
        scanf("%d", cot);

        if (*cot < 1 || *cot > MAX_SIZE)
        {
            printf("\nSo cot khong hop le. Xin kiem tra lai!");

        }

    } while (*cot < 1 || *cot > MAX_SIZE);

   
    for (int i = 0; i < *dong; i++)
    {
        for (int j = 0; j < *cot; j++)
        {
            double temp;
            printf("\nNhap a[%d][%d] = ", i, j);
            scanf("%lf", &temp);
            a[i][j] = temp;
        }
    }
}

void XuatMang(double a[][MAX_SIZE], int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            printf("%8.3lf", a[i][j]);
        }
        printf("\n\n");
    }
}

double TimMax(double a[][MAX_SIZE], int dong, int cot)
{
    double Max = a[0][0];
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (a[i][j] > Max)
            {
                Max = a[i][j];
            }
        }
    }
    return Max;
}

int main(void)
{
    double a[MAX_SIZE][MAX_SIZE];
    int dong, cot;
    NhapMang(a, &dong, &cot);
    XuatMang(a, dong, cot);

    double max = TimMax(a, dong, cot);
    printf("\nPhan tu lon nhat trong ma tran = %lf", max);

    getch();
    return 0;
}
