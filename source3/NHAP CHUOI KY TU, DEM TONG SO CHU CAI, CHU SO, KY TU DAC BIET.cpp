#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int count_letter = 0, count_digit = 0, count_special = 0;
    int i;

    printf("Nhap chuoi ky tu: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {      // Kiem tra xem ky tu co phai la bao chu cai hay khong
            count_letter++;
        } else if (isdigit(str[i])) {   // Kiem tra xem ky tu co phai la chu so hay khong
            count_digit++;
        } else if (!isspace(str[i]) && !isalnum(str[i])) {   // Kiem tra xem ky tu co phai la ky tu dac biet hay khong
            count_special++;
        }
    }

    printf("So luong bang chu cai: %d\n", count_letter);
    printf("So luong chu so: %d\n", count_digit);
    printf("So luong ky tu dac biet: %d\n", count_special);

    return 0;
}



#include <stdio.h>
#include<string.h>
int main(){
	char c[100];
	gets(c);
	c[strlen(c)]= '\0';
	int a=0,d=0,sc=0;
	for(int i = 0 ; i <strlen(c);i++){
		if((c[i] >= 'a' && c[i] <= 'z')|| (c[i] >= 'A' && c[i] <= 'Z')) a++;
		else if(c[i] >= '0' && c[i] <= '9') d++;
		else sc++;
	}
	printf("%d %d %d ",a,d,sc);
}
