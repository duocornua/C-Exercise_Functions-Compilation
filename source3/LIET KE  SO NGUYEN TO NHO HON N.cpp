/**
 * Chuong liet ke cac so nguyen to nho hon n.
 * 
 * @author viettuts.vn
 */
#include<stdio.h>
#include<math.h>
 
/**
 * check so nguyen to
 * 
 * @author viettuts.vn
 * @param n: so nguyen duong
 * @return 1: la so nguyen so, 
 *         0: khong la so nguyen to
 */
int isPrimeNumber(int n) {
    // so nguyen n < 2 khong phai la so nguyen to
    if (n < 2) {
        return 0;
    }
    // check so nguyen to khi n >= 2
    int i;
    int squareRoot = (int) sqrt(n);
    for (i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
 
/**
 * Ham main
 */
int main() {
 int i, n;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("Tat ca cac so nguyen to nho hon %d la: \n", n);
    if (n >= 2) {
        printf("%d ", 2);
    }
    for (i = 3; i < n; i+=2) {
        if (isPrimeNumber(i) == 1) {
            printf("%d ", i);
        }
    }
}
