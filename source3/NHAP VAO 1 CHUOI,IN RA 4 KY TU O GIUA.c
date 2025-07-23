#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len;

    do {
        printf("Nhap chuoi ky tu (so luong ky tu phai la so chan va >= 4): ");
        fgets(str, sizeof(str), stdin);

        len = strlen(str) - 1;
        if (len % 2 != 0 || len < 4) {
            printf("Chuoi khong hop le. Vui long nhap lai.\n");
        }
    } while (len % 2 != 0 || len < 4);

    int mid_index = len / 2;

    if (len >= 6) { // ki?m tra n?u d? dài chu?i >= 6 thì in ra 4 ký t? gi?a
        printf("4 ky tu o giua: ");
        printf("%c%c%c%c\n", str[mid_index - 1], str[mid_index], str[mid_index + 1], str[mid_index + 2]);
    } else { // n?u d? dài chu?i < 6 thì in ra toàn b? chu?i
        printf("Chuoi nhap vao: %s\n", str);
    }

    return 0;
}
