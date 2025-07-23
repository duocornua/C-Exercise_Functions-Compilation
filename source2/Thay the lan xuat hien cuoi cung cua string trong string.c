#include <stdio.h>
#include <string.h>
int main(){
	char o[100], p[100], q[100], *ptr;
	int i, j, k, check;
	gets(o);
	gets(p);
	gets(q);
	for(i=strlen(o)-1;i>=0;i--){
		k=0;
		check=0;
		if(o[i]==p[k]){
			check=1;
			for(j=i;j<strlen(p);j++){
				if(o[j]!=p[k]){
					check=0;
				}
				k++;
			}
		}
		if(check==1){
			ptr=&o[i];
			break;
		}
	}
	char temp[100];
	strcpy(temp,ptr+strlen(p));
	strcpy(ptr,q);
	strcpy(ptr+strlen(q),temp);
	puts(o);
	return 0;
}
