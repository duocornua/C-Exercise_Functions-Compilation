//Q5.NHAP SO NGUYEN GOM N PHAN TU 
// IN: SAP XEP THEO THU TU TANG DAN: CHAN TRUOC LE SAU
//vd: 6| 6 9 8 2 7 3
//in: 2 6 8 3 7 9  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n, i, j, temp;
scanf("%d", &n);
int array[n];
for (i = 0; i < n; i++) {
scanf("%d", &array[i]);
}
// separate odd and even numbers
int odds[n], evens[n], oddIndex = 0, evenIndex = 0;
for (i = 0; i < n; i++) {
if (array[i] % 2 == 1) {
evens[evenIndex] = array[i];
evenIndex++;
} else {
odds[oddIndex] = array[i];
oddIndex++;
}
}
// sort odd and even numbers separately
for (i = 0; i < evenIndex; i++) {
for (j = i + 1; j < evenIndex; j++) {
if (evens[i] > evens[j]) {
temp = evens[i];
evens[i] = evens[j];
evens[j] = temp;
}
}
}
for (i = 0; i < oddIndex; i++) {
for (j = i + 1; j < oddIndex; j++) {
if (odds[i] > odds[j]) {
temp = odds[i];
odds[i] = odds[j];
odds[j] = temp;
}
}
}
// merge odd and even numbers back into one array
int result[n], resultIndex = 0;
for (i = 0; i < oddIndex; i++) {
result[resultIndex] = odds[i];
resultIndex++;
}
for (i = 0; i < evenIndex; i++) {
result[resultIndex] = evens[i];
resultIndex++;
}
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
// print the sorted array
for (i = 0; i < n; i++) {
printf("%d ", result[i]);
}
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
printf("\n");
system ("pause");
return(0);
}

