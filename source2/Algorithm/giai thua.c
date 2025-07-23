#include <stdio.h>
int factorial(int n) {
	int a=1, i;
	for (i=1; i<=n; i+=1){
		a*=i;
	}
	return a;
} 

int main(){
	int n;
	do{
		printf("Enter an integer n: "); 
		scanf("%d", &n);
	}while(n<1);
	printf("%d", factorial(n));
	return 0;
}

