#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Nhap chuoi ky tu: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    int mid_index = len / 2;

    printf("5 ky tu o giua: ");
    for (int i = mid_index - 2; i <= mid_index + 2; i++)
    {
        if (i >= 0 && i < len)
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}
