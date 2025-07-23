#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Nhap chuoi ky tu: ");
    scanf("%s", str);

    int len = strlen(str);
    int mid_index = len / 2;

    if (len >= 4) // In ra 4 ký t? gi?a n?u chu?i có d? dài l?n hon ho?c b?ng 4
    {
        printf("4 ky tu o giua: ");
        printf("%c%c%c%c\n", str[mid_index - 1], str[mid_index], str[mid_index + 1], str[mid_index + 2]);
    }
    else // In ra toàn b? chu?i n?u chu?i có d? dài nh? hon 4
    {
        printf("Chuoi nhap vao: %s\n", str);
    }

    return 0;
}
