#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
	
	char a[100];
	gets(a);
	int i;
	for(i=0; i<strlen(a); i++){
		if(a[i]=='a' || a[i]=='A' ||a[i]=='I' || a[i]=='i' ||a[i]=='e' || a[i]=='E' ||a[i]=='U' || a[i]=='u' ||a[i]=='o' || a[i]=='O')
		printf("%c", toupper(a[i]));
		else printf("%c", tolower(a[i]));
	}
	
	
	return 0;
}
