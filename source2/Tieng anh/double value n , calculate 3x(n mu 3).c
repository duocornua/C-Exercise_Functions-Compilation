#include <stdio.h>
#include <math.h>

int main() {
    double n, result;
    printf("Enter a value for n: ");
    scanf("%lf", &n);
    
    result = 3 * pow(n, 3); // calculating 3 times the cube of n
    
    printf("3 * (%.0lf^3) = %.3lf\n", n, result);
    
    return 0;
}

