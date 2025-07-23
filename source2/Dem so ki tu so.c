#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int len, i, count = 0;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);
    for (i = 0; i < len; i++) {
        if (isdigit(str[i])) {
            count++;
        }
    }

    printf("The number of digits in the string is: %d", count);

    return 0;
}

