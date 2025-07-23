(((DE LA HINH ANH BEN NGOAI)))
/** B�i 1: T�nh S(n) = 1 + 2 + 3 + � + n
    B�i 2: T�nh S(n) = 1^2 + 2^2 + � + n^2
    B�i 3: T�nh S(n) = 1 + � + 1/3 + � + 1/n
    B�i 4: T�nh S(n) = � + � + � + 1/2n
    B�i 5: T�nh S(n) = 1 + 1/3 + 1/5 + � + 1/(2n + 1)
    B�i 6: T�nh S(n) = 1/1�2 + 1/2�3 +�+ 1/n x (n + 1)
    B�i 7: T�nh S(n) = � + 2/3 + � + �. + n / n + 1
    B�i 8: T�nh S(n) = � + � + 5/6 + � + 2n + 1/ 2n + 2
    B�i 9: T�nh T(n) = 1 x 2 x 3�x N
    B�i 10: T�nh T(x, n) = x^n
    B�i 11: T�nh S(n) = 1 + 1.2 + 1.2.3 + � + 1.2.3�.N
    B�i 12: T�nh S(n) = x + x^2 + x^3 + � + x^n
    B�i 13: T�nh S(n) = x^2 + x^4 + � + x^2n
    B�i 14: T�nh S(n) = x + x^3 + x^5 + � + x^2n + 1
    B�i 15: T�nh S(n) = 1 + 1/1 + 2 + 1/ 1 + 2 + 3 + �.. + 1/ 1 + 2 + 3 + �. + N
    B�i 16: T�nh S(n) = x + x^2/1 + 2 + x^3/1 + 2 + 3 + � + x^n/1 + 2 + 3 + �. + N
    B�i 17: T�nh S(n) = x + x^2/2! + x^3/3! + � + x^n/N!
    B�i 18: T�nh S(n) = 1 + x^2/2! + x^4/4! + � + x^2n/(2n)!
    B�i 19: T�nh S(n) = 1 + x + x^3/3! + x^5/5! + � + x^(2n+1)/(2n+1)!


////  B1
#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    long S;
    S = 0;
    i = 1;
    printf("\nNhap n: ");
    scanf("%d", &n);

    while(i <= n)
    {
        S = S + i;
        i++;
    }
    printf("\nTong 1 + 2 + ... + %d la %ld: ", n, S);
    getch();
    return 0;
}


////   B2
#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    long S;
    S = 0;
    i = 1;
    printf("\nNhap n: ");
    scanf("%d", &n);

    while(i <= n)
    {
        S = S + i * i;
        i++;
    }
    printf("i = %d", i);
    printf("\nTong 1^2 + 2^2 + ... + %d^2 la: %ld", n, S);

    /*int n,i;
    int sum=0;

    printf("Enter the n i.e. max values of series: ");
    scanf("%d",&n);

    sum = (n * (n + 1) * (2 * n + 1 )) / 6;

    printf("Sum of the series : ");

    for(i =1;i<=n;i++){
         if (i != n)
             printf("%d^2 + ",i);
         else
             printf("%d^2 = %d ",i,sum);
    }//



    getch();
    return 0;
}



//// B3
#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    float S;
    S = 0; i = 1;
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n < 1)
        {
            printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
        }

    }while(n < 1);

    while(i <= n)
    {
        S = S + 1.0 / i;  // ph?i nh? l� 1.0 / i
        i++;
    }
    printf("i = %d", i);
    printf("\nS = %f", S);
    printf("\nTong 1 + 1/2 + ... + 1/%d la %.2f: ",n, S);

    getch();
    return 0;
}



/////   B4
#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    float S;
    S = 0;
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n < 1)
        {
            printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
        }
    }while(n < 1);

    for(i = 1; i <= n; i++)
    {
        S = S + 1.0 / (2 * i);
    }
    printf("\nTong la: %f", S);

    getch();
    return 0;
}



////   B5


