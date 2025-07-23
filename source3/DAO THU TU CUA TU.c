#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100

int main() {
    char str[1000];
    char* words[MAX_WORDS];
    int n = 0;

    printf("Nhap chuoi: ");
    fgets(str, 1000, stdin);
    str[strlen(str) - 1] = '\0'; // Lo?i b? ký t? '\n' th?a

    // Tach cac tu trong chuoi
    char* token = strtok(str, " ");
    while (token != NULL) {
        words[n++] = token;
        token = strtok(NULL, " ");
    }

    // Dao nguoc thu tu cac tu
    for (int i = 0; i < n/2; i++) {
        char* tmp = words[i];
        words[i] = words[n-i-1];
        words[n-i-1] = tmp;
    }

    // In ra cac tu da duoc dao nguoc thu tu
    printf("Chuoi sau khi dao nguoc thu tu cac tu: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}
