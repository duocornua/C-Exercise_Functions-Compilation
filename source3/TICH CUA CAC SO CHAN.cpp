#include <stdio.h>

int main() {
    int arr[100];
    int n;
    long long product = 1;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            product *= arr[i];
        }
    }

    printf("Tich cua cac so chan trong mang: %lld", product);

    return 0;
}
