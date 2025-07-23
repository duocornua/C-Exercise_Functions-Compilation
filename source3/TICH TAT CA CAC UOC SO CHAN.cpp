#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    int tich = 1;
    for (int i = 2; i <= n; i += 2)
    {
        if (n % i == 0)
        {
            tich *= i;
        }
    }

    printf("Tich tat ca cac uoc so chan cua %d la: %d", n, tich);

    return 0;
}
