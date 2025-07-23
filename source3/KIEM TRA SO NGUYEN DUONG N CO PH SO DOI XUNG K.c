
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n;
    // Nh?p n ( n > 0 )
    do
    {
        printf("\nNhap vao n ( n > 0 ): ");
        scanf("%d", &n);

        if (n <= 0)
        {
            printf("\nGia tri ban nhap vao khong hop le. Xin vui long nhap lai! ");
        }

    } while (n <= 0);

    int SoChuSo = (int)log10((float)n) + 1;
    int SoNghichDao = 0;
    int themang = n;

    printf("\nSo %d co phai la so doi xung hay khong ?\n", n);
    while (themang != 0)
    {
        int ChuSo = themang % 10; // L?y ch? s? ra
        themang /= 10; // B? ch? s? v?a l?y ra
        SoNghichDao += ChuSo * pow(10.0, --SoChuSo);
    }
    /*while(themang != 0)
    {
        SoNghichDao = SoNghichDao * 10 + themang % 10;
        themang /= 10;
    }*/
    if(SoNghichDao == n)
    {
        printf("Dung !");
    }
    else
    {
        printf("Sai !");
    }

    getch();
    return 0;
}
