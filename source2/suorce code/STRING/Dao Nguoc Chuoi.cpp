#include <stdio.h>
#include<string.h>
void reverse(char name[])
{
	char kq[100];
	int d=0;
	for (int i=strlen(name)-1;i>=0;i--)
	{
		kq[d]=name[i];
		d++;
	}
	kq[d]='\0';
	puts(kq);
}
int main()
{
	char name[20];
	gets(name);
	reverse(name);
}
