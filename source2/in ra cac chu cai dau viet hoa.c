#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
char term[201];
gets(term);
int L = strlen(term);
int i;
for(i=0; i<L; i++) {
term[i] = tolower(term[i]);
if(i==0 || (i>0 && term[i-1]==' ')) term[i] = toupper(term[i]);
}
for(i=0; i<L; i++)
if(('A' <= term[i])&&(term[i] <= 'Z'))
printf("%c", term[i]);
return 0;
}
