#include<stdio.h>
int main() {

    int n,i,j,k;
//mot
    printf("How many number that you want to display? ");
    scanf("%d",&n);
    if(n>=0){
        printf("The first %d positive integer are: \n",n);
        for(i=1 ; i<n ; i++){
            printf("%d, ",i);
        }
        printf("%d",i);
    }else printf("Accept positive number only!");
//hai
    printf("\nAll 2-digit positive integers are: \n");
    for(j=10;j<99;j++){
        printf("%d, ",j);
    }
    printf("%d",j);

//ba
    printf("\nAll 3-digit negative integers are: \n");
    for(k=-999;k<-100;k++){
        printf("%d, ",k);
    }
    printf("%d",k);
    return 0;
}


