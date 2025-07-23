/*
Vi?t hàm c?t chu?i h? tên thành chu?i h? lót và chu?i tên.
Ví d?: chu?i h? tên là:”Nguy?n Van A” c?t ra 2 chu?i là chu?i h? lót:”Nguy?nVan”,chu?i tên là:”A
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void cathoten(char *s)
{
    char *t;
    int i;
    for(i=strlen(s)-1;i>=0;i--)
        if(s[i]==' '&&s[i+1]!=' ')
            break;
    t=s+i+1;
    s[i]='\0';
    puts(s);
    //printf("\n");
    puts(t);

}

int main()
{
    char s1[100];
    gets(s1);
    cathoten(s1);
    return 0;
}
