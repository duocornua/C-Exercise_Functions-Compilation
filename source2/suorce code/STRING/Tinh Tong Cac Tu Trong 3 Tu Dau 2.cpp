#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	gets(c);
	int d=0,s=0,k;
	for (int i=0;i<strlen(c);i++)
	{
		if (c[i]==' ') d=d+1;
    	if (c[i]==' ' && d==3)
    	{
    		k=i;
    		break;
		}
	}
	 for (int i=0;i<k;i++)
	 {
	 	if (c[i]!=' ') s=s+1;
	 }
	 printf("%d",s);
}
	

