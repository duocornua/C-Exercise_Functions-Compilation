#include <stdio.h>
int main(){
	long long n,a,b,c;
	printf("nhap vao 1 so nguyen duong n: ");
    scanf("%lld",&n);
	if (n<0) 
	    {
		printf("nhap lai so nguyen duong n: ");
		scanf("%lld",&n);
		}
	    {a=n/3600;
		b=(n%3600)/60;
		c=(n%3600)%60;
		printf("%lld (h);%lld (m);%lld (s))",a,b,c);}
	return 0;
	}

