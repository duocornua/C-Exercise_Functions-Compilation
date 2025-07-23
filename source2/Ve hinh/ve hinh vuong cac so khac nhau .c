#include <stdio.h>

int main() {
    int n;
    printf("Nhap kich thuoc cua hinh vuong: ");
    scanf("%d", &n);

    int num = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", num);
            num++;
        }
        num = i + 1;
        printf("\n");
    }

    return 0;
}

