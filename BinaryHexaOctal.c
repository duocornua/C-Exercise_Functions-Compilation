#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

void convert(int num, int base, char *result) {
    int index = 0;
    const char *digits = "0123456789ABCDEF";

    if (num == 0) {
        result[index++] = '0';
    } else {
        while (num > 0) {
            result[index++] = digits[num % base];
            num /= base;
        }
    }
    result[index] = '\0';
    reverse(result);
}

int main() {
    int num;
    char binary[32], octal[32], hexa[32];

    printf("enter integer: ");
    scanf("%d", &num);

    convert(num, 2, binary);
    convert(num, 8, octal);
    convert(num, 16, hexa);

    printf("\nresult:\n");
    printf("%d in binary: %s\n", num, binary);
    printf("%d in octal: %s\n", num, octal);
    printf("%d in hexa: %s\n", num, hexa);

    return 0;
}
