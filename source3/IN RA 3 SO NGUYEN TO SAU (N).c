#include <stdio.h>
#include <math.h>
int isPrime(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("3 so nguyen to sau %d la: \n",n);
    int count = 1;
    for (int i = n + 1; count <= 3; i++)
    {
        if (isPrime(i))
        {
            count++;
            printf("%d ", i);
        }
    }
}
