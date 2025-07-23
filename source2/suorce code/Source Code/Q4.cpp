#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
char* lTrim(char* s);
char* rTrim(char* s);
char* trim(char* s);
int checkName(char* s);
int main(int argc, char *argv[]) {
//=== Do not add new or change statements in the main function.===
system("cls");
printf("\nTEST Q4 (3 marks):\n");
char s[21], k[21];
fflush(stdin);
printf("Please enter string s: ");
scanf("%20[^\n]", s);
trim(s);
strlwr(s);
//=== The output will be used to mark your program.===============
printf("\nOUTPUT:\n");
printf("%d",checkName(s));
printf("\n");
system ("pause");
return 0;
}
//==============================================
int checkName(char* s)
{
int result ;
for(int i=0;i<strlen(s);i++)
{
result = 0;
char c = *(s+i);
if((int)c == 32 || (c >=65 && c<=90) || (c>=97 && c<=122))
{
result = 1;
}
else
{
break;
}
}
return result;
}
