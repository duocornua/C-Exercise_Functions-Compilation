#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_digits(char []);

int main() {
    char s[1001];
    printf("Nhap chuoi s: ");
    fgets(s, sizeof(s), stdin);
    int num_digits = count_digits(s);
    printf("So luong ky tu so trong chuoi la: %d", num_digits);
    return 0;
}

int count_digits(char s[]) {
    int length = strlen(s);
    int count = 0;
    int i;
    for (i = 0; i < length; i++) {
        if (isdigit(s[i])) {
            count++;
        }
    }
    return count;
}
