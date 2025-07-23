#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
	
	char a[100];
	gets(a);
	int i;
	
	int chu=0, so=0, db=0;
	for(i=0; i<strlen(a); i++){
		if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z') chu++;
		else if(a[i]>='0' && a[i]<='9') so++;
		else db++;
	}
	printf("%d\n%d\n%d", chu, so, db);
	
	
	return 0;
}
