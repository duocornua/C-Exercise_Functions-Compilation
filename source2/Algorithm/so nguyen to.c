#include <stdio.h>
#include <math.h>
int prime(int n){
	int i, m=sqrt(n), q=1;    
	for (i=2; i<=m; i+=1){
		if (n%i==0){
			q=0; 
		}
	}
	return q;
}

int main(){
	int n, j;
	do{
		printf("Enter an integer n: "); 
		scanf("%d", &n);
	}while (n<2);
	for (j=2; j<=n; j+=1){
		if (prime(j)==1){
			printf("%d ", j);
		}	
	}
	return 0;
}

