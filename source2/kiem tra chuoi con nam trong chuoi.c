#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], substr[100];
    int count = 0, i;

    printf("Nhap chuoi: ");
    gets(str);

    printf("Nhap chuoi con can tim: ");
    gets(substr);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], substr) == &str[i]) 
        {
            count++;
        }
    }

    if (count == 0)
    {
        printf("Not found");
    }
    else
    {
        printf("Tim thay chuoi con xuat hien %d lan trong chuoi.", count);
    }

    return 0;
}

