#include<stdio.h>
int main(){
    float a, b, c, d, e, f, x, y;
    printf("Nhap a, b, c, d, e, f: ");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
     float bieuthuc= b * d - a * e;
    if (bieuthuc == 0) {
        printf("He phuong trinh vo nghiem hoac co vo so nghiem");
    } else {
        x = (b * f - e * c) / bieuthuc;
        y = (a * f - d * c) / bieuthuc;
        printf("Nghiem cua he phuong trinh la: x = %f, y = %f", x, y);
    }

    return 0;
}


