#include <stdio.h>
int main(){
	int a, b;
	do {
		printf("Input two integers: ");
		scanf("%d %d", &a, &b);
		if (a!=0 && b!=0){
			int i=a;
			a=b;
			b=i;
			printf("Swapped: %d %d\n", a, b);
		}
	}while (a!=0 && b!=0);
	return 0;
}

