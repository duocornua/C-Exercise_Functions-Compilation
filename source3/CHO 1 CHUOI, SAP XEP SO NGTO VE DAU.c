#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char str[100];
    printf("Nhap chuoi ky tu: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    int first_non_prime = 0;
    for (int i = 0; i < len; i++)
    {
        if (isdigit(str[i]))
        {
            int num = str[i] - '0';
            if (isPrime(num))
            {
                char temp = str[first_non_prime];
                str[first_non_prime] = str[i];
                str[i] = temp;
                first_non_prime++;
            }
        }
    }

    printf("Chuoi moi: %s", str);

    return 0;
}
