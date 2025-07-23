#include <stdio.h>
#include <string.h>

void reverse(char *x) {
    int len = strlen(x);
    char tmp[len];
    for (int i = len - 1, j = 0; i >= 0; i--, j++) {
        tmp[j] = x[i];
    }
    tmp[len] = '\0';
    strcpy(x, tmp);
}

int main() {
    char x[100];
    fgets(x, 100, stdin);
    reverse(x);
    printf("The reverse of the string of binary numbers is %s\n", x);
    return 0;
}
