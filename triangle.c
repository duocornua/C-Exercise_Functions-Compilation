#include<stdio.h>

int main()
{
    int n;
    printf("Please enter the positive integer N: ");
    scanf("%d",&n);
    if(n>0)
    {
        printf("The number-triangle that has %d lines is:\n",n);
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
            {
                printf("* ",i);
            }
            printf("\n");
        }
    }
    else printf("\nN must be greater than 0!");

    return 0;
}


