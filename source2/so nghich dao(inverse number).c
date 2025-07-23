#include<stdio.h>
#include<math.h>
int main() {
	int N;
	int n = 0 ;
	do {
		printf("\nNhap N: ");
		scanf("%d", &N);
	} while(N < 0);
	while (N<0)
		printf("\nError: n >= 0 !");
	while(N != 0) {
		n = n * 10 + N%10;
		N = N / 10;
	}
	printf("\nSo nghich dao la: %d",n);
}
