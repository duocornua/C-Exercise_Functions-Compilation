#include <stdio.h>
#include <math.h>

void giai_phuong_trinh_bac_hai(double a, double b, double c) {
    double delta, x1, x2, realPart, imagPart;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem!\n");
            } else {
                printf("Phuong trinh vo nghiem!\n");
            }
        } else {
            printf("Phuong trinh co nghiem duy nhat: x = %.2lf\n", -c / b);
        }
        return;
    }

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co 2 nghiem phan biet:\n");
        printf("x1 = %.2lf\nx2 = %.2lf\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Phuong trinh co nghiem kep:\n");
        printf("x1 = x2 = %.2lf\n", x1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-delta) / (2 * a);
        printf("Phuong trinh co 2 nghiem phuc:\n");
        printf("x1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("x2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }
}

int main() {
    double a, b, c;

    printf("Nhap he so a, b, c cua phuong trinh ax^2 + bx + c = 0:\n");
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);

    giai_phuong_trinh_bac_hai(a, b, c);

    return 0;
}
