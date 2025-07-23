#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000],t[1000]; int d=0;
//	strcpy(t,"");
	gets(t);
	for (int i=0;i<strlen(t);i++)
	{
		if (t[i]==' ') t[i]='*';
	}
	printf("OUTPUT:\n");
	puts(t);
}
