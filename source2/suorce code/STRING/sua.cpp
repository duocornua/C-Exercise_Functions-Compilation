#include<stdio.h>
#include<math.h>
#include<string.h>
// vi tri:i;
// gia tri: a[i];

int main(){	
	char c[101];
	gets(c);
	
	for (int i=0;i<strlen(c);i++)
	{
		if ((c[i]>='a' &&c[i]<='z' && c[i-1]==' ') || c[0]>='a' && c[0]<='z')
		{
			c[i]=c[i]-32;
		}
	}
	
	puts(c);	
}

