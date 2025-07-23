#include <stdio.h>
#include <string.h>
int main(){
	char a[100][100], t[100];
	int i, n;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%s", a[i]);
	}
	fflush(stdin);
	gets(t);
	for(i=0;i<n;i++){
		if(strstr(a[i],t)!=NULL){
			printf("%s\n", a[i]);
		}
	}
	return 0;
}
