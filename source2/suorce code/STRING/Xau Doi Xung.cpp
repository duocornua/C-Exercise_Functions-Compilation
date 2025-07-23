#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000],d[1000];
	gets(s);
	for (int i=0;i<=strlen(s)/2;i++)
	{
	   if (s[i]!=s[strlen(s)-i-1])
	    {
		printf("kodoixung");
	    return 0;
	    }
	}
	printf("doixung");
}
