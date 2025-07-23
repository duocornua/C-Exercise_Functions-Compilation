#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_letters(char []);

int main() {
    char s[1001];
    printf("Nhap chuoi s: ");
    fgets(s, sizeof(s), stdin);
    int num_letters = count_letters(s);
    printf("So luong ky tu chu trong chuoi la: %d", num_letters);
    return 0;
}

int count_letters(char s[]) {
    int length = strlen(s);
    int count = 0;
    int i;
    for (i = 0; i < length; i++) {
        if (isalpha(s[i])) {
            count++;
        }
    }
    return count;
}
