#include <stdio.h>
#include <string.h>
char* nameStr(char s[]){ 
	strlwr(s);
	int L = strlen(s);
	int i;
	for (i=0;i<L;i++){
		if (s[i]!=' ' && (s[i-1]==' ' || i==0)){
			s[i]=toupper(s[i]);
			s[i+1]=toupper(s[i+1]);
		}
	}
	return s;
}
int main(){
	char a[100];
	gets(a);
	puts(nameStr(a));
	return 0;
}
