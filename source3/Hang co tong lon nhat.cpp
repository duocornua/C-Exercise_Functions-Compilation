#include<stdio.h>

int main(){
    int n, m;

    printf("Nhap so hang cua mang: ");
    scanf("%d", &n);

    printf("Nhap so cot cua mang: ");
    scanf("%d", &m);

    int arr[n][m];

    // Nh?p giá tr? cho t?ng ph?n t? trong m?ng
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("Nhap gia tri cho phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Tìm hàng có t?ng các ph?n t? l?n nh?t
    int max_sum = 0;
    int max_row = 0;
    for(int i = 0; i < n; i++) {
        int row_sum = 0;
        for(int j = 0; j < m; j++) {
            row_sum += arr[i][j];
        }
        if(row_sum > max_sum) {
            max_sum = row_sum;
            max_row = i;
        }
    }

    // Ðua ra k?t qu?
    printf("Hang co tong cac phan tu lon nhat la hang thu %d voi tong la %d", max_row, max_sum);

    return 0;
}
