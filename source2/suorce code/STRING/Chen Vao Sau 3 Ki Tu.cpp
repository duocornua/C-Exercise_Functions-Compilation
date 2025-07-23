/*
Gi? s? d? dài chu?i chia h?t cho 3. Thêm ‘-‘ sau m?i 3 kí t?
 Vd: 123abcprf  -> 123-abc-prf
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	char str[100];
	int i, leng, count = 0, j;
	gets(str);
	leng = strlen(str);
	for (i = 0; i < leng; i++, count++)
	{
		if (count == 3)
		{
			for (j = leng + 1; j > i; j--)
			{
				str[j] = str[j - 1];
			}
			str[i] = '-';
			leng++;
			count = -1;
		}
	}
	puts(str);
	return 0;
}
