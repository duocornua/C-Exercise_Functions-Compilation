#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int chan[n];
    int le[n];
    int m = 0;
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            chan[m] = a[i];
            m++;
        } else {
            le[k] = a[i];
            k++;
        }
    }
    printf("Mang cac so chan:\n");
    for (int i = 0; i < m; i++) {
        printf("%d\n ", chan[i]);
    }
    
    printf("Mang cac so le:\n");
    for (int i = 0; i < k; i++) {
        printf("%d \n", le[i]);
    }
    
    return 0;
}
