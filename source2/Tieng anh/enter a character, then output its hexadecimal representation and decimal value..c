#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("Hexadecimal representation: 0x%X\n", ch);
    printf("Decimal value: %d\n", ch);

    return 0;
}

