#include<stdio.h>

int main()
{
    int day, month, year, s, i;

    do {
        printf("\nNhap ngay, thang, nam: ");
        scanf("%d%d%d", &day, &month, &year);

        if (day < 1 || day > 31 || month < 1 || month > 12 || year <= 0) {
            printf("\nNgay thang nam khong hop le, vui long nhap lai!\n");
        }
    } while (day < 1 || day > 31 || month < 1 || month > 12 || year <= 0);

    s = day;
    for(i = 1; i < month; i++)
    {
        switch (i)
        {
            case 4: case 6: case 9 : case 11: s+= 30; break;
            case 2: s += (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 29 : 28;
                break;
            default: s += 31;
        }
    }

    printf("\nNgay thu %d trong nam\n", s);

    return 0;
}
