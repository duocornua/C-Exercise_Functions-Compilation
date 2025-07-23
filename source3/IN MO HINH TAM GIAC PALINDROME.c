//Q4.NHAP 1 SO NGUYEN DE XAC DINH 'HANG' CUA TAM GIAC 
// IN RA: MO HINH TAM GIAC PALINDROME
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
#include <stdio.h>
int n;
scanf("%d", &n);
int i,j;
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
for ( i = 0; i < n; i++) {
for ( j = 0; j < n - i - 1; j++) {
printf("");
}
char c = 'A';
for ( j = 0; j <= i; j++) {
printf("%c", c++);
}
c -= 2;
for ( j = 0; j < i; j++) {
printf("%c", c--);
}
printf("\n");
}
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
printf("\n");
system ("pause");
return(0);
}

