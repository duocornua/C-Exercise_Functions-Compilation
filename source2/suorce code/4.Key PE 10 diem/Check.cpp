#include <stdio.h>
#include <math.h>

//-----------------------------------------------------------------
/*
// Check nam nhuan | LEAP YEAR
int isLeapYear(int year) {
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0)
				return 1;
			else
				return 0;
		} else
			return 1;
	} else
		return 0;
}

int main() {
	int year;
	printf("Enter a year: ");
	scanf("%d", &year);

	if (isLeapYear(year))
		printf("%d is a leap year.", year);
	else
		printf("%d is not a leap year.", year);
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Check so armstrong
#include <stdio.h>
#include <math.h>

int isArmstrong(int number) {
	int originalNumber, remainder, result = 0, n = 0, power;
	originalNumber = number;

	while (originalNumber != 0) {
		originalNumber /= 10;
		++n;
	}
	originalNumber = number;

	while (originalNumber != 0) {
		remainder = originalNumber % 10;
		power = round(pow(remainder, n));
		result += power;
		originalNumber /= 10;
	}

	if (result == number)
		return 1;
	else
		return 0;
}

int main() {
	int number;
	scanf("%d", &number);

	if (isArmstrong(number))
		printf("%d la so Armstrong.", number);
	else
		printf("%d khong phai la so Armstrong.", number);
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// check so hoan hao perfect
#include<stdio.h>
#include<string.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,sum=0;
	for(i=1; i<n; i++) {
		if(n%i==0) sum+=i;
	}
	if (sum==n)
		printf("perfect");
	else printf("NOT");
	return (0);
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Check name hop le . OUTPUT:1 neu hop le
#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	fgets(str, sizeof(str), stdin);
	int i;
	// check extra space
	for(i = 0 ; i < strlen(str); i++) {
		if(str[i] == ' ' && str[i+1] == ' ') {
			printf("0");
			return 0;
		}
	}
	// check alpha
	int count  = 0;

	for(i = 0; i < strlen(str) ; i++) {
		if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' || str[i] == ' ' ) {
		} else {
			count++;
		}
	}
	if(count-1!=0) printf("0");
	else printf("1");
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Chekc so power of 2
#include<stdio.h>
int main() {
	int remainder,a,n=0,a1;

	scanf("%d", &a);
	a1=a;
	printf("\nOUTPUT:\n");
	while (a !=0 ) {
		remainder=a%2;
		if(remainder!=0) break;
		a/=2;
		n++;
	}
	if(a>1) printf("%d is not power of 2",a1);
	else printf("%d", n);
	return (0);
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Check square number
#include<stdio.h>
#include<math.h>
int SCP(int n) {
	if (sqrt(n)==(int)sqrt(n)) return 1;
	else return 0;
}
int main() {
	int a;
	scanf("%d",&a);
	if(SCP(a)) printf("Square number");
	else printf("Not");
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Check luy thua
#include <stdio.h>
#include <math.h>

int main() {
	int num, base;
	double exponent;

	printf("Nhap so nguyen: ");
	scanf("%d", &num);

	for (base = 2; base <= num; base++) {
		exponent = log(num) / log(base);
		if (exponent == (int) exponent) {
			printf("%d là luy thua cua %d^%d\n", num, base, (int) exponent);
			return 0;
		}
	}
	printf("%d không phai là luy thua cua bat ky so nao\n", num);
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// Kiem tra in ra so lan xuan hien cua cua phan tu trong mang tu nhap
#include<stdio.h>
#define max 100
int main() {
	int i,n;
	scanf("%d",&n);
	int Arr[n];
	for(i=0; i<n; i++) {
		scanf("%d",&Arr[i]);
	}
	int count[max] = {0};
	printf("\nOUTPUT:\n");
	for ( i = 0; i < n; i++) {
		count[Arr[i]]++;
	}
	for ( i = 0; i < max; i++) {
		if (count[i] > 0) {
			printf("%d-%d\n", i, count[i]);
		}
	}
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// check mang tang dan
#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define maxn 1000

int check(int a[], int n) {
	int i;
	for (i = 0; i < n - 1; ++i) {
		if (a[i] > a[i + 1]) return 0;
	}
	return 1;
}

int main() {
	int n, i, j, a[maxn];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	if (check(a, n) == 0) printf("not");
	else printf("Mang tang dan");
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// check mang doi xung
#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define MAXN 1000

int main() {
	int n, i, a[MAXN], check;
	scanf("%d", &n);
	for (i = 0; i < n; ++i) scanf("%d", a + i);
	for (i = 0; i <= n / 2; ++i) {
		if (a[i] != a[n - i - 1]) {
			check = 0;
			break;
		} else check = 1;
	}
	if (check == 1) printf("doi xung");
	else printf("not");
	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// kim tra so nguyen to
bool isPrime(int num) {
	if (num < 2)
		return false;

	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0)
			return false;
	}

	return true;
}

int main() {
	int num;

	printf("Enter a number to check for primality: ");
	scanf("%d", &num);

	if (isPrime(num)) {
		printf("%d is a prime number.\n", num);
	} else {
		printf("%d is not a prime number.\n", num);
	}

	return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// so chinh phuong
bool isPerfectSquare(int num) {
    if (num < 0)
        return false;

    int sqrtNum = 0;
    while (sqrtNum * sqrtNum <= num) {
        if (sqrtNum * sqrtNum == num)
            return true;
        sqrtNum++;
    }

    return false;
}

int main() {
    int num;

    printf("Enter a number to check for being a perfect square: ");
    scanf("%d", &num);

    if (isPerfectSquare(num)) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}
*/
//-----------------------------------------------------------------

//-----------------------------------------------------------------
/*
// chekc xem so co thuoc day Fibonacci hay ko
int isPerfectSquare(int x) {
    int sqrt_x = (int)sqrt(x);
    return sqrt_x * sqrt_x == x;
}

int isFibonacci(int n) {
    if (n < 0) return 0;  // Fibonacci ch? du?c d?nh nghia cho các s? không âm

    // Ki?m tra xem 5 * n^2 + 4 ho?c 5 * n^2 - 4 có ph?i là s? chính phuong
    int val1 = 5 * n * n + 4;
    int val2 = 5 * n * n - 4;

    return isPerfectSquare(val1) || isPerfectSquare(val2);
}

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if (isFibonacci(num)) {
        printf("%d thuoc day Fibonacci.\n", num);
    } else {
        printf("%d khong thuoc day Fibonacci.\n", num);
    }

    return 0;
}
*/
//-----------------------------------------------------------------
