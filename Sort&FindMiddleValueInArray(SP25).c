#include<stdio.h>

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
//ASCENDING
int main()
{
    int n, a[10000];
    double median=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    interchange(a,n);
    if(n%2!=0){
        median=a[n/2];
    } else {
        median=(a[n/2-1]+ a[n/2])/2.0;
    }

    printf("%.2f",median);

    return 0;
}

