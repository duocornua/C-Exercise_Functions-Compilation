#include <stdio.h>
int main(){
	int i, j, k, n;
	char c='A'-1;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%c", c+j);
		}
		for(k=i-1;k>=1;k--){
			printf("%c", c+k);
		}
		printf("\n");
	}
	return 0;
}
