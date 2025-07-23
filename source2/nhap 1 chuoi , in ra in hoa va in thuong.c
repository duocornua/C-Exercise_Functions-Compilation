#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);
    printf("Chuoi in hoa: ");
    for (int i = 0; i < n; i++) {
        printf("%c", toupper(str[i]));
    }

    printf("\nChuoi in thuong: ");
    for (int i = 0; i < n; i++) {
        printf("%c", tolower(str[i]));
    }

    return 0;
}

