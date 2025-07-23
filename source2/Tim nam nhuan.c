#include <stdio.h>
#include <math.h>

#define IS_LEAP_YEAR(year) ((year%400 == 0) || (year%4 == 0 && year%100 != 0))?
int main()
{
    int year;
    printf("\nNhap vao nam: ");
    scanf("%d", &year);
 
    if(IS_LEAP_YEAR(year))
        printf("%d la nam nhuan", year);
    else
        printf("%d khong phai la nam nhuan", year);
    return 0;
}
