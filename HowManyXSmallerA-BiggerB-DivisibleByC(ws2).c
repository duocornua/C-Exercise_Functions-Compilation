#include<stdio.h>
int main()
{
    int a,b,c;
    int count=0;
    scanf("%d%d%d",&a,&b,&c);

	for(int i=0; i<=9999;i++){
        if(i>=a && i<=b){
            if(i%c!=0){
                count+=1;
            }
        }
    }

    printf("%d",count);

    return 0;
}


