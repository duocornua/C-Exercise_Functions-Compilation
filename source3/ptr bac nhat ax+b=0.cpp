

#include <stdio.h>

int main()
{
    int a, b;
    float x;
    

    printf("Nhap he so a va b cua phuong trinh ax + b = 0: ");
    scanf("%d %d", &a, &b);

    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo so nghiem\n");
        } else {
            printf("Phuong trinh vo nghiem\n");
        }
    } else {
        x = -b / a;
        printf("Nghiem cua phuong trinh la: x = %f\n", x);
    }

    return 0;
}
