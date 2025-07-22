#include<stdio.h>
void divisor(int n,int i){
    printf("All divisors of %d are: \n",n);
    for(i=1; i<n; i++){
        if(n%i==0&&i!=n){
            printf("%d, ",i);
        }
    }
    printf("%d",i);
}
void sum_of_divisor(int n, int i,int sum){
    printf("The sum of all divisors of 10 is\n");
    printf("S = ");
    for(i=1; i<n; i++){
        if(n%i==0){
            printf("%d + ",i);
            sum+=i;
        }
    }
    printf("%d = %d",i,sum);
}
void divisor_count(int n, int i, int count){
    for(i=1; i<=n;i++){
        if(n%i==0){
            count+=1;
        }
    }
    printf("The number of divisor of %d is %d",n,count);
}

int main(){
    int n,i,sum=0, count=0;
    printf("Please enter positive integer N: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Accept positive number only!");
    }
    else{
        divisor(n,i);
        printf("\n");
        sum_of_divisor(n,i,sum);
        printf("\n");
        divisor_count(n,i,count);
    }

    return 0;
}