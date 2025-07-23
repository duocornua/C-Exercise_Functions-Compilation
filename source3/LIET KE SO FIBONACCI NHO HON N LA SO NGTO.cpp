/**
 *  Chuong trinh liet ke cac so Fibonacci nho hon n la so nguyen to.
 *  
 * @author viettuts.vn
 */
#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) {
        return 0;
    }

    int i;
    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n, i, fib1 = 0, fib2 = 1, fib;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Fibonacci numbers less than %d that are prime:\n", n);

    while (fib2 < n) {
        if (isPrime(fib2)) {
            printf("%d ", fib2);
        }
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }

    printf("\n");

    return 0;
}
