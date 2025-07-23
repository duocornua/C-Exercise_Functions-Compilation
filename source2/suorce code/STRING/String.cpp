#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	gets(a);
	
	for (int i=0;i<strlen(a);i++)
	{
		if (a[i]>='A' && a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
	}
	
	for (int i=0;i<strlen(a);i++)
	{
		if (a[i]=='u' || a[i]=='e' || a[i]=='o' || a[i]=='a'||a[i]=='i')
		{
			a[i]=a[i]-32;
		}
	}
	puts(a);
	
}

