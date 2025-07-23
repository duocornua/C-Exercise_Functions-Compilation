/*
Cho chu?i str, nh?p vào v? trí vt và s? kí t? c?n xóa n, 
hay xóa n kí t? tính t? v? trí vt trong chu?i str.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void xoa(char *s,int vt,int n)
{
    strcpy(s+vt,s+vt+n);
    puts(s);
}

int main()
{
    char s1[100];
    gets(s1);
    int pos, n;
    scanf("%d%d", &pos, &n);
    xoa(s1, pos, n);
    return 0;
}
