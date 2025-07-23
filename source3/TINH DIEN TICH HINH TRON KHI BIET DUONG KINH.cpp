#include <stdio.h>

#define PI 3.14159

int main() {
    float duong_kinh, ban_kinh, dien_tich;

    // Nh?p du?ng kính t? bàn phím
    printf("Nhap duong kinh cua hinh tron: ");
    scanf("%f", &duong_kinh);

    // Tính bán kính và di?n tích
    ban_kinh = duong_kinh / 2;
    dien_tich = PI * ban_kinh * ban_kinh;

    // In k?t qu? ra màn hình
    printf("Dien tich cua hinh tron la: %0.2f\n", dien_tich);

    return 0;
}
