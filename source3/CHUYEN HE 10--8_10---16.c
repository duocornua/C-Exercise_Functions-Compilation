#include <stdio.h>
#include <math.h>

int dectooct(int n) {
    int p = 0;
    int Octnum = 0;
    while (n > 0) {
        Octnum += (n % 8) * pow(10, p);
        p++;
        n /= 8;
    }
    return Octnum;
}

void dectohexa(int n, char Hex[]) {
    int p = 0;
    int hex = 0;
    while (n > 0) {
        hex = n % 16;
        if (hex < 10) {
            Hex[p] = hex + 48;
        } else {
            Hex[p] = hex + 55;
        }
        p++;
        n /= 16;
    }
    Hex[p] = '\0';
    for (int i = p; i >= 0; i--) 
    {
            printf("%c", Hex[i]);
    }
    
}

int main() {
    int n;
    scanf("%d", &n);
    printf("OCT: %d\nHEX: ", dectooct(n));
    char Hex[50];
    dectohexa(n, Hex);
    return 0;
}
