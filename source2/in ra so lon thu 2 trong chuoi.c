#include<stdio.h>
int main() {
int n, i;
scanf("%d", &n);
int a[n];
for (i = 0; i < n; i++){
scanf("%d", &a[i]);
}
int max1 = -1e9, max2= -1e9;
for (i = 0; i < n; i++) {
if (a[i] > max1){
max2 = max1;
max1 = a[i];
} else if (a[i] > max2) {
max2 = a[i];
}
}
printf("%d", max2);
}
