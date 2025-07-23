#include <stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	int x=0;
	if(a>0)
		while(a%2==0){
			x++;
			a=a/2;		
		}
	if(a!=1){
		printf("%d is not a power of 2", a);
	}else{
		printf("%d", x);
	}
	return 0;
}
