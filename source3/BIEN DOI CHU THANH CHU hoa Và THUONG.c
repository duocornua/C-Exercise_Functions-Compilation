//#include<stdio.h>
//#include<string.h>
// 
//int main() {
//   char string[100];
//  
//   printf("Nhap chuoi bat ky: ");
//   gets(string);
//  
//   strupr(string);
//   printf("Chuoi chu hoa la: %s", string);
//  
//   return (0);
//} BIEN DOI CHU THUONG THANH HOA

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];

    printf("Nhap chuoi can bien doi: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }

    printf("Chuoi da bien doi: %s", str);

    return 0;
}
// HOA ---> THUONG
