#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
	system("cls");
	char str[200];
	gets(str);
	int i, count = 0, word = 0;
	for (i = 0; str[i]; ++i) {
		if (str[i] != ' ' && word < 3) {
			while (str[i] != ' ') {
				count++;
				++i;
			}
			word++;
		}
	}
	printf("%d", count);
	printf("\n");
	system ("pause");
	return(0);
}
