#include <stdio.h>

int main() {
    int arr[100];
    int even_numbers[100], odd_numbers[100];
    int n, i;
    int count_even = 0, count_odd = 0;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even_numbers[count_even] = arr[i];
            count_even++;
        } else {
            odd_numbers[count_odd] = arr[i];
            count_odd++;
        }
    }

    printf("Danh sach cac so chan trong mang la:\n");
    for (i = 0; i < count_even; i++) {
        printf("%d ", even_numbers[i]);
    }

    printf("\nDanh sach cac so le trong mang la:\n");
    for (i = 0; i < count_odd; i++) {
        printf("%d ", odd_numbers[i]);
    }

    printf("\nSo luong so chan trong mang la: %d\n", count_even);
    printf("So luong so le trong mang la: %d\n", count_odd);

    return 0;
}
