#include <stdio.h>
#include <string.h>
int main(){
	char o[100], p[100], rev[100]="";
	int i;
	gets(o);
	gets(p);
	for(i=0;i<strlen(p);i++){
		rev[i]=p[strlen(p)-i-1];
	}
	char *ptr=strstr(o,p);
	while(ptr!=NULL){
		char temp[100];
		strcpy(temp,ptr+strlen(p));
		strcpy(ptr,rev);
		strcpy(ptr+strlen(rev),temp);
		ptr=strstr(ptr+strlen(rev),p);
	}
	puts(o);
	return 0;
}
