#include <stdio.h>
int main(){
	int i, n, sum=0;
	scanf("%d", &n);
	for(i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n){
		printf("%d is a perfect number", n);
	}else{
		printf("%d is a not perfect number", n);
	}
	return 0;
}
