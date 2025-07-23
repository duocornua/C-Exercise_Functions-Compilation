#include<stdio.h>
#include<string.h>
int main()
{
	char n[100]; 
	int s=0;
	gets(n);
	for (int i=0;i<strlen(n);i++)
	{
		if ((n[i]>='0')&&(n[i]<='9'))
		{
			s=s+1;
		}
	}
	printf("%d",s);
return 0;
}
		
