#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	char a[100];
	gets(a);
	int i, count=0;
	for(i=0;i<strlen(a);i++){
		if(ispunct(a[i])!=0){
			count+=1;
		}
	}
	printf("%d", count);
	return 0;
}

