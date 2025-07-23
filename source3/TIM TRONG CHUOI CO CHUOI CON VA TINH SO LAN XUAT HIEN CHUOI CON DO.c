#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char sub_str[100];
    int count = 0;

    printf("Nhap vao chuoi: ");
    fgets(str, 100, stdin);

    printf("Nhap vao chuoi con can tim: ");
    fgets(sub_str, 100, stdin);

    // Loai bo ky tu xuong dong o cuoi chuoi
    str[strcspn(str, "\n")] = '\0';
    sub_str[strcspn(sub_str, "\n")] = '\0';

    int len_str = strlen(str);
    int len_sub_str = strlen(sub_str);

    // Duyet qua tung vi tri trong chuoi cha de tim chuoi con
    for (int i = 0; i <= len_str - len_sub_str; i++) {
        int j;

        // So sanh tung ky tu trong chuoi con voi tung ky tu trong chuoi cha
        for (j = 0; j < len_sub_str; j++) {
            if (str[i+j] != sub_str[j]) {
                break;
            }
        }

        // Neu so sanh thanh cong, tang bien dem len 1
        if (j == len_sub_str) {
            count++;
        }
    }

    if (count > 0) {
        printf("Chuoi con '%s' nam trong chuoi '%s', xuat hien %d lan", sub_str, str, count);
    } else {
        printf("Khong tim thay chuoi con '%s' trong chuoi '%s'", sub_str, str);
    }

    return 0;
}

