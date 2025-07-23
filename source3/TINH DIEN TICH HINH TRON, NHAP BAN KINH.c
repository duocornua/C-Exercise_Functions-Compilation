#include <stdio.h>
#include <math.h>

float tinh_dien_tich_hinh_tron(float radius);

int main() {
    float radius, dien_tich;

    // Nh?p bán kính t? bàn phím
    printf("Nhap ban kinh cua hinh tron: ");
    scanf("%f", &radius);

    // Tính di?n tích
    dien_tich = tinh_dien_tich_hinh_tron(radius);

    // In k?t qu? di?n tích ra màn hình
    printf("Dien tich cua hinh tron la: %f", dien_tich);

    return 0;
}

float tinh_dien_tich_hinh_tron(float radius) {
    float dien_tich = M_PI * pow(radius, 2);
    return dien_tich;
}
