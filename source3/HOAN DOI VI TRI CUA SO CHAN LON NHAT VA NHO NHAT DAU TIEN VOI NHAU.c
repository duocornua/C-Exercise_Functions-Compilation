//Q8.NHAP 1 MANG SO NGUYEN GOM N PHAN TU
// HOAN DOI VI TRI CUA CAC SO CHAN LON NHAT VA NHO NHAT DAU TIEN VOI NHAU0

#include <stdio.h>
#include <stdlib.h>

// Hàm hoán v? 2 ph?n t? trong m?ng
void swap(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
}

int main() {
system("cls");
// Nh?p s? ph?n t? c?a m?ng
int n;
printf("Nhap so phan tu cua mang: ");
scanf("%d", &n);

// Nh?p các ph?n t? c?a m?ng
int a[n];
printf("Nhap cac phan tu cua mang:\n");
for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
}

// Tìm v? trí c?a s? ch?n l?n nh?t và s? ch?n nh? nh?t d?u tiên
int pos_max = -1, pos_min = -1;
int max_even = -1e9, min_even = 1e9;
for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
        if (a[i] > max_even) {
            max_even = a[i];
            pos_max = i;
        }
        if (a[i] < min_even) {
            min_even = a[i];
            pos_min = i;
        }
    }
}

// Hoán v? 2 ph?n t? tìm du?c
if (pos_max != -1 && pos_min != -1) {
    swap(&a[pos_max], &a[pos_min]);
    printf("Da hoan vi vi tri cua %d va %d\n", max_even, min_even);
} else {
    printf("Khong tim thay 2 so chan nhu yeu cau\n");
}

// Xu?t m?ng sau khi hoán v?
printf("Mang sau khi hoan vi:\n");
for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
}
printf("\n");

system("pause");
return 0;
}
