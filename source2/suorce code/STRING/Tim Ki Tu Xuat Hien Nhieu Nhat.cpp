#include<stdio.h>
#include<string.h>
int main()
{
	char s[101];
	gets(s);
	int d[1000];
	for (int i=0;i<strlen(s);i++)
	{
		d[s[i]]=0;
	}
	for (int i=0;i<strlen(s);i++)
	{
		d[s[i]]+=1;
	}
	int max=d[s[0]];
	int kt=s[0];
	for (int i=0;i<strlen(s);i++)
	{
		if (d[s[i]]>max) 
		{
		max=d[s[i]];
		kt=s[i];
		}
	}
	printf("%c",kt);	
}
