#include <stdio.h>

int main() {
    int arr[100];
    int negative_even_numbers[100];
    int n, i, j;
    int count = 0;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < 0 && arr[i] % 2 == 0) {
            negative_even_numbers[count] = arr[i];
            count++;
        }
    }

    // S?p x?p m?ng negative_even_numbers theo th? t? tang d?n
    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (negative_even_numbers[i] > negative_even_numbers[j]) {
                int temp = negative_even_numbers[i];
                negative_even_numbers[i] = negative_even_numbers[j];
                negative_even_numbers[j] = temp;
            }
        }
    }

    printf("Danh sach cac so am la so chan duoc sap xep tang dan la:\n");
    for (i = 0; i < count; i++) {
        printf("%d ", negative_even_numbers[i]);
    }

    return 0;
}
