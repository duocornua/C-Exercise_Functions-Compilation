//Gi? s? d? d�i chu?i chia h?t cho 3. Th�m �-� sau m?i 3 k� t?
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0'; // lo?i b? k� t? xu?ng d�ng cu?i chu?i nh?p v�o

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


