#include <stdio.h>

int main() {
    int arr[100];
    int positive_numbers[100], negative_numbers[100];
    int n, i;
    int count_positive = 0, count_negative = 0;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            positive_numbers[count_positive] = arr[i];
            count_positive++;
        } else if (arr[i] < 0) {
            negative_numbers[count_negative] = arr[i];
            count_negative++;
        }
    }

    printf("Danh sach cac so duong trong mang la:\n");
    for (i = 0; i < count_positive; i++) {
        printf("%d ", positive_numbers[i]);
    }

    printf("\nDanh sach cac so am trong mang la:\n");
    for (i = 0; i < count_negative; i++) {
        printf("%d ", negative_numbers[i]);
    }

    printf("\nSo luong so duong trong mang la: %d\n", count_positive);
    printf("So luong so am trong mang la: %d\n", count_negative);

    return 0;
}
