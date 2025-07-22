#include <stdio.h>
#include <string.h>

int main() {
    char str[101];         // String with max length 100
    char target;
    int found = 0;

    // Read the string (with spaces)
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Read the target character
    scanf("%c", &target);

    // Search for target character and print all positions
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("-1");
    }

    return 0;
}
