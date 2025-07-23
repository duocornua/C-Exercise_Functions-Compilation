#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	gets(s);
	
	for (int i=0;i<strlen(s);i++)
	{
		if (i%2==0 && s[i]>='a' && s[i]<='z')
		s[i]=s[i]-32;
	}
	puts(s);
}
