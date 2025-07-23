#include <stdio.h>
#include <ctype.h>

void xoa_ky_tu_so_va_dac_biet(char *chuoi);

int main() {
    char chuoi[100];

    // Nh?p chu?i t? bàn phím
    printf("Nhap chuoi ky tu: ");
    fgets(chuoi, 100, stdin);

    // Xóa ký t? s? và d?c bi?t
    xoa_ky_tu_so_va_dac_biet(chuoi);

    // In chu?i m?i ra màn hình
    printf("Chuoi sau khi xoa ky tu so va dac biet: %s", chuoi);

    return 0;
}

void xoa_ky_tu_so_va_dac_biet(char *chuoi) {
    int i, j;
    for (i = 0; chuoi[i] != '\0'; i++) {
        if (isalpha(chuoi[i])) {
            chuoi[j] = chuoi[i];
            j++;
        }
    }
    chuoi[j] = '\0';
}
