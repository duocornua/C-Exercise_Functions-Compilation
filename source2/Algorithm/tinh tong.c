#include <stdio.h>
int main(){
	int n, sum=0;
	do {
		printf("Input an integer: ");
		scanf("%d", &n);
		if (n!=0){
			sum+=n;
		}
	}while (n!=0);
	printf("Result: %d",sum);
	return 0;
}

