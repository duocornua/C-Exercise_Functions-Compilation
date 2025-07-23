#include <stdio.h>

int main() {
    int numbers[5];
    int m = 0, n = 0;

    // Prompt the user to enter five integers
    printf("Enter five integers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Count the number of even and odd numbers
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            m++;
        } else {
            n++;
        }
    }

    // Print the counts of even and odd numbers
    printf("Number of even numbers: %d\n", m);
    printf("Number of odd numbers: %d\n", n);

    return 0;
}

