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
	int count=0, k, n;
	scanf("%d", &n);
	k=n+1;
	while(count<3){
		if(prime(k)==1){
			printf("%d ", k);
			count+=1;
		}
		k++;
	}
	return 0;
}
