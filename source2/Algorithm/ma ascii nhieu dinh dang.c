#include <stdio.h>
int main(){
	char c1, c2, t;
	int i;
	printf("Input two characters: ");
	scanf("%c %c", &c1, &c2);
	if (c1>c2){
		t=c1;
		c1=c2; 
		c2= t;
	}
	printf("ASCII code difference: %d\n", c2-c1);
	for (i=c1; i<=c2; i+=1){
		printf("%c: %d, %o, %x\n", i, i, i, i);
	}
	return 0;
}

