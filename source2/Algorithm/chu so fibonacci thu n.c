#include <stdio.h>
int fibo(int n){
	int i, x=1, y=1, sum;
	for (i=3; i<=n; i+=1){
		sum=x+y;
		x=y;
		y=sum;
	}
	if (n<=2){
		sum=1;
	}
	return sum;
}

int main(){
	int n;
	do{
		printf("Enter an integer n: "); 
		scanf("%d", &n);
	}while(n<1);
	printf("%d", fibo(n));
	return 0;
}

