#include <stdio.h>
#include <string.h>
int main(){
	int n, a[100], i=0, j;
	scanf("%d", &n);
	int temp=n;
	while(n!=0){
		a[i]=n%8;
		i++;
		n=n/8;
	}
	for(j=i-1;j>=0;j--){
		printf("%d", a[j]);
	}
	printf("\n");
	int b[100];
	i=0;
	n=temp;
	while(n!=0){
		b[i]=n%16;
		i++;
		n=n/16;
	}
	for(j=i-1;j>=0;j--){
		switch (b[j]){
			case 10:
				printf("A");
				break;
			case 11:
				printf("B");
				break;
			case 12:
				printf("C");
				break;
			case 13:
				printf("D");
				break;
			case 14:
				printf("E");
				break;
			case 15:
				printf("F");
				break;
			default:
				printf("%d", b[j]);
				break;
		}
	}
	return 0;
}
