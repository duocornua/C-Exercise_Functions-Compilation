//Q6.NHAP VAO XAU KY TU TOI DA 100
//KIEM TRA KY TU TRONG CHUOI: NEU CHU IN HOA--> CHU THUONG 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define MAX_LENGTH 100
int main() {
system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
char str[MAX_LENGTH + 1]; // Add 1 to include space for null terminator
int len;
// Input the string from the user
fgets(str, MAX_LENGTH + 1, stdin);
// Remove newline character from input string
len = strlen(str);
if (str[len - 1] == '\n') {
str[len - 1] = '\0';
}
// Convert uppercase letters to lowercase letters
int i;
for ( i = 0; i < len; i++) {
if (str[i] >= 'A' && str[i] <= 'Z') {
str[i] = str[i] + ('a' - 'A');
}
}
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
printf("%s\n", str);
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
printf("\n");
system ("pause");
return(0);
}
