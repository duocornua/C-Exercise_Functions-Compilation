#include<stdio.h>

int main(){
    int n,a,b,c,d,e;
    scanf("%d",&n);
    a= n/10000;
    b= (n/1000) %10;
    c= (n/100) %10;
    d= (n/10) %10;
    e= n %10;
    int sum=a+b+c+d+e;
    if(n%2!=0){
        if(sum%2!=0){
            printf("Yes");
        }
        else printf("No");
    }
    else printf("No");

    return 0;
}


