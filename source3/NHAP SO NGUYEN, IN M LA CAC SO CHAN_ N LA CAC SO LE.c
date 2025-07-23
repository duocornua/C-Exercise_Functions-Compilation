//Q3.NHAP VAO 5 SO NGUYEN. 
// IN RA M VA N: M LA SO CAC SO CHAN|| N LA SO CAC SO LE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int arr[5];
int i;
for(i = 0; i < 5;i++){
scanf("%d", &arr[i]);
};
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
int count1 =0;
int count2 =0;
for(i = 0; i < 5;i++){
if(arr[i] % 2 == 0) count1++;
else if(arr[i] % 2 != 0) count2++;
};
printf("%d\n%d", count1,count2);
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
printf("\n");
system ("pause");
return(0);
}

