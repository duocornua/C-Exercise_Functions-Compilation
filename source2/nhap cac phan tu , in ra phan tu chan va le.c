#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Cac phan tu chan la:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d\n", arr[i]);
        }
    }

    printf("Cac phan tu le la:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}

