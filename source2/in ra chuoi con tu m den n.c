#include <stdio.h>

int main() {
    char arr[101];
    int m, n;
    printf("Nhap mang ki tu: ");
    fgets(arr, sizeof(arr), stdin);
    printf("Nhap m, n: ");
    scanf("%d%d", &m, &n);
    printf("Chuoi ki tu con tu vi tri %d den vi tri %d: ", m, n);
    for(int i = m; i <= n && arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }

    return 0;
}

