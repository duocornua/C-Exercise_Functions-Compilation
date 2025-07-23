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
	int i, j, k=2, n;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		j=0;
		while(j<i){
			if(prime(k)==1){
				printf("%d ", k);
				j+=1;
			}
			k++;
		}
		printf("\n");
	}
	return 0;
}
