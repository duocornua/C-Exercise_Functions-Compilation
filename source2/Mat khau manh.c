#include <stdio.h>
#include <string.h>
int main(){
	char a[200];
	gets(a);
	int i, a1=0, a2=0, a3=0, a4=0, check=1;
	if(strlen(a)<12){
		check=0;
	}else{
		for(i=0;i<strlen(a);i++){
			if(a[i]>='A' && a[i]<='Z'){
				a1=1;
			}if(a[i]>='a' && a[i]<='z'){
				a2=1;
			}if(a[i]>='0' && a[i]<='9'){
				a3=1;
			}if(!(a[i]>='A' && a[i]<='Z') && !(a[i]>='a' && a[i]<='z') && !(a[i]>='0' && a[i]<='9')){
				a4=1;
			}
		}
		if(a1==0 || a2==0 || a3==0 || a4==0){
			check=0;
		}
	}
	if(check==1){
		printf("Yes");
	}else{
		printf("No");
	}
	return 0;
}
