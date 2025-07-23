#include <stdio.h>
int gcd(int a, int b){
	int i, j;
	for (i=1; i<=b; i+=1){
		if (b%i==0 && a%i==0){
			j=i;
		}
	}
	return j;
}

int lcm(int a, int b){
	return a*b/gcd(a,b);
}

int main(){
	int a, b;
	do{
		printf("Enter two positive number: "); 
		scanf("%d %d", &a, &b);
	}while (a<=0 || b<=0);
	printf("%d %d", gcd(a,b), lcm(a,b));
	return 0;
}

