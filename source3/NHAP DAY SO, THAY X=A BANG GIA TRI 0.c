#include <stdio.h>

void thay_the(int mang[], int n, int x);

int main() {
    int mang[100], n, x, i;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu trong mang:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &mang[i]);
    }

    printf("Nhap gia tri x: ");
    scanf("%d", &x);
    thay_the(mang, n, x);

    printf("Mang sau khi thay the:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    return 0;
}

void thay_the(int mang[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (mang[i] == x) {
            mang[i] = 0;
        }
    }
}
