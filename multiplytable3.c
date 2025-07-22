#include<stdio.h>
void multi_table(int n,int i){
    if(n>0){
    printf("The multiplication table of %d is: ",n);
    for(i=1;i<=10;i++){
        printf("\n%4d x %4d = %4d",i,n,i*n);
        }
    printf("\n");
    }
    else printf("N must be greater than 0!\n");
}

int main(){
    int n,i;
    char c;

    do{
    printf("Please enter the positive integer N: ");
    scanf("%d",&n);
    multi_table(n,i);
    printf("Do you want to continue (y/n)? ");
    scanf(" %c",&c);

    while(c != 'y' && c != 'Y' && c != 'n' && c != 'N'){
       printf("You must enter 'y' or 'Y' or 'n' or 'N'!");
       printf("\nDo you want to continue (y/n)? ");
       scanf(" %c",&c);
        }

    } while (c == 'y' || c == 'Y');

    return 0;
}