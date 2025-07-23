#include <stdio.h>

int main() {
    int n;
    printf("Nhap vao so giay: ");
    scanf("%d", &n);

    int h = n / 3600;
    int m = (n % 3600) / 60;
    int s = n % 60;

    printf("Thoi gian tuong ung la: %02d:%02d:%02d", h, m, s);
    return 0;
}
