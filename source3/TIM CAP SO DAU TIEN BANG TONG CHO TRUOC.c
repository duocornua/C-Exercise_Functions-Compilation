#include <stdio.h>
#include <stdlib.h>

int main() {
system("cls");


// Nh?p s? ph?n t? c?a m?ng
int n;
printf("Nhap so phan tu cua mang: ");
scanf("%d", &n);

// Nh?p c�c ph?n t? c?a m?ng
int array[n];
printf("Nhap cac phan tu cua mang:\n");
for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
}

// Nh?p t?ng c?n t�m
int target;
printf("Nhap tong can tim: ");
scanf("%d", &target);

// T�m c?p ph?n t? d?u ti�n c� t?ng b?ng target
int found = 0;
for (int i = 0; i < n && !found; i++) {
    for (int j = i + 1; j < n; j++) {
        if (array[i] + array[j] == target) {
            printf("Cap phan tu dau tien co tong bang %d la: %d va %d\n", target, array[i], array[j]);
            found = 1;
            break;
        }
    }
}

// N?u kh�ng t�m th?y c?p ph?n t? n�o c� t?ng b?ng target
if (!found) {
    printf("Khong tim thay cap phan tu nao co tong bang %d\n", target);
}

system("pause");
return 0;
}

