#include <stdio.h>

int main()
{
    int m, n, i, j;
    
    printf("Nhap vao so m: ");
    scanf("%d", &m);
    
    printf("Nhap vao so n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= m; i++) {
        for(j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

