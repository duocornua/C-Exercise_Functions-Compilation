#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len;

    do {
        printf("Nhap chuoi ky tu (so luong ky tu >= 5): ");
        scanf("%s", str);

        len = strlen(str);
        if (len < 5) {
            printf("Chuoi khong hop le. Vui long nhap lai.\n");
        }
    } while (len < 5);

    printf("5 ky tu dau cua chuoi: %.*s\n", 5, str);

    return 0;
}
