#include <stdio.h>

int main() {
    int n, i, j, max_count = 0, max_value, count;
    int arr[100];

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    printf("Nhap %d so nguyen:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        count = 0;
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > max_count) {
            max_count = count;
            max_value = arr[i];
        }
    }

    printf("So xuat hien nhieu nhat là %d voi %d lan xuat hien.\n", max_value, max_count);

    return 0;
}

