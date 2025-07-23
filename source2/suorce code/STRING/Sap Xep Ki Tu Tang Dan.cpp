#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int doixung = 1; 
    for (i = 0; i < n/2; i++) {
        if (arr[i] != arr[n-i-1]) {
            doixung = 0; 
            break;
        }
    }
    if (doixung) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}

