/*
Vi?t h�m c?t chu?i h? t�n th�nh chu?i h? l�t v� chu?i t�n.
V� d?: chu?i h? t�n l�:�Nguy?n Van A� c?t ra 2 chu?i l� chu?i h? l�t:�Nguy?nVan�,chu?i t�n l�:�A
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
