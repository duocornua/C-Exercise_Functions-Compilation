#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
	int i, j=0;
	gets(a);
	for(i=0;i<strlen(a);i++){
		if(a[i]<='9' && a[i]>='0'){
			j+=1;
		}
	}
	printf("%d", j);
	return 0;
}
