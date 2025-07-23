#include <stdio.h>

int main() {
    int arr[5];
    int odd[5];
    int i, j, k;

    printf("Nhap vao 5 gia tri nguyen:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    k = 0;
    for (i = 0; i < 5; i++) {
        if (arr[i] % 2 != 0) {
            odd[k] = arr[i];
            k++;
        }
    }

    // S?p x?p m?ng odd theo th? t? tang d?n
    for (i = 0; i < k-1; i++) {
        for (j = i+1; j < k; j++) {
            if (odd[i] > odd[j]) {
                int temp = odd[i];
                odd[i] = odd[j];
                odd[j] = temp;
            }
        }
    }

    printf("Cac phan tu le theo thu tu tang dan la:\n");
    for (i = 0; i < k; i++) {
        printf("%d\n", odd[i]);
    }
    printf("\n");

    return 0;
}

// thu tu giam dan

#include <stdio.h>

int main() {
    int arr[5];
    int oddArr[5];
    int count = 0;

    // Nh?p giá tr? cho m?ng arr
    printf("Nhap vao 5 gia tri nguyen:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // L?c ra các ph?n t? l?
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 != 0) {
            oddArr[count] = arr[i];
            count++;
        }
    }

    // S?p x?p m?ng oddArr gi?m d?n
    for (int i = 0; i < count-1; i++) {
        for (int j = i+1; j < count; j++) {
            if (oddArr[i] < oddArr[j]) {
                int temp = oddArr[i];
                oddArr[i] = oddArr[j];
                oddArr[j] = temp;
            }
        }
    }

    // In ra các ph?n t? l? theo th? t? gi?m d?n
    printf("Cac phan tu le theo thu tu giam dan la:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", oddArr[i]);
    }

    return 0;
}


