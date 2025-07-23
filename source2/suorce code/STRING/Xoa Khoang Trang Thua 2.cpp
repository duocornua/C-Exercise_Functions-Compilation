#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000],t[1000]; 
	int d=0;
	strcpy(t,"");
	gets(s);
	for (int i=0;i<strlen(s);i++)
	{
		if (s[i]!=' ')
		{
			t[d]=s[i];
			d++;
			if(s[i+1]==' ') 
			{
				t[d]=' ';
				d++;
			}
	    }
	}
	t[d]='\0';
	puts(t);
}
