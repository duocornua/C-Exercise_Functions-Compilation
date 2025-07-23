#include <stdio.h>
#include <string.h>
int main(){
	char a[100], b[100]="";
	fflush(stdin);
	gets(a);
	int i;
	int n=strlen(a);
	strlwr(a);
	for(i=strlen(a)-1;i>=0;i--){
		if(i==0 || (a[i]!=' ' && a[i-1]==' ')){
			strcat(b,&a[i]);
			if(i!=0){
				strcat(b," ");
			}
			a[i-1]='\0';
			i--;
		}
	}
	puts(b);
	/*for(i=0;i<(n/2);i++){
		char t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	for(i=0;i<strlen(a);i++){
		if(i==0 || (a[i]!=' ' && a[i-1]==' ')){
			a[i]-=32;
		}
	}
	puts(a);
	*/
	return 0;
}
