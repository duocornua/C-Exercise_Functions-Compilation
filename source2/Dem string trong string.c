#include <stdio.h>
#include <string.h>
int main(){
	char o[100], p[100];
	int i=0;
	gets(o);
	gets(p);
	char *ptr=strstr(o,p);
	while(ptr!=NULL){
		i++;
		strcpy(ptr, ptr+strlen(p));
		ptr=strstr(o,p);
	}
	printf("%d", i);
	return 0;
}
