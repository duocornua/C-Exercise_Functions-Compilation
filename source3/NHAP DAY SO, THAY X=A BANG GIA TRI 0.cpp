#include <stdio.h>

void thay_the(int mang[], int n, int x);

int main() {
    int mang[100], n, x, i;

    // Nh?p s? lu?ng ph?n t? trong m?ng v� gi� tr? x t? b�n ph�m
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    
    // Nh?p c�c ph?n t? c?a m?ng t? b�n ph�m
    printf("Nhap cac phan tu trong mang:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &mang[i]);
    }

    printf("Nhap gia tri x: ");
    scanf("%d", &x);
// Thay th? c�c ph?n t? trong m?ng b?ng 0 n?u ch�ng b?ng gi� tr? x
    thay_the(mang, n, x);

    // In m?ng m?i ra m�n h�nh
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
