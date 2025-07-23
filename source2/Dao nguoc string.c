#include <stdio.h>
#include <string.h>
int main(){
	char a[100], b[100]="";
	int i;
	gets(a);
	strlwr(a);
	for(i=0;i<strlen(a);i++){
		b[i]=a[strlen(a)-i-1];
	}
	puts(b);
	return 0;
}
