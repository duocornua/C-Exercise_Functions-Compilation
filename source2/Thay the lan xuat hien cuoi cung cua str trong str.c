#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], s3[100];

    // prompt the user to enter the three strings
    printf("Enter string s1: ");
    fgets(s1, 100, stdin);
    printf("Enter string s2: ");
    fgets(s2, 100, stdin);
    printf("Enter string s3: ");
    fgets(s3, 100, stdin);

    // remove newline characters from the strings
    s1[strcspn(s1, "\n")] = 0;
    s2[strcspn(s2, "\n")] = 0;
    s3[strcspn(s3, "\n")] = 0;

    // find the last occurrence of s2 in s1 and replace it with s3
    char *pos = strrchr(s1, s2[0]);
    while (pos != NULL && strcmp(pos, s2) != 0) {
        pos = strrchr(s1, s2[0]);
    }
    if (pos != NULL) {
        int index = pos - s1;
        memmove(&s1[index], s3, strlen(s3));
        memmove(&s1[index + strlen(s3)], &s1[index + strlen(s2)], strlen(&s1[index + strlen(s2)]) + 1);
        printf("Result: %s\n", s1);
    } else {
        printf("Error: s2 not found in s1\n");
    }

    return 0;
}

