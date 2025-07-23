(((DE LA HINH ANH BEN NGOAI)))
/** Bài 1: Tính S(n) = 1 + 2 + 3 + … + n
    Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2
    Bài 3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n
    Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n
    Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)
    Bài 6: Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1)
    Bài 7: Tính S(n) = ½ + 2/3 + ¾ + …. + n / n + 1
    Bài 8: Tính S(n) = ½ + ¾ + 5/6 + … + 2n + 1/ 2n + 2
    Bài 9: Tính T(n) = 1 x 2 x 3…x N
    Bài 10: Tính T(x, n) = x^n
    Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
    Bài 12: Tính S(n) = x + x^2 + x^3 + … + x^n
    Bài 13: Tính S(n) = x^2 + x^4 + … + x^2n
    Bài 14: Tính S(n) = x + x^3 + x^5 + … + x^2n + 1
    Bài 15: Tính S(n) = 1 + 1/1 + 2 + 1/ 1 + 2 + 3 + ….. + 1/ 1 + 2 + 3 + …. + N
    Bài 16: Tính S(n) = x + x^2/1 + 2 + x^3/1 + 2 + 3 + … + x^n/1 + 2 + 3 + …. + N
    Bài 17: Tính S(n) = x + x^2/2! + x^3/3! + … + x^n/N!
    Bài 18: Tính S(n) = 1 + x^2/2! + x^4/4! + … + x^2n/(2n)!
    Bài 19: Tính S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!


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
        S = S + 1.0 / i;  // ph?i nh? là 1.0 / i
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


