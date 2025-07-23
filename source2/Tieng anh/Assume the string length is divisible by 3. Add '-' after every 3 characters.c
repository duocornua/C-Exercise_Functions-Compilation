//Gi? s? d? dài chu?i chia h?t cho 3. Thêm ‘-‘ sau m?i 3 kí t?
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0'; // lo?i b? ký t? xu?ng dòng cu?i chu?i nh?p vào

    char result[150];
    int len = strlen(s);
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (i % 3 == 0 && i != 0) {
            result[j] = '-';
            j++;
        }
        result[j] = s[i];
        j++;
    }
    result[j] = '\0';
    printf("Result: %s\n", result);
    return 0;
}


