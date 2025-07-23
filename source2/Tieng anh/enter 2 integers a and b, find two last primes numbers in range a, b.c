#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b, last_prime = 0, second_last_prime = 0;
    
    // prompt the user to enter the range
    printf("Enter two integers a and b:\n ");
    scanf("%d%d", &a, &b);
    
    // iterate over the range (exclusive a, b) to find the last two prime numbers
    for (int i = a+1; i < b; i++) {
        if (is_prime(i)) {
            second_last_prime = last_prime;
            last_prime = i;
        }
    }
    
    // print the last two prime numbers
    printf("Last two prime numbers in the range (%d, %d) are: %d, %d\n", a, b, second_last_prime, last_prime);
    
    return 0;
}

