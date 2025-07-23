#include<stdio.h>
#include<string.h>
int main()
{
	char s[101];
	gets(s);
	char x;
	scanf("%c",&x);
	for(int i = 0; i < strlen(s); ++i) 
	{
		if (x==s[i]) printf("%d ",i);
	}
}
