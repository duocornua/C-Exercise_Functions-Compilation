int main(){
    int n,i;
    printf("Please enter the positive integer N: ");
    scanf("%d",&n);
    printf("The multiplication table of %d is: ",n);
    for( i=1;i<10;i++){
        printf("\n      %d       x       %d         =        %d",i,n,i*n);
    }
    printf("\n     %d       x       %d         =        %d",i,n,i*n);
    return 0;
}
