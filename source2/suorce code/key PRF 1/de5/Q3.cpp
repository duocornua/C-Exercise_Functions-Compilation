#include<stdio.h>
#include<string.h>
int main()
{
	char c[100]; int s=0;
	gets(c);
	for (int i=0;i<strlen(c);i++)
	{
		if((c[i+1]==' ') && (c[i]!=' ')) 
		{s++;
		}
	}
	printf("%d",s+1);
	return 0;
}
