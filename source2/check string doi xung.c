#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, is_symmetric = 1;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);
    for (i = 0; i < len/2; i++) {
        if (str[i] != str[len-i-1]) {
            is_symmetric = 0;
            break;
        }
    }

    if (is_symmetric) {
        printf("The string is symmetric");
    } else {
        printf("The string is not symmetric");
    }

    return 0;
}

