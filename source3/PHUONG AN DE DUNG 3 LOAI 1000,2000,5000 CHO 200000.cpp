#include<stdio.h>
#include<conio.h>
/*
Bài t?p này th?c ch?t là gi?i h? pt:
x * 1000 + y * 2000 + z * 5000 = 200.000
200 * 1000 = 200000 => x thu?c [0, 200]
100 * 2000 = 200000 => y thu?c [0, 100]
40 * 5000 = 200000 => z thu?c [0, 40]
*/
int main()
{
    int i, j, k;
    for (i = 0; i <= 200; ++i)
        for (j = 0; j <= 100; ++j)
            for (k = 0; k <= 40; ++k)
                if (i * 1000 + j * 2000 + k * 5000 == 200000)
                    printf("\n%d to 1000(VND) -  %d to 2000(VND) - %d to 5000(VND) ", i, j, k);
   
    getch();
    return 0;
}
