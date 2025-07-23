#include <stdio.h>
#include <string.h>
#include <ctype.h>
void chuhoa(char s[])
{
    int i;
    s[0]=toupper(s[0]);
    for(i=1;i<strlen(s);i++) 
        if(s[i]==' ')
        {
            s[i+1]=toupper(s[i+1]);
            i++;
        }
        else
        {
            if(s[i]>='A' && s[i]<='Z')
                s[i]=s[i]+32;
        }
    puts(s);
}
int main()
{
    char s1[100];
    gets(s1);
    printf("OUTPUT:\n");
    chuhoa(s1);
    return 0;
}
