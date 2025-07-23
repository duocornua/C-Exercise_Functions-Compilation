#include<stdio.h>
#include<string.h>

void reverse_words(char []);

int main(){
    char s[1001];
    printf("Nhap chuoi s: ");
    gets(s);
    reverse_words(s);
    printf("Ket qua: %s", s);
    return 0;
}

void reverse_words(char s[]){
    int length = strlen(s);
    int i, j;
    for (i = 0; i < length; i++) {
        if (s[i] == ' ') {
            continue; 
        }
        j = i;
        while (j < length && s[j] != ' ') {
            j++; 
        }
      
        int start = i, end = j - 1;
        while (start < end) {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
        i = j; 
    }
}
