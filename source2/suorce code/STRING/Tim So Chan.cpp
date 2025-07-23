#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	gets(c);
	int s=0;
	for (int i=0;i<strlen(c);i++)
	{
		if (((c[i]>='0') && (c[i]<='9')) && c[i]%2==1)  
		s=s+1;
	}
	printf("OUTPUT:\n");
	printf("%d",s);
}
