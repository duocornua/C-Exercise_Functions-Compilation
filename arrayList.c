#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

    int n,i,sku[100];
    double up[100];

    printf("Enter number of items: ");
    scanf("%d", &n);
    printf("Enter %d items: \n", n);
    for(i=1;i <= n; i++){
        printf("Enter item %d (sku, unit price): ",i);
        scanf("%d %lf", &sku[i], &up[i]);
    }
    printf("The items you've just entered: \n");
    printf("sku     unit price\n");
    for(i=1;i <= n; i++){
        printf("%d     %.2lf\n",sku[i],up[i]);
    }

    return 0;
}
