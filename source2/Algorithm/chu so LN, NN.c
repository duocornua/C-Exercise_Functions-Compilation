#include <stdio.h>
void printMinMaxDigits(int n){
	int x, min, max;
	min=n%10;
	max=n%10;
	while (n>0){
		x=n%10;
		if (min>x){
			min=x;
		}
		if (max<x){
			max=x;
		}
		n=n/10;
	}
	printf("%d ", min);
	printf("%d", max);
}

int main(){
	int n;
	do{
		printf("Enter a non-negative number: "); 
		scanf("%d", &n);
	}while (n<0);
	printMinMaxDigits(n);
	return 0;
}

