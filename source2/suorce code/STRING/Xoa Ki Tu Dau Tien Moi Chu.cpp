#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000],t[1000];
	strcpy(t,"");
	gets(s);
	int d=0;
	for (int i=1;i<strlen(s);i++)
	{
		if((s[i-1]==' ')&&(s[i+1]!=' '))
		{
			continue;
		}
		t[d]=s[i];
		d++;
	}
	t[d]='\0';
	puts(t);
return 0;	
}
