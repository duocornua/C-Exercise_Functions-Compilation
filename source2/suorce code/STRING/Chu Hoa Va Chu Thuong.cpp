#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	gets(s);
	for (int i=0;i<strlen(s);i++)
	{
		if ((s[i]>='a')&&s[i]<='z')
		{
			s[i]=s[i];
		}
		else if ((s[i]>='A')&&s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
	}
	puts(s);
}
