#include <stdio.h>
#include <ctype.h>

// su dung cac thu vien tren ae nhe
// --------------------------------------------------------
/*
// dem tat ca cac so le va chan trong mang
void countOddEven(int arr[], int size, int *oddCount, int *evenCount) {
    *oddCount = 0;
    *evenCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            (*evenCount)++;
        } else {
            (*oddCount)++;
        }
    }
}

int main() {
    int arr[100];
    int size;

    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < size; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int oddCount, evenCount;
    countOddEven(arr, size, &oddCount, &evenCount);

    printf("So cac so le trong mang: %d\n", oddCount);
    printf("So cac so chan trong mang: %d\n", evenCount);

    return 0;
}
*/
// --------------------------------------------------------

// --------------------------------------------------------
/*
// dem tat ca cac chu cai trong mang
void countAlphabets(char arr[], int size, int *alphabetCount) {
    *alphabetCount = 0;

    for (int i = 0; i < size; i++) {
        if (isalpha(arr[i])) {
            (*alphabetCount)++;
        }
    }
}

int main() {
    char arr[100];
    int size;

    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);

    printf("Nhap cac ky tu cua mang:\n");
    for (int i = 0; i < size; i++) {
        printf("Nhap ky tu thu %d: ", i + 1);
        scanf(" %c", &arr[i]);
    }

    int alphabetCount;
    countAlphabets(arr, size, &alphabetCount);

    printf("So cac ky tu chu cai trong mang: %d\n", alphabetCount);

    return 0;
}
*/
// --------------------------------------------------------

// --------------------------------------------------------
/*
// dem tat ca cac so trong mang
void countDigits(char arr[], int size, int *digitCount) {
    *digitCount = 0;

    for (int i = 0; i < size; i++) {
        if (isdigit(arr[i])) {
            (*digitCount)++;
        }
    }
}

int main() {
    char arr[100];
    int size;

    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);

    printf("Nhap cac ky tu cua mang:\n");
    for (int i = 0; i < size; i++) {
        printf("Nhap ky tu thu %d: ", i + 1);
        scanf(" %c", &arr[i]);
    }

    int digitCount;
    countDigits(arr, size, &digitCount);

    printf("So cac ky tu chu so trong mang: %d\n", digitCount);

    return 0;
}
*/
// --------------------------------------------------------
