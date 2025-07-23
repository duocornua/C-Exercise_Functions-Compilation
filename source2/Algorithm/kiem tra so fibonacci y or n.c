#include <stdio.h>
int isFibo(int n){
	int i, x=1, y=1, sum=0, q=0;
	if (n==1){
		q=1;
	}
	while (sum<n){
		sum=x+y;
		x=y;
		y=sum;
		if (sum==n){
			q=1;
		}
	}
	return q;
}

int main(){
	int n;
	do{
		printf("Enter an integer n: "); 
		scanf("%d", &n);
	}while(n<1);
	if (isFibo(n)==1){
		printf("It is a Fibonacci element");
	}else{
		printf("It is not a Fibonacci element");
	}
	return 0;
}

