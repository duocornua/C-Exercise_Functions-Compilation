#include<stdio.h>

int main(){
    int i;
    int n,count=0;
    printf("How many postive even-odd number that you want to display? ");
    scanf("%d", &n);
    if(n>0){
    printf("The first %d positive even numbers are: \n",n);
        for( i = 2; count < n; i+=2){
                if(i%2==0){
                printf("%d",i);
                count++;
                }
                if(count < n){
                        printf(", ");
                }
        }
    count=0;
    printf("\nThe first %d positive odd numbers are: \n",n);
        for(i = 1; count < n; i+=2){
                if(i%2!=0){
                printf("%d",i);
                count++;
                }
                if(count < n){
                        printf(", ");
                }
        }
}
    else printf("Accept positve number only!");

    return 0;
}

