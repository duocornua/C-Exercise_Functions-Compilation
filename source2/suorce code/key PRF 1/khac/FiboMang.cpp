#include <stdio.h>

int fibo(int n)
{
    int a[n+1];
    a[0]=0; a[1]=1; a[2]=1;
    for(int i=3;i<=n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    return a[];
}
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	if (fibo(i)) printf("%d",i);
	return 0;
}
