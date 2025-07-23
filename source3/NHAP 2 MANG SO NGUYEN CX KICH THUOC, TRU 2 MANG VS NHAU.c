#include <stdio.h>

int main() {
    int m, n;
    int arr1[100][100], arr2[100][100], result[100][100];
    int i, j;

    printf("Nhap so dong m va so cot n cua hai mang: ");
    scanf("%d%d", &m, &n);

    printf("Nhap cac phan tu cua mang arr1:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Nhap cac phan tu cua mang arr2:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    // Tru hai mang voi nhau va luu ket qua vao mang result
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            result[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    // In ra ket qua
    printf("Ket qua cua phep tru hai mang la:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
