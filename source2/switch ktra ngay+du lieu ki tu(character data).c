#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double d, r, a, b, c, discriminant, x1, x2;
    int n;

    do {
        printf("Menu:\n");
        printf("1- Phuong trinh bac hai.\n");
        printf("2- Van de tien gui ngan hang.\n");
        printf("3- Thoat.\n");
        printf("Vui long chon tu 1-3: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap cac he so a, b, c cua phuong trinh bac hai ax^2 + bx + c = 0:\n");
                scanf("%lf %lf %lf", &a, &b, &c);
                discriminant = b * b - 4 * a * c;

                if (discriminant > 0) {
                    x1 = (-b + sqrt(discriminant)) / (2 * a);
                    x2 = (-b - sqrt(discriminant)) / (2 * a);
                    printf("Cac nghiem la %.2lf va %.2lf\n", x1, x2);
                } else if (discriminant == 0) {
                    x1 = -b / (2 * a);
                    printf("Nghiem la: %.2lf\n", x1);
                } else {
                    printf("Phuong trinh khong co nghiem thuc.\n");
                }
                break;

            case 2:
                printf("Nhap khoan tien gui, ty le hang nam va so nam:\n");
                scanf("%lf %lf %d", &d, &r, &n);

                if (d <= 0) {
                    printf("So tien gui khong hop le. No phai lon hon 0.\n");
                    break;
                }

                if (r <= 0 || r >= 1) {
                    printf("Ty le hang nam khong hop le. No phai nam trong khoang tu 0 den 1.\n");
                    break;
                }

                if (n <= 0) {
                    printf("So nam khong hop le. No phai lon hon 0.\n");
                    break;
                }

                double amount = d * pow((1 + r), n);
                printf("Sau %d nam, tien gui cua ban se tang len %.2lf\n", n, amount);
                break;

            case 3:
                printf("Tam biet!\n");
                break;

            default:
                printf("Tuy chon khong hop le. Vui long chon lai!\n");
        }
    } while (choice != 3);

    return 0;
}

