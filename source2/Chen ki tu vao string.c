#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
	int i, count=0;
	gets(a);
	for(i=0;i<strlen(a);i++){
		if((i-count)%3==0 && i!=0){
			char t[100];
			strcpy(t, &a[i]);
			strcpy(&a[i], "-");
			strcpy(&a[i]+1, t);
			count+=1;
			i++;
		}
	}
	puts(a);
	return 0;
}
