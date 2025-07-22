#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[10000];

    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        if(a[i] % 2 ==0 && a[i] % 3 ==0){
            printf("YES ");
        } else printf("NO ");
    }

    return 0;
}

