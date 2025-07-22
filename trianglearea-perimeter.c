#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float perimeter, area;

    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

     if (a + b > c && a + c > b && b + c > a) {

        perimeter = a + b + c;

        float p = perimeter / 2;
        area = sqrt(p * (p - a) * (p - b) * (p - c));

        printf("perimeter: %.2f",perimeter);
        printf("\narea: %.2f",area);
     } else
     {
        printf("triangle not valid");
     }

    return 0;
}
