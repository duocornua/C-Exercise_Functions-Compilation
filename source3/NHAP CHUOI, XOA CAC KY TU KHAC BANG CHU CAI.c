#include <stdio.h>
#include <ctype.h>

void xoa_ky_tu_so_va_dac_biet(char *chuoi);

int main() {
    char chuoi[100];

    // Nh?p chu?i t? b�n ph�m
    printf("Nhap chuoi ky tu: ");
    fgets(chuoi, 100, stdin);

    // X�a k� t? s? v� d?c bi?t
    xoa_ky_tu_so_va_dac_biet(chuoi);

    // In chu?i m?i ra m�n h�nh
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
