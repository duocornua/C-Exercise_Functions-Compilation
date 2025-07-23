#include <stdio.h>
#include <string.h>

int main(){
    char str[50] = "Ha Noi,Ninh Binh,Nam Dinh,Thanh Hoa";
    char * p;

    //T�ch chu?i con l?n d?u ti�n
    p = strtok(str, ",");
    printf("%s\n", p);

    //T�ch chu?i con t? l?n th? 2 tr? di
    //B?ng c�ch s? d?ng h�m strtok cho t?i khi k?t qu? NULL du?c tr? v?.
    while(p != NULL) {
        //Ch? d?nh d?i s? NULL trong h�m strtok d? ti?p t?c t�ch chu?i ban d?u
        p = strtok(NULL, ",");
        
        if(p != NULL) {
            printf("%s\n", p);
        }
    }
    return 0;
}

