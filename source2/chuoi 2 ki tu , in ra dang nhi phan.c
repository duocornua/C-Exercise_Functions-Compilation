#include <stdio.h>
#include <string.h>

int main() {
    char str[3];
    printf("Enter a two-character string: ");
    scanf("%s", str);
    if (strlen(str) != 2) {
        printf("Invalid input\n");
        return 1;
    }
    for (int i = 0; i < 2; i++) {
        char c = str[i];
        printf("%08d", dec_to_bin(c));
    }
    printf("\n");
    return 0;
}

int dec_to_bin(int n) {
    int bin = 0, rem, i = 1;
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

