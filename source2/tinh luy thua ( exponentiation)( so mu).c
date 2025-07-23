#include <stdio.h>
#include <math.h>
 
int main()
{
    int a, n;
    printf("Nhap co so a: ");
    scanf("%d", &a);
     
    printf("Nhap so mu n: ");
    scanf("%d", &n);
 
    float kq = pow(a,n);
     
    printf("ket qua %d^%d la: %.6f", a, n, kq);
}
