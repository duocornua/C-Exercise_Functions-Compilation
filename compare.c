#include<stdio.h>
#include<math.h>
int main() {

    int a,b;
    printf("Please enter the first number: ");
    scanf("%d", &a);
    printf("Please enter the second number: ");
    scanf("%d", &b);

    if(a>b)
    {
        printf("Comparison results: %d is greater than %d", a,b);
    }
    else if(b>a) {printf("Comparison results: %d is greater than %d", b,a);}
    else printf("Comparison results: both numbers are equal");

    return 0;
}
