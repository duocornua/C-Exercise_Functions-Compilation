#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len;

    do {
        printf("Nhap chuoi ky tu (so luong ky tu phai la so le va >= 5): ");
        scanf("%s", str);

        len = strlen(str);
        if (len % 2 != 1 || len < 5) {
            printf("Chuoi khong hop le. Vui long nhap lai.\n");
        }
    } while (len % 2 != 1 || len < 5);

    int mid_index = len / 2;

    printf("5 ky tu o giua: ");
    printf("%c%c%c%c%c\n", str[mid_index - 2], str[mid_index - 1], str[mid_index], str[mid_index + 1], str[mid_index + 2]);

    return 0;
}
