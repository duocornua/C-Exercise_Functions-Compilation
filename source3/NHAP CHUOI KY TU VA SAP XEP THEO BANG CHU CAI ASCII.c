#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Hàm so sánh d? s? d?ng cho qsort()
int cmpfunc(const void* a, const void* b) {
    return (*(char*)a - *(char*)b);
}

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    gets(str);

    // S?p x?p các ký t? trong chu?i theo th? t? ASCII
    qsort(str, strlen(str), sizeof(char), cmpfunc);

    printf("Chuoi da sap xep: %s\n", str);

    return 0;
}
