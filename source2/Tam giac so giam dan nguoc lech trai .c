#include <stdio.h>
int main(){
	int n, i, j, sum;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		sum+=i;	
	}
	for(i=1;i<=n;i++){
		for(j=n-i+1;j>=1;j--){
			printf("%d ", sum);
			sum--;
		}
		printf("\n");
	}
	return 0;
}
