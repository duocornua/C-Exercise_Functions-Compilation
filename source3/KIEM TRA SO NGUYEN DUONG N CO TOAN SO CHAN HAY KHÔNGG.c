
#include<stdio.h>
#include<stdbool.h>

int main()
{
    int n;
    do
    {
        printf("\nNhap n(n >= 0): ");
        scanf("%d", &n);
        if(n < 0)
        {
            printf("\nN phai >= 0. Xin nhap lai !");
        }
    }while(n < 0);

    printf("\nSo %d gom toan cac chu so chan hay khong ?\n", n);
    bool Check = true;
    while(n != 0)
    {
        if((n % 10) % 2 == 1)
        {
            Check = false;
            break;
        }
        n /= 10;
    }
    if(Check == true)
    {
        printf("Dung !");
    }
    else
    {
        printf("Sai");
    }
    getchar();
    return 0;
}
