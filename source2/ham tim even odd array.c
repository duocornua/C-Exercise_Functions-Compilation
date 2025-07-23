#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Nh?p các ph?n t? c?a m?ng
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        printf("\na[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Tìm s? ch?n và s? l? trong m?ng
    printf("Even numbers: ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd numbers: ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

