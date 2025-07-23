#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
	int i, count=0, j, k;
	gets(a);
	for(i=0;i<strlen(a);i++){
		if(a[i]!=' ' && (a[i-1]==' ' || i==0)){
			int temp=i;
			while(a[i]!=' ' && a[i]!='\0'){
				i++;
			}
			for(j=temp;j<i-1;j++){
				for(k=j+1;k<i;k++){
					if(a[j]>a[k]){
						char t=a[j];
						a[j]=a[k];
						a[k]=t;
					}
				}	
			}
		}
	}
	puts(a);
	return 0;
}
	
