#include <stdio.h>
#include <ctype.h>
#define MAX_LENGTH 100
int main() {
char str[MAX_LENGTH];
int i;
printf("Please enter a string (max length %d): ", MAX_LENGTH);
fgets(str, MAX_LENGTH, stdin);
for (i = 0; str[i] != '\0'; i++) {
if (i == 0 || str[i - 1] == ' ') {
str[i] = toupper(str[i]);
} else if (i == 1 || str[i - 2] == ' ') {
str[i] = toupper(str[i]);
}
}
printf("Converted string: %s\n", str);
return 0;
}
