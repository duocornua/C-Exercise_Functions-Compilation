#include <stdio.h>
int gcd(int a, int b){  
	while (a!=b){
       	if (a>b){
	   		a-=b;
	   	}else{
		   b-=a;
		}
	}
   	return a;
}
int lcm(int a, int b){ 
	return a*b/ gcd(a,b);
}
int main(){
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d\n", gcd(a,b));
	printf("%d", lcm(a,b));
	return 0;
}

