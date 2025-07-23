#include <stdio.h>

// Hàm d? xóa b? ký t? du th?a trên input buffer
void clear(void)
{
	while (getchar() != '\n');
}

// Hàm d? l?y m?t s? nguyên trong m?t kho?ng cho tru?c
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
	x = getInt(0, 100); // gi? s? giá tr? t?i thi?u là 0, t?i da là 100
	printf("Enter y: ");
	y = getInt(0, 100); // gi? s? giá tr? t?i thi?u là 0, t?i da là 100
	printf("x = %d, y = %d\n", x, y);
	return 0;
}

