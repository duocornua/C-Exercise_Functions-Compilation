#include<stdio.h>
int main()
{
    int n,a[100],b[100];
    int is_parallel=1;
    scanf("%d",&n);

    for(int i=0; i<n ; i++) scanf("%d",&a[i]);
    for(int i=0; i<n ; i++) scanf("%d",&b[i]);

    for(int i=1; i<n ; i++){
        if((long long)a[i] * b[0] != (long long)a[0] * b[i]){
            is_parallel=0;
            break;
        }
}

   printf(is_parallel ? "Yes" : "No");

    return 0;
}


