//Q10.NHAP VAO 1 SO NGUYEN N
//IN: N LA SO HOAN HAO|| N LA SO KHONG HOAN HAO
//(SO HOAN HAO LA SO BANG TONG CAC UOC CUA NO)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n, originalNum, remainder, result = 0, count = 0;
float power;
scanf("%d", &n);
originalNum = n;
while (originalNum != 0) {
originalNum /= 10;
++count;
}
originalNum = n;
while (originalNum != 0) {
remainder = originalNum % 10;
power = pow(remainder, count);
result += power;
originalNum /= 10;
}
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
if (result == n)
printf("%d is armstrong number", n);
else
printf("%d is not an armstrong number", n);
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
printf("\n");
system ("pause");
return(0);
}

