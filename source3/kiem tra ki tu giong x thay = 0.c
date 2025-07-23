#include <stdio.h>
// nhap mang n kitu, nhap x, neu x=phan tu trong mang, thay =0

int main() {
	int n;
	int i;
    int arr[n];
    int x;
    scanf("%d",&n);
    // Nhap mang
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Nh?p giá tr? x
    printf("nhap x: ");
    scanf("%d", &x);
    
    // Ki?m tra và gán giá tr? 0 n?u ph?n t? nào b?ng x
    for ( i = 0; i < n; i++) {
        if (arr[i] == x) {
            arr[i] = 0;
        }
    }
    
    // In ra m?ng
    printf("OUT PUT\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
