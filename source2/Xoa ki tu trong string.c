#include <stdio.h>
#include <string.h>
int main(){
	char a[101];
	int i;
	scanf("%[^\n]", a);
	for(i=0;i<strlen(a);i++){
		if(!(a[i]>='a' && a[i]<='z') && !(a[i]>='A' && a[i]<='Z')){
			strcpy(&a[i],&a[i+1]);
			i--;
		}
	}
	printf("%s", a);
	return 0;
}
