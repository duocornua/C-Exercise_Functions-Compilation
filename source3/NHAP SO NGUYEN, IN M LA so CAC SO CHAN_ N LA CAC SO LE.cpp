#include <stdio.h>
#include <stdlib.h>

int main() {
system("cls");

// Nh?p 5 s? nguyên
int arr[5];
printf("Nhap 5 so nguyen:\n");
for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
}

// Ð?m s? lu?ng s? ch?n và s? l?
int count_even = 0, count_odd = 0;
int even_arr[5], odd_arr[5];
int pos_even = 0, pos_odd = 0;
for (int i = 0; i < 5; i++) {
    if (arr[i] % 2 == 0) {
        count_even++;
        even_arr[pos_even++] = arr[i];
    } else {
        count_odd++;
        odd_arr[pos_odd++] = arr[i];
    }
}

// In ra s? lu?ng các s? ch?n và s? l?
printf("So cac so chan: %d\n", count_even);
printf("So cac so le: %d\n", count_odd);

// In ra danh sách các s? ch?n và s? l?
printf("Danh sach cac so chan: ");
for (int i = 0; i < pos_even; i++) {
    printf("%d ", even_arr[i]);
}
printf("\n");

printf("Danh sach cac so le: ");
for (int i = 0; i < pos_odd; i++) {
    printf("%d ", odd_arr[i]);
}
printf("\n");

system("pause");
return 0;
}
