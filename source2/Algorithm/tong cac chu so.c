#include <stdio.h>
int sumDigits(int n){   
	int sum=0, i;
	do{
		i=n%10 ;
		sum+=i;
		n=n/10;
	}while (n>0);
	return sum;
}

int main(){
	int n;
	do{
		printf("Enter an integer n: "); 
		scanf("%d", &n);
		if (n>=0){
			printf("%d\n", sumDigits(n));
		}
	}while (n>=0);	
	return 0;
}

