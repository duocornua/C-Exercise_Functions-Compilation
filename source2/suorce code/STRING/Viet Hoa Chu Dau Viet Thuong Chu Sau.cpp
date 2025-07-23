#include<stdio.h>
#include<string.h>
int main()
{
	char s[101];
	gets(s);
	for(int i = 0; i < strlen(s); ++i) 
	{
		if (((s[i]>='a' && s[i]<='z') && s[i-1]==' ') || (s[0]>='a'&&s[0]<='z'))
		{
			s[i]=s[i]-32;
		}
		if ((s[i]>='A' && s[i]<='Z') && i!=0 && s[i-1]!=' ')
		{
			s[i]=s[i]+32;
		}
	}
	puts(s);
}
