#include<stdio.h>
#include<string.h>
int deletE(char c[100])
{
	for (int i=0;i<5;i++)
	{
		c[i]=' ';
	}
	puts(c);
}
int main()
{
	char s[1000],t[1000]; int d=0;
	strcpy(t,"");
	gets(t);
	deletE(t);	
}
