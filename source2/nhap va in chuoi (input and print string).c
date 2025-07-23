#include<stdio.h>
#include<string.h>
char str[50];
void InString()
{
	printf(" Input String: ");
	gets(str);
}
void OutString()
{
	printf("\n");
	printf(" Output String: ");
	printf("%s",str);
}

int main()
{
	InString();
	OutString();
}

