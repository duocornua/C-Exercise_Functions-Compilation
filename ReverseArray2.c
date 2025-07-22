#include<stdio.h>

const char* get_suffix(int i) {
    if (i % 100 >= 11 && i % 100 <= 13)
        return "th";
    switch (i % 10) {
        case 1: return "st";
        case 2: return "nd";
        case 3: return "rd";
        default: return "th";
    }
}

int main()
{
    int n,odd=0,even=0;
    int a[1000];
    printf("How many elements of numeric array? ");
    scanf("%d",&n);

    if(n>0){
    printf("Please enter the value for %d elements: \n",n);

       for(int i=0; i<n; i++){
        printf("Value of the %d%s element is: ",i+1,get_suffix(i+1));
        scanf("%d",&a[i]);
        }

    printf("The entered array is: ");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
        if(i!=n-1) printf(", ");
    }

    printf("\nThe reverse array is: ");
    for(int i=n-1; i>=0; i--){
        printf("%d",a[i]);
        if(i!=0) printf(", ");
    }

  } else printf("The number of element of numeric array must be greater than 0!");
    return 0;
}


