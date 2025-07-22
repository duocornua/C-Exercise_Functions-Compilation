#include<stdio.h>
int main()
{
    int n,a,b,c[100],sum=0;
    scanf("%d%d%d",&n,&a,&b);
    for(int i=0; i<n; i++){
        scanf(" %d",&c[i]);
    if(c[i]%a==0&&c[i]%b!=0){
        sum+=c[i];
    }
}
    printf("%d",sum);
    return 0;
}
