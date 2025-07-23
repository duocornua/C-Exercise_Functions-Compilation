#include<stdio.h>  

int main()  
{  
    int kytu=65;  
    int i,j,k,m;  
    kytu=65;  

    for(i=1;i<=5;i++)  
    {  
        for(j=5;j>=i;j--)  
            printf(" ");  
        for(k=1;k<=i;k++)  
            printf("%c",kytu++);  
            kytu--;  
        for(m=1;m<i;m++)  
            printf("%c",--kytu);  
        printf("\n");  
    }  
    return 0;
}  

