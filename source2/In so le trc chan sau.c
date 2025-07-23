#include <stdio.h>


int main() {
int n,i,j;
printf("Enter the size of the array: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements of the array:\n", n);
for ( i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
// Sort the odd and even numbers separately using bubble sort
for (i = 0; i < n-1; i++) {
for (j = 0; j < n-i-1; j++) {
if (arr[j] % 2 == 0 && arr[j+1] % 2 != 0) {
// Swap adjacent even and odd numbers
int temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
else if (arr[j] % 2 == arr[j+1] % 2 && arr[j] > arr[j+1]) {
// Swap adjacent numbers if they're of the same parity
int temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
}
// Print the sorted array
printf("Array in ascending order with odd numbers first and even numbers later:\n");
for ( i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}
