#include <stdio.h>

int main() {
    int n;
    printf("Nhap kich thuoc cua hinh vuong: ");
    scanf("%d", &n);

    char c = 'A';

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%c ", c);
            c++;
        }
        c = 'A';
        printf("\n");
    }

    return 0;
}

