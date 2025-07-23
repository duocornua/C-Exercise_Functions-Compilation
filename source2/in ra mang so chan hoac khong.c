#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int is_even = 1;

    // prompt the user to enter the array elements
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 != 0) {
            is_even = 0;
        }
    }

    // check if all elements are even and print the appropriate message
    if (is_even == 1) {
        printf("Even array of %d elements\n", n);
    } else {
        printf("Not even array of %d elements\n", n);
    }

    return 0;
}

