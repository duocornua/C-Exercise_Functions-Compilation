#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

    int a[100],n,i,neg=0,zero=0,pos=0;
    printf("How many elements of numeric array: ");
    scanf("%d", &n);
    printf("Please enter value of %d elements: \n",n);
    for(i=0;i < n; i++){
        printf("The value of a[%d] is: ", i);
        scanf("%d", &a[i]);
        if(a[i]<0){
            neg+=1;
        }
        if(a[i]==0){
            zero+=1;
        }
        if(a[i]>0){
            pos+=1;
        }
    }
    printf("The number of negative elements is: %d", neg);
    printf("\nThe number of zero     elements is: %d", zero);
    printf("\nThe number of positive elements is: %d", pos);


    return 0;
}
