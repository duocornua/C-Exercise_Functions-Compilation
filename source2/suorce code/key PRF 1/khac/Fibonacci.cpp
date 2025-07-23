// thuat toan tim cac so fibonacci tu 1 den n

#include<stdio.h>
 
 // ham kiem tra so fibonacci
int fibonacci(int n) {
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;
 
    if (n < 0) {
        return 0;
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return 1;
}
 
 //ham main
int main() {
 int n;
 scanf("%d",&n);
 printf("OUTPUT:\n");
    for (int i = 1; i <= n; i++) {
        if (fibonacci(i)) printf("%d ",i);
    }
}
