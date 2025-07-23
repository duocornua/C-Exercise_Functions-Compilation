#include <stdio.h>

int main(){
	char a[100][100];
	int i, n;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%s", a[i]);
	}
	fflush(stdin);
	char t;
	scanf("%c", &t);
	if(t>='A' && t<='Z'){
		t=tolower(t);
	}
	for(i=0;i<n;i++){
		if(a[i][0]==t || a[i][0]==(t-32)){
			puts(a[i]);
		}
	}
	return 0;
}
