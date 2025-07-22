int find_second_min(int a[], int n) {
    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return -1;
    }

    int min = a[0];
    int second_min = __INT_MAX__; // A very large number

    // First pass to find the minimum
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }

    // Second pass to find the second smallest
    for (int i = 0; i < n; i++) {
        if (a[i] > min && a[i] < second_min) {
            second_min = a[i];
        }
    }

    if (second_min == __INT_MAX__) {
        printf("No second smallest value found (all elements might be equal).\n");
        return -1;
    }

    return second_min;
}