#pragma warning (disable : 4996)
#include<stdio.h>
#include<conio.h>
#include<string.h>

void tim(char a[])
{
    int len, i, k, t1 = 0, t2 = 0, luu = 0, dem = 0;
    len = strlen(a);
    for (i = 0; i < len; i++)
    {
        if (a[i] == a[i + 1])
        {
            k = i + 1;
            while (a[k - dem - 1] == a[k + dem] && k > dem) dem++;//ki?m tra d? dài c?a dãy d?i x?ng
            if (dem > luu)
            {
                luu = dem;
                t1 = k - luu; //v? trí d?u dãy d?i x?ng
                t2 = k + luu - 1;// cu?i dãy d?i x?ng
            }
        }
    }
    if (t2 == 0)
    {
        printf("\nKhong co chuoi doi xung !!!");
        return;
    }
    printf("\nChuoi doi xung dai nhat:");
    for (i = t1; i <= t2; i++)
        printf("%c", a[i]);
}
int main()
{
    char a[20];
    printf("Nhap chuoi:");
    scanf("%s", a);
    tim(a);
    getch();
}
