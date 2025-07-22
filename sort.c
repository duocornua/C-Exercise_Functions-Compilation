#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//ASCENDING
void interchange(int a[], int n){
    int i,j,tmp;
    for(i=0; i<n-1; i++){
        for(j=i+1; j < n; j++){
            if(a[i] > a[j]){
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
            }
        }
    }
}

//DESCENDING

void sorts(int a[], int n){
    int i,j,tmp;
    for(i=0; i<n-1; i++){
        for(j=i+1; j < n; j++){
            if(a[i] < a[j]){
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
            }
        }
    }
}

int main(){

    int a[]={4,3,6,5,8,1,2,3};
    int n=8,i;
    interchange(a,n);

    for(i=0;i < n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}
