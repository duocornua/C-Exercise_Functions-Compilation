#include <stdio.h>
#include <math.h>
int prime(int n) {
    int m=sqrt(n);
	int i; 
    if (n<2) return 0;
    for (i=2; i<=m; i++) 
        if (n%i==0) return 0 ; 
    return 1;
}
int main(){
	int i, n, a[100], count=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		if(prime(a[i])==1){
			count+=1;
		}
	}
	printf("%d", count);
	return 0;
}

