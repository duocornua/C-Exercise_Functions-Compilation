#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
int main() {
char str[MAX_LENGTH + 1]; // Add 1 to include space for null terminator
int len;
// Input the string from the user
printf("Enter a string (maximum length %d): ", MAX_LENGTH);
fgets(str, MAX_LENGTH + 1, stdin);
// Remove newline character from input string
len = strlen(str);
if (str[len - 1] == '\n') {
str[len - 1] = '\0';
}
// Convert uppercase letters to lowercase letters
for (int i = 0; i < len; i++) {
if (str[i] >= 'A' && str[i] <= 'Z') {
str[i] = str[i] + ('a' - 'A');
}
}
// Print the string after conversion
printf("String after conversion: %s\n", str);
return 0;
}
