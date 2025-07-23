#include <stdio.h>

// H�m d? x�a b? k� t? du th?a tr�n input buffer
void clear(void)
{
	while (getchar() != '\n');
}

// H�m d? l?y m?t s? nguy�n trong m?t kho?ng cho tru?c
int getInt(int min, int max)
{
	int value, keeptrying = 1, rc;
	char after;

	do {
		printf("Enter a whole number in the range [%d,%d]: ", min, max);
		rc = scanf("%d%c", &value, &after);
		if (rc == 0) {
			printf("**No input accepted!**\n\n");
			clear();
		}
		else if (after != '\n') {
			printf("**Trailing characters!**\n\n");
			clear();
		}
		else if (value < min || value > max) {
			printf("**Out of range!**\n\n");
		}
		else
			keeptrying = 0;
	} while (keeptrying == 1);
	return value;
}

int main()
{
	int x, y;
	printf("Enter x: ");
	x = getInt(0, 100); // gi? s? gi� tr? t?i thi?u l� 0, t?i da l� 100
	printf("Enter y: ");
	y = getInt(0, 100); // gi? s? gi� tr? t?i thi?u l� 0, t?i da l� 100
	printf("x = %d, y = %d\n", x, y);
	return 0;
}

