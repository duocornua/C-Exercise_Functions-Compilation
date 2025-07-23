#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
	int i, count=0, check=0;
	gets(a);
	for(i=0;i<strlen(a);i++){
		if(check==3){
			break;
		}
		if(a[i]!=' ' && (a[i-1]==' ' || i==0)){
			while(a[i]!=' ' && a[i]!='\0'){
				count+=1;
				i++;
			}
			check+=1;
		}
	}
	printf("%d", count);
	return 0;
}
	
