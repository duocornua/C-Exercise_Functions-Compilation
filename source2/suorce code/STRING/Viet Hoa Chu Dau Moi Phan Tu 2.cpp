#include<stdio.h>
#include<string.h>
int main()
{
	char s[101];
	gets(s);
	for(int i = 0; i < strlen(s); ++i) 
	{
		if(i==0 && (s[i]>='a' && s[i]<='z') )s[i]+=32;
		
		if (((s[i]>='a' && s[i]<='z') && s[i-2]==' ') )
		{
			s[i]=s[i]+32;
		}
		 if(s[i]>='A' && s[i]<='Z' && s[i-2]!=' ')
		 {
		 	
		 
			s[i]=s[i]-32;
		}
	}
	printf("OUTPUT:\n");
	puts(s);
}
