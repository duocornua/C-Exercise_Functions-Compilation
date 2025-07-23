#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[100];

    printf("Nhap vao mot chuoi ky tu: ");
    fgets(string, 100, stdin);

    int length = strlen(string);
    int upper_count = 0;
    int lower_count = 0;

    for (int i = 0; i < length; i++) {
        if (isupper(string[i])) {
            upper_count++;
        } else if (islower(string[i])) {
            lower_count++;
        }
    }

    if (upper_count > 0 && lower_count == 0) {
        printf("Chuoi in HOA");
    } else if (lower_count > 0 && upper_count == 0) {
        printf("Chuoi in thuong");
    } else {
        printf("Chuoi khong phai in hoa hay in thuong");
    }

    return 0;
}
