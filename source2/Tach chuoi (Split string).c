#include <stdio.h>
#include <string.h>

int main(){
    char str[50] = "Ha Noi,Ninh Binh,Nam Dinh,Thanh Hoa";
    char * p;

    //Tách chu?i con l?n d?u tiên
    p = strtok(str, ",");
    printf("%s\n", p);

    //Tách chu?i con t? l?n th? 2 tr? di
    //B?ng cách s? d?ng hàm strtok cho t?i khi k?t qu? NULL du?c tr? v?.
    while(p != NULL) {
        //Ch? d?nh d?i s? NULL trong hàm strtok d? ti?p t?c tách chu?i ban d?u
        p = strtok(NULL, ",");
        
        if(p != NULL) {
            printf("%s\n", p);
        }
    }
    return 0;
}

