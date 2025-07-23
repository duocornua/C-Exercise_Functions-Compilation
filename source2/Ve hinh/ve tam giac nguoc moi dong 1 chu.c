#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong chu cai: ");
    scanf("%d", &n);

    char c = 'A';

    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            printf("%c ", c);
            c++;
        }
        c = 'A';
        printf("\n");
    }

    return 0;
}

