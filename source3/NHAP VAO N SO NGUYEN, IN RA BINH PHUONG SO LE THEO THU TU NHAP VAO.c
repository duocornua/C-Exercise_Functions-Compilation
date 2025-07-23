#include <stdio.h>

int main() {
    int n, i, x;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac so nguyen:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Binh phuong cua cac so le la:\n");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 1) {     // Kiem tra xem so co phai la so le hay khong
            printf("%d: %d\n", arr[i], arr[i] * arr[i]);
        }
    }

    return 0;
}
