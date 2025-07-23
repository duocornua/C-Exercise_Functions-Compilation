#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
int i;
char term[201];
scanf("%s", term);
int len = strlen(term);
for ( i = 0; i < len; i++) {
if (islower(term[i])) {
printf("%c", toupper(term[i]));
}
}
return 0;
}
