#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	int i;
	gets(c);
	int s=0,d=0,h=0;
	for ( i=0;i<strlen(c);i++)
	{
		if ((c[i]>='A' && c[i]<='Z')|| (c[i]>='a' && c[i]<='z')) s=s+1;
			else if(c[i]>='0' && c[i]<='9') d=d+1;
				else h=h+1;
	}
	printf("OUTPUT:\n");
	printf("%d\n%d\n%d",s,d,h);
}
