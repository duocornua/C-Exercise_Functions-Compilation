#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
	gets(a);
	int i, j;
	for(i=strlen(a)-1;i>=0;i--){
		if(a[i]=='1'){
			for(j=i-1;j>=0;j--){
				if(a[j]=='0'){
					a[j]='1';
				}else{
					a[j]='0';
				}
			}
			break;
		}
	}
	puts(a);
	return 0;
}
