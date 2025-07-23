#include <stdio.h>

int main()
{
    int a;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &a);

    switch (a % 2) {
        case 0:
            printf("YES vi %d la so chan\n", a);
            break;
        case 1:
        case -1:
            printf("NO vi %d la so le\n", a);
            break;
    }

    return 0;
}
