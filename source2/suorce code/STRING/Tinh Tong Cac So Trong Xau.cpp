#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];int s1=0;
	gets(s);
	for (int i=0;i<strlen(s);i++)
	{
		if((s[i]>='0')&&(s[i]<='9'))
		{
			s1+=1;
		}
	}
	printf("%d",s1);
}
