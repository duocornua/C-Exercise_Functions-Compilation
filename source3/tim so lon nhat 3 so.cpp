#include <stdio.h>

int main()
{
    int a, b, c, max;

    printf("Nhap ba so nguyen: ");
    scanf("%d %d %d", &a, &b, &c);


    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }
    printf("%d",max);

}

