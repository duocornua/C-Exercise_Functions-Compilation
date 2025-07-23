#include <stdio.h>
#include <math.h>

float tinh_dien_tich_hinh_tron(float radius);

int main() {
    float radius, dien_tich;

    // Nh?p b�n k�nh t? b�n ph�m
    printf("Nhap ban kinh cua hinh tron: ");
    scanf("%f", &radius);

    // T�nh di?n t�ch
    dien_tich = tinh_dien_tich_hinh_tron(radius);

    // In k?t qu? di?n t�ch ra m�n h�nh
    printf("Dien tich cua hinh tron la: %f", dien_tich);

    return 0;
}

float tinh_dien_tich_hinh_tron(float radius) {
    float dien_tich = M_PI * pow(radius, 2);
    return dien_tich;
}
