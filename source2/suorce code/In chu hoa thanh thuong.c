#include <stdio.h>
#include <ctype.h>

int main() {
char s[100];
printf("Enter a string: ");
fgets(s, sizeof(s), stdin);
for (int i = 0; s[i] != '\0'; i++) {
// Convert uppercase letters to lowercase
if (isupper(s[i])) {
s[i] = tolower(s[i]);
}
}
printf("String after conversion: %s\n", s);
return 0;
}
