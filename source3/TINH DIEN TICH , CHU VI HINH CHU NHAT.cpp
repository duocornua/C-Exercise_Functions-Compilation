#include <stdio.h>

int main() {
    float chieu_dai, chieu_rong, dien_tich, chu_vi;


    printf("Nhap chieu dai cua hinh chu nhat: ");
    scanf("%f", &chieu_dai);
    printf("Nhap chieu rong cua hinh chu nhat: ");
    scanf("%f", &chieu_rong);

    
    dien_tich = chieu_dai * chieu_rong;
    chu_vi = 2 * (chieu_dai + chieu_rong);

    
    printf("Dien tich cua hinh chu nhat la: %0.2f\n", dien_tich);
    printf("Chu vi cua hinh chu nhat la: %0.2f\n", chu_vi);

    return 0;
}
