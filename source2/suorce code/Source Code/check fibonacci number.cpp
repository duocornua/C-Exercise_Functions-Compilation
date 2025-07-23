#include<stdio.h>
int Fibonacci(int n){
	int t1=1, t2=1, f=1, i;
	if(n==1)
	return 1;
	while (f<n){
		f=t1+t2;
		t1=t2;
		t2=f;
	}
	return n==f;
}
	int main(){
		int n;
		do{
			printf("Nhap n: ");
			scanf("%d", &n);
    }   while (n<1);
    if(Fibonacci(n)==1){
    	printf("No la mot phan tu cua Fibonacci!");
	}else {
		printf("No khong la mot phan tu cua Fibonacci!");
	}
		return 0;
}
