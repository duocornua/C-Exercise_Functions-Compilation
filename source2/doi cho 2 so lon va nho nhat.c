#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void swap(int a[], int n, int pos_max, int pos_min){
int i, j;
for (i = 0; i < n - 1; i++) {
for (j = i + 1; j < n; j++) {
if (i == pos_min && j == pos_max || i == pos_max && j == pos_min) {
int temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
}
}
int main() {
system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n, i;
scanf("%d", &n);
int a[n];
int max_odd = -1e9, min_odd = 1e9;
int pos_max, pos_min;
for (i = 0; i < n; i++) {
scanf("%d", &a[i]);
}
for (i = 0; i < n; i++) {
if (a[i] % 2 == 1 && a[i] > max_odd){
max_odd = a[i];
pos_max = i;
}
if (a[i] % 2 == 1 && a[i] < min_odd){
min_odd = a[i];
pos_min = i;
}
}
swap(a, n, pos_max, pos_min);
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
for (i = 0; i < n; i++) {
printf("%d ", a[i]);
}
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
printf("\n");
system ("pause");
return(0);
}
