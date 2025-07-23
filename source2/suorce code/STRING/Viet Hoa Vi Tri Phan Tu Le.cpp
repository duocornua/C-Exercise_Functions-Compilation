#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	gets(s);
	for (int i=0;i<strlen(s);i++)
	{
		if ((s[i]>='a')&&s[i]<='z'&& i%2!=0)
		{
			s[i]=s[i]-32;
		}
	}
	puts(s);
}
