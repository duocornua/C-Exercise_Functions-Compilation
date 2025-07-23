#include<stdio.h>
#include<math.h>

int main() {
	int n, i,j;
	char chars;
	printf("nhap chieu cao tam giac n = ");
	scanf("%d", &n);

	/* 		tam giac 5
					*
				  * * *
				* * * * *
	*/

	for(i = 0; i < n; i++) {
		for (j = n; j >= i; j--) {
			printf(" ");
		}
		for(j =0; j <= i; j++) {
			printf("*");
		}
		for(j =0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for(i = 0; i <= n; i++) {
		for(j = 0; j <= i; j++ ) {
			printf(" ");
		}
		for (j = n; j >= i; j--) {
			printf("*");
		}
		for(j = n; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}

		}
