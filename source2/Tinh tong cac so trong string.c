#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
	gets(a);
	int i, sum=0;
	for(i=0;i<strlen(a);i++){
		if(a[i]>='0' && a[i]<='9'){
			int n=a[i]-48;
			if(n%2==0){
				sum+=n;
			}
		}
	}
	printf("%d", sum);
	return 0;
}
