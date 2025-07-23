#include <stdio.h>
int main(){
	int i;
	for (i=0; i<=255; i+=1){
		printf("%c: %d, %o, %x\n", i, i, i, i);
		if (i!=0 && i%20==0){
			getchar();
		}
	}
	return 0;
}

