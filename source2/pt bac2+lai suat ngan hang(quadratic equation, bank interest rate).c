#include <stdio.h>

void process_date() {
    int d, m, y;
    printf("Nhap ngay/ thang/ nam: ");
    scanf("%d %d %d", &d, &m, &y);
    
    int is_valid = 1;
    if (y < 0 || m < 1 || m > 12 || d < 1) {
        is_valid = 0;
    } else {
        int days_in_month;
        switch (m) {
            case 2:
                days_in_month = (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) ? 29 : 28;
                break;
                days_in_month = 30;
                break;
            default:
                days_in_month = 31;
        }
        if (d > days_in_month) {
            is_valid = 0;
        }
    }
    
    if (is_valid) {
        printf ("Ngay %d/%d/%d la mot ngay hop le!\n", d, m ,y); 
    } else {
	    printf("Ngay %d/%d/%d la mot ngay khong hop le!\n", d, m ,y);                
    }
}

void process_chars() {
    char c1, c2;
    printf("Nhap 2 ky tu: ");
    scanf(" %c %c", &c1, &c2);
    
    char c;
    for (c = c1; c >= c2; c--) {
        printf("%c: %d, %xh\n", c, c, c);
    }
}

int main() {
    int choice;
    do {
        printf("1- Kiem tra ngay.\n");
        printf("2- Du lieu ky tu.\n");
        printf("3- Thoat.\n");
        printf("Vui long chon tu 1-3: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                process_date();
                break;
            case 2:
                process_chars();
                break;
            case 3:
                printf("Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 3);
    
    return 0;
}

