#include <stdio.h>
#include <stdlib.h>
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
int main() {
    int n;
    scanf("%d",&n);
    int a,b,c;
    a= n/100;
    b= (n/10) % 10;
    c= n % 10;

    int array[]={a,b,c};
    sorts(array,3);
    for(int i=0; i<3 ;i++){
        printf("%d",array[i]);
    }


	return 0;
}
