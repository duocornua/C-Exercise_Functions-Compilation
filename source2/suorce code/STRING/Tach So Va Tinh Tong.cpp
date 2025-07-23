#include<stdio.h>
#include<string.h>
int main()
{
	char s[101];
	int d=1;
	scanf("%[^\n]",&s);
	for (int i=0;i<strlen(s);i++)
	{
		if (s[i]>='0' && s[i]<='9')
		{
			printf("%c ",s[i]);
			d=d+(s[i]-'0');
		}
	}
	printf("\n");
	printf("%d",d);
}
