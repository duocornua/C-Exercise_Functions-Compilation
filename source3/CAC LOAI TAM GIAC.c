
//Tam gi�c c�n dAC nAM GIUA m�n h�nh
//Tam gi�c c�n rONG NAM GIUA m�n h�nh
//Tam gi�c  vu�ng c�n dAC
//Tam gi�c  vu�ng c�n rONG

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, n;

    printf("\nNhap n: ");
    scanf("%d", &n);

    // C�u a:
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n + i - 1; ++j)
        {
            printf((j < n - i + 1) ? "* " : "%c", 234);
        }
        putchar('\n');
    }



    // C�u b:
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n + i - 1; ++j)
        {
            printf((j == n - i + 1 || j == n + i - 1 || i == n) ? "%c" : " ", 234);
        }
        putchar('\n');
    }
    printf("\n");
    // C�u c: 
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n; ++j)
        {
            printf((j <= i) ? "%c" : " ", 234);
        }
        printf("\n\n");
    }

    // C�u d
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n; ++j)
        {
            printf((j == i || j == 1 || i == n) ? "*" : " ");
        }
        printf("\n");
    }

     
    getch();
    return 0;
}

//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//    for (int i = 0; i < 255; i++)
//    {
//        printf("ASCII value of character %c: %d\n", i, i);
//    }
//    getch();
//    return 0;
//}
