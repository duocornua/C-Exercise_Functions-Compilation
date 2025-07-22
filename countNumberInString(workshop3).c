#include <stdio.h>
#include <string.h>

int main() {
    char n[1000];
    int count=0;
    scanf("%s",n);

    for(int i=0; i<strlen(n) ;i++){
        if(n[i]!=','&&n[i]!='.'){
            if(n[i]>='0'&&n[i]<='9'){
                count+=1;
            }
        }
    }
    printf("%d",count);

    return 0;
}
