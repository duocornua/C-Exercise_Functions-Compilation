#include<stdio.h>
#include<math.h>
#include<ctype.H>
#include<string.h>
int main() {
int n;
scanf("%d",&n);
int a[n];
int i;
for(i = 0; i < n; i++){
scanf("%d",&a[i]);
}
int j;
for(i = 0; i < n - 1; i++){
for(j = i + 1; j < n; j++){
if(a[i] > a[j]){
int tmp = a[i];
a[i] = a[j];
a[j] = tmp;
}
}
}
for(i = 0; i < n; i++){
if(a[i] % 2 == 0){
printf("%d ",a[i]);
}
}
for(i = 0; i < n; i++){
if(a[i] % 2 != 0){
printf("%d ",a[i]);
}
}
}

//sap xep so le trc, so chan sau
#include <stdio.h>
void swap(int *a, int *b); // function prototype
int main() {
int n;
printf("Please enter the size of the array: ");
scanf("%d", &n);
int arr[n];
printf("Please enter %d integers separated by spaces: ", n);
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
// Sort the array in ascending order with odd numbers first, even numbers later
for (int i = 0; i < n - 1; i++) {
for (int j = i+1; j < n; j++) {
if ((arr[i] % 2 != 0 && arr[j] % 2 != 0 && arr[i] > arr[j]) || (arr[i] % 2 != 0 && arr[j] % 2 == 0)) {
swap(&arr[i], &arr[j]);
}
}
}
printf("Sorted array with odd numbers first and even numbers later: ");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}
void swap(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
}
