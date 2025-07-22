#include<stdio.h>

int main()
{
    int n,ne=0,ze=0,po=0;
    int a[1000];
    printf("How many elements of numeric array? ");
    scanf("%d",&n);
    if(n>0){
    printf("Please enter the value for %d elements: \n",n);
    
       for(int i=0; i<n; i++){
        printf("The value of a[%d] is: ",i);
        scanf("%d",&a[i]);
        if(a[i]<0){ne+=1;}
        if(a[i]==0){ze+=1;}
        if(a[i]>0){po+=1;}
        }
    printf("The number of negative elements is %d\n",ne);
    printf("The number of zero     elements is %d\n",ze);
    printf("The number of positive elements is %d",po);

    } else printf("The number of element of numeric array must be greater than 0!");
    return 0;
}


