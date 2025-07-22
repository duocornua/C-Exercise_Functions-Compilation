#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int isdigit(char id){
    if(id>='0'&&id<='9'){
        return 1;
    } else return 0;
}
int main()
{
    int n,i,count=0;
    char id[20];

    scanf("%d",&n);
    for(i=0; i<n; i++){
    scanf("%s",id);

    if(strlen(id)==8&&isupper(id[0])&&isupper(id[1])){
        if(isdigit(id[2])&&isdigit(id[3])&&isdigit(id[4])&&isdigit(id[5])){
            count+=1;
        }
    }
}
    printf("%d",count);

    return 0;
}

