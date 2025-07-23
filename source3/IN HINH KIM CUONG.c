#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Nhap chieu cao cua hinh kim cuong: ");
    scanf("%d", &n);

    // In ph?n tr�n c?a h�nh kim cuong
    for (i = 1; i <= n; i++) {
        // In kho?ng tr?ng
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // In k� t? '*'
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // In ph?n du?i c?a h�nh kim cuong
    for (i = n - 1; i >= 1; i--) {
        // In kho?ng tr?ng
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // In k� t? '*'
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
