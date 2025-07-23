#include <stdio.h>

int main() {
    int arr[5];
    int evenArr[5];
    int count = 0;

    // Nh?p giá tr? cho m?ng arr
    printf("Nhap vao 5 gia tri nguyen:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // L?c ra các ph?n t? ch?n
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[count] = arr[i];
            count++;
        }
    }

    // S?p x?p m?ng evenArr tang d?n
    for (int i = 0; i < count-1; i++) {
        for (int j = i+1; j < count; j++) {
            if (evenArr[i] > evenArr[j]) {
                int temp = evenArr[i];
                evenArr[i] = evenArr[j];
                evenArr[j] = temp;
            }
        }
    }

    // In ra các ph?n t? ch?n theo th? t? tang d?n
    printf("Cac phan tu chan theo thu tu tang dan la:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", evenArr[i]);
    }

    return 0;
}


// thu tu giam dan

#include <stdio.h>

int main() {
    int arr[5];
    int evenArr[5];
    int count = 0;

    // Nh?p giá tr? cho m?ng arr
    printf("Nhap vao 5 gia tri nguyen:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // L?c ra các ph?n t? ch?n
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[count] = arr[i];
            count++;
        }
    }

    // S?p x?p m?ng evenArr gi?m d?n
    for (int i = 0; i < count-1; i++) {
        for (int j = i+1; j < count; j++) {
            if (evenArr[i] < evenArr[j]) {
                int temp = evenArr[i];
                evenArr[i] = evenArr[j];
                evenArr[j] = temp;
            }
        }
    }

    // In ra các ph?n t? ch?n theo th? t? gi?m d?n
    printf("Cac phan tu chan theo thu tu giam dan la:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", evenArr[i]);
    }

    return 0;
}

