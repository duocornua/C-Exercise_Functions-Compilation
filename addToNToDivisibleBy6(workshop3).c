#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int sum = 0, temp=n;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    for (int i = 9; i >= 0; i--) {
        if (i % 2 == 0 && (sum + i) % 3 == 0) {
            printf("%d", i);
            return 0;
        }
    }

    printf("0");
    return 0;
}
