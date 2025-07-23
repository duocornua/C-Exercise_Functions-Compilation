#include <stdio.h>
double makeDouble(int a, int b){
	double x=b;
	while (x>1){
		x=x/10;	
	}
	double q=a+x;
	if(a<0){
		q=a-x;
	}
	return q;
}

int main(){
	int a, b;
	printf("Enter the ipart: ");
	scanf("%d", &a);
	do{
		printf("Enter the fraction: "); 
		scanf("%d", &b);
	}while (b<0);
	printf("%lf", makeDouble(a, b));
	return 0;
}

