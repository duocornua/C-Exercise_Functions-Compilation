#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
	
	char a[100];
	gets(a);
	int i, check=0;
	
	for(i=0; i<strlen(a); i++){
		if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z' || a[i]==' ') check=1;
		else {
			check=0;
			break;
		}
	}
	
	printf("%d", check);
	
	return 0;
}
