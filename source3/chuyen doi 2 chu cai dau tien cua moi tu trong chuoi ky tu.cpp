#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Nhap vao mot xau ky tu: ");
    fgets(str, 100, stdin);

    int i = 0;
    while (str[i] != '\0') {
        if ((i == 0 || str[i-1] == ' ') && !isspace(str[i])) {
            str[i] = toupper(str[i]);
            if (islower(str[i+1])) {
                str[i+1] = toupper(str[i+1]);
            }
        }
        i++;
    }

    printf("Xau sau khi chuyen doi: %s", str);
    return 0;
}
