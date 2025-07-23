// cat chuoi o vi tri thu x duoc nhap tu ban phim
#include<stdio.h>
#include<string.h>
int main()
{
	char s[101];
	gets(s);
	int x;
	scanf("%d",&x);
	char t[1000],d[1000];
	for(int i = 0; i < x; ++i) 
	{
		printf("%c",s[i]);
	}
	printf("\n");
	for(int i = x; i < strlen(s); ++i) 
	{
		printf("%c",s[i]);
	}
}
	
