#include <stdio.h>
#include <math.h>

int main() {
int num, originalNum, remainder, n = 0;
float result = 0.0;
printf("Enter an integer: ");
scanf("%d", &num);
originalNum = num;
// Count the number of digits in the given number
while (originalNum != 0) {
originalNum /= 10;
++n;
}
originalNum = num;
// Calculate the sum of each digit raised to the power n
while (originalNum != 0) {
remainder = originalNum % 10;
result += pow(remainder, n);
originalNum /= 10;
}
// Check if the calculated sum is equal to the original number
if ((int)result == num) {
printf("The given number is an Armstrong number.\n");
}
else {
printf("The given number is not an Armstrong number.\n");
}
return 0;
}
