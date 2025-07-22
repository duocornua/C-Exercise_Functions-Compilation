#include<stdio.h>
#include<math.h>
int main() {

    int x,n;
    double s=0;
    printf("x=");
    scanf("%d", &x);
    printf("n=");
    scanf("%d", &n);
    for(int i=0; i<=n; i++)
    {
        s+= pow(x,i);
    }
    printf("S=%.1lf", s);

    return 0;
}
