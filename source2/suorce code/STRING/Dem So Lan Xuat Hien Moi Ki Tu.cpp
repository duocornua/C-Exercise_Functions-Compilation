#include<stdio.h>
#include<string.h>
bool tham[1000];
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
	for (int i=0;i<strlen(s);i++)
	{
		if (tham[s[i]]==false)
		{
		printf("%c-%d\n",s[i],d[s[i]]);
		tham[s[i]]=true;
		}
	}
}
