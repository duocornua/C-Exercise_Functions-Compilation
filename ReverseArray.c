#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

    int a[100],n,i;
    printf("Nhap vao n: ");
    scanf("%d",&n);
    printf("Nhap %d phan tu: ",n);
    for(i=0; i < n; i++){
    scanf("%d",&a[i]);
    }
    printf("Mang vua nhap theo thu tu nguoc lai: \n");
    for(i = n-1; i>=0 ;i--){
        printf("%d ",a[i]);
    }

    return 0;
}
