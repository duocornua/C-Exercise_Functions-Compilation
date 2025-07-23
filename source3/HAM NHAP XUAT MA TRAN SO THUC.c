#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

void NhapMang(float a[][MAX], int *dong, int *cot)
{
    //Nh?p s? dòng
    do
    {
        printf("\nNhap vao so dong: ");
        scanf("%d", dong);

        if (*dong < 1 || *dong > MAX)
        {
            printf("\nSo dong khong hop le. Xin kiem tra lai!");
        }

    } while (*dong < 1 || *dong > MAX);

    //Nh?p s? c?t
    do
    {
        printf("\nNhap vao so cot: ");
        scanf("%d", cot);

        if (*cot < 1 || *cot > MAX)
        {
            printf("\nSo cot khong hop le. Xin kiem tra lai!");

        }

    } while (*cot < 1 || *cot > MAX);

    //Nh?p giá tr? cho t?ng ph?n t? trong ma tr?n
    for (int i = 0; i < *dong; i++)
    {
        for (int j = 0; j < *cot; j++)
        {
            float temp;
            printf("\nNhap a[%d][%d] = ", i, j);
            scanf("%f", &temp);
            a[i][j] = temp;
        }
    }
}

void XuatMang(float a[][MAX], int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            printf("%8.3f", a[i][j]);
        }
        printf("\n\n");
    }
}

int main(void)
{
    float a[MAX][MAX];
    int dong, cot;
    NhapMang(a, &dong, &cot);
    XuatMang(a, dong, cot);
    system("pause");
    return 0;
}
