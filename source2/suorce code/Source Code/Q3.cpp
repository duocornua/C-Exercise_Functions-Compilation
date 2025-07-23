#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void inputArray(int a[], int n);
double avgNumber(int a[], int n);
int main(int argc, char *argv[]) {
//=== Do not add new or change statements in the main function.===
system("cls");
printf("\nTEST Q3 (2 marks):\n");
int n,m, a[MAX];
char c;
do {
printf("How many elements do you want to enter into the integer array? [1..100] ");
fflush(stdin);
scanf("%d%c", &n, &c);
} while(n<1 || n>MAX || c != '\n');
inputArray(a,n);
//=== The output will be used to mark your program.===============
printf("\nOUTPUT:\n");
printf("%0.2lf", avgNumber(a,n));
printf("\n");
system ("pause");
return 0;
}
//=== Do not add new or change statements in this function.===
void inputArray(int a[], int n) {
int i;
for(i=0; i<n; i++) {
printf("a[%d] = ", i);
scanf("%d", &a[i]);
}
}
//----------------------------------------------
double avgNumber(int a[], int n) {
//Begin your codes here=====================
double sum = 0.0;
int total = 0;
for(int i=0;i<n;i++)
{
if(a[i] > 0)
{
sum = sum+a[i];
total++;
}
}
if(total >0)
{
sum /=total;
sum-=0.01;
}
return sum;
//End your codes============================
}
