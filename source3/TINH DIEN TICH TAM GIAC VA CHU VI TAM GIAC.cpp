#include <stdio.h>
#include <math.h>

float tinh_chu_vi(float a, float b, float c);
float tinh_dien_tich(float a, float b, float c);

int main() {
    float a, b, c, chu_vi, dien_tich;

    // Nh?p d? d�i ba c?nh t? b�n ph�m
    printf("Nhap do dai ba canh cua tam giac: ");
    scanf("%f%f%f", &a, &b, &c);

    // T�nh chu vi v� di?n t�ch
    chu_vi = tinh_chu_vi(a, b, c);
    dien_tich = tinh_dien_tich(a, b, c);

    // In k?t qu? ra m�n h�nh
    printf("Chu vi cua tam giac la: %.2f\n", chu_vi);
    printf("Dien tich cua tam giac la: %.2f\n", dien_tich);

    return 0;
}

float tinh_chu_vi(float a, float b, float c) {
    return a + b + c;
}

float tinh_dien_tich(float a, float b, float c) {
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
