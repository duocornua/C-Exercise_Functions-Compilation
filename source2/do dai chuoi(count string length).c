#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	printf(" Input String: ");
	gets(str);
	printf("\n");
	strlen(str);
	printf("\nThe length of String: %d", strlen(str));
	return 0;
}

