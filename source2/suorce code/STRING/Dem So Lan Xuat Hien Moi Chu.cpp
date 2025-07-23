#include <stdio.h>
#include<string.h>
int WordCount(char str[])
{
    int word = (str[0] != ' ');
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            word++;
        }
    }
    return word;
}
int main()
{
	char c[1000];
	gets(c);
	printf("%d",WordCount(c));
}
   
		
