#include<stdio.h>
#include<string.h>
int main()
{
	char s[101];
	gets(s);
	int i;
	
	for(i = 0; i < strlen(s); ++i) 
	{
		if (i%2==0 && s[i]>='a'&&s[i]<='z')
		{
			s[i]=s[i]-32;
		}
		if (i%2!=0 && s[i]>='A'&&s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
	}
	puts(s);
}
